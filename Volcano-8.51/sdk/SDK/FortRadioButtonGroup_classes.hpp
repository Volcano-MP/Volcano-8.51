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

// 0x64 (0x294 - 0x230)
// WidgetBlueprintGeneratedClass FortRadioButtonGroup.FortRadioButtonGroup_C
class UFortRadioButtonGroup_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_Buttons;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Buttons;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFortRadioButtonItemStruct>    Buttons;                                           // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	TArray<class UIconTextButton_C*>             CreatedButtons;                                    // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            RadioButtonClicked_Event;                          // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        WidthOverride;                                     // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5728[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    CreatedButtonsGroup;                               // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CommonButtonGroup;                                 // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeightOverride;                                    // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRadioButtonGroup_C");
		return Clss;
	}

	void CenterOnWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item);
	void OnButtonClicked_Bind(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void Destruct();
	void UpdateButtons();
	void ExecuteUbergraph_FortRadioButtonGroup(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FFortRadioButtonItemStruct& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void RadioButtonClicked_Event__DelegateSignature(int32 SelectedIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
