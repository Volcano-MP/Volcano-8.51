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


// Function AlterationsWidget.AlterationsWidget_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::Clear()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "Clear");

	Params::UAlterationsWidget_C_Clear_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.ClearAndInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IntroAlterations                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::ClearAndInitialize(bool IntroAlterations)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "ClearAndInitialize");

	Params::UAlterationsWidget_C_ClearAndInitialize_Params Parms;

	Parms.IntroAlterations = IntroAlterations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::Reset()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "Reset");

	Params::UAlterationsWidget_C_Reset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.CreateAnimations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IntroAnims                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetButtonCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidgetButton_C*   K2Node_DynamicCast_AsAlteration_Widget_Button                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::CreateAnimations(bool IntroAnims, int32 Temp_int_Variable, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, int32 CallFunc_GetButtonCount_ReturnValue, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "CreateAnimations");

	Params::UAlterationsWidget_C_CreateAnimations_Params Parms;

	Parms.IntroAnims = IntroAnims;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_GetButtonCount_ReturnValue = CallFunc_GetButtonCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlteration_Widget_Button = K2Node_DynamicCast_AsAlteration_Widget_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetButtonCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidgetButton_C*   K2Node_DynamicCast_AsAlteration_Widget_Button                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::IntroAnim(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetButtonCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "IntroAnim");

	Params::UAlterationsWidget_C_IntroAnim_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtonCount_ReturnValue = CallFunc_GetButtonCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlteration_Widget_Button = K2Node_DynamicCast_AsAlteration_Widget_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "CenterWidget");

	Params::UAlterationsWidget_C_CenterWidget_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue_1 = CallFunc_GetButtonAtIndex_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.SetupBorders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::SetupBorders()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "SetupBorders");

	Params::UAlterationsWidget_C_SetupBorders_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.TriggerModificationAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ModifiedSlotIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               CallFunc_GetButtonAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidgetButton_C*   K2Node_DynamicCast_AsAlteration_Widget_Button                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::TriggerModificationAnim(int32 ModifiedSlotIndex, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "TriggerModificationAnim");

	Params::UAlterationsWidget_C_TriggerModificationAnim_Params Parms;

	Parms.ModifiedSlotIndex = ModifiedSlotIndex;
	Parms.CallFunc_GetButtonAtIndex_ReturnValue = CallFunc_GetButtonAtIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsAlteration_Widget_Button = K2Node_DynamicCast_AsAlteration_Widget_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.SetupAlteration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*           Alteration                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationInfo*         AlterationInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidgetButton_C*   K2Node_DynamicCast_AsAlteration_Widget_Button                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAlterationWidget_C*         K2Node_DynamicCast_AsAlteration_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::SetupAlteration(class UCommonUserWidget* Alteration, class UFortAlterationInfo* AlterationInfo, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess, class UAlterationWidget_C* K2Node_DynamicCast_AsAlteration_Widget, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "SetupAlteration");

	Params::UAlterationsWidget_C_SetupAlteration_Params Parms;

	Parms.Alteration = Alteration;
	Parms.AlterationInfo = AlterationInfo;
	Parms.K2Node_DynamicCast_AsAlteration_Widget_Button = K2Node_DynamicCast_AsAlteration_Widget_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAlteration_Widget = K2Node_DynamicCast_AsAlteration_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.CreateAlterationWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidgetButton_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAlterationWidget_C*         CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCommonUserWidget* UAlterationsWidget_C::CreateAlterationWidget(enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAlterationWidgetButton_C* CallFunc_Create_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UAlterationWidget_C* CallFunc_Create_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "CreateAlterationWidget");

	Params::UAlterationsWidget_C_CreateAlterationWidget_Params Parms;

	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue_1 = CallFunc_GetType_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AlterationsWidget.AlterationsWidget_C.GenerateAlteration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationInfo*         AlterationInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           Alteration                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           CallFunc_CreateAlterationWidget_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlterationUnlocked_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::GenerateAlteration(class UFortAlterationInfo* AlterationInfo, class UCommonUserWidget* Alteration, class UCommonUserWidget* CallFunc_CreateAlterationWidget_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "GenerateAlteration");

	Params::UAlterationsWidget_C_GenerateAlteration_Params Parms;

	Parms.AlterationInfo = AlterationInfo;
	Parms.Alteration = Alteration;
	Parms.CallFunc_CreateAlterationWidget_ReturnValue = CallFunc_CreateAlterationWidget_ReturnValue;
	Parms.CallFunc_IsAlterationUnlocked_ReturnValue = CallFunc_IsAlterationUnlocked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.AddAlterationToVerticalbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*           Alteration                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUnlocked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     SpacePadding                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                DestinationVerticalBox                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAlterationWidget_C*         K2Node_DynamicCast_AsAlteration_Widget                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::AddAlterationToVerticalbox(class UCommonUserWidget* Alteration, bool IsUnlocked, const struct FMargin& SpacePadding, class UVerticalBox* DestinationVerticalBox, bool Temp_bool_Variable, bool K2Node_Select_Default, class UAlterationWidget_C* K2Node_DynamicCast_AsAlteration_Widget, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool Temp_bool_Variable_1, class UVerticalBox* K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "AddAlterationToVerticalbox");

	Params::UAlterationsWidget_C_AddAlterationToVerticalbox_Params Parms;

	Parms.Alteration = Alteration;
	Parms.IsUnlocked = IsUnlocked;
	Parms.SpacePadding = SpacePadding;
	Parms.DestinationVerticalBox = DestinationVerticalBox;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsAlteration_Widget = K2Node_DynamicCast_AsAlteration_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PerkCount                                                        (Edit, BlueprintVisible)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::UpdatePerksMessage(class FText PerkCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "UpdatePerksMessage");

	Params::UAlterationsWidget_C_UpdatePerksMessage_Params Parms;

	Parms.PerkCount = PerkCount;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "Construct");

	Params::UAlterationsWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIntroAlterations                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::OnItemChanged(bool bIntroAlterations)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnItemChanged");

	Params::UAlterationsWidget_C_OnItemChanged_Params Parms;

	Parms.bIntroAlterations = bIntroAlterations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnItemToCompareWithChanged()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnItemToCompareWithChanged");

	Params::UAlterationsWidget_C_OnItemToCompareWithChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnStateChanged()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnStateChanged");

	Params::UAlterationsWidget_C_OnStateChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAlterationInfo*         AlterationInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::OnGenerateAlteration(class UFortAlterationInfo* AlterationInfo)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnGenerateAlteration");

	Params::UAlterationsWidget_C_OnGenerateAlteration_Params Parms;

	Parms.AlterationInfo = AlterationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnFocusFirstItem
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::OnFocusFirstItem()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnFocusFirstItem");

	Params::UAlterationsWidget_C_OnFocusFirstItem_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.OnAlterationSlotIndexModifiedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              ModifiedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::OnAlterationSlotIndexModifiedBP(int32 ModifiedIndex)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "OnAlterationSlotIndexModifiedBP");

	Params::UAlterationsWidget_C_OnAlterationSlotIndexModifiedBP_Params Parms;

	Parms.ModifiedIndex = ModifiedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationsWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "Destruct");

	Params::UAlterationsWidget_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationsWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "PreConstruct");

	Params::UAlterationsWidget_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           CallFunc_CreateAlterationWidget_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIntroAlterations                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAlterationInfo*         K2Node_Event_AlterationInfo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ModifiedIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUserWidget*           CallFunc_CreateAlterationWidget_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           CallFunc_CreateAlterationWidget_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           CallFunc_CreateAlterationWidget_ReturnValue_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationsWidget_C::ExecuteUbergraph_AlterationsWidget(int32 EntryPoint, class UCommonUserWidget* CallFunc_CreateAlterationWidget_ReturnValue, bool K2Node_Event_bIntroAlterations, class UFortAlterationInfo* K2Node_Event_AlterationInfo, int32 K2Node_Event_ModifiedIndex, bool K2Node_Event_IsDesignTime, class UCommonUserWidget* CallFunc_CreateAlterationWidget_ReturnValue_1, class UCommonUserWidget* CallFunc_CreateAlterationWidget_ReturnValue_2, class UCommonUserWidget* CallFunc_CreateAlterationWidget_ReturnValue_3)
{
	static auto Func = Class->GetFunction("AlterationsWidget_C", "ExecuteUbergraph_AlterationsWidget");

	Params::UAlterationsWidget_C_ExecuteUbergraph_AlterationsWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateAlterationWidget_ReturnValue = CallFunc_CreateAlterationWidget_ReturnValue;
	Parms.K2Node_Event_bIntroAlterations = K2Node_Event_bIntroAlterations;
	Parms.K2Node_Event_AlterationInfo = K2Node_Event_AlterationInfo;
	Parms.K2Node_Event_ModifiedIndex = K2Node_Event_ModifiedIndex;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CreateAlterationWidget_ReturnValue_1 = CallFunc_CreateAlterationWidget_ReturnValue_1;
	Parms.CallFunc_CreateAlterationWidget_ReturnValue_2 = CallFunc_CreateAlterationWidget_ReturnValue_2;
	Parms.CallFunc_CreateAlterationWidget_ReturnValue_3 = CallFunc_CreateAlterationWidget_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
