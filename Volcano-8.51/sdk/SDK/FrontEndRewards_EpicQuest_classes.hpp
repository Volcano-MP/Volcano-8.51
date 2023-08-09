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

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C
class UFrontEndRewards_EpicQuest_C : public UFortRewardNewQuestWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQuestInfo_Widget_C*                   QuestInfo_Widget;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                        Quest;                                             // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ReplayAction;                                      // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndRewards_EpicQuest_C");
		return Clss;
	}

	void MarkQuestAsSeen(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void HandleTransitionInComplete(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void HandleContinueAction(bool* Committed);
	void PopulateFromQuest(class UFortQuestItem* InQuest, bool CallFunc_IsValid_ReturnValue);
	void TransitionInBegin();
	void TransitionOutBegin();
	void Construct();
	void OnPrimaryAction();
	void ExecuteUbergraph_FrontEndRewards_EpicQuest(int32 EntryPoint, bool CallFunc_HandleContinueAction_Committed, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
