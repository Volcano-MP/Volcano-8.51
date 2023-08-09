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

// 0x78 (0x2B8 - 0x240)
// WidgetBlueprintGeneratedClass Announcement_Tutorial.Announcement_Tutorial_C
class UAnnouncement_Tutorial_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ChatBox;                                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentBox;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Lightbox;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SystemText;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TitleText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TopOverlay;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          TextLines;                                         // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                  LastText;                                          // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ContinueTutorialTimer;                             // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announcement_Tutorial_C");
		return Clss;
	}

	void ContinueTutorial(class UFortTutorialContext* CallFunc_GetContext_ReturnValue);
	void CheckContinueTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	enum class ESlateVisibility GetLightboxVisibility(struct FFortClientAnnouncementData_Tutorial& FortClientAnnouncementData_Tutorial, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshTextLines(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateTutorialData(const struct FFortClientAnnouncementData_Tutorial& TutorialData, class UOverlaySlot* ContentBoxSlot, const struct FFortClientAnnouncementData_Tutorial& LocalTutorialData, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility CallFunc_GetLightboxVisibility_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void AddTextLine(class FText Text, bool Transparent, class UCommonUserWidget* NewLine, class FText LocalText, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UTutorialRichText_C* CallFunc_Create_ReturnValue, class UTutorialTransparentRichText_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void HandleUpdateTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow);
	void Construct();
	void HandleClientEvent_OnboardingShowUI(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnboardingHideUI(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void ResetTutorialAnnoucementWidget();
	void ExecuteUbergraph_Announcement_Tutorial(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortClientAnnouncementData_Tutorial& K2Node_MakeStruct_FortClientAnnouncementData_Tutorial, class UObject* K2Node_HandleClientEvent_EventSource_1, class UObject* K2Node_HandleClientEvent_EventFocus_1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent_1, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, const struct FFortClientAnnouncementData_Tutorial& K2Node_CustomEvent_TutorialData, bool K2Node_CustomEvent_bShow, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortTutorialContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
