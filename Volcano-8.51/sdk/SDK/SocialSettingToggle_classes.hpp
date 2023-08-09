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

// 0x20 (0x278 - 0x258)
// WidgetBlueprintGeneratedClass SocialSettingToggle.SocialSettingToggle_C
class USocialSettingToggle_C : public UFortSocialSettingToggle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NameBox;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        DefaultFontSize;                                   // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileFontSize;                                    // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialSettingToggle_C");
		return Clss;
	}

	void SetFontSize(class UCommonTextBlock* Text, int32 DefaultSize, int32 MobileSize, const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_Select_Default);
	void UpdateSize(int32 HeightMobile, int32 HeightDefault, float LeftPaddingMobile, const struct FMargin& TempPadding, float MobileNameBoxSize, float DefaultNameBoxSize, const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsMobileGame_ReturnValue, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_2, bool CallFunc_IsMobileGame_ReturnValue_1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsMobileGame_ReturnValue_2, bool CallFunc_IsMobileGame_ReturnValue_3, const struct FVector2D& K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_IsMobileGame_ReturnValue_4, bool Temp_bool_Variable_3, const struct FVector2D& K2Node_Select_Default_2, float K2Node_Select_Default_3, bool Temp_bool_Variable_4, float K2Node_Select_Default_4, const struct FMargin& K2Node_MakeStruct_Margin);
	void Construct();
	void ExecuteUbergraph_SocialSettingToggle(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
