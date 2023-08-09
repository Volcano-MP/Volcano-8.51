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


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::ShowDeadZoneTab()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "ShowDeadZoneTab");

	Params::UGamepadMappingInfo_v3_C_ShowDeadZoneTab_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::HideDeadZoneTab(bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "HideDeadZoneTab");

	Params::UGamepadMappingInfo_v3_C_HideDeadZoneTab_Params Parms;

	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     NextWidget_Local                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UGamepadMappingInfo_v3_C::DoCustomNavigation_0(enum class EUINavigation Navigation, class UWidget* NextWidget_Local, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_2, bool CallFunc_HasAnyUserFocus_ReturnValue_3)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "DoCustomNavigation_0");

	Params::UGamepadMappingInfo_v3_C_DoCustomNavigation_0_Params Parms;

	Parms.Navigation = Navigation;
	Parms.NextWidget_Local = NextWidget_Local;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_1 = CallFunc_HasAnyUserFocus_ReturnValue_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_2 = CallFunc_HasAnyUserFocus_ReturnValue_2;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_3 = CallFunc_HasAnyUserFocus_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::GamepadMappingInfoNavLeft()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GamepadMappingInfoNavLeft");

	Params::UGamepadMappingInfo_v3_C_GamepadMappingInfoNavLeft_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::ShowEditModeTab()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "ShowEditModeTab");

	Params::UGamepadMappingInfo_v3_C_ShowEditModeTab_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SelectTabByID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::HideEditModeTab(bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "HideEditModeTab");

	Params::UGamepadMappingInfo_v3_C_HideEditModeTab_Params Parms;

	Parms.CallFunc_SelectTabByID_ReturnValue = CallFunc_SelectTabByID_ReturnValue;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UGamepadMappingInfo_v3_C::On_Image_LightBox_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "On_Image_LightBox_MouseButtonDown_0");

	Params::UGamepadMappingInfo_v3_C_On_Image_LightBox_MouseButtonDown_0_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ActionName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DescText                                                         (Parm, OutParm)
// enum class EFortInputActionGroup   InputActionGroup_Local                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DescText_Local                                                   (Edit, BlueprintVisible)
// class FName                        ActionName_Local                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PresetName_Local                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Key_Local                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCustomGamepadInputPresetName_ReturnValue             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetScreenLabel_ReturnValue                              ()
// class FName                        CallFunc_GetActionForKey_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetActionForKey_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActionForKey_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::GetCustomButtonDataForKey(const struct FKey& Key, class FName* ActionName, class FText* DescText, enum class EFortInputActionGroup InputActionGroup_Local, class FText DescText_Local, class FName ActionName_Local, class FName PresetName_Local, const struct FKey& Key_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, class FText CallFunc_GetScreenLabel_ReturnValue, class FName CallFunc_GetActionForKey_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName CallFunc_GetActionForKey_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, class FName CallFunc_GetActionForKey_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GetCustomButtonDataForKey");

	Params::UGamepadMappingInfo_v3_C_GetCustomButtonDataForKey_Params Parms;

	Parms.Key = Key;
	Parms.InputActionGroup_Local = InputActionGroup_Local;
	Parms.DescText_Local = DescText_Local;
	Parms.ActionName_Local = ActionName_Local;
	Parms.PresetName_Local = PresetName_Local;
	Parms.Key_Local = Key_Local;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCustomGamepadInputPresetName_ReturnValue = CallFunc_GetCustomGamepadInputPresetName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetScreenLabel_ReturnValue = CallFunc_GetScreenLabel_ReturnValue;
	Parms.CallFunc_GetActionForKey_ReturnValue = CallFunc_GetActionForKey_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetActionForKey_ReturnValue_1 = CallFunc_GetActionForKey_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.CallFunc_GetActionForKey_ReturnValue_2 = CallFunc_GetActionForKey_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionName != nullptr)
		*ActionName = Parms.ActionName;

	if (DescText != nullptr)
		*DescText = Parms.DescText;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::SetTextForMode(enum class EFortInputActionGroup Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "SetTextForMode");

	Params::UGamepadMappingInfo_v3_C_SetTextForMode_Params Parms;

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::SetButtonTextLabelsFromTextArray(TArray<class FText>& Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UCommonTextBlock* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "SetButtonTextLabelsFromTextArray");

	Params::UGamepadMappingInfo_v3_C_SetButtonTextLabelsFromTextArray_Params Parms;

	Parms.Array = Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBuildingEditResetLabel_ReturnValue                   ()
