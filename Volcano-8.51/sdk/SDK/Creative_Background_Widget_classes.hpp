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

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
class UCreative_Background_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UserText;                                          // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Creative_Background_Widget_C");
		return Clss;
	}

	void SetTextColor(const struct FLinearColor& TextColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetTextAlignment(enum class ETextJustify Alignment);
	void SetTextScale(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ExecuteUbergraph_Creative_Background_Widget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
