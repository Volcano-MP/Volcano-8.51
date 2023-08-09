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

// 0x46 (0xC98 - 0xC52)
// BlueprintGeneratedClass GA_Athena_TNT_WithTrajectory.GA_Athena_TNT_WithTrajectory_C
class UGA_Athena_TNT_WithTrajectory_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	uint8                                        Pad_6BCF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FuseDuration;                                      // 0xC60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CookHandle;                                        // 0xC68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Fuse_Sound;                                        // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ExplosionCameraShake;                              // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   Projectile;                                        // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FusePitchHandle;                                   // 0xC88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedFumble;                                // 0xC90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinFuseTime;                                       // 0xC94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_TNT_WithTrajectory_C");
		return Clss;
	}

	void CurveRowLookup(enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_2, float CallFunc_EvaluateCurveTableRow_OutXY_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_3, float CallFunc_EvaluateCurveTableRow_OutXY_3, bool K2Node_SwitchEnum_CmpSuccess_3);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, bool Temp_bool_Variable, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_1, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Percent_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void Destroyed_9AAF71F0497FA46B4152D699BE4F7F03(struct FProjectileEventData& ProjectileData);
	void Exploded_9AAF71F0497FA46B4152D699BE4F7F03(struct FProjectileEventData& ProjectileData);
	void Stopped_9AAF71F0497FA46B4152D699BE4F7F03(struct FProjectileEventData& ProjectileData);
	void Bounced_9AAF71F0497FA46B4152D699BE4F7F03(struct FProjectileEventData& ProjectileData);
	void Touched_9AAF71F0497FA46B4152D699BE4F7F03(struct FProjectileEventData& ProjectileData);
	void Created_9AAF71F0497FA46B4152D699BE4F7F03(struct FProjectileEventData& ProjectileData);
	void InvoluntaryThrow();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnPlayerStartDBNO();
	void Spawn_Server_Projectile_Involuntary(const struct FVector& Location, const struct FRotator& Direction, bool bAllowSpawnWhenDead, bool bAllowSpawnWhenDBNO);
	void OnDamagedFatal(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_TNT_WithTrajectory(int32 EntryPoint, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Direction, bool K2Node_CustomEvent_bAllowSpawnWhenDead, bool K2Node_CustomEvent_bAllowSpawnWhenDBNO, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_3, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Additional_Explosion_Gameplay_Spec, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_K2_CommitAbility_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, bool CallFunc_IsDead_ReturnValue, class AFortProjectileBase* K2Node_Event_ProjectileReference, class AB_Prj_Athena_TNT_C* K2Node_DynamicCast_AsB_Prj_Athena_TNT, bool K2Node_DynamicCast_bSuccess_3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_4, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, float CallFunc_FClamp_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_Add_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
