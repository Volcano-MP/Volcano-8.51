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

// 0x200 (0x5D8 - 0x3D8)
// WidgetBlueprintGeneratedClass ReportPlayer.ReportPlayer_C
class UReportPlayer_C : public UFeedbackReportPlayerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BR_ImageLoaded;                                    // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ImageLoaded;                                       // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ReportSent;                                        // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     B_Tab_AdditionalInfo;                              // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     B_Tab_PlayerName;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     B_Tab_Reason;                                      // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_Image;                                  // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_ReportFinished;                             // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_ReportNotSent_Close;                        // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_0;                                // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurrentReportStackingEntry_C*         CurrentReportStackingEntry;                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox_0;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Report_NOT_Sent;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ReportReceived;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_StackingEntry;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_MainPanelContent;                         // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_TabContent;                               // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      T_PlayerReporting;                                 // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_StackingEntryContainer;                         // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ModalHeader_Title;                                 // 0x488(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TabTitle_PlayerName;                               // 0x4A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TabTitle_AdditionalInfo;                           // 0x4B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  TabTitle_TabReason;                                // 0x4D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ButtonLabel_SendPlayerReport;                      // 0x4E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UIconTextButton_C*>             TabButtons;                                        // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                   BackAction;                                        // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UCurrentReportStackingEntry_C*> StackingSelectedDisplays;                          // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ImagedLoadComplete;                                // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReportPlayerImageSettings            STWImage;                                          // 0x538(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FReportPlayerImageSettings            BRImage;                                           // 0x588(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReportPlayer_C");
		return Clss;
	}

	void PlayBackgroundImageAnim(enum class ESubGame Temp_byte_Variable, const struct FReportPlayerImageSettings& Temp_struct_Variable, const struct FReportPlayerImageSettings& Temp_struct_Variable_1, enum class ESubGame CallFunc_GetCurrentSubGame_ReturnValue, const struct FReportPlayerImageSettings& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ResetAnims(const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void ResetSwitcherStates();
	void ClearStackingEntries();
	void RemoveStackedEntriesByStep(enum class EPlayerReportingStep CurrentStep, const TArray<class UCurrentReportStackingEntry_C*>& RemovedStackingEntries, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UCurrentReportStackingEntry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UCurrentReportStackingEntry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void HandleDisplayNewReportPlayerEntryItemSelection(enum class EPlayerReportingStep DisplayedStep, class FText DisplayedText, class UCurrentReportStackingEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void DisableTabsByCurrentStep(enum class EPlayerReportingStep CurStep, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleTabsByCurrentStep(enum class EPlayerReportingStep CurStep, enum class EPlayerReportingStep Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Select_Default);
	void SetEnableTabButton(class UIconTextButton_C* InTabButton, bool bIsEnabled, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void EnableTabByCurrentStep(enum class EPlayerReportingStep CurrentStep, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleBottomBarBackButtonClicked(bool* Passhtrough);
	void OnLoaded_69F2E4A6451E92C2AF9C36808D6C297B(class UObject* Loaded);
	void Construct();
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnTabClicked(class UCommonButton* Button);
	void OnActivated();
	void OnPopulateView(enum class EPlayerReportingStep CurrentStep);
	void BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnListViewSelectionMade(enum class EPlayerReportingStep ReportingStep, class FText& SelectedText);
	void BndEvt__Button_Send_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void OnFeedbackSentCallback(bool Succeeded);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ReportPlayer(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInZone_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class ESubGame Temp_byte_Variable_2, bool CallFunc_IsInZone_ReturnValue_1, const struct FReportPlayerImageSettings& Temp_struct_Variable, const struct FReportPlayerImageSettings& Temp_struct_Variable_1, class FText CallFunc_TextToUpper_ReturnValue, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_CustomEvent_Button, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Find_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPlayerReportingStep K2Node_Event_CurrentStep, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EPlayerReportingStep K2Node_Event_ReportingStep, class FText K2Node_Event_SelectedText, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ESubGame CallFunc_GetCurrentSubGame_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FReportPlayerImageSettings& K2Node_Select_Default_1, bool K2Node_Event_succeeded, float CallFunc_RandomFloatInRange_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
