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

// 0xFD (0x40D - 0x310)
// BlueprintGeneratedClass GenericObjective_ReadyUp.GenericObjective_ReadyUp_C
class AGenericObjective_ReadyUp_C : public AFortObjectiveBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_ReadyUp_Interact_C*                ReadyUpActor;                                      // 0x320(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfDifficultyIncrease;                        // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DifficultyRowNames;                                // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortGameplayModifierItemDefinition*> DifficultyBoostItems;                              // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FActiveGameplayModifierHandle         DifficultyBoostItemHandle;                         // 0x350(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        BaseDifficulty;                                    // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PylonUsedStat_Difficutly;                          // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FText                                  ObjectiveText;                                     // 0x368(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	struct FSlateBrush                           BulletIcon;                                        // 0x380(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        BluGloMissionActivationQty;                        // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFightTheStorm;                                   // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenericObjective_ReadyUp_C");
		return Clss;
	}

	void GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon);
	void OnRep_ObjectiveText();
	class FText BlueprintGetObjectiveDisplayText();
	void OnRep_DifficultyLevel();
	void SetDifficultyIncreaseRewardTier(class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetDifficultyIncreaseRewardTier_ReturnValue);
	void ApplyGameDifficultyIncrease(bool CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_ApplyDifficultyOffset_Success);
	void ApplyDifficultyBoostGameplayModifierItem(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, const struct FActiveGameplayModifierHandle& CallFunc_RegisterGameplayModifier_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void HandleMissionEvent_StartObjective(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_MissionSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_IncreaseDifficulty(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_GenericObjective_ReadyUp(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid_2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle_2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params_2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_2, class UObject* K2Node_HandleMissionEvent_EventFocus_2, class UDataAsset* K2Node_HandleMissionEvent_EventContent_2, class AActor* K2Node_HandleMissionEvent_EventInstigator_2, int32 K2Node_HandleMissionEvent_GenericInt_2, float K2Node_HandleMissionEvent_GenericFloat_2, class FText K2Node_HandleMissionEvent_GenericText_2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags_2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent_2, class UGen_ReadyUp_StartObjective_C* K2Node_DynamicCast_AsGen_Ready_Up_Start_Objective, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_B_Execution_Happened_Variable, float CallFunc_BreakParams_ReadyUpTimerLength, TArray<struct FTransform>& CallFunc_BreakParams_InteractSpawnLocation, class FText CallFunc_BreakParams_InteractTEXT, int32 CallFunc_BreakParams_BluGloMissionActivationQty, bool CallFunc_BreakParams_IsFightTheStorm, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_ReadyUp_Interact_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FSlateBrush& CallFunc_GetObjectiveBulletIcon_BulletIcon, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid_1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle_1, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params_1, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_1, class UObject* K2Node_HandleMissionEvent_EventFocus_1, class UDataAsset* K2Node_HandleMissionEvent_EventContent_1, class AActor* K2Node_HandleMissionEvent_EventInstigator_1, int32 K2Node_HandleMissionEvent_GenericInt_1, float K2Node_HandleMissionEvent_GenericFloat_1, class FText K2Node_HandleMissionEvent_GenericText_1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags_1, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent_1, class UFortMissionSucceededParams* K2Node_DynamicCast_AsFort_Mission_Succeeded_Params, bool K2Node_DynamicCast_bSuccess_1, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, class AFortMission* CallFunc_BreakParams__SucceededMission, bool CallFunc_RegisterForMissionEvents_ReturnValue, bool CallFunc_StartPlayingObjective_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, bool Temp_bool_Has_Been_Initd_Variable_1, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
