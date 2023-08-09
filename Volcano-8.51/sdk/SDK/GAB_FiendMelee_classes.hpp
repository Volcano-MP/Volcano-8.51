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

// 0x28 (0x978 - 0x950)
// BlueprintGeneratedClass GAB_FiendMelee.GAB_FiendMelee_C
class UGAB_FiendMelee_C : public UGAB_AIBaseMelee_NoMontage_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x950(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortAbilityTask_MoveAI*               FiendMove;                                         // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        HitActors;                                         // 0x960(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                GE_AIBaseMeleeFrustration_Reset;                   // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_FiendMelee_C");
		return Clss;
	}

	void Completed_35D25988427E4CF4800223AD6BCDA350(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_35D25988427E4CF4800223AD6BCDA350(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_35D25988427E4CF4800223AD6BCDA350(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_445BEF534036169059384B82E2963353(enum class EPathFollowingResult Result, class AAIController* AIController);
	void OnRequestFailed_445BEF534036169059384B82E2963353();
	void OnCancelled_445BEF534036169059384B82E2963353();
	void OnInterrupted_445BEF534036169059384B82E2963353();
	void OnComplete_445BEF534036169059384B82E2963353();
	void Completed_7FA319D24D6A2844B0CE37B57B709AE5(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_7FA319D24D6A2844B0CE37B57B709AE5(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_7FA319D24D6A2844B0CE37B57B709AE5(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ContinuousMoveTowardsTarget();
	void GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data);
	void ExecuteUbergraph_GAB_FiendMelee(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_Result, class AAIController* K2Node_CustomEvent_AIController, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, int32 Temp_int_Variable, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_5, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainerWithCSVStats_ReturnValue, int32 CallFunc_GetDataCountFromTargetData_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool K2Node_Event_bWasCancelled, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class ADeimos_Fiend_C* K2Node_DynamicCast_AsDeimos_Fiend, bool K2Node_DynamicCast_bSuccess, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, class ADeimos_Fiend_C* K2Node_DynamicCast_AsDeimos_Fiend_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, class UFortAbilityTask_PlayAnimWaitTarget* CallFunc_PlayAnimWithMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_K2_CommitAbility_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_1, class UFortAbilityTask_MoveAI* CallFunc_CreateMoveAITask_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Target_Data, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_2, int32 Temp_int_Variable_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class AActor* CallFunc_GetAIAbilityTarget_ReturnValue_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, bool CallFunc_Array_Contains_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_AnimationSharingEnabled_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
