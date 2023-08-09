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


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsCurrentCardChoicePack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsChoicePack                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChoicePack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::IsCurrentCardChoicePack(bool* IsChoicePack, class UFortStoreContext* CallFunc_GetContext_ReturnValue, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsChoicePack_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "IsCurrentCardChoicePack");

	Params::AStoreCardReveal_BP_C_IsCurrentCardChoicePack_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsChoicePack_ReturnValue = CallFunc_IsChoicePack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsChoicePack != nullptr)
		*IsChoicePack = Parms.IsChoicePack;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetRarityColor_CC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    MID_Choice_Sticker                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             ItemRarity                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseItemRarity                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetRarityColor_CC(int32 ChoiceIndex, class UMaterialInstanceDynamic* MID_Choice_Sticker, enum class EFortRarity ItemRarity, bool bUseItemRarity, class UFortStoreContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, enum class EFortRarity K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetRarityColor_CC");

	Params::AStoreCardReveal_BP_C_SetRarityColor_CC_Params Parms;

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.MID_Choice_Sticker = MID_Choice_Sticker;
	Parms.ItemRarity = ItemRarity;
	Parms.bUseItemRarity = bUseItemRarity;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetVisibilityByItemDef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*            Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         ItemDef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_33                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_34                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_35                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_36                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_37                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_38                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_39                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_40                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_41                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_42                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_43                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_44                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_45                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_46                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_47                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_48                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_49                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_50                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_51                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_52                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_53                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_54                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_55                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_56                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_57                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_58                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_59                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_60                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_61                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_62                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_63                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_64                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_65                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_66                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_67                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_68                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_69                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_70                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_71                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_72                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_73                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_74                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_75                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_76                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_77                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_78                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_79                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_80                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_81                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_82                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_83                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_84                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_85                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_86                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_87                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_88                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_89                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_90                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_91                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_92                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetVisibilityByItemDef(class UWidgetComponent* Widget, class UFortItemDefinition* ItemDef, bool Hide, bool* Visibility, enum class EFortItemType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool Temp_bool_Variable_23, bool Temp_bool_Variable_24, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, bool Temp_bool_Variable_29, bool Temp_bool_Variable_30, bool Temp_bool_Variable_31, bool Temp_bool_Variable_32, bool Temp_bool_Variable_33, bool Temp_bool_Variable_34, bool Temp_bool_Variable_35, bool Temp_bool_Variable_36, bool Temp_bool_Variable_37, bool Temp_bool_Variable_38, bool Temp_bool_Variable_39, bool Temp_bool_Variable_40, bool Temp_bool_Variable_41, bool Temp_bool_Variable_42, bool Temp_bool_Variable_43, bool Temp_bool_Variable_44, bool Temp_bool_Variable_45, bool Temp_bool_Variable_46, bool Temp_bool_Variable_47, bool Temp_bool_Variable_48, bool Temp_bool_Variable_49, bool Temp_bool_Variable_50, bool Temp_bool_Variable_51, bool Temp_bool_Variable_52, bool Temp_bool_Variable_53, bool Temp_bool_Variable_54, bool Temp_bool_Variable_55, bool Temp_bool_Variable_56, bool Temp_bool_Variable_57, bool Temp_bool_Variable_58, bool Temp_bool_Variable_59, bool Temp_bool_Variable_60, bool Temp_bool_Variable_61, bool Temp_bool_Variable_62, bool Temp_bool_Variable_63, bool Temp_bool_Variable_64, bool Temp_bool_Variable_65, bool Temp_bool_Variable_66, bool Temp_bool_Variable_67, bool Temp_bool_Variable_68, bool Temp_bool_Variable_69, bool Temp_bool_Variable_70, bool Temp_bool_Variable_71, bool Temp_bool_Variable_72, bool Temp_bool_Variable_73, bool Temp_bool_Variable_74, bool Temp_bool_Variable_75, bool Temp_bool_Variable_76, bool Temp_bool_Variable_77, bool Temp_bool_Variable_78, bool Temp_bool_Variable_79, bool Temp_bool_Variable_80, bool Temp_bool_Variable_81, bool Temp_bool_Variable_82, bool Temp_bool_Variable_83, bool Temp_bool_Variable_84, bool Temp_bool_Variable_85, bool Temp_bool_Variable_86, bool Temp_bool_Variable_87, bool Temp_bool_Variable_88, bool Temp_bool_Variable_89, bool Temp_bool_Variable_90, bool Temp_bool_Variable_91, bool Temp_bool_Variable_92, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetVisibilityByItemDef");

	Params::AStoreCardReveal_BP_C_SetVisibilityByItemDef_Params Parms;

	Parms.Widget = Widget;
	Parms.ItemDef = ItemDef;
	Parms.Hide = Hide;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.Temp_bool_Variable_20 = Temp_bool_Variable_20;
	Parms.Temp_bool_Variable_21 = Temp_bool_Variable_21;
	Parms.Temp_bool_Variable_22 = Temp_bool_Variable_22;
	Parms.Temp_bool_Variable_23 = Temp_bool_Variable_23;
	Parms.Temp_bool_Variable_24 = Temp_bool_Variable_24;
	Parms.Temp_bool_Variable_25 = Temp_bool_Variable_25;
	Parms.Temp_bool_Variable_26 = Temp_bool_Variable_26;
	Parms.Temp_bool_Variable_27 = Temp_bool_Variable_27;
	Parms.Temp_bool_Variable_28 = Temp_bool_Variable_28;
	Parms.Temp_bool_Variable_29 = Temp_bool_Variable_29;
	Parms.Temp_bool_Variable_30 = Temp_bool_Variable_30;
	Parms.Temp_bool_Variable_31 = Temp_bool_Variable_31;
	Parms.Temp_bool_Variable_32 = Temp_bool_Variable_32;
	Parms.Temp_bool_Variable_33 = Temp_bool_Variable_33;
	Parms.Temp_bool_Variable_34 = Temp_bool_Variable_34;
	Parms.Temp_bool_Variable_35 = Temp_bool_Variable_35;
	Parms.Temp_bool_Variable_36 = Temp_bool_Variable_36;
	Parms.Temp_bool_Variable_37 = Temp_bool_Variable_37;
	Parms.Temp_bool_Variable_38 = Temp_bool_Variable_38;
	Parms.Temp_bool_Variable_39 = Temp_bool_Variable_39;
	Parms.Temp_bool_Variable_40 = Temp_bool_Variable_40;
	Parms.Temp_bool_Variable_41 = Temp_bool_Variable_41;
	Parms.Temp_bool_Variable_42 = Temp_bool_Variable_42;
	Parms.Temp_bool_Variable_43 = Temp_bool_Variable_43;
	Parms.Temp_bool_Variable_44 = Temp_bool_Variable_44;
	Parms.Temp_bool_Variable_45 = Temp_bool_Variable_45;
	Parms.Temp_bool_Variable_46 = Temp_bool_Variable_46;
	Parms.Temp_bool_Variable_47 = Temp_bool_Variable_47;
	Parms.Temp_bool_Variable_48 = Temp_bool_Variable_48;
	Parms.Temp_bool_Variable_49 = Temp_bool_Variable_49;
	Parms.Temp_bool_Variable_50 = Temp_bool_Variable_50;
	Parms.Temp_bool_Variable_51 = Temp_bool_Variable_51;
	Parms.Temp_bool_Variable_52 = Temp_bool_Variable_52;
	Parms.Temp_bool_Variable_53 = Temp_bool_Variable_53;
	Parms.Temp_bool_Variable_54 = Temp_bool_Variable_54;
	Parms.Temp_bool_Variable_55 = Temp_bool_Variable_55;
	Parms.Temp_bool_Variable_56 = Temp_bool_Variable_56;
	Parms.Temp_bool_Variable_57 = Temp_bool_Variable_57;
	Parms.Temp_bool_Variable_58 = Temp_bool_Variable_58;
	Parms.Temp_bool_Variable_59 = Temp_bool_Variable_59;
	Parms.Temp_bool_Variable_60 = Temp_bool_Variable_60;
	Parms.Temp_bool_Variable_61 = Temp_bool_Variable_61;
	Parms.Temp_bool_Variable_62 = Temp_bool_Variable_62;
	Parms.Temp_bool_Variable_63 = Temp_bool_Variable_63;
	Parms.Temp_bool_Variable_64 = Temp_bool_Variable_64;
	Parms.Temp_bool_Variable_65 = Temp_bool_Variable_65;
	Parms.Temp_bool_Variable_66 = Temp_bool_Variable_66;
	Parms.Temp_bool_Variable_67 = Temp_bool_Variable_67;
	Parms.Temp_bool_Variable_68 = Temp_bool_Variable_68;
	Parms.Temp_bool_Variable_69 = Temp_bool_Variable_69;
	Parms.Temp_bool_Variable_70 = Temp_bool_Variable_70;
	Parms.Temp_bool_Variable_71 = Temp_bool_Variable_71;
	Parms.Temp_bool_Variable_72 = Temp_bool_Variable_72;
	Parms.Temp_bool_Variable_73 = Temp_bool_Variable_73;
	Parms.Temp_bool_Variable_74 = Temp_bool_Variable_74;
	Parms.Temp_bool_Variable_75 = Temp_bool_Variable_75;
	Parms.Temp_bool_Variable_76 = Temp_bool_Variable_76;
	Parms.Temp_bool_Variable_77 = Temp_bool_Variable_77;
	Parms.Temp_bool_Variable_78 = Temp_bool_Variable_78;
	Parms.Temp_bool_Variable_79 = Temp_bool_Variable_79;
	Parms.Temp_bool_Variable_80 = Temp_bool_Variable_80;
	Parms.Temp_bool_Variable_81 = Temp_bool_Variable_81;
	Parms.Temp_bool_Variable_82 = Temp_bool_Variable_82;
	Parms.Temp_bool_Variable_83 = Temp_bool_Variable_83;
	Parms.Temp_bool_Variable_84 = Temp_bool_Variable_84;
	Parms.Temp_bool_Variable_85 = Temp_bool_Variable_85;
	Parms.Temp_bool_Variable_86 = Temp_bool_Variable_86;
	Parms.Temp_bool_Variable_87 = Temp_bool_Variable_87;
	Parms.Temp_bool_Variable_88 = Temp_bool_Variable_88;
	Parms.Temp_bool_Variable_89 = Temp_bool_Variable_89;
	Parms.Temp_bool_Variable_90 = Temp_bool_Variable_90;
	Parms.Temp_bool_Variable_91 = Temp_bool_Variable_91;
	Parms.Temp_bool_Variable_92 = Temp_bool_Variable_92;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RarityEnumToText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortRarity             InRarity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OutRarity                                                        (Parm, OutParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::RarityEnumToText(enum class EFortRarity InRarity, class FText* OutRarity, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "RarityEnumToText");

	Params::AStoreCardReveal_BP_C_RarityEnumToText_Params Parms;

	Parms.InRarity = InRarity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRarity != nullptr)
		*OutRarity = Parms.OutRarity;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.IsDefender
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDefender                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Result                                                           (Parm, OutParm)
// class FText                        Temp_text_Variable                                               ()
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_RarityEnumToText_OutRarity                              ()
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    ()
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   ()
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetSecondaryCategory_ItemCategoryText                   ()
// struct FSlateBrush                 CallFunc_GetSecondaryCategory_ItemCategoryBrush                  ()
// bool                               CallFunc_GetSecondaryCategory_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        Temp_text_Variable_87                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        Temp_text_Variable_88                                            ()
// class FText                        Temp_text_Variable_89                                            ()
// class FText                        Temp_text_Variable_90                                            ()
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    ()

void AStoreCardReveal_BP_C::IsDefender(class UFortAccountItemDefinition* Object, bool* IsDefender, class FText* Result, class FText Temp_text_Variable, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_RarityEnumToText_OutRarity, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_GetSecondaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetSecondaryCategory_ItemCategoryBrush, bool CallFunc_GetSecondaryCategory_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, enum class EFortItemType CallFunc_GetType_ReturnValue_1, class FText Temp_text_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, class FText Temp_text_Variable_86, class FText CallFunc_MakeLiteralText_ReturnValue, class FText Temp_text_Variable_87, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, enum class EFortItemType Temp_byte_Variable, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "IsDefender");

	Params::AStoreCardReveal_BP_C_IsDefender_Params Parms;

	Parms.Object = Object;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_RarityEnumToText_OutRarity = CallFunc_RarityEnumToText_OutRarity;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryText = CallFunc_GetSecondaryCategory_ItemCategoryText;
	Parms.CallFunc_GetSecondaryCategory_ItemCategoryBrush = CallFunc_GetSecondaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetSecondaryCategory_ReturnValue = CallFunc_GetSecondaryCategory_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetType_ReturnValue_1 = CallFunc_GetType_ReturnValue_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
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
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.Temp_text_Variable_87 = Temp_text_Variable_87;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDefender != nullptr)
		*IsDefender = Parms.IsDefender;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCB
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CCB_Rarity                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CCB_Text                                                         (Edit, BlueprintVisible)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChoiceCardCount_C*          K2Node_DynamicCast_AsChoice_Card_Count                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChoiceCardName_C*           K2Node_DynamicCast_AsChoice_Card_Name                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// int32                              CallFunc_GetOwnedItemCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetVisibilityByItemDef_Visibility                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetText_CCB(bool Hide, enum class EFortRarity CCB_Rarity, class FText CCB_Text, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool Temp_bool_Variable, class UChoiceCardCount_C* K2Node_DynamicCast_AsChoice_Card_Count, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UChoiceCardName_C* K2Node_DynamicCast_AsChoice_Card_Name, bool K2Node_DynamicCast_bSuccess_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_1, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess_2, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, class FText CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_GetOwnedItemCount_ReturnValue, bool CallFunc_SetVisibilityByItemDef_Visibility)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetText_CCB");

	Params::AStoreCardReveal_BP_C_SetText_CCB_Params Parms;

	Parms.Hide = Hide;
	Parms.CCB_Rarity = CCB_Rarity;
	Parms.CCB_Text = CCB_Text;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsChoice_Card_Count = K2Node_DynamicCast_AsChoice_Card_Count;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsChoice_Card_Name = K2Node_DynamicCast_AsChoice_Card_Name;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetOwnedItemCount_ReturnValue = CallFunc_GetOwnedItemCount_ReturnValue;
	Parms.CallFunc_SetVisibilityByItemDef_Visibility = CallFunc_SetVisibilityByItemDef_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetText_CCA
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CCA_Text                                                         (Edit, BlueprintVisible)
// enum class EFortRarity             CCA_Rarity                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChoiceCardCount_C*          K2Node_DynamicCast_AsChoice_Card_Count                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetVisibilityByItemDef_Visibility                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOwnedItemCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChoiceCardName_C*           K2Node_DynamicCast_AsChoice_Card_Name                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::SetText_CCA(bool Hide, class FText CCA_Text, enum class EFortRarity CCA_Rarity, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UChoiceCardCount_C* K2Node_DynamicCast_AsChoice_Card_Count, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, bool Temp_bool_Variable_1, class FText CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_SetVisibilityByItemDef_Visibility, bool K2Node_Select_Default, class UFortStoreContext* CallFunc_GetContext_ReturnValue_1, int32 CallFunc_GetOwnedItemCount_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UChoiceCardName_C* K2Node_DynamicCast_AsChoice_Card_Name, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetText_CCA");

	Params::AStoreCardReveal_BP_C_SetText_CCA_Params Parms;

	Parms.Hide = Hide;
	Parms.CCA_Text = CCA_Text;
	Parms.CCA_Rarity = CCA_Rarity;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsChoice_Card_Count = K2Node_DynamicCast_AsChoice_Card_Count;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_SetVisibilityByItemDef_Visibility = CallFunc_SetVisibilityByItemDef_Visibility;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetOwnedItemCount_ReturnValue = CallFunc_GetOwnedItemCount_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsChoice_Card_Name = K2Node_DynamicCast_AsChoice_Card_Name;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_3                    (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_6             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_7             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_8             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_9             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_10            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_11            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_12            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_13            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_14            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_15            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_16            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::UserConstructionScript(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_11, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_13, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_14, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_15, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_16)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "UserConstructionScript");

	Params::AStoreCardReveal_BP_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_3 = CallFunc_K2_GetComponentToWorld_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_1 = CallFunc_K2_SetWorldTransform_SweepHitResult_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_6 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_7 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_8 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_9 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_9;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_10 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_10;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_11 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_11;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_12 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_12;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_13 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_13;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_14 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_14;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_15 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_15;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_16 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_16;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardExit__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardExit__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardExit__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardExit__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardExit__Proceed__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardExit__Proceed__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardExit__Proceed__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_CardExit__Proceed__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardFlipToFront__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardFlipToFront__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardFlipToFront__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardFlipToFront__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardFlipToFront__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardFlipToFront__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardFlipToFront__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardUpgradeFast__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardUpgradeFast__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardUpgradeFast__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardUpgradeFast__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardUpgradeFast__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardUpgradeFast__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardUpgradeFast__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_Reveal_CC_Choices__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-Reveal-CC-Choices__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-Reveal-CC-Choices__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_Reveal_CC_Choices__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-Reveal-CC-Choices__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_Reveal_CC_Choices__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_ClearPostProcessDOFSettings__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-ClearPostProcessDOFSettings__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-ClearPostProcessDOFSettings__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_ClearPostProcessDOFSettings__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-ClearPostProcessDOFSettings__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_ClearPostProcessDOFSettings__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_FlareFX__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-FlareFX__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_FlareFX__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-FlareFX__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_FlareFX__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-FlareFX__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_FlareFX__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__SpeedTimeBackUp__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CameraFOV__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CameraFOV__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CameraFOV__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CameraFOV__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CC-Phase2-Hide__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2_Hide__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-SelectedChoiceCardAnims__CC-Phase2__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_SelectedChoiceCardAnims__CC_Phase2__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A_End__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A-End__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-A-End__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_A_End__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-A-End__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_A_End__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B_End__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B-End__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-MouseoverCC-B-End__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_MouseoverCC_B_End__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-MouseoverCC-B-End__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_MouseoverCC_B_End__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_Reveal__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-Reveal__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_Reveal__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-Reveal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_Reveal__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-Reveal__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_Reveal__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_Reveal__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-Reveal__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_Reveal__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-Reveal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_Reveal__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-Reveal__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_Reveal__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_QuestionMarkAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-QuestionMarkAnim__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-QuestionMarkAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_QuestionMarkAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-QuestionMarkAnim__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_QuestionMarkAnim__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_AmbientAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-AmbientAnim__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCA-AmbientAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCA_AmbientAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCA-AmbientAnim__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCA_AmbientAnim__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_AmbientAnim__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-AmbientAnim__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CCB-AmbientAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CCB_AmbientAnim__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CCB-AmbientAnim__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CCB_AmbientAnim__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CC-DataDiskBurns__ChangeTexture__EventFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CC_DataDiskBurns__ChangeTexture__EventFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CC-DataDiskBurns__ChangeTexture__EventFunc");

	Params::AStoreCardReveal_BP_C_TL_CC_DataDiskBurns__ChangeTexture__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardMoveToScreen__FinishedFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardMoveToScreen__FinishedFunc");

	Params::AStoreCardReveal_BP_C_TL_CardMoveToScreen__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TL-CardMoveToScreen__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TL_CardMoveToScreen__UpdateFunc()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TL-CardMoveToScreen__UpdateFunc");

	Params::AStoreCardReveal_BP_C_TL_CardMoveToScreen__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7181AC990
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7181AC990(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_90006C1C471D136EF3B142B7181AC990");

	Params::AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7181AC990_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6");

	Params::AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B5C4EF30E6_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_EFC62B084995CBCCD64787B51198EA0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_EFC62B084995CBCCD64787B51198EA0F(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_EFC62B084995CBCCD64787B51198EA0F");

	Params::AStoreCardReveal_BP_C_OnLoaded_EFC62B084995CBCCD64787B51198EA0F_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1");

	Params::AStoreCardReveal_BP_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnLoaded_90006C1C471D136EF3B142B7CD6D1379
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnLoaded_90006C1C471D136EF3B142B7CD6D1379(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnLoaded_90006C1C471D136EF3B142B7CD6D1379");

	Params::AStoreCardReveal_BP_C_OnLoaded_90006C1C471D136EF3B142B7CD6D1379_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpTchEvt_Released(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpTchEvt_Released");

	Params::AStoreCardReveal_BP_C_InpTchEvt_Released_Params Parms;

	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpTchEvt_Pressed(enum class ETouchIndex FingerIndex, const struct FVector& Location)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpTchEvt_Pressed");

	Params::AStoreCardReveal_BP_C_InpTchEvt_Pressed_Params Parms;

	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0");

	Params::AStoreCardReveal_BP_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortStoreState         NewStoreState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnStoreStateChanged(enum class EFortStoreState NewStoreState)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnStoreStateChanged");

	Params::AStoreCardReveal_BP_C_OnStoreStateChanged_Params Parms;

	Parms.NewStoreState = NewStoreState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StartPackOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StartPackOpen()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "StartPackOpen");

	Params::AStoreCardReveal_BP_C_StartPackOpen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardEnterStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardEnterStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardEnterStart");

	Params::AStoreCardReveal_BP_C_CardEnterStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PackDestroyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PackDestroyStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "PackDestroyStart");

	Params::AStoreCardReveal_BP_C_PackDestroyStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFlipStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardFlipStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardFlipStart");

	Params::AStoreCardReveal_BP_C_CardFlipStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardExitStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardExitStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardExitStart");

	Params::AStoreCardReveal_BP_C_CardExitStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOffFastForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TurnOffFastForward()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TurnOffFastForward");

	Params::AStoreCardReveal_BP_C_TurnOffFastForward_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardBackRevealStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardBackRevealStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardBackRevealStart");

	Params::AStoreCardReveal_BP_C_CardBackRevealStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardFrontRevealStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardFrontRevealStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardFrontRevealStart");

	Params::AStoreCardReveal_BP_C_CardFrontRevealStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.TurnOnFastForward
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::TurnOnFastForward()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "TurnOnFastForward");

	Params::AStoreCardReveal_BP_C_TurnOnFastForward_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableMouseInputOnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EnableMouseInputOnActor()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "EnableMouseInputOnActor");

	Params::AStoreCardReveal_BP_C_EnableMouseInputOnActor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ReceiveBeginPlay");

	Params::AStoreCardReveal_BP_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardPackStoreStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardPackStoreStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardPackStoreStart");

	Params::AStoreCardReveal_BP_C_CardPackStoreStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SpecialCardPauseAbort
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SpecialCardPauseAbort()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SpecialCardPauseAbort");

	Params::AStoreCardReveal_BP_C_SpecialCardPauseAbort_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PresentChoiceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PresentChoiceStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "PresentChoiceStart");

	Params::AStoreCardReveal_BP_C_PresentChoiceStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ChoiceMadeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ChoiceMadeStart()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ChoiceMadeStart");

	Params::AStoreCardReveal_BP_C_ChoiceMadeStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature_Params Parms;

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        ButtonPressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, const struct FKey& ButtonPressed)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnClickedSignature__DelegateSignature_Params Parms;

	Parms.TouchedComponent = TouchedComponent;
	Parms.ButtonPressed = ButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SkipBackRevealForChoicePack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SkipBackRevealForChoicePack()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SkipBackRevealForChoicePack");

	Params::AStoreCardReveal_BP_C_SkipBackRevealForChoicePack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ContinueFinalChoiceCardProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ContinueFinalChoiceCardProcess()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ContinueFinalChoiceCardProcess");

	Params::AStoreCardReveal_BP_C_ContinueFinalChoiceCardProcess_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ConstructCardFront
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ConstructCardFront()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ConstructCardFront");

	Params::AStoreCardReveal_BP_C_ConstructCardFront_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCA-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StopCCA_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "StopCCA-AmbientAnim");

	Params::AStoreCardReveal_BP_C_StopCCA_AmbientAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.GetReadyToShowCards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::GetReadyToShowCards()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "GetReadyToShowCards");

	Params::AStoreCardReveal_BP_C_GetReadyToShowCards_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Stop-CC-HoverAnims
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::Stop_CC_HoverAnims()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "Stop-CC-HoverAnims");

	Params::AStoreCardReveal_BP_C_Stop_CC_HoverAnims_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnBeginCursorOver_ChoiceCardA");

	Params::AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardA_Params Parms;

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardA(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnEndCursorOver_ChoiceCardA");

	Params::AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardA_Params Parms;

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverStart_CC_A()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverStart-CC-A");

	Params::AStoreCardReveal_BP_C_HoverStart_CC_A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverEnd_CC_A()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverEnd-CC-A");

	Params::AStoreCardReveal_BP_C_HoverEnd_CC_A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnBeginCursorOver_ChoiceCardB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnBeginCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnBeginCursorOver_ChoiceCardB");

	Params::AStoreCardReveal_BP_C_OnBeginCursorOver_ChoiceCardB_Params Parms;

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OnEndCursorOver_ChoiceCardB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::OnEndCursorOver_ChoiceCardB(class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OnEndCursorOver_ChoiceCardB");

	Params::AStoreCardReveal_BP_C_OnEndCursorOver_ChoiceCardB_Params Parms;

	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverStart-CC-B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverStart_CC_B()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverStart-CC-B");

	Params::AStoreCardReveal_BP_C_HoverStart_CC_B_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.HoverEnd-CC-B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::HoverEnd_CC_B()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "HoverEnd-CC-B");

	Params::AStoreCardReveal_BP_C_HoverEnd_CC_B_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CheckHoverStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CheckHoverStatus()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CheckHoverStatus");

	Params::AStoreCardReveal_BP_C_CheckHoverStatus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCA-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::RestartCCA_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "RestartCCA-AmbientAnim");

	Params::AStoreCardReveal_BP_C_RestartCCA_AmbientAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.StopCCB-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::StopCCB_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "StopCCB-AmbientAnim");

	Params::AStoreCardReveal_BP_C_StopCCB_AmbientAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.RestartCCB-AmbientAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::RestartCCB_AmbientAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "RestartCCB-AmbientAnim");

	Params::AStoreCardReveal_BP_C_RestartCCB_AmbientAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EnableOpenAllPacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EnableOpenAllPacks()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "EnableOpenAllPacks");

	Params::AStoreCardReveal_BP_C_EnableOpenAllPacks_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CardInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CardInPlace()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CardInPlace");

	Params::AStoreCardReveal_BP_C_CardInPlace_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CompareRarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CompareRarity()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CompareRarity");

	Params::AStoreCardReveal_BP_C_CompareRarity_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.PlayUpgradeAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::PlayUpgradeAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "PlayUpgradeAnim");

	Params::AStoreCardReveal_BP_C_PlayUpgradeAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ReadyForCardToCome
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ReadyForCardToCome()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ReadyForCardToCome");

	Params::AStoreCardReveal_BP_C_ReadyForCardToCome_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0(float AxisValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0");

	Params::AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_Gamepad_K2Node_InputAxisEvent_0_Params Parms;

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.Handle Input Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::Handle_Input_Mode_Changed(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "Handle Input Mode Changed");

	Params::AStoreCardReveal_BP_C_Handle_Input_Mode_Changed_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExitPackStore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ExitPackStore()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ExitPackStore");

	Params::AStoreCardReveal_BP_C_ExitPackStore_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S-ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardA_K2Node_ComponentBoundEvent_0_ComponentOnInputTouchEndSignature__DelegateSignature_Params Parms;

	Parms.FingerIndex = FingerIndex;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         TouchedComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "BndEvt__S-ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature");

	Params::AStoreCardReveal_BP_C_BndEvt__S_ChoiceCardB_K2Node_ComponentBoundEvent_1_ComponentOnInputTouchEndSignature__DelegateSignature_Params Parms;

	Parms.FingerIndex = FingerIndex;
	Parms.TouchedComponent = TouchedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetGamepadInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ResetGamepadInput()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ResetGamepadInput");

	Params::AStoreCardReveal_BP_C_ResetGamepadInput_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.OpenGamepadGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::OpenGamepadGate()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "OpenGamepadGate");

	Params::AStoreCardReveal_BP_C_OpenGamepadGate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CloseGamepadGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CloseGamepadGate()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CloseGamepadGate");

	Params::AStoreCardReveal_BP_C_CloseGamepadGate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.EndQuestionMarkAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::EndQuestionMarkAnim()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "EndQuestionMarkAnim");

	Params::AStoreCardReveal_BP_C_EndQuestionMarkAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.SetCCRarityColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::SetCCRarityColor()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "SetCCRarityColor");

	Params::AStoreCardReveal_BP_C_SetCCRarityColor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.CCRarityColorReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::CCRarityColorReady()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "CCRarityColorReady");

	Params::AStoreCardReveal_BP_C_CCRarityColorReady_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_BP_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40(float AxisValue)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40");

	Params::AStoreCardReveal_BP_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_40_Params Parms;

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::InitiatePinata()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "InitiatePinata");

	Params::AStoreCardReveal_BP_C_InitiatePinata_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ResetForTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AStoreCardReveal_BP_C::ResetForTransition()
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ResetForTransition");

	Params::AStoreCardReveal_BP_C_ResetForTransition_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreCardReveal_BP.StoreCardReveal_BP_C.ExecuteUbergraph_StoreCardReveal_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentCardChoicePack_IsChoicePack                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_15                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_16                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_17                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_18                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_19                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_20                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_21                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_22                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_23                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_24                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_25                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_26                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_27                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_28                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_29                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_30                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_31                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_32                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_33                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_34                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_35                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_36                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_37                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_38                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_39                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_40                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_41                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_42                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_43                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_44                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_45                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed_1                       (HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_ComponentBoundEvent_ButtonPressed                         (HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AStoreCamera_Blueprint_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ZeroConstructor, ReferenceParm)
// class AStoreCamera_Blueprint_C*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_46                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_47                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_48                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_49                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_50                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_51                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_52                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent_3                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_TouchedComponent                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortStoreState         K2Node_CustomEvent_NewStoreState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_3                    (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_4                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_5                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_6                    (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_7                    (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_8                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_9                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_10                   (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_11                   (IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpeningDirectPack_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOpeningDirectPack_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOpeningDirectPack_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut                                       (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLimitedToES2Features_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETouchIndex             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_InputTouchEvent_FingerIndex_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_InputTouchEvent_Location_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUISubsystem*          CallFunc_GetContext_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_53                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_ByteByte_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bUsingGamepad                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPauseType              Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_2                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_3                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_4                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_ComponentBoundEvent_FingerIndex_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETouchIndex             K2Node_ComponentBoundEvent_FingerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_TouchedComponent                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_RLerp_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue_7                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_RLerp_ReturnValue_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue_8                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue_1                                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue_2                                     (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_5                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_6                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_9                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_4                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut_1                                     (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ChoiceResultComplete_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeChoice_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MakeChoice_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FCard                       CallFunc_GetCard_ResultOut_2                                     (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue_10                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardExitComplete_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CardFrontRevealComplete_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardFlipComplete_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardBackRevealComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CardEntryComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_12                   (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue_3                                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue_4                                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue_5                                     (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_7                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  CallFunc_TLerp_ReturnValue_6                                     (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_8                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FCard                       CallFunc_GetCard_ResultOut_3                                     (NoDestructor)
// bool                               CallFunc_GetCard_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItemDefinition*K2Node_DynamicCast_AsFort_Schematic_Item_Definition              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    CallFunc_GetResultWorldItemDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItemDefinition*>CallFunc_GetChoices_Choices                                      (ZeroConstructor, ReferenceParm)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// class FString                      CallFunc_GetPersistentName_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue_1                      (HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSchematicItemDefinition*K2Node_DynamicCast_AsFort_Schematic_Item_Definition_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPersistentName_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_GetResultWorldItemDefinition_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue_2                      (HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue_3                      (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UFortAccountItemDefinition*  CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_13                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue_11                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_5                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_14                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_6                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_VLerp_ReturnValue_12                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_7                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_8                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetVectorParameterValue_ReturnValue_54                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentCardChoicePack_IsChoicePack_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCardChoicePack_IsChoicePack_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCardChoicePack_IsChoicePack_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentCardChoicePack_IsChoicePack_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AStoreCardReveal_BP_C::ExecuteUbergraph_StoreCardReveal_BP(int32 EntryPoint, bool CallFunc_IsCurrentCardChoicePack_IsChoicePack, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_4, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_5, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_6, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_7, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_8, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_9, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_10, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_11, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_12, uint8 CallFunc_GetValidValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_13, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_14, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_15, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_16, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_17, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_18, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_19, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_20, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_21, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_22, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_23, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_24, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_25, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_26, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_27, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_28, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_29, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_30, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_31, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_32, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_33, bool CallFunc_Greater_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_34, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_35, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_36, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_37, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_38, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_39, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_40, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_41, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_42, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_43, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_44, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_45, bool CallFunc_GreaterEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_3, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_2, const struct FKey& K2Node_ComponentBoundEvent_ButtonPressed, bool Temp_bool_IsClosed_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, TArray<class AStoreCamera_Blueprint_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AStoreCamera_Blueprint_C* CallFunc_Array_Get_Item_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool Temp_bool_IsClosed_Variable_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool Temp_bool_IsClosed_Variable_4, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_Has_Been_Initd_Variable_4, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_46, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_47, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_48, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_49, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_50, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_51, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_52, bool Temp_bool_Has_Been_Initd_Variable_5, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent_3, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent_2, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent_1, class UPrimitiveComponent* K2Node_CustomEvent_TouchedComponent, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, bool Temp_bool_IsClosed_Variable_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, bool Temp_bool_IsClosed_Variable_6, bool Temp_bool_Has_Been_Initd_Variable_6, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_5, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_6, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_7, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_6, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_7, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_8, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_9, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_6, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_7, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_8, const struct FVector& CallFunc_BreakTransform_Location_4, const struct FRotator& CallFunc_BreakTransform_Rotation_4, const struct FVector& CallFunc_BreakTransform_Scale_4, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_9, const struct FVector& CallFunc_BreakTransform_Location_5, const struct FRotator& CallFunc_BreakTransform_Rotation_5, const struct FVector& CallFunc_BreakTransform_Scale_5, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_10, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_11, class UFortStoreContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsOpeningDirectPack_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_IsOpeningDirectPack_ReturnValue_1, bool CallFunc_IsOpeningDirectPack_ReturnValue_2, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_3, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_4, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_5, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue_6, const struct FVector& Temp_struct_Variable, bool CallFunc_IsLimitedToES2Features_ReturnValue, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex, const struct FVector& K2Node_InputTouchEvent_Location, enum class ETouchIndex K2Node_InputTouchEvent_FingerIndex_1, const struct FVector& K2Node_InputTouchEvent_Location_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue_7, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, const struct FKey& K2Node_InputKeyEvent_Key_1, class UUserWidget* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_53, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_8, const struct FVector& CallFunc_VLerp_ReturnValue, int32 CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_GreaterEqual_ByteByte_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_LessEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_3, enum class EPauseType Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_Select_Default, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, enum class EPauseType Temp_byte_Variable_2, bool K2Node_Select_Default_1, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool Temp_bool_Variable_8, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_8, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_10, float K2Node_InputAxisEvent_AxisValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EPauseType Temp_byte_Variable_3, bool Temp_bool_Variable_12, bool K2Node_Select_Default_2, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool K2Node_CustomEvent_bUsingGamepad, bool Temp_bool_Variable_15, enum class EPauseType Temp_byte_Variable_4, bool K2Node_Select_Default_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_5, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FTransform& CallFunc_TLerp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_8, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_9, const struct FRotator& CallFunc_RLerp_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_VLerp_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_4, const struct FVector& CallFunc_VLerp_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, bool Temp_bool_Has_Been_Initd_Variable_7, const struct FVector& CallFunc_VLerp_ReturnValue_5, const struct FRotator& CallFunc_RLerp_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_4, enum class ETouchIndex K2Node_ComponentBoundEvent_FingerIndex_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent_1, float CallFunc_Add_FloatFloat_ReturnValue_10, enum class ETouchIndex K2Node_ComponentBoundEvent_FingerIndex, class UPrimitiveComponent* K2Node_ComponentBoundEvent_TouchedComponent, const struct FVector& CallFunc_MakeVector_ReturnValue_4, const struct FVector& CallFunc_VLerp_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_2, const struct FRotator& CallFunc_RLerp_ReturnValue_3, const struct FVector& CallFunc_VLerp_ReturnValue_7, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FRotator& CallFunc_RLerp_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_11, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_2, const struct FVector& CallFunc_MakeVector_ReturnValue_5, const struct FVector& CallFunc_VLerp_ReturnValue_8, const struct FRotator& CallFunc_RLerp_ReturnValue_5, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, float CallFunc_Lerp_ReturnValue_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTransform& CallFunc_TLerp_ReturnValue_1, const struct FTransform& CallFunc_TLerp_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_5, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_6, const struct FVector& CallFunc_VLerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_8, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_4, bool Temp_bool_IsClosed_Variable_7, float CallFunc_Lerp_ReturnValue_9, class UFortStoreContext* CallFunc_GetContext_ReturnValue_9, const struct FCard& CallFunc_GetCard_ResultOut_1, bool CallFunc_GetCard_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_10, bool CallFunc_ChoiceResultComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_11, bool CallFunc_MakeChoice_ReturnValue, bool CallFunc_MakeChoice_ReturnValue_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_CustomEvent_Loaded_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_12, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FKey& Temp_struct_Variable_1, const struct FCard& CallFunc_GetCard_ResultOut_2, bool CallFunc_GetCard_ReturnValue_2, const struct FKey& K2Node_InputKeyEvent_Key_2, enum class EFortRarity CallFunc_GetRarity_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FRotator& CallFunc_RLerp_ReturnValue_6, const struct FVector& CallFunc_VLerp_ReturnValue_10, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UFortStoreContext* CallFunc_GetContext_ReturnValue_13, class UFortStoreContext* CallFunc_GetContext_ReturnValue_14, bool CallFunc_CardExitComplete_ReturnValue, bool CallFunc_CardFrontRevealComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_15, bool CallFunc_CardFlipComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_16, bool CallFunc_CardBackRevealComplete_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_17, bool CallFunc_CardEntryComplete_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UFortStoreContext* CallFunc_GetContext_ReturnValue_18, class UObject* Temp_object_Variable_3, class UObject* K2Node_CustomEvent_Loaded_3, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_12, const struct FTransform& CallFunc_TLerp_ReturnValue_3, const struct FTransform& CallFunc_TLerp_ReturnValue_4, const struct FVector& CallFunc_BreakTransform_Location_6, const struct FRotator& CallFunc_BreakTransform_Rotation_6, const struct FVector& CallFunc_BreakTransform_Scale_6, const struct FVector& CallFunc_BreakTransform_Location_7, const struct FRotator& CallFunc_BreakTransform_Rotation_7, const struct FVector& CallFunc_BreakTransform_Scale_7, const struct FTransform& CallFunc_TLerp_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_8, const struct FRotator& CallFunc_BreakTransform_Rotation_8, const struct FVector& CallFunc_BreakTransform_Scale_8, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_7, const struct FTransform& CallFunc_TLerp_ReturnValue_6, const struct FVector& CallFunc_BreakTransform_Location_9, const struct FRotator& CallFunc_BreakTransform_Rotation_9, const struct FVector& CallFunc_BreakTransform_Scale_9, class UFortStoreContext* CallFunc_GetContext_ReturnValue_19, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_8, const struct FCard& CallFunc_GetCard_ResultOut_3, bool CallFunc_GetCard_ReturnValue_3, class UFortSchematicItemDefinition* K2Node_DynamicCast_AsFort_Schematic_Item_Definition, bool K2Node_DynamicCast_bSuccess_4, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item_1, bool K2Node_DynamicCast_bSuccess_5, class UFortWorldItemDefinition* CallFunc_GetResultWorldItemDefinition_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetChoices_Choices, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue_1, bool CallFunc_Contains_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, bool CallFunc_Contains_ReturnValue_5, bool CallFunc_Contains_ReturnValue_6, bool CallFunc_Contains_ReturnValue_7, bool CallFunc_Contains_ReturnValue_8, bool CallFunc_Contains_ReturnValue_9, class UFortSchematicItemDefinition* K2Node_DynamicCast_AsFort_Schematic_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_7, const class FString& CallFunc_GetPersistentName_ReturnValue_1, class UFortWorldItemDefinition* CallFunc_GetResultWorldItemDefinition_ReturnValue_1, bool CallFunc_Contains_ReturnValue_10, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue_2, bool CallFunc_Contains_ReturnValue_11, bool CallFunc_Contains_ReturnValue_12, bool CallFunc_Contains_ReturnValue_13, bool CallFunc_Contains_ReturnValue_14, bool CallFunc_Contains_ReturnValue_15, bool CallFunc_Contains_ReturnValue_16, bool CallFunc_Contains_ReturnValue_17, bool CallFunc_Contains_ReturnValue_18, bool CallFunc_Contains_ReturnValue_19, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_3, bool K2Node_DynamicCast_bSuccess_8, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_11, class UFortAccountItemDefinition* CallFunc_Array_Get_Item_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortAccountItemDefinition* CallFunc_Array_Get_Item_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_12, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_13, const struct FVector& CallFunc_VLerp_ReturnValue_11, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_14, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_6, const struct FVector& CallFunc_VLerp_ReturnValue_12, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_7, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_8, bool Temp_bool_Has_Been_Initd_Variable_8, bool Temp_bool_IsClosed_Variable_8, float K2Node_InputAxisEvent_AxisValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_54, bool CallFunc_IsCurrentCardChoicePack_IsChoicePack_1, bool CallFunc_IsCurrentCardChoicePack_IsChoicePack_2, bool CallFunc_IsCurrentCardChoicePack_IsChoicePack_3, bool CallFunc_IsCurrentCardChoicePack_IsChoicePack_4)
{
	static auto Func = Class->GetFunction("StoreCardReveal_BP_C", "ExecuteUbergraph_StoreCardReveal_BP");

	Params::AStoreCardReveal_BP_C_ExecuteUbergraph_StoreCardReveal_BP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsCurrentCardChoicePack_IsChoicePack = CallFunc_IsCurrentCardChoicePack_IsChoicePack;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue = CallFunc_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_1 = CallFunc_GetVectorParameterValue_ReturnValue_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_2 = CallFunc_GetVectorParameterValue_ReturnValue_2;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_3 = CallFunc_GetVectorParameterValue_ReturnValue_3;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_4 = CallFunc_GetVectorParameterValue_ReturnValue_4;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_5 = CallFunc_GetVectorParameterValue_ReturnValue_5;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_6 = CallFunc_GetVectorParameterValue_ReturnValue_6;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_7 = CallFunc_GetVectorParameterValue_ReturnValue_7;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_8 = CallFunc_GetVectorParameterValue_ReturnValue_8;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_9 = CallFunc_GetVectorParameterValue_ReturnValue_9;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_10 = CallFunc_GetVectorParameterValue_ReturnValue_10;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_11 = CallFunc_GetVectorParameterValue_ReturnValue_11;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_12 = CallFunc_GetVectorParameterValue_ReturnValue_12;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_13 = CallFunc_GetVectorParameterValue_ReturnValue_13;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_14 = CallFunc_GetVectorParameterValue_ReturnValue_14;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_15 = CallFunc_GetVectorParameterValue_ReturnValue_15;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_16 = CallFunc_GetVectorParameterValue_ReturnValue_16;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_17 = CallFunc_GetVectorParameterValue_ReturnValue_17;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_18 = CallFunc_GetVectorParameterValue_ReturnValue_18;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_19 = CallFunc_GetVectorParameterValue_ReturnValue_19;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_20 = CallFunc_GetVectorParameterValue_ReturnValue_20;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_21 = CallFunc_GetVectorParameterValue_ReturnValue_21;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_22 = CallFunc_GetVectorParameterValue_ReturnValue_22;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_23 = CallFunc_GetVectorParameterValue_ReturnValue_23;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_24 = CallFunc_GetVectorParameterValue_ReturnValue_24;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_25 = CallFunc_GetVectorParameterValue_ReturnValue_25;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_26 = CallFunc_GetVectorParameterValue_ReturnValue_26;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_27 = CallFunc_GetVectorParameterValue_ReturnValue_27;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_28 = CallFunc_GetVectorParameterValue_ReturnValue_28;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_29 = CallFunc_GetVectorParameterValue_ReturnValue_29;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_30 = CallFunc_GetVectorParameterValue_ReturnValue_30;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_31 = CallFunc_GetVectorParameterValue_ReturnValue_31;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_32 = CallFunc_GetVectorParameterValue_ReturnValue_32;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_33 = CallFunc_GetVectorParameterValue_ReturnValue_33;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue_1 = CallFunc_Greater_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_34 = CallFunc_GetVectorParameterValue_ReturnValue_34;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_35 = CallFunc_GetVectorParameterValue_ReturnValue_35;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_36 = CallFunc_GetVectorParameterValue_ReturnValue_36;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_37 = CallFunc_GetVectorParameterValue_ReturnValue_37;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_38 = CallFunc_GetVectorParameterValue_ReturnValue_38;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_39 = CallFunc_GetVectorParameterValue_ReturnValue_39;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_40 = CallFunc_GetVectorParameterValue_ReturnValue_40;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_41 = CallFunc_GetVectorParameterValue_ReturnValue_41;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_42 = CallFunc_GetVectorParameterValue_ReturnValue_42;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_43 = CallFunc_GetVectorParameterValue_ReturnValue_43;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_44 = CallFunc_GetVectorParameterValue_ReturnValue_44;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_45 = CallFunc_GetVectorParameterValue_ReturnValue_45;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_3 = K2Node_ComponentBoundEvent_TouchedComponent_3;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed_1 = K2Node_ComponentBoundEvent_ButtonPressed_1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_2 = K2Node_ComponentBoundEvent_TouchedComponent_2;
	Parms.K2Node_ComponentBoundEvent_ButtonPressed = K2Node_ComponentBoundEvent_ButtonPressed;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_46 = CallFunc_GetVectorParameterValue_ReturnValue_46;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_47 = CallFunc_GetVectorParameterValue_ReturnValue_47;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_48 = CallFunc_GetVectorParameterValue_ReturnValue_48;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_49 = CallFunc_GetVectorParameterValue_ReturnValue_49;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_50 = CallFunc_GetVectorParameterValue_ReturnValue_50;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_51 = CallFunc_GetVectorParameterValue_ReturnValue_51;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_52 = CallFunc_GetVectorParameterValue_ReturnValue_52;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.K2Node_CustomEvent_TouchedComponent_3 = K2Node_CustomEvent_TouchedComponent_3;
	Parms.K2Node_CustomEvent_TouchedComponent_2 = K2Node_CustomEvent_TouchedComponent_2;
	Parms.K2Node_CustomEvent_TouchedComponent_1 = K2Node_CustomEvent_TouchedComponent_1;
	Parms.K2Node_CustomEvent_TouchedComponent = K2Node_CustomEvent_TouchedComponent;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
	Parms.CallFunc_BreakTransform_Rotation_2 = CallFunc_BreakTransform_Rotation_2;
	Parms.CallFunc_BreakTransform_Scale_2 = CallFunc_BreakTransform_Scale_2;
	Parms.CallFunc_BreakTransform_Location_3 = CallFunc_BreakTransform_Location_3;
	Parms.CallFunc_BreakTransform_Rotation_3 = CallFunc_BreakTransform_Rotation_3;
	Parms.CallFunc_BreakTransform_Scale_3 = CallFunc_BreakTransform_Scale_3;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_2 = CallFunc_K2_GetComponentRotation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue_1 = CallFunc_K2_GetComponentScale_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_3 = CallFunc_K2_GetComponentRotation_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.K2Node_CustomEvent_NewStoreState = K2Node_CustomEvent_NewStoreState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_4 = CallFunc_K2_GetComponentRotation_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue_2 = CallFunc_K2_GetComponentScale_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_1 = CallFunc_K2_SetWorldTransform_SweepHitResult_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_5 = CallFunc_K2_GetComponentRotation_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_6 = CallFunc_K2_GetComponentRotation_ReturnValue_6;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_7 = CallFunc_K2_GetComponentRotation_ReturnValue_7;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue_3 = CallFunc_K2_GetComponentScale_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_5 = CallFunc_K2_GetComponentLocation_ReturnValue_5;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_6 = CallFunc_K2_GetComponentLocation_ReturnValue_6;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_7 = CallFunc_K2_GetComponentLocation_ReturnValue_7;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = CallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_3 = CallFunc_K2_GetComponentToWorld_ReturnValue_3;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_8 = CallFunc_K2_GetComponentLocation_ReturnValue_8;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_9 = CallFunc_K2_GetComponentLocation_ReturnValue_9;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_4 = CallFunc_K2_GetComponentToWorld_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_5 = CallFunc_K2_GetComponentToWorld_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_6 = CallFunc_K2_GetComponentToWorld_ReturnValue_6;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_7 = CallFunc_K2_GetComponentToWorld_ReturnValue_7;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_8 = CallFunc_K2_GetComponentToWorld_ReturnValue_8;
	Parms.CallFunc_BreakTransform_Location_4 = CallFunc_BreakTransform_Location_4;
	Parms.CallFunc_BreakTransform_Rotation_4 = CallFunc_BreakTransform_Rotation_4;
	Parms.CallFunc_BreakTransform_Scale_4 = CallFunc_BreakTransform_Scale_4;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_BreakVector_X_4 = CallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = CallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_9 = CallFunc_K2_GetComponentToWorld_ReturnValue_9;
	Parms.CallFunc_BreakTransform_Location_5 = CallFunc_BreakTransform_Location_5;
	Parms.CallFunc_BreakTransform_Rotation_5 = CallFunc_BreakTransform_Rotation_5;
	Parms.CallFunc_BreakTransform_Scale_5 = CallFunc_BreakTransform_Scale_5;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_10 = CallFunc_K2_GetComponentToWorld_ReturnValue_10;
	Parms.CallFunc_BreakVector_X_5 = CallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = CallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_11 = CallFunc_K2_GetComponentToWorld_ReturnValue_11;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsOpeningDirectPack_ReturnValue = CallFunc_IsOpeningDirectPack_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_IsOpeningDirectPack_ReturnValue_1 = CallFunc_IsOpeningDirectPack_ReturnValue_1;
	Parms.CallFunc_IsOpeningDirectPack_ReturnValue_2 = CallFunc_IsOpeningDirectPack_ReturnValue_2;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.CallFunc_GetContext_ReturnValue_4 = CallFunc_GetContext_ReturnValue_4;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue_1 = CallFunc_GetCurrentInputType_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_5 = CallFunc_GetContext_ReturnValue_5;
	Parms.CallFunc_GetCard_ResultOut = CallFunc_GetCard_ResultOut;
	Parms.CallFunc_GetCard_ReturnValue = CallFunc_GetCard_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_GetContext_ReturnValue_6 = CallFunc_GetContext_ReturnValue_6;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsLimitedToES2Features_ReturnValue = CallFunc_IsLimitedToES2Features_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_InputTouchEvent_FingerIndex = K2Node_InputTouchEvent_FingerIndex;
	Parms.K2Node_InputTouchEvent_Location = K2Node_InputTouchEvent_Location;
	Parms.K2Node_InputTouchEvent_FingerIndex_1 = K2Node_InputTouchEvent_FingerIndex_1;
	Parms.K2Node_InputTouchEvent_Location_1 = K2Node_InputTouchEvent_Location_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue_7 = CallFunc_GetContext_ReturnValue_7;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_53 = CallFunc_GetVectorParameterValue_ReturnValue_53;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_GetContext_ReturnValue_8 = CallFunc_GetContext_ReturnValue_8;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue = CallFunc_GetNumUnopenedCardPacksRemaining_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue_1 = CallFunc_VLerp_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue_1 = CallFunc_GreaterEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_LessEqual_ByteByte_ReturnValue = CallFunc_LessEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BreakRotator_Roll_4 = CallFunc_BreakRotator_Roll_4;
	Parms.CallFunc_BreakRotator_Pitch_4 = CallFunc_BreakRotator_Pitch_4;
	Parms.CallFunc_BreakRotator_Yaw_4 = CallFunc_BreakRotator_Yaw_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_8 = CallFunc_K2_GetComponentRotation_ReturnValue_8;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_10 = CallFunc_K2_GetComponentLocation_ReturnValue_10;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult = CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.K2Node_CustomEvent_bUsingGamepad = K2Node_CustomEvent_bUsingGamepad;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_VLerp_ReturnValue_2 = CallFunc_VLerp_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_2 = CallFunc_K2_SetWorldTransform_SweepHitResult_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_8 = CallFunc_Add_FloatFloat_ReturnValue_8;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_3 = CallFunc_K2_SetWorldTransform_SweepHitResult_3;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_9 = CallFunc_Add_FloatFloat_ReturnValue_9;
	Parms.CallFunc_RLerp_ReturnValue_1 = CallFunc_RLerp_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_VLerp_ReturnValue_3 = CallFunc_VLerp_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_4 = CallFunc_K2_SetWorldTransform_SweepHitResult_4;
	Parms.CallFunc_VLerp_ReturnValue_4 = CallFunc_VLerp_ReturnValue_4;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.CallFunc_VLerp_ReturnValue_5 = CallFunc_VLerp_ReturnValue_5;
	Parms.CallFunc_RLerp_ReturnValue_2 = CallFunc_RLerp_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_FingerIndex_1 = K2Node_ComponentBoundEvent_FingerIndex_1;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent_1 = K2Node_ComponentBoundEvent_TouchedComponent_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_10 = CallFunc_Add_FloatFloat_ReturnValue_10;
	Parms.K2Node_ComponentBoundEvent_FingerIndex = K2Node_ComponentBoundEvent_FingerIndex;
	Parms.K2Node_ComponentBoundEvent_TouchedComponent = K2Node_ComponentBoundEvent_TouchedComponent;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_VLerp_ReturnValue_6 = CallFunc_VLerp_ReturnValue_6;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_2 = CallFunc_K2_SetWorldLocation_SweepHitResult_2;
	Parms.CallFunc_RLerp_ReturnValue_3 = CallFunc_RLerp_ReturnValue_3;
	Parms.CallFunc_VLerp_ReturnValue_7 = CallFunc_VLerp_ReturnValue_7;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_RLerp_ReturnValue_4 = CallFunc_RLerp_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_11 = CallFunc_Add_FloatFloat_ReturnValue_11;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_2 = CallFunc_K2_SetWorldRotation_SweepHitResult_2;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;
	Parms.CallFunc_VLerp_ReturnValue_8 = CallFunc_VLerp_ReturnValue_8;
	Parms.CallFunc_RLerp_ReturnValue_5 = CallFunc_RLerp_ReturnValue_5;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_3 = CallFunc_K2_SetWorldLocation_SweepHitResult_3;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_3 = CallFunc_K2_SetWorldRotation_SweepHitResult_3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_7 = CallFunc_Lerp_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_TLerp_ReturnValue_1 = CallFunc_TLerp_ReturnValue_1;
	Parms.CallFunc_TLerp_ReturnValue_2 = CallFunc_TLerp_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_5 = CallFunc_K2_SetWorldTransform_SweepHitResult_5;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_6 = CallFunc_K2_SetWorldTransform_SweepHitResult_6;
	Parms.CallFunc_VLerp_ReturnValue_9 = CallFunc_VLerp_ReturnValue_9;
	Parms.CallFunc_Lerp_ReturnValue_8 = CallFunc_Lerp_ReturnValue_8;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_4 = CallFunc_K2_SetWorldLocation_SweepHitResult_4;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.CallFunc_Lerp_ReturnValue_9 = CallFunc_Lerp_ReturnValue_9;
	Parms.CallFunc_GetContext_ReturnValue_9 = CallFunc_GetContext_ReturnValue_9;
	Parms.CallFunc_GetCard_ResultOut_1 = CallFunc_GetCard_ResultOut_1;
	Parms.CallFunc_GetCard_ReturnValue_1 = CallFunc_GetCard_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetContext_ReturnValue_10 = CallFunc_GetContext_ReturnValue_10;
	Parms.CallFunc_ChoiceResultComplete_ReturnValue = CallFunc_ChoiceResultComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_11 = CallFunc_GetContext_ReturnValue_11;
	Parms.CallFunc_MakeChoice_ReturnValue = CallFunc_MakeChoice_ReturnValue;
	Parms.CallFunc_MakeChoice_ReturnValue_1 = CallFunc_MakeChoice_ReturnValue_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_12 = CallFunc_GetContext_ReturnValue_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_12 = CallFunc_Add_FloatFloat_ReturnValue_12;
	Parms.CallFunc_MakeRotator_ReturnValue_4 = CallFunc_MakeRotator_ReturnValue_4;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetCard_ResultOut_2 = CallFunc_GetCard_ResultOut_2;
	Parms.CallFunc_GetCard_ReturnValue_2 = CallFunc_GetCard_ReturnValue_2;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.CallFunc_GetRarity_ReturnValue_1 = CallFunc_GetRarity_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.CallFunc_RLerp_ReturnValue_6 = CallFunc_RLerp_ReturnValue_6;
	Parms.CallFunc_VLerp_ReturnValue_10 = CallFunc_VLerp_ReturnValue_10;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeRotation_SweepHitResult_3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetContext_ReturnValue_13 = CallFunc_GetContext_ReturnValue_13;
	Parms.CallFunc_GetContext_ReturnValue_14 = CallFunc_GetContext_ReturnValue_14;
	Parms.CallFunc_CardExitComplete_ReturnValue = CallFunc_CardExitComplete_ReturnValue;
	Parms.CallFunc_CardFrontRevealComplete_ReturnValue = CallFunc_CardFrontRevealComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_15 = CallFunc_GetContext_ReturnValue_15;
	Parms.CallFunc_CardFlipComplete_ReturnValue = CallFunc_CardFlipComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_16 = CallFunc_GetContext_ReturnValue_16;
	Parms.CallFunc_CardBackRevealComplete_ReturnValue = CallFunc_CardBackRevealComplete_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_17 = CallFunc_GetContext_ReturnValue_17;
	Parms.CallFunc_CardEntryComplete_ReturnValue = CallFunc_CardEntryComplete_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetContext_ReturnValue_18 = CallFunc_GetContext_ReturnValue_18;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_CustomEvent_Loaded_3 = K2Node_CustomEvent_Loaded_3;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_12 = CallFunc_K2_GetComponentToWorld_ReturnValue_12;
	Parms.CallFunc_TLerp_ReturnValue_3 = CallFunc_TLerp_ReturnValue_3;
	Parms.CallFunc_TLerp_ReturnValue_4 = CallFunc_TLerp_ReturnValue_4;
	Parms.CallFunc_BreakTransform_Location_6 = CallFunc_BreakTransform_Location_6;
	Parms.CallFunc_BreakTransform_Rotation_6 = CallFunc_BreakTransform_Rotation_6;
	Parms.CallFunc_BreakTransform_Scale_6 = CallFunc_BreakTransform_Scale_6;
	Parms.CallFunc_BreakTransform_Location_7 = CallFunc_BreakTransform_Location_7;
	Parms.CallFunc_BreakTransform_Rotation_7 = CallFunc_BreakTransform_Rotation_7;
	Parms.CallFunc_BreakTransform_Scale_7 = CallFunc_BreakTransform_Scale_7;
	Parms.CallFunc_TLerp_ReturnValue_5 = CallFunc_TLerp_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_BreakTransform_Location_8 = CallFunc_BreakTransform_Location_8;
	Parms.CallFunc_BreakTransform_Rotation_8 = CallFunc_BreakTransform_Rotation_8;
	Parms.CallFunc_BreakTransform_Scale_8 = CallFunc_BreakTransform_Scale_8;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_7 = CallFunc_K2_SetWorldTransform_SweepHitResult_7;
	Parms.CallFunc_TLerp_ReturnValue_6 = CallFunc_TLerp_ReturnValue_6;
	Parms.CallFunc_BreakTransform_Location_9 = CallFunc_BreakTransform_Location_9;
	Parms.CallFunc_BreakTransform_Rotation_9 = CallFunc_BreakTransform_Rotation_9;
	Parms.CallFunc_BreakTransform_Scale_9 = CallFunc_BreakTransform_Scale_9;
	Parms.CallFunc_GetContext_ReturnValue_19 = CallFunc_GetContext_ReturnValue_19;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_8 = CallFunc_K2_SetWorldTransform_SweepHitResult_8;
	Parms.CallFunc_GetCard_ResultOut_3 = CallFunc_GetCard_ResultOut_3;
	Parms.CallFunc_GetCard_ReturnValue_3 = CallFunc_GetCard_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item_Definition = K2Node_DynamicCast_AsFort_Schematic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item_1 = K2Node_DynamicCast_AsFort_Card_Pack_Item_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetResultWorldItemDefinition_ReturnValue = CallFunc_GetResultWorldItemDefinition_ReturnValue;
	Parms.CallFunc_GetChoices_Choices = CallFunc_GetChoices_Choices;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_GetPersistentName_ReturnValue = CallFunc_GetPersistentName_ReturnValue;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue_1 = CallFunc_GetLargePreviewImage_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D_2 = K2Node_DynamicCast_AsTexture_2D_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_Contains_ReturnValue_3 = CallFunc_Contains_ReturnValue_3;
	Parms.CallFunc_Contains_ReturnValue_4 = CallFunc_Contains_ReturnValue_4;
	Parms.CallFunc_Contains_ReturnValue_5 = CallFunc_Contains_ReturnValue_5;
	Parms.CallFunc_Contains_ReturnValue_6 = CallFunc_Contains_ReturnValue_6;
	Parms.CallFunc_Contains_ReturnValue_7 = CallFunc_Contains_ReturnValue_7;
	Parms.CallFunc_Contains_ReturnValue_8 = CallFunc_Contains_ReturnValue_8;
	Parms.CallFunc_Contains_ReturnValue_9 = CallFunc_Contains_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsFort_Schematic_Item_Definition_1 = K2Node_DynamicCast_AsFort_Schematic_Item_Definition_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetPersistentName_ReturnValue_1 = CallFunc_GetPersistentName_ReturnValue_1;
	Parms.CallFunc_GetResultWorldItemDefinition_ReturnValue_1 = CallFunc_GetResultWorldItemDefinition_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_10 = CallFunc_Contains_ReturnValue_10;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue_2 = CallFunc_GetLargePreviewImage_ReturnValue_2;
	Parms.CallFunc_Contains_ReturnValue_11 = CallFunc_Contains_ReturnValue_11;
	Parms.CallFunc_Contains_ReturnValue_12 = CallFunc_Contains_ReturnValue_12;
	Parms.CallFunc_Contains_ReturnValue_13 = CallFunc_Contains_ReturnValue_13;
	Parms.CallFunc_Contains_ReturnValue_14 = CallFunc_Contains_ReturnValue_14;
	Parms.CallFunc_Contains_ReturnValue_15 = CallFunc_Contains_ReturnValue_15;
	Parms.CallFunc_Contains_ReturnValue_16 = CallFunc_Contains_ReturnValue_16;
	Parms.CallFunc_Contains_ReturnValue_17 = CallFunc_Contains_ReturnValue_17;
	Parms.CallFunc_Contains_ReturnValue_18 = CallFunc_Contains_ReturnValue_18;
	Parms.CallFunc_Contains_ReturnValue_19 = CallFunc_Contains_ReturnValue_19;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue_3 = CallFunc_GetLargePreviewImage_ReturnValue_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_3 = K2Node_DynamicCast_AsTexture_2D_3;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_11 = CallFunc_K2_GetComponentLocation_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_12 = CallFunc_K2_GetComponentLocation_ReturnValue_12;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_13 = CallFunc_K2_GetComponentLocation_ReturnValue_13;
	Parms.CallFunc_VLerp_ReturnValue_11 = CallFunc_VLerp_ReturnValue_11;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_5 = CallFunc_K2_SetWorldLocation_SweepHitResult_5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_14 = CallFunc_K2_GetComponentLocation_ReturnValue_14;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_6 = CallFunc_K2_SetWorldLocation_SweepHitResult_6;
	Parms.CallFunc_VLerp_ReturnValue_12 = CallFunc_VLerp_ReturnValue_12;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_7 = CallFunc_K2_SetWorldLocation_SweepHitResult_7;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_8 = CallFunc_K2_SetWorldLocation_SweepHitResult_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetVectorParameterValue_ReturnValue_54 = CallFunc_GetVectorParameterValue_ReturnValue_54;
	Parms.CallFunc_IsCurrentCardChoicePack_IsChoicePack_1 = CallFunc_IsCurrentCardChoicePack_IsChoicePack_1;
	Parms.CallFunc_IsCurrentCardChoicePack_IsChoicePack_2 = CallFunc_IsCurrentCardChoicePack_IsChoicePack_2;
	Parms.CallFunc_IsCurrentCardChoicePack_IsChoicePack_3 = CallFunc_IsCurrentCardChoicePack_IsChoicePack_3;
	Parms.CallFunc_IsCurrentCardChoicePack_IsChoicePack_4 = CallFunc_IsCurrentCardChoicePack_IsChoicePack_4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
