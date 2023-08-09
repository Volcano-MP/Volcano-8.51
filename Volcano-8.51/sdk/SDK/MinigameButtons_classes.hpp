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

// 0x140 (0x370 - 0x230)
// WidgetBlueprintGeneratedClass MinigameButtons.MinigameButtons_C
class UMinigameButtons_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       ButtonSwitcher;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EndGameButton;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     EndGameButton2;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     StartGameButton;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     StartGameButton2;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            StartButtonClicked;                                // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            EndButtonClicked;                                  // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            StartButtonHovered;                                // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            EndButtonHovered;                                  // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UIconTextButton_C*                     CurrentButton;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMinigameButtonsState             ButtonState;                                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EMinigameButtonsState, struct FMinigameButtonsStateConfiguration> ButtonConfigurations;                              // 0x2B0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            StartButtonUnhovered;                              // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            EndButtonUnhovered;                                // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMinigameButtonsWidgetSwitcherConfiguration CurrentWidgetSwitcherConfiguration;                // 0x320(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FMinigameButtonsWidgetSwitcherConfiguration> WidgetSwitcherConfigurations;                      // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameButtons_C");
		return Clss;
	}

	void UpdateButtonsFromButtonState(const struct FMinigameButtonsStateConfiguration& ButtonConfiguration, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UIconTextButton_C* Temp_object_Variable, const struct FMinigameButtonsStateConfiguration& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UIconTextButton_C* K2Node_Select_Default, class FText K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UIconTextButton_C* K2Node_Select_Default_2);
	void SetButtonState(enum class EMinigameButtonsState Value, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void CenterOnCurrentButton(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void UpdateButtons(class AFortMinigame* CurrentMinigame, enum class EMinigameButtonsState UseButtonState, enum class EFortMinigameState Temp_byte_Variable, enum class EMinigameButtonsState Temp_byte_Variable_1, enum class EMinigameButtonsState Temp_byte_Variable_2, enum class EMinigameButtonsState Temp_byte_Variable_3, enum class EMinigameButtonsState Temp_byte_Variable_4, enum class EMinigameButtonsState Temp_byte_Variable_5, enum class EMinigameButtonsState Temp_byte_Variable_6, enum class EMinigameButtonsState Temp_byte_Variable_7, enum class EMinigameButtonsState Temp_byte_Variable_8, enum class EMinigameButtonsState Temp_byte_Variable_9, bool Temp_bool_Variable, enum class EMinigameButtonsState Temp_byte_Variable_10, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, enum class EMinigameButtonsState Temp_byte_Variable_11, bool CallFunc_IsValid_ReturnValue, class AFortMinigame* CallFunc_GetMinigame_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsReady_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EMinigameButtonsState K2Node_Select_Default, enum class EMinigameButtonsState K2Node_Select_Default_1);
	void BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetWidgetSwitcherIndex(int32 Index);
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInitialized();
	void ExecuteUbergraph_MinigameButtons(int32 EntryPoint, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, int32 K2Node_CustomEvent_Index, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, int32 Temp_int_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FMinigameButtonsWidgetSwitcherConfiguration& K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration, const struct FMinigameButtonsWidgetSwitcherConfiguration& K2Node_MakeStruct_MinigameButtonsWidgetSwitcherConfiguration_1, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FMinigameButtonsWidgetSwitcherConfiguration>& K2Node_MakeArray_Array, int32 K2Node_Select_Default);
	void EndButtonUnhovered__DelegateSignature(class UCommonButton* Button);
	void StartButtonUnhovered__DelegateSignature(class UCommonButton* Button);
	void EndButtonHovered__DelegateSignature(class UCommonButton* Button);
	void StartButtonHovered__DelegateSignature(class UCommonButton* Button);
	void EndButtonClicked__DelegateSignature();
	void StartButtonClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
