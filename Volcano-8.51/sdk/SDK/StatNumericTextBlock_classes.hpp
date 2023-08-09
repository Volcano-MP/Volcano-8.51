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

// 0x28 (0x260 - 0x238)
// WidgetBlueprintGeneratedClass StatNumericTextBlock.StatNumericTextBlock_C
class UStatNumericTextBlock_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ComparisonArrowImage;                              // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumericText;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortBuffState                    Buff_State;                                        // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Numeric_Text_Style;                                // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StatNumericTextBlock_C");
		return Clss;
	}

	void SetComparisonState(enum class EFortBuffState Buff_State);
	void UpdateComparison(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortBuffState Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EFortBuffState Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, enum class EFortBuffState Temp_byte_Variable_5, float K2Node_Select_Default_1, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_StatNumericTextBlock(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
