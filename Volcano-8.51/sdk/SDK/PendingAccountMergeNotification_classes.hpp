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

// 0x30 (0xB78 - 0xB48)
// WidgetBlueprintGeneratedClass PendingAccountMergeNotification.PendingAccountMergeNotification_C
class UPendingAccountMergeNotification_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0xB50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_1;                                          // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   CommonActionWidget_48;                             // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_42;                                      // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_45;                                      // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PendingAccountMergeNotification_C");
		return Clss;
	}

	void Construct();
	void Hovered(bool IsHovered);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void Destruct();
	void OnInputChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_PendingAccountMergeNotification(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FDateTime& CallFunc_IsPendingAccountTransfer_EstimatedCompletionMax, bool CallFunc_IsPendingAccountTransfer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, enum class ECommonInputType Temp_byte_Variable, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ETextJustify Temp_byte_Variable_3, enum class ETextJustify Temp_byte_Variable_4, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FDateTime& CallFunc_Now_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, bool K2Node_CustomEvent_IsHovered, const struct FLinearColor& K2Node_Select_Default, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ETextJustify K2Node_Select_Default_3, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
