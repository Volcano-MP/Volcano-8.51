#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C
class UFrontendItemViewSettingsManager_C : public UFortFrontendItemViewSettingsManager
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontendItemViewSettingsManager_C");
		return Clss;
	}

	bool Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	struct FFortItemViewSettings GetItemViewSettings(enum class EFrontEndCamera Camera, enum class ESubGame GameMode, class UFortItemDefinition* ItemDefinition, const struct FFortItemViewSettings& Return_Value, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array, class UAthenaToyItemDefinition* K2Node_DynamicCast_AsAthena_Toy_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue_1, enum class EFortItemType CallFunc_GetItemType_ReturnValue_2, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_1, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_2, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue, class UAthenaSprayItemDefinition* K2Node_DynamicCast_AsAthena_Spray_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue_1, class UAthenaSkyDiveContrailItemDefinition* K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, enum class EFortItemType CallFunc_GetItemType_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue_1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array_2, float CallFunc_MakeLiteralFloat_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_2, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_3, bool CallFunc_Array_Contains_ReturnValue_3, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_1, const struct FFloatRange& K2Node_MakeStruct_FloatRange, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_2, float CallFunc_MakeLiteralFloat_ReturnValue_1, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_4, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_3, bool CallFunc_Array_Contains_ReturnValue_4, const struct FFloatRange& K2Node_MakeStruct_FloatRange_1, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_5, bool CallFunc_Array_Contains_ReturnValue_5, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_4, float CallFunc_MakeLiteralFloat_ReturnValue_2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_6, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound_5, bool CallFunc_Array_Contains_ReturnValue_6, const struct FFloatRange& K2Node_MakeStruct_FloatRange_2, bool CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_7, bool CallFunc_Array_Contains_ReturnValue_7, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_8, bool CallFunc_Array_Contains_ReturnValue_8, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_9, bool CallFunc_Array_Contains_ReturnValue_9, float Temp_float_Variable, bool CallFunc_BooleanOR_ReturnValue, TArray<enum class EFortItemType>& K2Node_MakeArray_Array_10, bool CallFunc_Array_Contains_ReturnValue_10, bool Temp_bool_Variable, float K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
