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


// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItemDefinition*         Item_Definition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UFrontendItemViewSettingsManager_C::Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "Is Hero or Previews on Hero");

	Params::UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params Parms;

	Parms.Item_Definition = Item_Definition;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue = CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EFrontEndCamera         Camera                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                GameMode                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         ItemDefinition                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemViewSettings       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// struct FFortItemViewSettings       Return_Value                                                     (Edit, BlueprintVisible, NoDestructor)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// class UAthenaToyItemDefinition*    K2Node_DynamicCast_AsAthena_Toy_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaSprayItemDefinition*  K2Node_DynamicCast_AsAthena_Spray_Item_Definition                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaSkyDiveContrailItemDefinition*K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array_1                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array_2                                         (ConstParm, ZeroConstructor, ReferenceParm)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_3                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_4                                         (ConstParm, ZeroConstructor, ReferenceParm)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_5                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_6                                         (ConstParm, ZeroConstructor, ReferenceParm)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_7                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_8                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_9                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array_10                                        (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FFortItemViewSettings UFrontendItemViewSettingsManager_C::GetItemViewSettings(enum class EFrontEndCamera Camera, enum class ESubGame GameMode, class UFortItemDefinition* ItemDefinition, const struct FFortItemViewSettings& Return_Value, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array, class UAthenaToyItemDefinition* K2Node_DynamicCast_AsAthena_Toy_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue_1, enum class EFortItemType CallFunc_GetItemType_ReturnValue_2, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_1, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_2, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue, class UAthenaSprayItemDefinition* K2Node_DynamicCast_AsAthena_Spray_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1, class UAthenaSkyDiveContrailItemDefinition* K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, enum class EFortItemType CallFunc_GetItemType_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue_1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array_2, float CallFunc_MakeLiteralFloat_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_3, bool CallFunc_Array_Contains_ReturnValue_3, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_1, const struct FFloatRange& K2Node_MakeStruct_FloatRange, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_2, float CallFunc_MakeLiteralFloat_ReturnValue_1, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_4, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_3, bool CallFunc_Array_Contains_ReturnValue_4, const struct FFloatRange& K2Node_MakeStruct_FloatRange_1, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_5, bool CallFunc_Array_Contains_ReturnValue_5, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_4, float CallFunc_MakeLiteralFloat_ReturnValue_2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_6, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_5, bool CallFunc_Array_Contains_ReturnValue_6, const struct FFloatRange& K2Node_MakeStruct_FloatRange_2, bool CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_7, bool CallFunc_Array_Contains_ReturnValue_7, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_8, bool CallFunc_Array_Contains_ReturnValue_8, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_9, bool CallFunc_Array_Contains_ReturnValue_9, float Temp_float_Variable, bool CallFunc_BooleanOR_ReturnValue, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_10, bool CallFunc_Array_Contains_ReturnValue_10, bool Temp_bool_Variable, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "GetItemViewSettings");

	Params::UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params Parms;

	Parms.Camera = Camera;
	Parms.GameMode = GameMode;
	Parms.ItemDefinition = ItemDefinition;
	Parms.Return_Value = Return_Value;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsAthena_Toy_Item_Definition = K2Node_DynamicCast_AsAthena_Toy_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_GetTemplateType_ReturnValue = CallFunc_GetTemplateType_ReturnValue;
	Parms.CallFunc_GetItemType_ReturnValue_1 = CallFunc_GetItemType_ReturnValue_1;
	Parms.CallFunc_GetItemType_ReturnValue_2 = CallFunc_GetItemType_ReturnValue_2;
	Parms.CallFunc_GetTemplateType_ReturnValue_1 = CallFunc_GetTemplateType_ReturnValue_1;
	Parms.CallFunc_GetTemplateType_ReturnValue_2 = CallFunc_GetTemplateType_ReturnValue_2;
	Parms.CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue = CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Spray_Item_Definition = K2Node_DynamicCast_AsAthena_Spray_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1 = CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition = K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetItemType_ReturnValue_3 = CallFunc_GetItemType_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTemplateType_ReturnValue_3 = CallFunc_GetTemplateType_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue = CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.K2Node_MakeStruct_FloatRangeBound = K2Node_MakeStruct_FloatRangeBound;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.K2Node_MakeStruct_FloatRangeBound_1 = K2Node_MakeStruct_FloatRangeBound_1;
	Parms.K2Node_MakeStruct_FloatRange = K2Node_MakeStruct_FloatRange;
	Parms.K2Node_MakeStruct_FloatRangeBound_2 = K2Node_MakeStruct_FloatRangeBound_2;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeStruct_FloatRangeBound_3 = K2Node_MakeStruct_FloatRangeBound_3;
	Parms.CallFunc_Array_Contains_ReturnValue_4 = CallFunc_Array_Contains_ReturnValue_4;
	Parms.K2Node_MakeStruct_FloatRange_1 = K2Node_MakeStruct_FloatRange_1;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Array_Contains_ReturnValue_5 = CallFunc_Array_Contains_ReturnValue_5;
	Parms.K2Node_MakeStruct_FloatRangeBound_4 = K2Node_MakeStruct_FloatRangeBound_4;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_2 = CallFunc_MakeLiteralFloat_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeStruct_FloatRangeBound_5 = K2Node_MakeStruct_FloatRangeBound_5;
	Parms.CallFunc_Array_Contains_ReturnValue_6 = CallFunc_Array_Contains_ReturnValue_6;
	Parms.K2Node_MakeStruct_FloatRange_2 = K2Node_MakeStruct_FloatRange_2;
	Parms.CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue = CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Array_Contains_ReturnValue_7 = CallFunc_Array_Contains_ReturnValue_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_Array_Contains_ReturnValue_8 = CallFunc_Array_Contains_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_Array_Contains_ReturnValue_9 = CallFunc_Array_Contains_ReturnValue_9;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_Array_Contains_ReturnValue_10 = CallFunc_Array_Contains_ReturnValue_10;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