// class FText                        CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue         ()
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLookLabel_ReturnValue                                ()
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                ()
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               ()
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      ()
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue               ()
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     ()
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue           ()
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       ()
// int32                              CallFunc_Array_Add_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue          ()
// class FText                        CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue           ()
// int32                              CallFunc_Array_Add_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            ()
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 ()
// int32                              CallFunc_Array_Add_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue   ()
// class FText                        CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue_1 ()
// int32                              CallFunc_Array_Add_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_17             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     ()
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue_1                   ()
// int32                              CallFunc_Array_Add_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_18             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_19             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    ()
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1                  ()
// int32                              CallFunc_Array_Add_ReturnValue_23                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_24                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_20             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_21             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          ()
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue_1                        ()
// int32                              CallFunc_Array_Add_ReturnValue_25                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_26                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_22             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_23             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              ()
// class FText                        CallFunc_GetSprintLabel_ReturnValue_1                            ()
// int32                              CallFunc_Array_Add_ReturnValue_27                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_28                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_24             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_25             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                ()
// class FText                        CallFunc_GetMoveLabel_ReturnValue_1                              ()
// int32                              CallFunc_Array_Add_ReturnValue_29                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_30                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_26             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_27             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue           ()
// class FText                        CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue          ()
// int32                              CallFunc_Array_Add_ReturnValue_31                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_32                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// class FText                        Temp_text_Variable_5                                             (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue_33                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_34                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue_35                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTW_BuilderProBuild(TArray<class FText>& ButtonTextLabels, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_1, class FText CallFunc_GetBuildingEditResetLabel_ReturnValue, class FText CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_3, class FText CallFunc_GetLookLabel_ReturnValue, class FText CallFunc_GetJumpLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_5, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_7, class FText CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_9, class FText CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_11, class FText CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue, class FText CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_13, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_15, class FText CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue, class FText CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_19, int32 CallFunc_Array_Add_ReturnValue_20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_17, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_21, int32 CallFunc_Array_Add_ReturnValue_22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_19, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_23, int32 CallFunc_Array_Add_ReturnValue_24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_21, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_25, int32 CallFunc_Array_Add_ReturnValue_26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_23, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_27, int32 CallFunc_Array_Add_ReturnValue_28, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_25, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_29, int32 CallFunc_Array_Add_ReturnValue_30, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_27, class FText CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue, class FText CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_31, int32 CallFunc_Array_Add_ReturnValue_32, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, int32 CallFunc_Array_Add_ReturnValue_33, int32 CallFunc_Array_Add_ReturnValue_34, class FText Temp_text_Variable_6, int32 CallFunc_Array_Add_ReturnValue_35)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonTextForSTW_BuilderProBuild");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params Parms;

	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_1;
	Parms.CallFunc_GetBuildingEditResetLabel_ReturnValue = CallFunc_GetBuildingEditResetLabel_ReturnValue;
	Parms.CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue = CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_3;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_5;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_7;
	Parms.CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue = CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;
	Parms.CallFunc_Array_Add_ReturnValue_12 = CallFunc_Array_Add_ReturnValue_12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_9;
	Parms.CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_13 = CallFunc_Array_Add_ReturnValue_13;
	Parms.CallFunc_Array_Add_ReturnValue_14 = CallFunc_Array_Add_ReturnValue_14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_11;
	Parms.CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_15 = CallFunc_Array_Add_ReturnValue_15;
	Parms.CallFunc_Array_Add_ReturnValue_16 = CallFunc_Array_Add_ReturnValue_16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_13;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_17 = CallFunc_Array_Add_ReturnValue_17;
	Parms.CallFunc_Array_Add_ReturnValue_18 = CallFunc_Array_Add_ReturnValue_18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_15;
	Parms.CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue = CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue;
	Parms.CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue_1 = CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_19 = CallFunc_Array_Add_ReturnValue_19;
	Parms.CallFunc_Array_Add_ReturnValue_20 = CallFunc_Array_Add_ReturnValue_20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_17;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue_1 = CallFunc_GetToggleInventoryLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_21 = CallFunc_Array_Add_ReturnValue_21;
	Parms.CallFunc_Array_Add_ReturnValue_22 = CallFunc_Array_Add_ReturnValue_22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_19;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_23 = CallFunc_Array_Add_ReturnValue_23;
	Parms.CallFunc_Array_Add_ReturnValue_24 = CallFunc_Array_Add_ReturnValue_24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_21;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue_1 = CallFunc_GetAutoSprintLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_25 = CallFunc_Array_Add_ReturnValue_25;
	Parms.CallFunc_Array_Add_ReturnValue_26 = CallFunc_Array_Add_ReturnValue_26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_23;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue_1 = CallFunc_GetSprintLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_27 = CallFunc_Array_Add_ReturnValue_27;
	Parms.CallFunc_Array_Add_ReturnValue_28 = CallFunc_Array_Add_ReturnValue_28;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_25;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue_1 = CallFunc_GetMoveLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_29 = CallFunc_Array_Add_ReturnValue_29;
	Parms.CallFunc_Array_Add_ReturnValue_30 = CallFunc_Array_Add_ReturnValue_30;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_26 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_27 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_27;
	Parms.CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue = CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_31 = CallFunc_Array_Add_ReturnValue_31;
	Parms.CallFunc_Array_Add_ReturnValue_32 = CallFunc_Array_Add_ReturnValue_32;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_Array_Add_ReturnValue_33 = CallFunc_Array_Add_ReturnValue_33;
	Parms.CallFunc_Array_Add_ReturnValue_34 = CallFunc_Array_Add_ReturnValue_34;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_Array_Add_ReturnValue_35 = CallFunc_Array_Add_ReturnValue_35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (Parm, OutParm, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::GetControllerImage(TSoftObjectPtr<class UTexture2D>* Texture, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GetControllerImage");

	Params::UGamepadMappingInfo_v3_C_GetControllerImage_Params Parms;

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()

void UGamepadMappingInfo_v3_C::ClearAllComboTextLines(class FText CallFunc_MakeLiteralText_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "ClearAllComboTextLines");

	Params::UGamepadMappingInfo_v3_C_ClearAllComboTextLines_Params Parms;

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility2Label_ReturnValue                            ()
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility1Label_ReturnValue                            ()
// class FText                        CallFunc_GetAbility3Label_ReturnValue                            ()
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue              ()
// class FText                        CallFunc_GetLookLabel_ReturnValue                                ()
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                ()
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               ()
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDeployHoverboardLabel_ReturnValue                    ()
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      ()
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCraftAmmoHoldLabel_ReturnValue                       ()
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     ()
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetReloadTapLabel_ReturnValue                           ()
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       ()
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNextWeaponTapLabel_ReturnValue                       ()
// class FText                        CallFunc_GetAttackConfirmLabel_ReturnValue                       ()
// int32                              CallFunc_Array_Add_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            ()
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 ()
// int32                              CallFunc_Array_Add_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_17             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_18             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget2Label_ReturnValue                             ()
// class FText                        CallFunc_GetGadget2Label_ReturnValue_1                           ()
// int32                              CallFunc_Array_Add_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_19             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_20             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGadget1Label_ReturnValue                             ()
// class FText                        CallFunc_GetGadget1Label_ReturnValue_1                           ()
// int32                              CallFunc_Array_Add_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_21             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_22             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     ()
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue_1                   ()
// int32                              CallFunc_Array_Add_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_23             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_24             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    ()
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1                  ()
// int32                              CallFunc_Array_Add_ReturnValue_23                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_24                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_25             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_26             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          ()
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue_1                        ()
// int32                              CallFunc_Array_Add_ReturnValue_25                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_26                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_27             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_28             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              ()
// class FText                        CallFunc_GetSprintLabel_ReturnValue_1                            ()
// int32                              CallFunc_Array_Add_ReturnValue_27                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_28                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_29             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_30             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                ()
// class FText                        CallFunc_GetMoveLabel_ReturnValue_1                              ()
// int32                              CallFunc_Array_Add_ReturnValue_29                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_30                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_31             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_32             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPreviousWeaponTapLabel_ReturnValue                   ()
// class FText                        CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue             ()
// int32                              CallFunc_Array_Add_ReturnValue_31                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_32                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue_33                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_34                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue_35                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTWCombatProCombat(TArray<class FText>& ButtonTextLabels, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class FText CallFunc_GetAbility2Label_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_1, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_2, class FText CallFunc_GetAbility1Label_ReturnValue, class FText CallFunc_GetAbility3Label_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_3, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_4, class FText CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue, class FText CallFunc_GetLookLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_5, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_6, class FText CallFunc_GetJumpLabel_ReturnValue, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_7, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_8, class FText CallFunc_GetDeployHoverboardLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_9, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_10, class FText CallFunc_GetCraftAmmoHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_11, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_12, class FText CallFunc_GetReloadTapLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_13, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_14, class FText CallFunc_GetNextWeaponTapLabel_ReturnValue, class FText CallFunc_GetAttackConfirmLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_15, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_16, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_17, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_18, class FText CallFunc_GetGadget2Label_ReturnValue, class FText CallFunc_GetGadget2Label_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_17, int32 CallFunc_Array_Add_ReturnValue_18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_19, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_20, class FText CallFunc_GetGadget1Label_ReturnValue, class FText CallFunc_GetGadget1Label_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_19, int32 CallFunc_Array_Add_ReturnValue_20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_21, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_22, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_21, int32 CallFunc_Array_Add_ReturnValue_22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_23, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_24, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_23, int32 CallFunc_Array_Add_ReturnValue_24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_25, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_26, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_25, int32 CallFunc_Array_Add_ReturnValue_26, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_27, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_28, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_27, int32 CallFunc_Array_Add_ReturnValue_28, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_29, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_30, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_29, int32 CallFunc_Array_Add_ReturnValue_30, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_31, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_32, class FText CallFunc_GetPreviousWeaponTapLabel_ReturnValue, class FText CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_31, int32 CallFunc_Array_Add_ReturnValue_32, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_Array_Add_ReturnValue_33, int32 CallFunc_Array_Add_ReturnValue_34, class FText Temp_text_Variable_1, int32 CallFunc_Array_Add_ReturnValue_35)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonTextForSTWCombatProCombat");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProCombat_Params Parms;

	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetAbility2Label_ReturnValue = CallFunc_GetAbility2Label_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_1;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_2;
	Parms.CallFunc_GetAbility1Label_ReturnValue = CallFunc_GetAbility1Label_ReturnValue;
	Parms.CallFunc_GetAbility3Label_ReturnValue = CallFunc_GetAbility3Label_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_3;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_4;
	Parms.CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue = CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_5;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_6;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_7;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_8;
	Parms.CallFunc_GetDeployHoverboardLabel_ReturnValue = CallFunc_GetDeployHoverboardLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_9;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_10;
	Parms.CallFunc_GetCraftAmmoHoldLabel_ReturnValue = CallFunc_GetCraftAmmoHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_11;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_12;
	Parms.CallFunc_GetReloadTapLabel_ReturnValue = CallFunc_GetReloadTapLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;
	Parms.CallFunc_Array_Add_ReturnValue_12 = CallFunc_Array_Add_ReturnValue_12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_13;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_14;
	Parms.CallFunc_GetNextWeaponTapLabel_ReturnValue = CallFunc_GetNextWeaponTapLabel_ReturnValue;
	Parms.CallFunc_GetAttackConfirmLabel_ReturnValue = CallFunc_GetAttackConfirmLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_13 = CallFunc_Array_Add_ReturnValue_13;
	Parms.CallFunc_Array_Add_ReturnValue_14 = CallFunc_Array_Add_ReturnValue_14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_15;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_16;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_15 = CallFunc_Array_Add_ReturnValue_15;
	Parms.CallFunc_Array_Add_ReturnValue_16 = CallFunc_Array_Add_ReturnValue_16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_17;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_18;
	Parms.CallFunc_GetGadget2Label_ReturnValue = CallFunc_GetGadget2Label_ReturnValue;
	Parms.CallFunc_GetGadget2Label_ReturnValue_1 = CallFunc_GetGadget2Label_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_17 = CallFunc_Array_Add_ReturnValue_17;
	Parms.CallFunc_Array_Add_ReturnValue_18 = CallFunc_Array_Add_ReturnValue_18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_19;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_20;
	Parms.CallFunc_GetGadget1Label_ReturnValue = CallFunc_GetGadget1Label_ReturnValue;
	Parms.CallFunc_GetGadget1Label_ReturnValue_1 = CallFunc_GetGadget1Label_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_19 = CallFunc_Array_Add_ReturnValue_19;
	Parms.CallFunc_Array_Add_ReturnValue_20 = CallFunc_Array_Add_ReturnValue_20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_21;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_22;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue_1 = CallFunc_GetToggleInventoryLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_21 = CallFunc_Array_Add_ReturnValue_21;
	Parms.CallFunc_Array_Add_ReturnValue_22 = CallFunc_Array_Add_ReturnValue_22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_23;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_24;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_23 = CallFunc_Array_Add_ReturnValue_23;
	Parms.CallFunc_Array_Add_ReturnValue_24 = CallFunc_Array_Add_ReturnValue_24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_25;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_26 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_26;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue_1 = CallFunc_GetAutoSprintLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_25 = CallFunc_Array_Add_ReturnValue_25;
	Parms.CallFunc_Array_Add_ReturnValue_26 = CallFunc_Array_Add_ReturnValue_26;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_27 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_27;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_28 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_28;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue_1 = CallFunc_GetSprintLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_27 = CallFunc_Array_Add_ReturnValue_27;
	Parms.CallFunc_Array_Add_ReturnValue_28 = CallFunc_Array_Add_ReturnValue_28;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_29 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_29;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_30 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_30;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue_1 = CallFunc_GetMoveLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_29 = CallFunc_Array_Add_ReturnValue_29;
	Parms.CallFunc_Array_Add_ReturnValue_30 = CallFunc_Array_Add_ReturnValue_30;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_31 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_31;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_32 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_32;
	Parms.CallFunc_GetPreviousWeaponTapLabel_ReturnValue = CallFunc_GetPreviousWeaponTapLabel_ReturnValue;
	Parms.CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue = CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_31 = CallFunc_Array_Add_ReturnValue_31;
	Parms.CallFunc_Array_Add_ReturnValue_32 = CallFunc_Array_Add_ReturnValue_32;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Array_Add_ReturnValue_33 = CallFunc_Array_Add_ReturnValue_33;
	Parms.CallFunc_Array_Add_ReturnValue_34 = CallFunc_Array_Add_ReturnValue_34;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Array_Add_ReturnValue_35 = CallFunc_Array_Add_ReturnValue_35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::SetTextFieldVisibilityForExtraLine(class UTextBlock* TextWidget, bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "SetTextFieldVisibilityForExtraLine");

	Params::UGamepadMappingInfo_v3_C_SetTextFieldVisibilityForExtraLine_Params Parms;

	Parms.TextWidget = TextWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        DesiredSlateVisibility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(class UTextBlock* TextWidget, enum class ESlateVisibility* DesiredSlateVisibility, bool Temp_bool_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "GetDesiredSlateVisibilityForAbilityChordFromTextDisplay");

	Params::UGamepadMappingInfo_v3_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params Parms;

	Parms.TextWidget = TextWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (DesiredSlateVisibility != nullptr)
		*DesiredSlateVisibility = Parms.DesiredSlateVisibility;

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ButtonTextLabels                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// class FText                        Temp_text_Variable_5                                             (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetBuildingEditResetLabel_ReturnValue                   ()
// class FText                        CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue         ()
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLookLabel_ReturnValue                                ()
// class FText                        CallFunc_GetJumpLabel_ReturnValue                                ()
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue               ()
// class FText                        CallFunc_GetSwitchQuickbarLabel_ReturnValue                      ()
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTrapInventoryHoldLabel_ReturnValue                   ()
// class FText                        CallFunc_GetInteractTapHoldLabel_ReturnValue                     ()
// int32                              CallFunc_Array_Add_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPickTrapTapHoldLabel_ReturnValue                     ()
// class FText                        CallFunc_GetHarvestWeaponLabel_ReturnValue                       ()
// int32                              CallFunc_Array_Add_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNextBuildingPieceLabel_ReturnValue                   ()
// class FText                        CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue          ()
// int32                              CallFunc_Array_Add_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameMenuLabel_ReturnValue                            ()
// class FText                        CallFunc_GetToggleFullScreenMapLabel_ReturnValue                 ()
// int32                              CallFunc_Array_Add_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_14             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_15             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue                     ()
// class FText                        CallFunc_GetToggleInventoryLabel_ReturnValue_1                   ()
// int32                              CallFunc_Array_Add_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_16             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_17             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue                    ()
// class FText                        CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1                  ()
// int32                              CallFunc_Array_Add_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_23                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_18             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_19             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue                          ()
// class FText                        CallFunc_GetAutoSprintLabel_ReturnValue_1                        ()
// int32                              CallFunc_Array_Add_ReturnValue_24                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_25                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_20             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_21             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSprintLabel_ReturnValue                              ()
// class FText                        CallFunc_GetSprintLabel_ReturnValue_1                            ()
// int32                              CallFunc_Array_Add_ReturnValue_26                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_27                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_22             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_23             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMoveLabel_ReturnValue                                ()
// class FText                        CallFunc_GetMoveLabel_ReturnValue_1                              ()
// int32                              CallFunc_Array_Add_ReturnValue_28                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_29                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_24             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_25             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPreviousBuildingPieceLabel_ReturnValue               ()
// class FText                        CallFunc_GetChangeMaterialLabel_ReturnValue                      ()
// int32                              CallFunc_Array_Add_ReturnValue_30                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_31                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (ConstParm)
// class FText                        Temp_text_Variable_7                                             (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue_32                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_33                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_8                                             (ConstParm)
// int32                              CallFunc_Array_Add_ReturnValue_34                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// int32                              CallFunc_Array_Add_ReturnValue_35                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonTextForSTWCombatProBuild(TArray<class FText>& ButtonTextLabels, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_1, class FText CallFunc_GetBuildingEditResetLabel_ReturnValue, class FText CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_2, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_3, class FText CallFunc_GetLookLabel_ReturnValue, class FText CallFunc_GetJumpLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_4, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_5, class FText CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue, class FText CallFunc_GetSwitchQuickbarLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_6, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_7, class FText CallFunc_GetTrapInventoryHoldLabel_ReturnValue, class FText CallFunc_GetInteractTapHoldLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_8, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_9, class FText CallFunc_GetPickTrapTapHoldLabel_ReturnValue, class FText CallFunc_GetHarvestWeaponLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_15, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_10, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_11, class FText CallFunc_GetNextBuildingPieceLabel_ReturnValue, class FText CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_16, int32 CallFunc_Array_Add_ReturnValue_17, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_12, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_13, class FText CallFunc_GetGameMenuLabel_ReturnValue, class FText CallFunc_GetToggleFullScreenMapLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_18, int32 CallFunc_Array_Add_ReturnValue_19, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_14, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_15, class FText CallFunc_GetToggleInventoryLabel_ReturnValue, class FText CallFunc_GetToggleInventoryLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_20, int32 CallFunc_Array_Add_ReturnValue_21, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_16, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_17, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue, class FText CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_22, int32 CallFunc_Array_Add_ReturnValue_23, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_18, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_19, class FText CallFunc_GetAutoSprintLabel_ReturnValue, class FText CallFunc_GetAutoSprintLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_24, int32 CallFunc_Array_Add_ReturnValue_25, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_20, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_21, class FText CallFunc_GetSprintLabel_ReturnValue, class FText CallFunc_GetSprintLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_26, int32 CallFunc_Array_Add_ReturnValue_27, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_22, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_23, class FText CallFunc_GetMoveLabel_ReturnValue, class FText CallFunc_GetMoveLabel_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_28, int32 CallFunc_Array_Add_ReturnValue_29, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_24, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_25, class FText CallFunc_GetPreviousBuildingPieceLabel_ReturnValue, class FText CallFunc_GetChangeMaterialLabel_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_30, int32 CallFunc_Array_Add_ReturnValue_31, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, int32 CallFunc_Array_Add_ReturnValue_32, int32 CallFunc_Array_Add_ReturnValue_33, class FText Temp_text_Variable_8, int32 CallFunc_Array_Add_ReturnValue_34, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_35)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonTextForSTWCombatProBuild");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProBuild_Params Parms;

	Parms.ButtonTextLabels = ButtonTextLabels;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_1;
	Parms.CallFunc_GetBuildingEditResetLabel_ReturnValue = CallFunc_GetBuildingEditResetLabel_ReturnValue;
	Parms.CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue = CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_2;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_3;
	Parms.CallFunc_GetLookLabel_ReturnValue = CallFunc_GetLookLabel_ReturnValue;
	Parms.CallFunc_GetJumpLabel_ReturnValue = CallFunc_GetJumpLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_4 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_4;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_5 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_5;
	Parms.CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue = CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue;
	Parms.CallFunc_GetSwitchQuickbarLabel_ReturnValue = CallFunc_GetSwitchQuickbarLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_6 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_6;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_7 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_7;
	Parms.CallFunc_GetTrapInventoryHoldLabel_ReturnValue = CallFunc_GetTrapInventoryHoldLabel_ReturnValue;
	Parms.CallFunc_GetInteractTapHoldLabel_ReturnValue = CallFunc_GetInteractTapHoldLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_12 = CallFunc_Array_Add_ReturnValue_12;
	Parms.CallFunc_Array_Add_ReturnValue_13 = CallFunc_Array_Add_ReturnValue_13;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_8 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_8;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_9 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_9;
	Parms.CallFunc_GetPickTrapTapHoldLabel_ReturnValue = CallFunc_GetPickTrapTapHoldLabel_ReturnValue;
	Parms.CallFunc_GetHarvestWeaponLabel_ReturnValue = CallFunc_GetHarvestWeaponLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_14 = CallFunc_Array_Add_ReturnValue_14;
	Parms.CallFunc_Array_Add_ReturnValue_15 = CallFunc_Array_Add_ReturnValue_15;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_10 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_10;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_11 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_11;
	Parms.CallFunc_GetNextBuildingPieceLabel_ReturnValue = CallFunc_GetNextBuildingPieceLabel_ReturnValue;
	Parms.CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue = CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_16 = CallFunc_Array_Add_ReturnValue_16;
	Parms.CallFunc_Array_Add_ReturnValue_17 = CallFunc_Array_Add_ReturnValue_17;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_12 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_12;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_13 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_13;
	Parms.CallFunc_GetGameMenuLabel_ReturnValue = CallFunc_GetGameMenuLabel_ReturnValue;
	Parms.CallFunc_GetToggleFullScreenMapLabel_ReturnValue = CallFunc_GetToggleFullScreenMapLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_18 = CallFunc_Array_Add_ReturnValue_18;
	Parms.CallFunc_Array_Add_ReturnValue_19 = CallFunc_Array_Add_ReturnValue_19;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_14 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_14;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_15 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_15;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue = CallFunc_GetToggleInventoryLabel_ReturnValue;
	Parms.CallFunc_GetToggleInventoryLabel_ReturnValue_1 = CallFunc_GetToggleInventoryLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_20 = CallFunc_Array_Add_ReturnValue_20;
	Parms.CallFunc_Array_Add_ReturnValue_21 = CallFunc_Array_Add_ReturnValue_21;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_16 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_16;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_17 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_17;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;
	Parms.CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1 = CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_22 = CallFunc_Array_Add_ReturnValue_22;
	Parms.CallFunc_Array_Add_ReturnValue_23 = CallFunc_Array_Add_ReturnValue_23;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_18 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_18;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_19 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_19;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue = CallFunc_GetAutoSprintLabel_ReturnValue;
	Parms.CallFunc_GetAutoSprintLabel_ReturnValue_1 = CallFunc_GetAutoSprintLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_24 = CallFunc_Array_Add_ReturnValue_24;
	Parms.CallFunc_Array_Add_ReturnValue_25 = CallFunc_Array_Add_ReturnValue_25;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_20 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_20;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_21 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_21;
	Parms.CallFunc_GetSprintLabel_ReturnValue = CallFunc_GetSprintLabel_ReturnValue;
	Parms.CallFunc_GetSprintLabel_ReturnValue_1 = CallFunc_GetSprintLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_26 = CallFunc_Array_Add_ReturnValue_26;
	Parms.CallFunc_Array_Add_ReturnValue_27 = CallFunc_Array_Add_ReturnValue_27;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_22 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_22;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_23 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_23;
	Parms.CallFunc_GetMoveLabel_ReturnValue = CallFunc_GetMoveLabel_ReturnValue;
	Parms.CallFunc_GetMoveLabel_ReturnValue_1 = CallFunc_GetMoveLabel_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_28 = CallFunc_Array_Add_ReturnValue_28;
	Parms.CallFunc_Array_Add_ReturnValue_29 = CallFunc_Array_Add_ReturnValue_29;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_24 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_24;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_25 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_25;
	Parms.CallFunc_GetPreviousBuildingPieceLabel_ReturnValue = CallFunc_GetPreviousBuildingPieceLabel_ReturnValue;
	Parms.CallFunc_GetChangeMaterialLabel_ReturnValue = CallFunc_GetChangeMaterialLabel_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_30 = CallFunc_Array_Add_ReturnValue_30;
	Parms.CallFunc_Array_Add_ReturnValue_31 = CallFunc_Array_Add_ReturnValue_31;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.CallFunc_Array_Add_ReturnValue_32 = CallFunc_Array_Add_ReturnValue_32;
	Parms.CallFunc_Array_Add_ReturnValue_33 = CallFunc_Array_Add_ReturnValue_33;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.CallFunc_Array_Add_ReturnValue_34 = CallFunc_Array_Add_ReturnValue_34;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_35 = CallFunc_Array_Add_ReturnValue_35;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonTextBlock*>    K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class UCommonTextBlock*>    K2Node_MakeArray_Array_1                                         (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonTextBlock*>    K2Node_MakeArray_Array_2                                         (ConstParm, ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::InitializeListOfButtonLabelTextWidgets(int32 CallFunc_Array_Add_ReturnValue, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13, int32 CallFunc_Array_Add_ReturnValue_14, int32 CallFunc_Array_Add_ReturnValue_15, int32 CallFunc_Array_Add_ReturnValue_16, int32 CallFunc_Array_Add_ReturnValue_17, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array_2)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "InitializeListOfButtonLabelTextWidgets");

	Params::UGamepadMappingInfo_v3_C_InitializeListOfButtonLabelTextWidgets_Params Parms;

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue_7 = CallFunc_Array_Add_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_8 = CallFunc_Array_Add_ReturnValue_8;
	Parms.CallFunc_Array_Add_ReturnValue_9 = CallFunc_Array_Add_ReturnValue_9;
	Parms.CallFunc_Array_Add_ReturnValue_10 = CallFunc_Array_Add_ReturnValue_10;
	Parms.CallFunc_Array_Add_ReturnValue_11 = CallFunc_Array_Add_ReturnValue_11;
	Parms.CallFunc_Array_Add_ReturnValue_12 = CallFunc_Array_Add_ReturnValue_12;
	Parms.CallFunc_Array_Add_ReturnValue_13 = CallFunc_Array_Add_ReturnValue_13;
	Parms.CallFunc_Array_Add_ReturnValue_14 = CallFunc_Array_Add_ReturnValue_14;
	Parms.CallFunc_Array_Add_ReturnValue_15 = CallFunc_Array_Add_ReturnValue_15;
	Parms.CallFunc_Array_Add_ReturnValue_16 = CallFunc_Array_Add_ReturnValue_16;
	Parms.CallFunc_Array_Add_ReturnValue_17 = CallFunc_Array_Add_ReturnValue_17;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Handle Config Changed Hide or Show Unused Text Lines");

	Params::UGamepadMappingInfo_v3_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_1 = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_2 = CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        Temp_text_Variable_7                                             ()
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          ()
// class FText                        Temp_text_Variable_8                                             ()
// class FText                        Temp_text_Variable_9                                             ()
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          ()
// class FText                        Temp_text_Variable_10                                            ()
// class FText                        Temp_text_Variable_11                                            ()
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_5                                          ()
// class FText                        Temp_text_Variable_12                                            ()
// class FText                        Temp_text_Variable_13                                            ()
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_6                                          ()
// class FText                        Temp_text_Variable_14                                            ()
// class FText                        Temp_text_Variable_15                                            ()
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_7                                          ()
// class FText                        Temp_text_Variable_16                                            ()
// class FText                        Temp_text_Variable_17                                            ()
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_8                                          ()
// class FText                        Temp_text_Variable_18                                            ()
// class FText                        Temp_text_Variable_19                                            ()
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_9                                          ()
// class FText                        Temp_text_Variable_20                                            ()
// class FText                        Temp_text_Variable_21                                            ()
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_10                                         ()
// class FText                        Temp_text_Variable_22                                            ()
// class FText                        Temp_text_Variable_23                                            ()
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_11                                         ()
// class FText                        Temp_text_Variable_24                                            ()
// class FText                        Temp_text_Variable_25                                            ()
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_12                                         ()
// class FText                        Temp_text_Variable_26                                            ()
// class FText                        Temp_text_Variable_27                                            ()
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_13                                         ()
// class FText                        Temp_text_Variable_28                                            ()
// class FText                        Temp_text_Variable_29                                            ()
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_14                                         ()
// class FText                        Temp_text_Variable_30                                            ()
// class FText                        Temp_text_Variable_31                                            ()
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_15                                         ()
// class FText                        Temp_text_Variable_32                                            ()
// class FText                        Temp_text_Variable_33                                            ()
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_16                                         ()
// class FText                        Temp_text_Variable_34                                            ()
// class FText                        Temp_text_Variable_35                                            ()
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_17                                         ()
// class FText                        Temp_text_Variable_36                                            ()
// class FText                        Temp_text_Variable_37                                            ()
// int32                              Temp_int_Variable_19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_18                                         ()
// class FText                        Temp_text_Variable_38                                            ()
// class FText                        Temp_text_Variable_39                                            ()
// int32                              Temp_int_Variable_20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_19                                         ()
// class FText                        Temp_text_Variable_40                                            ()
// class FText                        Temp_text_Variable_41                                            ()
// int32                              Temp_int_Variable_21                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_20                                         ()
// class FText                        Temp_text_Variable_42                                            ()
// class FText                        Temp_text_Variable_43                                            ()
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_21                                         ()
// class FText                        CallFunc_GetAbility2Label_ReturnValue                            ()
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAbility1Label_ReturnValue                            ()
// class FText                        CallFunc_GetAbility3Label_ReturnValue                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           ()
// class FText                        Temp_text_Variable_44                                            ()
// class UFortInputData*              CallFunc_GetFortInputDataForBlueprint_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_45                                            ()
// class FText                        CallFunc_GetDeployHoverboardLabel_ReturnValue                    ()
// int32                              Temp_int_Variable_22                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_22                                         ()

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_STW_Combat_Mode(int32 Config, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable_1, int32 Temp_int_Variable_1, class FText K2Node_Select_Default, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, int32 Temp_int_Variable_2, class FText K2Node_Select_Default_1, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, int32 Temp_int_Variable_3, class FText K2Node_Select_Default_2, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, int32 Temp_int_Variable_4, class FText K2Node_Select_Default_3, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, int32 Temp_int_Variable_5, class FText K2Node_Select_Default_4, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, int32 Temp_int_Variable_6, class FText K2Node_Select_Default_5, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, int32 Temp_int_Variable_7, class FText K2Node_Select_Default_6, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, int32 Temp_int_Variable_8, class FText K2Node_Select_Default_7, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, int32 Temp_int_Variable_9, class FText K2Node_Select_Default_8, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, int32 Temp_int_Variable_10, class FText K2Node_Select_Default_9, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, int32 Temp_int_Variable_11, class FText K2Node_Select_Default_10, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, int32 Temp_int_Variable_12, class FText K2Node_Select_Default_11, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, int32 Temp_int_Variable_13, class FText K2Node_Select_Default_12, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, int32 Temp_int_Variable_14, class FText K2Node_Select_Default_13, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, int32 Temp_int_Variable_15, class FText K2Node_Select_Default_14, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, int32 Temp_int_Variable_16, class FText K2Node_Select_Default_15, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, int32 Temp_int_Variable_17, class FText K2Node_Select_Default_16, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, int32 Temp_int_Variable_18, class FText K2Node_Select_Default_17, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, int32 Temp_int_Variable_19, class FText K2Node_Select_Default_18, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, int32 Temp_int_Variable_20, class FText K2Node_Select_Default_19, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, int32 Temp_int_Variable_21, class FText K2Node_Select_Default_20, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, class FText K2Node_Select_Default_21, class FText CallFunc_GetAbility2Label_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_1, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_2, class FText CallFunc_GetAbility1Label_ReturnValue, class FText CallFunc_GetAbility3Label_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText Temp_text_Variable_44, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue_3, class FText Temp_text_Variable_45, class FText CallFunc_GetDeployHoverboardLabel_ReturnValue, int32 Temp_int_Variable_22, class FText K2Node_Select_Default_22)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Handle Config Changed STW Combat Mode");

	Params::UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Combat_Mode_Params Parms;

	Parms.Config = Config;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_int_Variable_18 = Temp_int_Variable_18;
	Parms.K2Node_Select_Default_17 = K2Node_Select_Default_17;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_int_Variable_19 = Temp_int_Variable_19;
	Parms.K2Node_Select_Default_18 = K2Node_Select_Default_18;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_int_Variable_20 = Temp_int_Variable_20;
	Parms.K2Node_Select_Default_19 = K2Node_Select_Default_19;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_int_Variable_21 = Temp_int_Variable_21;
	Parms.K2Node_Select_Default_20 = K2Node_Select_Default_20;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue = CallFunc_GetFortInputDataForBlueprint_ReturnValue;
	Parms.K2Node_Select_Default_21 = K2Node_Select_Default_21;
	Parms.CallFunc_GetAbility2Label_ReturnValue = CallFunc_GetAbility2Label_ReturnValue;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_1 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_1;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_2 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_2;
	Parms.CallFunc_GetAbility1Label_ReturnValue = CallFunc_GetAbility1Label_ReturnValue;
	Parms.CallFunc_GetAbility3Label_ReturnValue = CallFunc_GetAbility3Label_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.CallFunc_GetFortInputDataForBlueprint_ReturnValue_3 = CallFunc_GetFortInputDataForBlueprint_ReturnValue_3;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.CallFunc_GetDeployHoverboardLabel_ReturnValue = CallFunc_GetDeployHoverboardLabel_ReturnValue;
	Parms.Temp_int_Variable_22 = Temp_int_Variable_22;
	Parms.K2Node_Select_Default_22 = K2Node_Select_Default_22;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        Temp_text_Variable_7                                             ()
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          ()
// class FText                        Temp_text_Variable_8                                             ()
// class FText                        Temp_text_Variable_9                                             ()
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          ()
// class FText                        Temp_text_Variable_10                                            ()
// class FText                        Temp_text_Variable_11                                            ()
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_5                                          ()
// class FText                        Temp_text_Variable_12                                            ()
// class FText                        Temp_text_Variable_13                                            ()
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_6                                          ()
// class FText                        Temp_text_Variable_14                                            ()
// class FText                        Temp_text_Variable_15                                            ()
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_7                                          ()
// class FText                        Temp_text_Variable_16                                            ()
// class FText                        Temp_text_Variable_17                                            ()
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_8                                          ()
// class FText                        Temp_text_Variable_18                                            ()
// class FText                        Temp_text_Variable_19                                            ()
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_9                                          ()
// class FText                        Temp_text_Variable_20                                            ()
// class FText                        Temp_text_Variable_21                                            ()
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_10                                         ()
// class FText                        Temp_text_Variable_22                                            ()
// class FText                        Temp_text_Variable_23                                            ()
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_11                                         ()
// class FText                        Temp_text_Variable_24                                            ()
// class FText                        Temp_text_Variable_25                                            ()
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_12                                         ()
// class FText                        Temp_text_Variable_26                                            ()
// class FText                        Temp_text_Variable_27                                            ()
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_13                                         ()
// class FText                        Temp_text_Variable_28                                            ()
// class FText                        Temp_text_Variable_29                                            ()
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_14                                         ()
// class FText                        Temp_text_Variable_30                                            ()
// class FText                        Temp_text_Variable_31                                            ()
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_15                                         ()
// class FText                        Temp_text_Variable_32                                            ()
// class FText                        Temp_text_Variable_33                                            ()
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_16                                         ()
// class FText                        Temp_text_Variable_34                                            ()
// class FText                        Temp_text_Variable_35                                            ()
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_17                                         ()
// class FText                        Temp_text_Variable_36                                            ()
// class FText                        Temp_text_Variable_37                                            ()
// int32                              Temp_int_Variable_19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_18                                         ()
// class FText                        Temp_text_Variable_38                                            ()
// class FText                        Temp_text_Variable_39                                            ()
// int32                              Temp_int_Variable_20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_19                                         ()
// class FText                        Temp_text_Variable_40                                            ()
// class FText                        Temp_text_Variable_41                                            ()
// int32                              Temp_int_Variable_21                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_20                                         ()
// class FText                        Temp_text_Variable_42                                            ()
// class FText                        Temp_text_Variable_43                                            ()
// int32                              Temp_int_Variable_22                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_21                                         ()
// class FText                        Temp_text_Variable_44                                            ()
// class FText                        Temp_text_Variable_45                                            ()
// int32                              Temp_int_Variable_23                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_22                                         ()
// class FText                        Temp_text_Variable_46                                            ()
// class FText                        Temp_text_Variable_47                                            ()
// class FText                        Temp_text_Variable_48                                            ()
// class FText                        K2Node_Select_Default_23                                         ()
// class FText                        Temp_text_Variable_49                                            ()
// int32                              Temp_int_Variable_24                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_24                                         ()

void UGamepadMappingInfo_v3_C::Handle_Config_Changed_STW_Build_Mode(int32 Config, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable_1, int32 Temp_int_Variable_1, class FText K2Node_Select_Default, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, int32 Temp_int_Variable_2, class FText K2Node_Select_Default_1, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, int32 Temp_int_Variable_3, class FText K2Node_Select_Default_2, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, int32 Temp_int_Variable_4, class FText K2Node_Select_Default_3, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, int32 Temp_int_Variable_5, class FText K2Node_Select_Default_4, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, int32 Temp_int_Variable_6, class FText K2Node_Select_Default_5, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, int32 Temp_int_Variable_7, class FText K2Node_Select_Default_6, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, int32 Temp_int_Variable_8, class FText K2Node_Select_Default_7, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, int32 Temp_int_Variable_9, class FText K2Node_Select_Default_8, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, int32 Temp_int_Variable_10, class FText K2Node_Select_Default_9, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, int32 Temp_int_Variable_11, class FText K2Node_Select_Default_10, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, int32 Temp_int_Variable_12, class FText K2Node_Select_Default_11, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, int32 Temp_int_Variable_13, class FText K2Node_Select_Default_12, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, int32 Temp_int_Variable_14, class FText K2Node_Select_Default_13, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, int32 Temp_int_Variable_15, class FText K2Node_Select_Default_14, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, int32 Temp_int_Variable_16, class FText K2Node_Select_Default_15, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, int32 Temp_int_Variable_17, class FText K2Node_Select_Default_16, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, int32 Temp_int_Variable_18, class FText K2Node_Select_Default_17, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, int32 Temp_int_Variable_19, class FText K2Node_Select_Default_18, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, int32 Temp_int_Variable_20, class FText K2Node_Select_Default_19, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, int32 Temp_int_Variable_21, class FText K2Node_Select_Default_20, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, int32 Temp_int_Variable_22, class FText K2Node_Select_Default_21, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, int32 Temp_int_Variable_23, class FText K2Node_Select_Default_22, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText K2Node_Select_Default_23, class FText Temp_text_Variable_49, int32 Temp_int_Variable_24, class FText K2Node_Select_Default_24)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Handle Config Changed STW Build Mode");

	Params::UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Build_Mode_Params Parms;

	Parms.Config = Config;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_int_Variable_18 = Temp_int_Variable_18;
	Parms.K2Node_Select_Default_17 = K2Node_Select_Default_17;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_int_Variable_19 = Temp_int_Variable_19;
	Parms.K2Node_Select_Default_18 = K2Node_Select_Default_18;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_int_Variable_20 = Temp_int_Variable_20;
	Parms.K2Node_Select_Default_19 = K2Node_Select_Default_19;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_int_Variable_21 = Temp_int_Variable_21;
	Parms.K2Node_Select_Default_20 = K2Node_Select_Default_20;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.Temp_int_Variable_22 = Temp_int_Variable_22;
	Parms.K2Node_Select_Default_21 = K2Node_Select_Default_21;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.Temp_int_Variable_23 = Temp_int_Variable_23;
	Parms.K2Node_Select_Default_22 = K2Node_Select_Default_22;
	Parms.Temp_text_Variable_46 = Temp_text_Variable_46;
	Parms.Temp_text_Variable_47 = Temp_text_Variable_47;
	Parms.Temp_text_Variable_48 = Temp_text_Variable_48;
	Parms.K2Node_Select_Default_23 = K2Node_Select_Default_23;
	Parms.Temp_text_Variable_49 = Temp_text_Variable_49;
	Parms.Temp_int_Variable_24 = Temp_int_Variable_24;
	Parms.K2Node_Select_Default_24 = K2Node_Select_Default_24;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::HandleConfigChanged(enum class EFortInputActionGroup Mode, int32 Config, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "HandleConfigChanged");

	Params::UGamepadMappingInfo_v3_C_HandleConfigChanged_Params Parms;

	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        Temp_text_Variable_2                                             ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        Temp_text_Variable_7                                             ()
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// class FText                        Temp_text_Variable_8                                             ()
// class FText                        Temp_text_Variable_9                                             ()
// class FText                        Temp_text_Variable_10                                            ()
// class FText                        Temp_text_Variable_11                                            ()
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          ()
// class FText                        Temp_text_Variable_12                                            ()
// class FText                        Temp_text_Variable_13                                            ()
// class FText                        Temp_text_Variable_14                                            ()
// class FText                        Temp_text_Variable_15                                            ()
// class FText                        Temp_text_Variable_16                                            ()
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          ()
// class FText                        Temp_text_Variable_17                                            ()
// class FText                        Temp_text_Variable_18                                            ()
// class FText                        Temp_text_Variable_19                                            ()
// class FText                        Temp_text_Variable_20                                            ()
// class FText                        Temp_text_Variable_21                                            ()
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          ()
// class FText                        Temp_text_Variable_22                                            ()
// class FText                        Temp_text_Variable_23                                            ()
// class FText                        Temp_text_Variable_24                                            ()
// class FText                        Temp_text_Variable_25                                            ()
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          ()
// class FText                        Temp_text_Variable_26                                            ()
// class FText                        Temp_text_Variable_27                                            ()
// class FText                        Temp_text_Variable_28                                            ()
// class FText                        Temp_text_Variable_29                                            ()
// class FText                        Temp_text_Variable_30                                            ()
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_5                                          ()
// class FText                        Temp_text_Variable_31                                            ()
// class FText                        Temp_text_Variable_32                                            ()
// class FText                        Temp_text_Variable_33                                            ()
// class FText                        Temp_text_Variable_34                                            ()
// class FText                        Temp_text_Variable_35                                            ()
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_6                                          ()
// class FText                        Temp_text_Variable_36                                            ()
// class FText                        Temp_text_Variable_37                                            ()
// class FText                        Temp_text_Variable_38                                            ()
// class FText                        Temp_text_Variable_39                                            ()
// class FText                        Temp_text_Variable_40                                            ()
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_7                                          ()
// class FText                        Temp_text_Variable_41                                            ()
// class FText                        Temp_text_Variable_42                                            ()
// class FText                        Temp_text_Variable_43                                            ()
// class FText                        Temp_text_Variable_44                                            ()
// class FText                        Temp_text_Variable_45                                            ()
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_8                                          ()
// class FText                        Temp_text_Variable_46                                            ()
// class FText                        Temp_text_Variable_47                                            ()
// class FText                        Temp_text_Variable_48                                            ()
// class FText                        Temp_text_Variable_49                                            ()
// class FText                        Temp_text_Variable_50                                            ()
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_9                                          ()
// class FText                        Temp_text_Variable_51                                            ()
// class FText                        Temp_text_Variable_52                                            ()
// class FText                        Temp_text_Variable_53                                            ()
// class FText                        Temp_text_Variable_54                                            ()
// class FText                        Temp_text_Variable_55                                            ()
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_10                                         ()
// class FText                        Temp_text_Variable_56                                            ()
// class FText                        Temp_text_Variable_57                                            ()
// class FText                        Temp_text_Variable_58                                            ()
// class FText                        Temp_text_Variable_59                                            ()
// class FText                        Temp_text_Variable_60                                            ()
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_11                                         ()
// class FText                        Temp_text_Variable_61                                            ()
// class FText                        Temp_text_Variable_62                                            ()
// class FText                        Temp_text_Variable_63                                            ()
// class FText                        Temp_text_Variable_64                                            ()
// class FText                        Temp_text_Variable_65                                            ()
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_12                                         ()
// class FText                        Temp_text_Variable_66                                            ()
// class FText                        Temp_text_Variable_67                                            ()
// class FText                        Temp_text_Variable_68                                            ()
// class FText                        Temp_text_Variable_69                                            ()
// class FText                        Temp_text_Variable_70                                            ()
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_13                                         ()
// class FText                        Temp_text_Variable_71                                            ()
// class FText                        Temp_text_Variable_72                                            ()
// class FText                        Temp_text_Variable_73                                            ()
// class FText                        Temp_text_Variable_74                                            ()
// class FText                        Temp_text_Variable_75                                            ()
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_14                                         ()
// class FText                        Temp_text_Variable_76                                            ()
// class FText                        Temp_text_Variable_77                                            ()
// class FText                        Temp_text_Variable_78                                            ()
// class FText                        Temp_text_Variable_79                                            ()
// class FText                        Temp_text_Variable_80                                            ()
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_15                                         ()
// class FText                        Temp_text_Variable_81                                            ()
// class FText                        Temp_text_Variable_82                                            ()
// class FText                        Temp_text_Variable_83                                            ()
// class FText                        Temp_text_Variable_84                                            ()
// class FText                        Temp_text_Variable_85                                            ()
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_16                                         ()
// class FText                        Temp_text_Variable_86                                            ()
// class FText                        Temp_text_Variable_87                                            ()
// class FText                        Temp_text_Variable_88                                            ()
// class FText                        Temp_text_Variable_89                                            ()
// class FText                        Temp_text_Variable_90                                            ()
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_17                                         ()
// class FText                        Temp_text_Variable_91                                            ()
// class FText                        Temp_text_Variable_92                                            ()
// class FText                        Temp_text_Variable_93                                            ()
// class FText                        Temp_text_Variable_94                                            ()
// class FText                        Temp_text_Variable_95                                            ()
// int32                              Temp_int_Variable_19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_18                                         ()
// class FText                        Temp_text_Variable_96                                            ()
// class FText                        Temp_text_Variable_97                                            ()
// class FText                        Temp_text_Variable_98                                            ()
// class FText                        Temp_text_Variable_99                                            ()
// class FText                        Temp_text_Variable_100                                           ()
// int32                              Temp_int_Variable_20                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_19                                         ()
// class FText                        Temp_text_Variable_101                                           ()
// class FText                        Temp_text_Variable_102                                           ()
// class FText                        Temp_text_Variable_103                                           ()
// class FText                        Temp_text_Variable_104                                           ()
// class FText                        Temp_text_Variable_105                                           ()
// int32                              Temp_int_Variable_21                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_20                                         ()
// class FText                        Temp_text_Variable_106                                           ()
// class FText                        Temp_text_Variable_107                                           ()
// class FText                        Temp_text_Variable_108                                           ()
// class FText                        Temp_text_Variable_109                                           ()
// class FText                        Temp_text_Variable_110                                           ()
// int32                              Temp_int_Variable_22                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_21                                         ()
// class FText                        Temp_text_Variable_111                                           ()
// class FText                        Temp_text_Variable_112                                           ()
// class FText                        Temp_text_Variable_113                                           ()
// class FText                        Temp_text_Variable_114                                           ()
// class FText                        Temp_text_Variable_115                                           ()
// int32                              Temp_int_Variable_23                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_22                                         ()
// class FText                        Temp_text_Variable_116                                           ()
// class FText                        Temp_text_Variable_117                                           ()
// class FText                        Temp_text_Variable_118                                           ()
// class FText                        Temp_text_Variable_119                                           ()
// class FText                        Temp_text_Variable_120                                           ()
// int32                              Temp_int_Variable_24                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_23                                         ()
// class FText                        Temp_text_Variable_121                                           ()
// class FText                        Temp_text_Variable_122                                           ()
// class FText                        Temp_text_Variable_123                                           ()
// class FText                        Temp_text_Variable_124                                           ()
// class FText                        Temp_text_Variable_125                                           ()
// int32                              Temp_int_Variable_25                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_24                                         ()
// class FText                        Temp_text_Variable_126                                           ()
// class FText                        Temp_text_Variable_127                                           ()
// class FText                        Temp_text_Variable_128                                           ()
// class FText                        Temp_text_Variable_129                                           ()
// class FText                        Temp_text_Variable_130                                           ()
// int32                              Temp_int_Variable_26                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_25                                         ()
// class FText                        Temp_text_Variable_131                                           ()
// class FText                        Temp_text_Variable_132                                           ()
// class FText                        Temp_text_Variable_133                                           ()
// class FText                        Temp_text_Variable_134                                           ()
// class FText                        Temp_text_Variable_135                                           ()
// int32                              Temp_int_Variable_27                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_26                                         ()
// class FText                        Temp_text_Variable_136                                           ()
// class FText                        Temp_text_Variable_137                                           ()
// class FText                        Temp_text_Variable_138                                           ()
// class FText                        Temp_text_Variable_139                                           ()
// class FText                        Temp_text_Variable_140                                           ()
// int32                              Temp_int_Variable_28                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_27                                         ()
// class FText                        Temp_text_Variable_141                                           ()
// class FText                        Temp_text_Variable_142                                           ()
// class FText                        Temp_text_Variable_143                                           ()
// class FText                        Temp_text_Variable_144                                           ()
// class FText                        Temp_text_Variable_145                                           ()
// int32                              Temp_int_Variable_29                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_28                                         ()
// class FText                        Temp_text_Variable_146                                           ()
// class FText                        Temp_text_Variable_147                                           ()
// class FText                        Temp_text_Variable_148                                           ()
// class FText                        Temp_text_Variable_149                                           ()
// class FText                        Temp_text_Variable_150                                           ()
// int32                              Temp_int_Variable_30                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_29                                         ()
// class FText                        Temp_text_Variable_151                                           ()
// class FText                        Temp_text_Variable_152                                           ()
// class FText                        Temp_text_Variable_153                                           ()
// class FText                        Temp_text_Variable_154                                           ()
// class FText                        Temp_text_Variable_155                                           ()
// int32                              Temp_int_Variable_31                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_30                                         ()
// class FText                        Temp_text_Variable_156                                           ()
// class FText                        Temp_text_Variable_157                                           ()
// class FText                        Temp_text_Variable_158                                           ()
// class FText                        Temp_text_Variable_159                                           ()
// class FText                        Temp_text_Variable_160                                           ()
// int32                              Temp_int_Variable_32                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_31                                         ()
// class FText                        Temp_text_Variable_161                                           ()
// class FText                        Temp_text_Variable_162                                           ()
// class FText                        Temp_text_Variable_163                                           ()
// class FText                        Temp_text_Variable_164                                           ()
// class FText                        Temp_text_Variable_165                                           ()
// int32                              Temp_int_Variable_33                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_32                                         ()
// class FText                        Temp_text_Variable_166                                           ()
// class FText                        Temp_text_Variable_167                                           ()
// class FText                        Temp_text_Variable_168                                           ()
// class FText                        Temp_text_Variable_169                                           ()
// class FText                        Temp_text_Variable_170                                           ()
// int32                              Temp_int_Variable_34                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_33                                         ()
// class FText                        Temp_text_Variable_171                                           ()
// class FText                        Temp_text_Variable_172                                           ()
// class FText                        Temp_text_Variable_173                                           ()
// class FText                        Temp_text_Variable_174                                           ()
// class FText                        Temp_text_Variable_175                                           ()
// int32                              Temp_int_Variable_35                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_34                                         ()
// class FText                        Temp_text_Variable_176                                           ()
// class FText                        Temp_text_Variable_177                                           ()
// class FText                        Temp_text_Variable_178                                           ()
// class FText                        Temp_text_Variable_179                                           ()
// class FText                        Temp_text_Variable_180                                           ()
// int32                              Temp_int_Variable_36                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_35                                         ()
// class FText                        Temp_text_Variable_181                                           ()
// class FText                        Temp_text_Variable_182                                           ()
// class FText                        Temp_text_Variable_183                                           ()
// class FText                        Temp_text_Variable_184                                           ()
// class FText                        Temp_text_Variable_185                                           ()
// int32                              Temp_int_Variable_37                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_36                                         ()
// class FText                        Temp_text_Variable_186                                           ()
// class FText                        Temp_text_Variable_187                                           ()
// class FText                        Temp_text_Variable_188                                           ()
// class FText                        Temp_text_Variable_189                                           ()
// class FText                        Temp_text_Variable_190                                           ()
// int32                              Temp_int_Variable_38                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_37                                         ()
// class FText                        Temp_text_Variable_191                                           ()
// class FText                        Temp_text_Variable_192                                           ()
// class FText                        Temp_text_Variable_193                                           ()
// class FText                        Temp_text_Variable_194                                           ()
// class FText                        Temp_text_Variable_195                                           ()
// int32                              Temp_int_Variable_39                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_38                                         ()
// class FText                        Temp_text_Variable_196                                           ()
// class FText                        Temp_text_Variable_197                                           ()
// class FText                        Temp_text_Variable_198                                           ()
// class FText                        Temp_text_Variable_199                                           ()
// class FText                        Temp_text_Variable_200                                           ()
// int32                              Temp_int_Variable_40                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_39                                         ()
// class FText                        Temp_text_Variable_201                                           ()
// class FText                        Temp_text_Variable_202                                           ()
// class FText                        Temp_text_Variable_203                                           ()
// class FText                        Temp_text_Variable_204                                           ()
// class FText                        Temp_text_Variable_205                                           ()
// int32                              Temp_int_Variable_41                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_40                                         ()
// class FText                        Temp_text_Variable_206                                           ()
// class FText                        Temp_text_Variable_207                                           ()
// class FText                        Temp_text_Variable_208                                           ()
// class FText                        Temp_text_Variable_209                                           ()
// class FText                        Temp_text_Variable_210                                           ()
// int32                              Temp_int_Variable_42                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_41                                         ()
// class FText                        Temp_text_Variable_211                                           ()
// class FText                        Temp_text_Variable_212                                           ()
// class FText                        Temp_text_Variable_213                                           ()
// class FText                        Temp_text_Variable_214                                           ()
// class FText                        Temp_text_Variable_215                                           ()
// int32                              Temp_int_Variable_43                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_42                                         ()
// class FText                        Temp_text_Variable_216                                           ()
// class FText                        Temp_text_Variable_217                                           ()
// class FText                        Temp_text_Variable_218                                           ()
// class FText                        Temp_text_Variable_219                                           ()
// class FText                        Temp_text_Variable_220                                           ()
// int32                              Temp_int_Variable_44                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_43                                         ()
// class FText                        Temp_text_Variable_221                                           ()
// class FText                        Temp_text_Variable_222                                           ()
// class FText                        Temp_text_Variable_223                                           ()
// class FText                        Temp_text_Variable_224                                           ()
// class FText                        Temp_text_Variable_225                                           ()
// int32                              Temp_int_Variable_45                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_44                                         ()
// class FText                        Temp_text_Variable_226                                           ()
// class FText                        Temp_text_Variable_227                                           ()
// class FText                        Temp_text_Variable_228                                           ()
// class FText                        Temp_text_Variable_229                                           ()
// class FText                        Temp_text_Variable_230                                           ()
// int32                              Temp_int_Variable_46                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_45                                         ()
// class FText                        Temp_text_Variable_231                                           ()
// class FText                        Temp_text_Variable_232                                           ()
// class FText                        Temp_text_Variable_233                                           ()
// class FText                        Temp_text_Variable_234                                           ()
// class FText                        Temp_text_Variable_235                                           ()
// int32                              Temp_int_Variable_47                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_46                                         ()
// class FText                        Temp_text_Variable_236                                           ()
// class FText                        Temp_text_Variable_237                                           ()
// class FText                        Temp_text_Variable_238                                           ()
// class FText                        Temp_text_Variable_239                                           ()
// class FText                        Temp_text_Variable_240                                           ()
// int32                              Temp_int_Variable_48                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_47                                         ()
// class FText                        Temp_text_Variable_241                                           ()
// class FText                        Temp_text_Variable_242                                           ()
// class FText                        Temp_text_Variable_243                                           ()
// class FText                        Temp_text_Variable_244                                           ()
// class FText                        Temp_text_Variable_245                                           ()
// class FText                        K2Node_Select_Default_48                                         ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        Temp_text_Variable_246                                           ()
// class FText                        Temp_text_Variable_247                                           ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           ()
// int32                              Temp_int_Variable_49                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_49                                         ()

void UGamepadMappingInfo_v3_C::HandleConfigChanged_Athena(enum class EFortInputActionGroup Mode, int32 Config, class FText Temp_text_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 Temp_int_Variable, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, int32 Temp_int_Variable_1, class FText K2Node_Select_Default, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, int32 Temp_int_Variable_2, class FText K2Node_Select_Default_1, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, int32 Temp_int_Variable_3, class FText K2Node_Select_Default_2, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, int32 Temp_int_Variable_4, class FText K2Node_Select_Default_3, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, int32 Temp_int_Variable_5, class FText K2Node_Select_Default_4, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, int32 Temp_int_Variable_6, class FText K2Node_Select_Default_5, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, int32 Temp_int_Variable_7, class FText K2Node_Select_Default_6, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, int32 Temp_int_Variable_8, class FText K2Node_Select_Default_7, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, int32 Temp_int_Variable_9, class FText K2Node_Select_Default_8, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, int32 Temp_int_Variable_10, class FText K2Node_Select_Default_9, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, int32 Temp_int_Variable_11, class FText K2Node_Select_Default_10, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, int32 Temp_int_Variable_12, class FText K2Node_Select_Default_11, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, int32 Temp_int_Variable_13, class FText K2Node_Select_Default_12, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, int32 Temp_int_Variable_14, class FText K2Node_Select_Default_13, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, int32 Temp_int_Variable_15, class FText K2Node_Select_Default_14, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, int32 Temp_int_Variable_16, class FText K2Node_Select_Default_15, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, int32 Temp_int_Variable_17, class FText K2Node_Select_Default_16, class FText Temp_text_Variable_86, class FText Temp_text_Variable_87, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, int32 Temp_int_Variable_18, class FText K2Node_Select_Default_17, class FText Temp_text_Variable_91, class FText Temp_text_Variable_92, class FText Temp_text_Variable_93, class FText Temp_text_Variable_94, class FText Temp_text_Variable_95, int32 Temp_int_Variable_19, class FText K2Node_Select_Default_18, class FText Temp_text_Variable_96, class FText Temp_text_Variable_97, class FText Temp_text_Variable_98, class FText Temp_text_Variable_99, class FText Temp_text_Variable_100, int32 Temp_int_Variable_20, class FText K2Node_Select_Default_19, class FText Temp_text_Variable_101, class FText Temp_text_Variable_102, class FText Temp_text_Variable_103, class FText Temp_text_Variable_104, class FText Temp_text_Variable_105, int32 Temp_int_Variable_21, class FText K2Node_Select_Default_20, class FText Temp_text_Variable_106, class FText Temp_text_Variable_107, class FText Temp_text_Variable_108, class FText Temp_text_Variable_109, class FText Temp_text_Variable_110, int32 Temp_int_Variable_22, class FText K2Node_Select_Default_21, class FText Temp_text_Variable_111, class FText Temp_text_Variable_112, class FText Temp_text_Variable_113, class FText Temp_text_Variable_114, class FText Temp_text_Variable_115, int32 Temp_int_Variable_23, class FText K2Node_Select_Default_22, class FText Temp_text_Variable_116, class FText Temp_text_Variable_117, class FText Temp_text_Variable_118, class FText Temp_text_Variable_119, class FText Temp_text_Variable_120, int32 Temp_int_Variable_24, class FText K2Node_Select_Default_23, class FText Temp_text_Variable_121, class FText Temp_text_Variable_122, class FText Temp_text_Variable_123, class FText Temp_text_Variable_124, class FText Temp_text_Variable_125, int32 Temp_int_Variable_25, class FText K2Node_Select_Default_24, class FText Temp_text_Variable_126, class FText Temp_text_Variable_127, class FText Temp_text_Variable_128, class FText Temp_text_Variable_129, class FText Temp_text_Variable_130, int32 Temp_int_Variable_26, class FText K2Node_Select_Default_25, class FText Temp_text_Variable_131, class FText Temp_text_Variable_132, class FText Temp_text_Variable_133, class FText Temp_text_Variable_134, class FText Temp_text_Variable_135, int32 Temp_int_Variable_27, class FText K2Node_Select_Default_26, class FText Temp_text_Variable_136, class FText Temp_text_Variable_137, class FText Temp_text_Variable_138, class FText Temp_text_Variable_139, class FText Temp_text_Variable_140, int32 Temp_int_Variable_28, class FText K2Node_Select_Default_27, class FText Temp_text_Variable_141, class FText Temp_text_Variable_142, class FText Temp_text_Variable_143, class FText Temp_text_Variable_144, class FText Temp_text_Variable_145, int32 Temp_int_Variable_29, class FText K2Node_Select_Default_28, class FText Temp_text_Variable_146, class FText Temp_text_Variable_147, class FText Temp_text_Variable_148, class FText Temp_text_Variable_149, class FText Temp_text_Variable_150, int32 Temp_int_Variable_30, class FText K2Node_Select_Default_29, class FText Temp_text_Variable_151, class FText Temp_text_Variable_152, class FText Temp_text_Variable_153, class FText Temp_text_Variable_154, class FText Temp_text_Variable_155, int32 Temp_int_Variable_31, class FText K2Node_Select_Default_30, class FText Temp_text_Variable_156, class FText Temp_text_Variable_157, class FText Temp_text_Variable_158, class FText Temp_text_Variable_159, class FText Temp_text_Variable_160, int32 Temp_int_Variable_32, class FText K2Node_Select_Default_31, class FText Temp_text_Variable_161, class FText Temp_text_Variable_162, class FText Temp_text_Variable_163, class FText Temp_text_Variable_164, class FText Temp_text_Variable_165, int32 Temp_int_Variable_33, class FText K2Node_Select_Default_32, class FText Temp_text_Variable_166, class FText Temp_text_Variable_167, class FText Temp_text_Variable_168, class FText Temp_text_Variable_169, class FText Temp_text_Variable_170, int32 Temp_int_Variable_34, class FText K2Node_Select_Default_33, class FText Temp_text_Variable_171, class FText Temp_text_Variable_172, class FText Temp_text_Variable_173, class FText Temp_text_Variable_174, class FText Temp_text_Variable_175, int32 Temp_int_Variable_35, class FText K2Node_Select_Default_34, class FText Temp_text_Variable_176, class FText Temp_text_Variable_177, class FText Temp_text_Variable_178, class FText Temp_text_Variable_179, class FText Temp_text_Variable_180, int32 Temp_int_Variable_36, class FText K2Node_Select_Default_35, class FText Temp_text_Variable_181, class FText Temp_text_Variable_182, class FText Temp_text_Variable_183, class FText Temp_text_Variable_184, class FText Temp_text_Variable_185, int32 Temp_int_Variable_37, class FText K2Node_Select_Default_36, class FText Temp_text_Variable_186, class FText Temp_text_Variable_187, class FText Temp_text_Variable_188, class FText Temp_text_Variable_189, class FText Temp_text_Variable_190, int32 Temp_int_Variable_38, class FText K2Node_Select_Default_37, class FText Temp_text_Variable_191, class FText Temp_text_Variable_192, class FText Temp_text_Variable_193, class FText Temp_text_Variable_194, class FText Temp_text_Variable_195, int32 Temp_int_Variable_39, class FText K2Node_Select_Default_38, class FText Temp_text_Variable_196, class FText Temp_text_Variable_197, class FText Temp_text_Variable_198, class FText Temp_text_Variable_199, class FText Temp_text_Variable_200, int32 Temp_int_Variable_40, class FText K2Node_Select_Default_39, class FText Temp_text_Variable_201, class FText Temp_text_Variable_202, class FText Temp_text_Variable_203, class FText Temp_text_Variable_204, class FText Temp_text_Variable_205, int32 Temp_int_Variable_41, class FText K2Node_Select_Default_40, class FText Temp_text_Variable_206, class FText Temp_text_Variable_207, class FText Temp_text_Variable_208, class FText Temp_text_Variable_209, class FText Temp_text_Variable_210, int32 Temp_int_Variable_42, class FText K2Node_Select_Default_41, class FText Temp_text_Variable_211, class FText Temp_text_Variable_212, class FText Temp_text_Variable_213, class FText Temp_text_Variable_214, class FText Temp_text_Variable_215, int32 Temp_int_Variable_43, class FText K2Node_Select_Default_42, class FText Temp_text_Variable_216, class FText Temp_text_Variable_217, class FText Temp_text_Variable_218, class FText Temp_text_Variable_219, class FText Temp_text_Variable_220, int32 Temp_int_Variable_44, class FText K2Node_Select_Default_43, class FText Temp_text_Variable_221, class FText Temp_text_Variable_222, class FText Temp_text_Variable_223, class FText Temp_text_Variable_224, class FText Temp_text_Variable_225, int32 Temp_int_Variable_45, class FText K2Node_Select_Default_44, class FText Temp_text_Variable_226, class FText Temp_text_Variable_227, class FText Temp_text_Variable_228, class FText Temp_text_Variable_229, class FText Temp_text_Variable_230, int32 Temp_int_Variable_46, class FText K2Node_Select_Default_45, class FText Temp_text_Variable_231, class FText Temp_text_Variable_232, class FText Temp_text_Variable_233, class FText Temp_text_Variable_234, class FText Temp_text_Variable_235, int32 Temp_int_Variable_47, class FText K2Node_Select_Default_46, class FText Temp_text_Variable_236, class FText Temp_text_Variable_237, class FText Temp_text_Variable_238, class FText Temp_text_Variable_239, class FText Temp_text_Variable_240, int32 Temp_int_Variable_48, class FText K2Node_Select_Default_47, class FText Temp_text_Variable_241, class FText Temp_text_Variable_242, class FText Temp_text_Variable_243, class FText Temp_text_Variable_244, class FText Temp_text_Variable_245, class FText K2Node_Select_Default_48, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable_246, class FText Temp_text_Variable_247, class FText CallFunc_MakeLiteralText_ReturnValue_1, int32 Temp_int_Variable_49, class FText K2Node_Select_Default_49)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "HandleConfigChanged_Athena");

	Params::UGamepadMappingInfo_v3_C_HandleConfigChanged_Athena_Params Parms;

	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_text_Variable_46 = Temp_text_Variable_46;
	Parms.Temp_text_Variable_47 = Temp_text_Variable_47;
	Parms.Temp_text_Variable_48 = Temp_text_Variable_48;
	Parms.Temp_text_Variable_49 = Temp_text_Variable_49;
	Parms.Temp_text_Variable_50 = Temp_text_Variable_50;
	Parms.Temp_int_Variable_10 = Temp_int_Variable_10;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.Temp_text_Variable_51 = Temp_text_Variable_51;
	Parms.Temp_text_Variable_52 = Temp_text_Variable_52;
	Parms.Temp_text_Variable_53 = Temp_text_Variable_53;
	Parms.Temp_text_Variable_54 = Temp_text_Variable_54;
	Parms.Temp_text_Variable_55 = Temp_text_Variable_55;
	Parms.Temp_int_Variable_11 = Temp_int_Variable_11;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.Temp_text_Variable_56 = Temp_text_Variable_56;
	Parms.Temp_text_Variable_57 = Temp_text_Variable_57;
	Parms.Temp_text_Variable_58 = Temp_text_Variable_58;
	Parms.Temp_text_Variable_59 = Temp_text_Variable_59;
	Parms.Temp_text_Variable_60 = Temp_text_Variable_60;
	Parms.Temp_int_Variable_12 = Temp_int_Variable_12;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.Temp_text_Variable_61 = Temp_text_Variable_61;
	Parms.Temp_text_Variable_62 = Temp_text_Variable_62;
	Parms.Temp_text_Variable_63 = Temp_text_Variable_63;
	Parms.Temp_text_Variable_64 = Temp_text_Variable_64;
	Parms.Temp_text_Variable_65 = Temp_text_Variable_65;
	Parms.Temp_int_Variable_13 = Temp_int_Variable_13;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.Temp_text_Variable_66 = Temp_text_Variable_66;
	Parms.Temp_text_Variable_67 = Temp_text_Variable_67;
	Parms.Temp_text_Variable_68 = Temp_text_Variable_68;
	Parms.Temp_text_Variable_69 = Temp_text_Variable_69;
	Parms.Temp_text_Variable_70 = Temp_text_Variable_70;
	Parms.Temp_int_Variable_14 = Temp_int_Variable_14;
	Parms.K2Node_Select_Default_13 = K2Node_Select_Default_13;
	Parms.Temp_text_Variable_71 = Temp_text_Variable_71;
	Parms.Temp_text_Variable_72 = Temp_text_Variable_72;
	Parms.Temp_text_Variable_73 = Temp_text_Variable_73;
	Parms.Temp_text_Variable_74 = Temp_text_Variable_74;
	Parms.Temp_text_Variable_75 = Temp_text_Variable_75;
	Parms.Temp_int_Variable_15 = Temp_int_Variable_15;
	Parms.K2Node_Select_Default_14 = K2Node_Select_Default_14;
	Parms.Temp_text_Variable_76 = Temp_text_Variable_76;
	Parms.Temp_text_Variable_77 = Temp_text_Variable_77;
	Parms.Temp_text_Variable_78 = Temp_text_Variable_78;
	Parms.Temp_text_Variable_79 = Temp_text_Variable_79;
	Parms.Temp_text_Variable_80 = Temp_text_Variable_80;
	Parms.Temp_int_Variable_16 = Temp_int_Variable_16;
	Parms.K2Node_Select_Default_15 = K2Node_Select_Default_15;
	Parms.Temp_text_Variable_81 = Temp_text_Variable_81;
	Parms.Temp_text_Variable_82 = Temp_text_Variable_82;
	Parms.Temp_text_Variable_83 = Temp_text_Variable_83;
	Parms.Temp_text_Variable_84 = Temp_text_Variable_84;
	Parms.Temp_text_Variable_85 = Temp_text_Variable_85;
	Parms.Temp_int_Variable_17 = Temp_int_Variable_17;
	Parms.K2Node_Select_Default_16 = K2Node_Select_Default_16;
	Parms.Temp_text_Variable_86 = Temp_text_Variable_86;
	Parms.Temp_text_Variable_87 = Temp_text_Variable_87;
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_int_Variable_18 = Temp_int_Variable_18;
	Parms.K2Node_Select_Default_17 = K2Node_Select_Default_17;
	Parms.Temp_text_Variable_91 = Temp_text_Variable_91;
	Parms.Temp_text_Variable_92 = Temp_text_Variable_92;
	Parms.Temp_text_Variable_93 = Temp_text_Variable_93;
	Parms.Temp_text_Variable_94 = Temp_text_Variable_94;
	Parms.Temp_text_Variable_95 = Temp_text_Variable_95;
	Parms.Temp_int_Variable_19 = Temp_int_Variable_19;
	Parms.K2Node_Select_Default_18 = K2Node_Select_Default_18;
	Parms.Temp_text_Variable_96 = Temp_text_Variable_96;
	Parms.Temp_text_Variable_97 = Temp_text_Variable_97;
	Parms.Temp_text_Variable_98 = Temp_text_Variable_98;
	Parms.Temp_text_Variable_99 = Temp_text_Variable_99;
	Parms.Temp_text_Variable_100 = Temp_text_Variable_100;
	Parms.Temp_int_Variable_20 = Temp_int_Variable_20;
	Parms.K2Node_Select_Default_19 = K2Node_Select_Default_19;
	Parms.Temp_text_Variable_101 = Temp_text_Variable_101;
	Parms.Temp_text_Variable_102 = Temp_text_Variable_102;
	Parms.Temp_text_Variable_103 = Temp_text_Variable_103;
	Parms.Temp_text_Variable_104 = Temp_text_Variable_104;
	Parms.Temp_text_Variable_105 = Temp_text_Variable_105;
	Parms.Temp_int_Variable_21 = Temp_int_Variable_21;
	Parms.K2Node_Select_Default_20 = K2Node_Select_Default_20;
	Parms.Temp_text_Variable_106 = Temp_text_Variable_106;
	Parms.Temp_text_Variable_107 = Temp_text_Variable_107;
	Parms.Temp_text_Variable_108 = Temp_text_Variable_108;
	Parms.Temp_text_Variable_109 = Temp_text_Variable_109;
	Parms.Temp_text_Variable_110 = Temp_text_Variable_110;
	Parms.Temp_int_Variable_22 = Temp_int_Variable_22;
	Parms.K2Node_Select_Default_21 = K2Node_Select_Default_21;
	Parms.Temp_text_Variable_111 = Temp_text_Variable_111;
	Parms.Temp_text_Variable_112 = Temp_text_Variable_112;
	Parms.Temp_text_Variable_113 = Temp_text_Variable_113;
	Parms.Temp_text_Variable_114 = Temp_text_Variable_114;
	Parms.Temp_text_Variable_115 = Temp_text_Variable_115;
	Parms.Temp_int_Variable_23 = Temp_int_Variable_23;
	Parms.K2Node_Select_Default_22 = K2Node_Select_Default_22;
	Parms.Temp_text_Variable_116 = Temp_text_Variable_116;
	Parms.Temp_text_Variable_117 = Temp_text_Variable_117;
	Parms.Temp_text_Variable_118 = Temp_text_Variable_118;
	Parms.Temp_text_Variable_119 = Temp_text_Variable_119;
	Parms.Temp_text_Variable_120 = Temp_text_Variable_120;
	Parms.Temp_int_Variable_24 = Temp_int_Variable_24;
	Parms.K2Node_Select_Default_23 = K2Node_Select_Default_23;
	Parms.Temp_text_Variable_121 = Temp_text_Variable_121;
	Parms.Temp_text_Variable_122 = Temp_text_Variable_122;
	Parms.Temp_text_Variable_123 = Temp_text_Variable_123;
	Parms.Temp_text_Variable_124 = Temp_text_Variable_124;
	Parms.Temp_text_Variable_125 = Temp_text_Variable_125;
	Parms.Temp_int_Variable_25 = Temp_int_Variable_25;
	Parms.K2Node_Select_Default_24 = K2Node_Select_Default_24;
	Parms.Temp_text_Variable_126 = Temp_text_Variable_126;
	Parms.Temp_text_Variable_127 = Temp_text_Variable_127;
	Parms.Temp_text_Variable_128 = Temp_text_Variable_128;
	Parms.Temp_text_Variable_129 = Temp_text_Variable_129;
	Parms.Temp_text_Variable_130 = Temp_text_Variable_130;
	Parms.Temp_int_Variable_26 = Temp_int_Variable_26;
	Parms.K2Node_Select_Default_25 = K2Node_Select_Default_25;
	Parms.Temp_text_Variable_131 = Temp_text_Variable_131;
	Parms.Temp_text_Variable_132 = Temp_text_Variable_132;
	Parms.Temp_text_Variable_133 = Temp_text_Variable_133;
	Parms.Temp_text_Variable_134 = Temp_text_Variable_134;
	Parms.Temp_text_Variable_135 = Temp_text_Variable_135;
	Parms.Temp_int_Variable_27 = Temp_int_Variable_27;
	Parms.K2Node_Select_Default_26 = K2Node_Select_Default_26;
	Parms.Temp_text_Variable_136 = Temp_text_Variable_136;
	Parms.Temp_text_Variable_137 = Temp_text_Variable_137;
	Parms.Temp_text_Variable_138 = Temp_text_Variable_138;
	Parms.Temp_text_Variable_139 = Temp_text_Variable_139;
	Parms.Temp_text_Variable_140 = Temp_text_Variable_140;
	Parms.Temp_int_Variable_28 = Temp_int_Variable_28;
	Parms.K2Node_Select_Default_27 = K2Node_Select_Default_27;
	Parms.Temp_text_Variable_141 = Temp_text_Variable_141;
	Parms.Temp_text_Variable_142 = Temp_text_Variable_142;
	Parms.Temp_text_Variable_143 = Temp_text_Variable_143;
	Parms.Temp_text_Variable_144 = Temp_text_Variable_144;
	Parms.Temp_text_Variable_145 = Temp_text_Variable_145;
	Parms.Temp_int_Variable_29 = Temp_int_Variable_29;
	Parms.K2Node_Select_Default_28 = K2Node_Select_Default_28;
	Parms.Temp_text_Variable_146 = Temp_text_Variable_146;
	Parms.Temp_text_Variable_147 = Temp_text_Variable_147;
	Parms.Temp_text_Variable_148 = Temp_text_Variable_148;
	Parms.Temp_text_Variable_149 = Temp_text_Variable_149;
	Parms.Temp_text_Variable_150 = Temp_text_Variable_150;
	Parms.Temp_int_Variable_30 = Temp_int_Variable_30;
	Parms.K2Node_Select_Default_29 = K2Node_Select_Default_29;
	Parms.Temp_text_Variable_151 = Temp_text_Variable_151;
	Parms.Temp_text_Variable_152 = Temp_text_Variable_152;
	Parms.Temp_text_Variable_153 = Temp_text_Variable_153;
	Parms.Temp_text_Variable_154 = Temp_text_Variable_154;
	Parms.Temp_text_Variable_155 = Temp_text_Variable_155;
	Parms.Temp_int_Variable_31 = Temp_int_Variable_31;
	Parms.K2Node_Select_Default_30 = K2Node_Select_Default_30;
	Parms.Temp_text_Variable_156 = Temp_text_Variable_156;
	Parms.Temp_text_Variable_157 = Temp_text_Variable_157;
	Parms.Temp_text_Variable_158 = Temp_text_Variable_158;
	Parms.Temp_text_Variable_159 = Temp_text_Variable_159;
	Parms.Temp_text_Variable_160 = Temp_text_Variable_160;
	Parms.Temp_int_Variable_32 = Temp_int_Variable_32;
	Parms.K2Node_Select_Default_31 = K2Node_Select_Default_31;
	Parms.Temp_text_Variable_161 = Temp_text_Variable_161;
	Parms.Temp_text_Variable_162 = Temp_text_Variable_162;
	Parms.Temp_text_Variable_163 = Temp_text_Variable_163;
	Parms.Temp_text_Variable_164 = Temp_text_Variable_164;
	Parms.Temp_text_Variable_165 = Temp_text_Variable_165;
	Parms.Temp_int_Variable_33 = Temp_int_Variable_33;
	Parms.K2Node_Select_Default_32 = K2Node_Select_Default_32;
	Parms.Temp_text_Variable_166 = Temp_text_Variable_166;
	Parms.Temp_text_Variable_167 = Temp_text_Variable_167;
	Parms.Temp_text_Variable_168 = Temp_text_Variable_168;
	Parms.Temp_text_Variable_169 = Temp_text_Variable_169;
	Parms.Temp_text_Variable_170 = Temp_text_Variable_170;
	Parms.Temp_int_Variable_34 = Temp_int_Variable_34;
	Parms.K2Node_Select_Default_33 = K2Node_Select_Default_33;
	Parms.Temp_text_Variable_171 = Temp_text_Variable_171;
	Parms.Temp_text_Variable_172 = Temp_text_Variable_172;
	Parms.Temp_text_Variable_173 = Temp_text_Variable_173;
	Parms.Temp_text_Variable_174 = Temp_text_Variable_174;
	Parms.Temp_text_Variable_175 = Temp_text_Variable_175;
	Parms.Temp_int_Variable_35 = Temp_int_Variable_35;
	Parms.K2Node_Select_Default_34 = K2Node_Select_Default_34;
	Parms.Temp_text_Variable_176 = Temp_text_Variable_176;
	Parms.Temp_text_Variable_177 = Temp_text_Variable_177;
	Parms.Temp_text_Variable_178 = Temp_text_Variable_178;
	Parms.Temp_text_Variable_179 = Temp_text_Variable_179;
	Parms.Temp_text_Variable_180 = Temp_text_Variable_180;
	Parms.Temp_int_Variable_36 = Temp_int_Variable_36;
	Parms.K2Node_Select_Default_35 = K2Node_Select_Default_35;
	Parms.Temp_text_Variable_181 = Temp_text_Variable_181;
	Parms.Temp_text_Variable_182 = Temp_text_Variable_182;
	Parms.Temp_text_Variable_183 = Temp_text_Variable_183;
	Parms.Temp_text_Variable_184 = Temp_text_Variable_184;
	Parms.Temp_text_Variable_185 = Temp_text_Variable_185;
	Parms.Temp_int_Variable_37 = Temp_int_Variable_37;
	Parms.K2Node_Select_Default_36 = K2Node_Select_Default_36;
	Parms.Temp_text_Variable_186 = Temp_text_Variable_186;
	Parms.Temp_text_Variable_187 = Temp_text_Variable_187;
	Parms.Temp_text_Variable_188 = Temp_text_Variable_188;
	Parms.Temp_text_Variable_189 = Temp_text_Variable_189;
	Parms.Temp_text_Variable_190 = Temp_text_Variable_190;
	Parms.Temp_int_Variable_38 = Temp_int_Variable_38;
	Parms.K2Node_Select_Default_37 = K2Node_Select_Default_37;
	Parms.Temp_text_Variable_191 = Temp_text_Variable_191;
	Parms.Temp_text_Variable_192 = Temp_text_Variable_192;
	Parms.Temp_text_Variable_193 = Temp_text_Variable_193;
	Parms.Temp_text_Variable_194 = Temp_text_Variable_194;
	Parms.Temp_text_Variable_195 = Temp_text_Variable_195;
	Parms.Temp_int_Variable_39 = Temp_int_Variable_39;
	Parms.K2Node_Select_Default_38 = K2Node_Select_Default_38;
	Parms.Temp_text_Variable_196 = Temp_text_Variable_196;
	Parms.Temp_text_Variable_197 = Temp_text_Variable_197;
	Parms.Temp_text_Variable_198 = Temp_text_Variable_198;
	Parms.Temp_text_Variable_199 = Temp_text_Variable_199;
	Parms.Temp_text_Variable_200 = Temp_text_Variable_200;
	Parms.Temp_int_Variable_40 = Temp_int_Variable_40;
	Parms.K2Node_Select_Default_39 = K2Node_Select_Default_39;
	Parms.Temp_text_Variable_201 = Temp_text_Variable_201;
	Parms.Temp_text_Variable_202 = Temp_text_Variable_202;
	Parms.Temp_text_Variable_203 = Temp_text_Variable_203;
	Parms.Temp_text_Variable_204 = Temp_text_Variable_204;
	Parms.Temp_text_Variable_205 = Temp_text_Variable_205;
	Parms.Temp_int_Variable_41 = Temp_int_Variable_41;
	Parms.K2Node_Select_Default_40 = K2Node_Select_Default_40;
	Parms.Temp_text_Variable_206 = Temp_text_Variable_206;
	Parms.Temp_text_Variable_207 = Temp_text_Variable_207;
	Parms.Temp_text_Variable_208 = Temp_text_Variable_208;
	Parms.Temp_text_Variable_209 = Temp_text_Variable_209;
	Parms.Temp_text_Variable_210 = Temp_text_Variable_210;
	Parms.Temp_int_Variable_42 = Temp_int_Variable_42;
	Parms.K2Node_Select_Default_41 = K2Node_Select_Default_41;
	Parms.Temp_text_Variable_211 = Temp_text_Variable_211;
	Parms.Temp_text_Variable_212 = Temp_text_Variable_212;
	Parms.Temp_text_Variable_213 = Temp_text_Variable_213;
	Parms.Temp_text_Variable_214 = Temp_text_Variable_214;
	Parms.Temp_text_Variable_215 = Temp_text_Variable_215;
	Parms.Temp_int_Variable_43 = Temp_int_Variable_43;
	Parms.K2Node_Select_Default_42 = K2Node_Select_Default_42;
	Parms.Temp_text_Variable_216 = Temp_text_Variable_216;
	Parms.Temp_text_Variable_217 = Temp_text_Variable_217;
	Parms.Temp_text_Variable_218 = Temp_text_Variable_218;
	Parms.Temp_text_Variable_219 = Temp_text_Variable_219;
	Parms.Temp_text_Variable_220 = Temp_text_Variable_220;
	Parms.Temp_int_Variable_44 = Temp_int_Variable_44;
	Parms.K2Node_Select_Default_43 = K2Node_Select_Default_43;
	Parms.Temp_text_Variable_221 = Temp_text_Variable_221;
	Parms.Temp_text_Variable_222 = Temp_text_Variable_222;
	Parms.Temp_text_Variable_223 = Temp_text_Variable_223;
	Parms.Temp_text_Variable_224 = Temp_text_Variable_224;
	Parms.Temp_text_Variable_225 = Temp_text_Variable_225;
	Parms.Temp_int_Variable_45 = Temp_int_Variable_45;
	Parms.K2Node_Select_Default_44 = K2Node_Select_Default_44;
	Parms.Temp_text_Variable_226 = Temp_text_Variable_226;
	Parms.Temp_text_Variable_227 = Temp_text_Variable_227;
	Parms.Temp_text_Variable_228 = Temp_text_Variable_228;
	Parms.Temp_text_Variable_229 = Temp_text_Variable_229;
	Parms.Temp_text_Variable_230 = Temp_text_Variable_230;
	Parms.Temp_int_Variable_46 = Temp_int_Variable_46;
	Parms.K2Node_Select_Default_45 = K2Node_Select_Default_45;
	Parms.Temp_text_Variable_231 = Temp_text_Variable_231;
	Parms.Temp_text_Variable_232 = Temp_text_Variable_232;
	Parms.Temp_text_Variable_233 = Temp_text_Variable_233;
	Parms.Temp_text_Variable_234 = Temp_text_Variable_234;
	Parms.Temp_text_Variable_235 = Temp_text_Variable_235;
	Parms.Temp_int_Variable_47 = Temp_int_Variable_47;
	Parms.K2Node_Select_Default_46 = K2Node_Select_Default_46;
	Parms.Temp_text_Variable_236 = Temp_text_Variable_236;
	Parms.Temp_text_Variable_237 = Temp_text_Variable_237;
	Parms.Temp_text_Variable_238 = Temp_text_Variable_238;
	Parms.Temp_text_Variable_239 = Temp_text_Variable_239;
	Parms.Temp_text_Variable_240 = Temp_text_Variable_240;
	Parms.Temp_int_Variable_48 = Temp_int_Variable_48;
	Parms.K2Node_Select_Default_47 = K2Node_Select_Default_47;
	Parms.Temp_text_Variable_241 = Temp_text_Variable_241;
	Parms.Temp_text_Variable_242 = Temp_text_Variable_242;
	Parms.Temp_text_Variable_243 = Temp_text_Variable_243;
	Parms.Temp_text_Variable_244 = Temp_text_Variable_244;
	Parms.Temp_text_Variable_245 = Temp_text_Variable_245;
	Parms.K2Node_Select_Default_48 = K2Node_Select_Default_48;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable_246 = Temp_text_Variable_246;
	Parms.Temp_text_Variable_247 = Temp_text_Variable_247;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_int_Variable_49 = Temp_int_Variable_49;
	Parms.K2Node_Select_Default_49 = K2Node_Select_Default_49;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Config                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCustomGamepadConfig_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::OnConfigChanged(enum class EFortInputActionGroup Mode, int32 Config, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsCustomGamepadConfig_ReturnValue)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "OnConfigChanged");

	Params::UGamepadMappingInfo_v3_C_OnConfigChanged_Params Parms;

	Parms.Mode = Mode;
	Parms.Config = Config;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_IsCustomGamepadConfig_ReturnValue = CallFunc_IsCustomGamepadConfig_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortInputActionGroup   Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Configuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTexture2D>>K2Node_Select_Default_2                                          (ZeroConstructor, ReferenceParm)

void UGamepadMappingInfo_v3_C::Update_Displayed_Mapping(int32 Platform, enum class EFortInputActionGroup Mode, int32 Configuration, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, int32 Temp_int_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, int32 Temp_int_Variable_2, TArray<TSoftObjectPtr<class UTexture2D>>& K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Update Displayed Mapping");

	Params::UGamepadMappingInfo_v3_C_Update_Displayed_Mapping_Params Parms;

	Parms.Platform = Platform;
	Parms.Mode = Mode;
	Parms.Configuration = Configuration;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::OnLoaded_CDBC1B27496027B96D10BC9A64224F3D(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "OnLoaded_CDBC1B27496027B96D10BC9A64224F3D");

	Params::UGamepadMappingInfo_v3_C_OnLoaded_CDBC1B27496027B96D10BC9A64224F3D_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::Construct()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Construct");

	Params::UGamepadMappingInfo_v3_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::Update_Controller_Images()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Update Controller Images");

	Params::UGamepadMappingInfo_v3_C_Update_Controller_Images_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::OnButtonClicked_Bind(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "OnButtonClicked_Bind");

	Params::UGamepadMappingInfo_v3_C_OnButtonClicked_Bind_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::UpdateCustomButtons()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "UpdateCustomButtons");

	Params::UGamepadMappingInfo_v3_C_UpdateCustomButtons_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::DeadZoneTabSelected()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "DeadZoneTabSelected");

	Params::UGamepadMappingInfo_v3_C_DeadZoneTabSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::DeadZoneTabDeselected()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "DeadZoneTabDeselected");

	Params::UGamepadMappingInfo_v3_C_DeadZoneTabDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::DeadzoneMoveResetButtonClicked_Bind(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "DeadzoneMoveResetButtonClicked_Bind");

	Params::UGamepadMappingInfo_v3_C_DeadzoneMoveResetButtonClicked_Bind_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::DeadzoneLookResetButtonClicked_Bind(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "DeadzoneLookResetButtonClicked_Bind");

	Params::UGamepadMappingInfo_v3_C_DeadzoneLookResetButtonClicked_Bind_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetControllerImage_Texture                              (HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGamepadKeyTextButton_C*     K2Node_DynamicCast_AsGamepad_Key_Text_Button                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGamepadKeyTextButton_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTabIdAtIndex_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTabCount_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCustomButtonDataForKey_ActionName                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomButtonDataForKey_DescText                      ()
// class FName                        CallFunc_GetCustomButtonDataForKey_ActionName_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomButtonDataForKey_DescText_1                    ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCustomButtonDataForKey_ActionName_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCustomButtonDataForKey_DescText_2                    ()
// class UGamepadKeyTextButton_C*     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadMappingInfo_v3_C::ExecuteUbergraph_GamepadMappingInfo_v3(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetControllerImage_Texture, bool CallFunc_IsAssetNull_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCommonButton* K2Node_CustomEvent_Button_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, TArray<class UGamepadKeyTextButton_C*>& K2Node_MakeArray_Array, class FName CallFunc_GetTabIdAtIndex_ReturnValue, class FName CallFunc_GetTabIdAtIndex_ReturnValue_1, class FName CallFunc_GetTabIdAtIndex_ReturnValue_2, class FName CallFunc_GetTabIdAtIndex_ReturnValue_3, int32 CallFunc_GetTabCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, class UGamepadKeyTextButton_C* CallFunc_Array_Get_Item, class FName CallFunc_GetCustomButtonDataForKey_ActionName, class FText CallFunc_GetCustomButtonDataForKey_DescText, class FName CallFunc_GetCustomButtonDataForKey_ActionName_1, class FText CallFunc_GetCustomButtonDataForKey_DescText_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UCommonButton* K2Node_CustomEvent_Button_1, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_1, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, class FName CallFunc_GetCustomButtonDataForKey_ActionName_2, class FText CallFunc_GetCustomButtonDataForKey_DescText_2, class UGamepadKeyTextButton_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "ExecuteUbergraph_GamepadMappingInfo_v3");

	Params::UGamepadMappingInfo_v3_C_ExecuteUbergraph_GamepadMappingInfo_v3_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerImage_Texture = CallFunc_GetControllerImage_Texture;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_Button_2 = K2Node_CustomEvent_Button_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsGamepad_Key_Text_Button = K2Node_DynamicCast_AsGamepad_Key_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue = CallFunc_GetTabIdAtIndex_ReturnValue;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue_1 = CallFunc_GetTabIdAtIndex_ReturnValue_1;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue_2 = CallFunc_GetTabIdAtIndex_ReturnValue_2;
	Parms.CallFunc_GetTabIdAtIndex_ReturnValue_3 = CallFunc_GetTabIdAtIndex_ReturnValue_3;
	Parms.CallFunc_GetTabCount_ReturnValue = CallFunc_GetTabCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCustomButtonDataForKey_ActionName = CallFunc_GetCustomButtonDataForKey_ActionName;
	Parms.CallFunc_GetCustomButtonDataForKey_DescText = CallFunc_GetCustomButtonDataForKey_DescText;
	Parms.CallFunc_GetCustomButtonDataForKey_ActionName_1 = CallFunc_GetCustomButtonDataForKey_ActionName_1;
	Parms.CallFunc_GetCustomButtonDataForKey_DescText_1 = CallFunc_GetCustomButtonDataForKey_DescText_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_GetCustomButtonDataForKey_ActionName_2 = CallFunc_GetCustomButtonDataForKey_ActionName_2;
	Parms.CallFunc_GetCustomButtonDataForKey_DescText_2 = CallFunc_GetCustomButtonDataForKey_DescText_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::CustomButtonNavLeft__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "CustomButtonNavLeft__DelegateSignature");

	Params::UGamepadMappingInfo_v3_C_CustomButtonNavLeft__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadMappingInfo_v3_C::Image_LightboxClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "Image_LightboxClicked__DelegateSignature");

	Params::UGamepadMappingInfo_v3_C_Image_LightboxClicked__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UGamepadMappingInfo_v3_C::CustomKeySelected__DelegateSignature(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("GamepadMappingInfo_v3_C", "CustomKeySelected__DelegateSignature");

	Params::UGamepadMappingInfo_v3_C_CustomKeySelected__DelegateSignature_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
