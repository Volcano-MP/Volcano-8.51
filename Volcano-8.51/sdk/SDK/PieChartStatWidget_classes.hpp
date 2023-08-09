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

// 0x31 (0x279 - 0x248)
// WidgetBlueprintGeneratedClass PieChartStatWidget.PieChartStatWidget_C
class UPieChartStatWidget_C : public UAthenaProfileStatWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ChartImage;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               HighestStatValue;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HighestWeaponName;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LegendVB;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StatName;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Percent;                                           // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PieChartStatWidget_C");
		return Clss;
	}

	void AddStat(struct FStatGroupData& StatGroupData, int32 Index, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item, TArray<struct FLinearColor>& K2Node_MakeArray_Array_1, const struct FLinearColor& CallFunc_Array_Get_Item_1, enum class ECommonNumericType Temp_byte_Variable, enum class ECommonNumericType Temp_byte_Variable_1, TArray<class FName>& K2Node_MakeArray_Array_2, class FName CallFunc_Array_Get_Item_2, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPieChartRowWidget_C* CallFunc_Create_ReturnValue, enum class ECommonNumericType K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void OnStatChanged();
	void ExecuteUbergraph_PieChartStatWidget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, TArray<struct FStatGroupData>& CallFunc_CreateWeaponGroupData_ReturnValue, const struct FStatGroupData& CallFunc_Array_Get_Item, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
