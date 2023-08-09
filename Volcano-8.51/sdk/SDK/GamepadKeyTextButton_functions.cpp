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


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadKeyTextButton_C::SetNonInteractableStyle()
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "SetNonInteractableStyle");

	Params::UGamepadKeyTextButton_C_SetNonInteractableStyle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHorizontalAlignment    ContentAlignment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::SetContentAlignment(enum class EHorizontalAlignment ContentAlignment)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "SetContentAlignment");

	Params::UGamepadKeyTextButton_C_SetContentAlignment_Params Parms;

	Parms.ContentAlignment = ContentAlignment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelSlot*                  CallFunc_GetContentSlot_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKeyTextButton_C::UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "UpdateContentAlignment");

	Params::UGamepadKeyTextButton_C_UpdateContentAlignment_Params Parms;

	Parms.CallFunc_GetContentSlot_ReturnValue = CallFunc_GetContentSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "OnListItemObjectSet");

	Params::UGamepadKeyTextButton_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        DescText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::SetData(const struct FKey& Key, class FText DescText, class FName ActionName)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "SetData");

	Params::UGamepadKeyTextButton_C_SetData_Params Parms;

	Parms.Key = Key;
	Parms.DescText = DescText;
	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadKeyTextButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "PreConstruct");

	Params::UGamepadKeyTextButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        DescText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::SetDataAndUpdateButton(const struct FKey& Key, class FText DescText, class FName ActionName)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "SetDataAndUpdateButton");

	Params::UGamepadKeyTextButton_C_SetDataAndUpdateButton_Params Parms;

	Parms.Key = Key;
	Parms.DescText = DescText;
	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGamepadKeyTextButton_C*     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::UpdateButton(class UGamepadKeyTextButton_C* Button)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "UpdateButton");

	Params::UGamepadKeyTextButton_C_UpdateButton_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGamepadKeyTextButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "SetTabLabelInfo");

	Params::UGamepadKeyTextButton_C_SetTabLabelInfo_Params Parms;

	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     K2Node_DynamicCast_AsGamepad_Key_Text_Button                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_CustomEvent_Key_1                                         (HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_DescText_1                                    ()
// class FName                        K2Node_CustomEvent_ActionName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_CustomEvent_Key                                           (HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_DescText                                      ()
// class FName                        K2Node_CustomEvent_ActionName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGamepadKeyTextButton_C*     K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::ExecuteUbergraph_GamepadKeyTextButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UObject* K2Node_Event_ListItemObject, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess, const struct FKey& K2Node_CustomEvent_Key_1, class FText K2Node_CustomEvent_DescText_1, class FName K2Node_CustomEvent_ActionName_1, bool K2Node_Event_IsDesignTime, const struct FKey& K2Node_CustomEvent_Key, class FText K2Node_CustomEvent_DescText, class FName K2Node_CustomEvent_ActionName, class UGamepadKeyTextButton_C* K2Node_CustomEvent_Button, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "ExecuteUbergraph_GamepadKeyTextButton");

	Params::UGamepadKeyTextButton_C_ExecuteUbergraph_GamepadKeyTextButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsGamepad_Key_Text_Button = K2Node_DynamicCast_AsGamepad_Key_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Key_1 = K2Node_CustomEvent_Key_1;
	Parms.K2Node_CustomEvent_DescText_1 = K2Node_CustomEvent_DescText_1;
	Parms.K2Node_CustomEvent_ActionName_1 = K2Node_CustomEvent_ActionName_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_DescText = K2Node_CustomEvent_DescText;
	Parms.K2Node_CustomEvent_ActionName = K2Node_CustomEvent_ActionName;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UGamepadKeyTextButton_C::ChangeTheBinding_Button__DelegateSignature(class FName ActionName, const struct FKey& Key)
{
	static auto Func = Class->GetFunction("GamepadKeyTextButton_C", "ChangeTheBinding_Button__DelegateSignature");

	Params::UGamepadKeyTextButton_C_ChangeTheBinding_Button__DelegateSignature_Params Parms;

	Parms.ActionName = ActionName;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
