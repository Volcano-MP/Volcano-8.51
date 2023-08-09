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

// 0xD8 (0x308 - 0x230)
// WidgetBlueprintGeneratedClass MissionDetailsModifierRow.MissionDetailsModifierRow_C
class UMissionDetailsModifierRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonLazyImage*                      ImageModifier;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxIcon;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextModifierDescription;                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextModifierName;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                NameTextStyle;                                     // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                DescriptionTextStyle;                              // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowName;                                          // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4959[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowDescription;                                   // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_495A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             SmallIcon;                                         // 0x2B0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bUseSmallIcon;                                     // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_495B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             LargeIcon;                                         // 0x2E0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionDetailsModifierRow_C");
		return Clss;
	}

	void SetData(class FText In_Name, bool In_Show_Name, class UClass* In_Name_Text_Style, class FText In_Description, bool In_Show_Description, class UClass* In_Desc_Text_Style, TSoftObjectPtr<class UTexture2D> In_Small_Icon, bool In_Use_Small_Icon, TSoftObjectPtr<class UTexture2D> In_Large_Icon);
	void SetLargeIcon(TSoftObjectPtr<class UTexture2D> In_Icon, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue);
	void SetSmallIcon(TSoftObjectPtr<class UTexture2D> In_Icon, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue);
	void SetUseSmallIcon(bool In_Use, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetDescriptionTextStyle(class UClass* In_Style, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	void SetShowDescription(bool In_Show, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetDescription(class FText In_Description, bool CallFunc_NotEqual_TextText_ReturnValue);
	void SetNameTextStyle(class UClass* In_Style, bool CallFunc_NotEqual_ClassClass_ReturnValue);
	void SetShowName(bool In_Show, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetName(class FText In_Name, bool CallFunc_NotEqual_TextText_ReturnValue);
	void UpdateIcon(const struct FVector2D& Normal_Size, const struct FVector2D& Small_Size, bool Temp_bool_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, float K2Node_Select_Default_1);
	void UpdateDescription(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void PlayIntroAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Update(const struct FVector2D& NormalSize);
	void Construct();
	void ExecuteUbergraph_MissionDetailsModifierRow(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
