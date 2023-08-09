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

// 0xC8 (0x308 - 0x240)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C
class UPlayerSurveyPanelAnswerSelectorWidget_C : public UFortPlayerSurveyQuestionDisplayWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                               EmptyWidget;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerSurveyPanelContentsAnswerRatingWidget_C* PlayerSurveyPanelContentsAnswerRatingWidget;       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<enum class EFortPlayerSurveyQuestionType, class UClass*> SwitcherTable;                                     // 0x260(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class EFortPlayerSurveyQuestionType, class UFortPlayerSurveyAnswerWidgetBase*> SwitcherWidgets;                                   // 0x2B0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortPlayerSurveyAnswerWidgetBase*     CurrentChild;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyPanelAnswerSelectorWidget_C");
		return Clss;
	}

	void CommitCurrentAnswer(bool CallFunc_IsValid_ReturnValue);
	void GetDefaultFocusedWidget(class UWidget** Result, class UWidget* ResultValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* NewChildWidget, class UFortPlayerSurveyQuestion* Question, enum class EFortPlayerSurveyQuestionType CallFunc_GetQuestionType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitSwitcherChildren(enum class EFortPlayerSurveyQuestionType Key, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<enum class EFortPlayerSurveyQuestionType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EFortPlayerSurveyQuestionType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void OnInitialized();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
