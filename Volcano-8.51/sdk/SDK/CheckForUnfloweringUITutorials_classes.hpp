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

// 0x10 (0x2B0 - 0x2A0)
// BlueprintGeneratedClass CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C
class ACheckForUnfloweringUITutorials_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckForUnfloweringUITutorials_C");
		return Clss;
	}

	void CanRunTutorialQuests(bool* Result, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCurrentlyRunning_Result, bool CallFunc_Not_PreBool_ReturnValue);
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_CheckForUnfloweringUITutorials(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, bool CallFunc_CanRunTutorialQuests_Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
