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

// 0x200 (0x438 - 0x238)
// WidgetBlueprintGeneratedClass HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C
class UHeroLoadoutPerkDetailRow_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_PerkIcon;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockPerk;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImagePerkIcon;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageTier;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 InfoSwitcher;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LargeInfo;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LargeName;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LevelTextNew;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayLockPerk;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PerkIconSizeBox;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichText_SmallDescription;                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Shadow;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SmallInfo;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SmallName;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IncludeName;                                       // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IncludeDescription;                                // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShouldDisplayAsIgnored;                            // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FD2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                UnlockedDisplayNameTextStyle;                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LockedDisplayNameTextStyle;                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                IgnoredDisplayNameTextStyle;                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                UnlockedDescriptionTextStyle;                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                LockedDescriptionTextStyle;                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                IgnoredDescriptionTextStyle;                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBrushSize                    Icon_Size;                                         // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             Host_Hero;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortHeroLoadoutPerkType          Perk_Type_To_Represent;                            // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_FD4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoverAlphaValue;                                   // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        HoverHorizontalOffset;                             // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           LockedIcon;                                        // 0x310(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           WarningIcon;                                       // 0x398(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShouldDisplayWarning;                              // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FD6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTeamPerkItem*                     Team_Perk;                                         // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityKit*                       Raw_Ability_Kit;                                   // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroLoadoutPerkDetailRow_C");
		return Clss;
	}

	void SetRawAbilityKit(class UFortAbilityKit* Ability_Kit);
	void SetTeamPerk(class UFortTeamPerkItem* Team_Perk);
	void PlayUnHover(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void PlayHover(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void SetShouldDisplayWarning(bool InShouldDisplayWarning, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateLockedImage(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void PlayUnhoverCue(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void PlayHoverCue(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetShouldDisplayAsIgnored(bool InShouldDisplayAsIgnored, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetPerkTypeToRepresent(enum class EFortHeroLoadoutPerkType Perk_Type);
	bool IsPerkUnlocked(bool Temp_bool_Variable, enum class EFortHeroLoadoutPerkType Temp_byte_Variable, bool CallFunc_IsCommanderPerkUnlockedForHero_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default);
	class UFortAbilityKit* GetPerkAbilityKit(class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortTeamPerkItemDefinition* K2Node_DynamicCast_AsFort_Team_Perk_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortAbilityKit* CallFunc_GetAbilityKitBP_ReturnValue, enum class EFortHeroLoadoutPerkType Temp_byte_Variable, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UFortHeroType* K2Node_DynamicCast_AsFort_Hero_Type, bool K2Node_DynamicCast_bSuccess_1, class UFortAbilityKit* CallFunc_GetAbilityKitForHeroPerk_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKitForCommanderPerk_ReturnValue, class UFortAbilityKit* K2Node_Select_Default);
	void SetHero(class UFortHero* Hero);
	void UpdateTextStyles(float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_1, float Temp_float_Variable_4, bool Temp_bool_Variable_2, float Temp_float_Variable_5, float Temp_float_Variable_6, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool CallFunc_IsPerkUnlocked_ReturnValue, bool CallFunc_IsPerkUnlocked_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, bool Temp_bool_Variable_5, float K2Node_Select_Default_2, bool CallFunc_IsPerkUnlocked_ReturnValue_2, float K2Node_Select_Default_3, float CallFunc_Multiply_FloatFloat_ReturnValue, class UClass* K2Node_Select_Default_4, class UClass* K2Node_Select_Default_5);
	void UpdateFromState(bool CallFunc_IsValid_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortTeamPerkItemDefinition* K2Node_DynamicCast_AsFort_Team_Perk_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasProgressiveBonus_ReturnValue, class UFortAbilityKit* CallFunc_GetAbilityKitBP_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UFortAbilityKit* CallFunc_GetPerkAbilityKit_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue_1, bool Temp_bool_Variable, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue, class UObject* K2Node_Select_Default, bool Temp_bool_Variable_1, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue_1, class FText K2Node_Select_Default_1, class FText CallFunc_GetCombinedDescription_OutDescription_1, bool CallFunc_GetCombinedDescription_ReturnValue_1);
	void UpdateFromStyle(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void SetHoverAlphaValue(float NewValue);
	void SetHoverHorizontalOffset(float NewValue);
	void ExecuteUbergraph_HeroLoadoutPerkDetailRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_NewValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float K2Node_CustomEvent_NewValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
