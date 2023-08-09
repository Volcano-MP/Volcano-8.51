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

// 0x30 (0x3C8 - 0x398)
// WidgetBlueprintGeneratedClass ChatMessageEntry.ChatMessageEntry_C
class UChatMessageEntry_C : public UFortChatMessageEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         MessageBackground;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               MessageWrapper;                                    // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                DefaultStyle_0;                                    // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SelfStyle;                                         // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OtherUserStyle;                                    // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChatMessageEntry_C");
		return Clss;
	}

	void HandleSelectionStatusChanged(bool bIsSelected, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void OnEntryUpdated_1();
	void BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void OnFocusedChanged(bool bIsFocused);
	void ExecuteUbergraph_ChatMessageEntry(int32 EntryPoint, bool K2Node_Event_bIsFocused);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
