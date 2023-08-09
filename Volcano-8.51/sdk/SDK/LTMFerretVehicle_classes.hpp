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

// 0x50 (0x19E8 - 0x1998)
// BlueprintGeneratedClass LTMFerretVehicle.LTMFerretVehicle_C
class ALTMFerretVehicle_C : public AFerretVehicle_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1998(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Music;                                             // 0x19A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Left;                                              // 0x19A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Right;                                             // 0x19B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StormEffectGE;                                     // 0x19B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortNiagaraCascadeSystemPair         SpawnFX;                                           // 0x19C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          LandedTimer;                                       // 0x19D0(0x8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        OnGroundCount;                                     // 0x19D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6579[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              GunEffects;                                        // 0x19E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LTMFerretVehicle_C");
		return Clss;
	}

	void OnLanding();
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void HideQuickBarForAbility(bool Hide);
	void SetGrantWeaponGE(TSubclassOf<class UGameplayEffect> NewGE);
	void Start_Music();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Check_If_On_Ground_and_Slow();
	void ExecuteUbergraph_LTMFerretVehicle(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, class AFortPlayerPawn* K2Node_Event_PlayerPawn_1, class FName K2Node_Event_ExitSocketName, class AFortPlayerPawn* K2Node_Event_PlayerPawn, int32 K2Node_Event_SeatIdx, bool K2Node_Event_Hide, int32 Temp_int_Array_Index_Variable, class UClass* K2Node_Event_NewGE, bool CallFunc_IsValidClass_ReturnValue, bool Temp_bool_IsClosed_Variable, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_HasAuthority_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, float K2Node_Event_DeltaSeconds, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AB_FerretWeapon_Goose_UC_C* K2Node_DynamicCast_AsB_Ferret_Weapon_Goose_UC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class AB_FerretWeapon_Goose_R_C* K2Node_DynamicCast_AsB_Ferret_Weapon_Goose_R, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_GetIsPlayingReplay_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 Temp_int_Variable, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, bool CallFunc_IsOperatingTurret_ReturnValue, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_ContainsPlayers_ReturnValue, bool CallFunc_ContainsPlayers_ReturnValue_1, bool CallFunc_IsFlying_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_GetVehicleVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_2, const struct FTransform& Temp_struct_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
