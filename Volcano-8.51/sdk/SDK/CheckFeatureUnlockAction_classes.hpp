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
// BlueprintGeneratedClass CheckFeatureUnlockAction.CheckFeatureUnlockAction_C
class ACheckFeatureUnlockAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckFeatureUnlockAction_C");
		return Clss;
	}

	void HandleFeatureUnlockClosed();
	void IsFeatureUnlockRunning(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFeatureUnlockScreen_C* K2Node_DynamicCast_AsFeature_Unlock_Screen, bool K2Node_DynamicCast_bSuccess);
	void IsFrontendDailyRewardsRunning(bool* IsRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void ShowFeatureUnlock(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, const class FString& CallFunc_PopNextPendingFeatureUnlock_ReturnValue, class UFeatureUnlockScreen_C* K2Node_DynamicCast_AsFeature_Unlock_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInViewport_ReturnValue);
	void IsFeatureUnlockAvailable(bool* Feature_Unlock_Available, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsPendingFeatureUnlockNotification_ReturnValue);
	void IsFrontEndRewardsRunning(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess);
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_CheckFeatureUnlockAction(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFeatureUnlockAvailable_Feature_Unlock_Available, bool CallFunc_IsFrontendDailyRewardsRunning_IsRunning, const struct FFortScriptedActionParams& K2Node_Event_Params, bool CallFunc_IsFeatureUnlockRunning_bRunning, bool CallFunc_BooleanOR_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
