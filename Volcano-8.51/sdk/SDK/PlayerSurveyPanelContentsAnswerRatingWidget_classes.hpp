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

// 0x70 (0x2E8 - 0x278)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C
class UPlayerSurveyPanelContentsAnswerRatingWidget_C : public UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   CommonActionWidget_0;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DummyButton;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MaxRatingTextBlock;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MinRatingTextBlock;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_1;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_2;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_3;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_4;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_5;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCommonButton*>                 RatingButtons;                                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyPanelContentsAnswerRatingWidget_C");
		return Clss;
	}

	void HandlePlayerRequestAnswer(int32 AnswerIndex, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleChoice& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice, const struct FFortPlayerSurveyAnswer& CallFunc_MakeMultipleChoiceAnswer_ReturnValue);
	class UWidget* GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation);
	class UWidget* GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_IsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_Result, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue);
	void GetCurrentAnswer(bool* IsSet, struct FFortPlayerSurveyAnswerMultipleChoice* Result, bool IsSetValue, const struct FFortPlayerSurveyAnswerMultipleChoice& ResultValue, const struct FFortPlayerSurveyAnswer& CallFunc_GetAnswer_ReturnValue, bool CallFunc_GetMultipleChoiceAnswer_bIsValid, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetMultipleChoiceAnswer_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateAnswerDisplay(bool CallFunc_GetCurrentAnswer_IsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_Result);
	void GetCurrentQuestion(class UFortPlayerSurveyQuestionMultipleChoice** Result, class UFortPlayerSurveyQuestionMultipleChoice* ResultValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerSurveyQuestionMultipleChoice* K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice, bool K2Node_DynamicCast_bSuccess);
	void UpdateRatingButtons(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, int32 NumRatingButtons, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateText(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, class FText MaxRatingText, class FText MinRatingText, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void HandleButtonClicked(int32 ButtonIndex);
	void HandleQAChanged();
	void Construct();
	void HandleButtonFocused(int32 ButtonIndex);
	void HandleAnswerChanged();
	void HandleCommitCurrentAnswer();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int32 EntryPoint, bool CallFunc_GetCurrentAnswer_IsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_Result, int32 K2Node_Event_ButtonIndex_1, TArray<class UCommonButton*>& K2Node_MakeArray_Array, int32 K2Node_Event_ButtonIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
