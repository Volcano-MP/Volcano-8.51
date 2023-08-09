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


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.GetDisplayName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (Parm, OutParm)
// class FText                        OutName                                                          (Edit, BlueprintVisible)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class FText                        Temp_text_Variable_88                                            ()
// class FText                        Temp_text_Variable_89                                            ()
// class FText                        Temp_text_Variable_90                                            ()
// class FText                        Temp_text_Variable_91                                            ()
// class FText                        Temp_text_Variable_92                                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           ()
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue_1                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue_2                           ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInventoryFilter    CallFunc_GetFilterCategory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    ()
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   ()
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    ()

void URewardInfoButtonWidget_C::GetDisplayName(class FText* DisplayName, class FText OutName, enum class EFortItemType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, class FText Temp_text_Variable_86, class FText Temp_text_Variable_87, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, class FText Temp_text_Variable_91, class FText Temp_text_Variable_92, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortItem* CallFunc_GetItemInstance_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class UFortItem* CallFunc_GetItemInstance_ReturnValue_1, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class UFortItem* CallFunc_GetItemInstance_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortItem* CallFunc_GetItemInstance_ReturnValue_4, enum class EFortItemType CallFunc_GetType_ReturnValue_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2)
{
	static auto Func = Class->GetFunction("RewardInfoButtonWidget_C", "GetDisplayName");

	Params::URewardInfoButtonWidget_C_GetDisplayName_Params Parms;

	Parms.OutName = OutName;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
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
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_text_Variable_91 = Temp_text_Variable_91;
	Parms.Temp_text_Variable_92 = Temp_text_Variable_92;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetItemInstance_ReturnValue = CallFunc_GetItemInstance_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue_1 = CallFunc_BPGetRarityData_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_BPGetRarityData_ReturnValue_2 = CallFunc_BPGetRarityData_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetItemInstance_ReturnValue_1 = CallFunc_GetItemInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFilterCategory_ReturnValue = CallFunc_GetFilterCategory_ReturnValue;
	Parms.CallFunc_GetItemInstance_ReturnValue_2 = CallFunc_GetItemInstance_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_GetItemInstance_ReturnValue_3 = CallFunc_GetItemInstance_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetItemInstance_ReturnValue_4 = CallFunc_GetItemInstance_ReturnValue_4;
	Parms.CallFunc_GetType_ReturnValue_1 = CallFunc_GetType_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.SetShowDescriptionBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInShowDescription                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardInfoButtonWidget_C::SetShowDescriptionBP(bool bInShowDescription)
{
	static auto Func = Class->GetFunction("RewardInfoButtonWidget_C", "SetShowDescriptionBP");

	Params::URewardInfoButtonWidget_C_SetShowDescriptionBP_Params Parms;

	Parms.bInShowDescription = bInShowDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void URewardInfoButtonWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static auto Func = Class->GetFunction("RewardInfoButtonWidget_C", "HandleDifferentItemOrQuantitySetBP");

	Params::URewardInfoButtonWidget_C_HandleDifferentItemOrQuantitySetBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardInfoButtonWidget.RewardInfoButtonWidget_C.ExecuteUbergraph_RewardInfoButtonWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInShowDescription                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetQuantity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                ()
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue_1                            ()
// class FText                        CallFunc_GetDisplayName_DisplayName                              ()
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue_1                              ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardInfoButtonWidget_C::ExecuteUbergraph_RewardInfoButtonWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_bInShowDescription, int32 CallFunc_GetQuantity_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEmptyText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue_1, class FText CallFunc_GetDisplayName_ReturnValue_1, class FText CallFunc_GetDisplayName_DisplayName, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetEmptyText_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("RewardInfoButtonWidget_C", "ExecuteUbergraph_RewardInfoButtonWidget");

	Params::URewardInfoButtonWidget_C_ExecuteUbergraph_RewardInfoButtonWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_bInShowDescription = K2Node_Event_bInShowDescription;
	Parms.CallFunc_GetQuantity_ReturnValue = CallFunc_GetQuantity_ReturnValue;
	Parms.CallFunc_GetItemInstance_ReturnValue = CallFunc_GetItemInstance_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetItemInstance_ReturnValue_1 = CallFunc_GetItemInstance_ReturnValue_1;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue_1 = CallFunc_GetItemDefinitionBP_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_DisplayName = CallFunc_GetDisplayName_DisplayName;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetEmptyText_ReturnValue_1 = CallFunc_GetEmptyText_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
