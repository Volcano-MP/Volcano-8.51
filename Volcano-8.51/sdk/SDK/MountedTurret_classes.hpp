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

// 0x138 (0x1078 - 0xF40)
// BlueprintGeneratedClass MountedTurret.MountedTurret_C
class AMountedTurret_C : public AFortMountedTurret
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     PawnCollision;                                     // 0xF48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                ServoAudio;                                        // 0xF50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              OverHeatScreen_R;                                  // 0xF58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              OverHeatScreen_L;                                  // 0xF60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioOnOverheat;                                   // 0xF68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioOverheat;                                     // 0xF70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              OverheatSmoke;                                     // 0xF78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MagazineGlowR;                                     // 0xF80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MagazineGlowL;                                     // 0xF88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BarrelGlowL;                                       // 0xF90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BarrelGlowR;                                       // 0xF98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         OverlapVolume;                                     // 0xFA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnDeathSound;                                      // 0xFA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_BlockWeaponFire;                                // 0xFB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_GrantWeapon;                                    // 0xFB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       DriverPawn;                                        // 0xFC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorMesh;                                          // 0xFC8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              InWaterFX;                                         // 0xFD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       InWaterLoop;                                       // 0xFD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HonkAudioComp;                                     // 0xFE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GE_EnterTurret;                                    // 0xFE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          PlayerEnterAnimation;                              // 0xFF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretEnterAnimation;                              // 0xFF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretFireAnimation;                               // 0x1000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          PlayerFireAnimation;                               // 0x1008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           PlayerWeapon;                                      // 0x1010(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_MountedTurretAthena_C*              TurretWeapon;                                      // 0x1018(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          GetWeaponTimer;                                    // 0x1020(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          OverheatCostmeticTimer;                            // 0x1028(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretFireLeftAnimation;                           // 0x1030(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretFireRightAnimation;                          // 0x1038(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           OverheatAudioCurve;                                // 0x1040(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TurretRotation;                                    // 0x1048(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_669F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          TurretStartAnimation;                              // 0x1058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretExitAnimation;                               // 0x1060(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZeroIfOverheating;                                 // 0x1068(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanInteract;                                      // 0x106C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FInteractionDelay;                                 // 0x1070(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FInteractionDelayOffset;                           // 0x1074(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MountedTurret_C");
		return Clss;
	}

	void OnGetExitSocketTransform(class FName ExitSocket, int32 SocketIndex, const struct FTransform& InTransform, bool* bOutOverriderExitSocket, struct FTransform* OutOverrideTransform, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	bool BP_CanInteract(class AFortPlayerController* FortPC, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	class FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetFireActionName_ReturnValue);
	float CurrentOverheatScalar(float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void GetIconPlacement(class AActor* SelfActor, class AActor* ViewingActor, struct FVector* OutLocation, struct FVector* OutExtents, const struct FVector& CallFunc_GetCenterOfMass_ReturnValue);
	TArray<class FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
	TArray<class FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	TArray<class FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, class AFortPlayerPawn* PlayerPawn_Local, const TArray<class FName>& ReturnActionNames_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetFireActionName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class FName CallFunc_GetVehicleExitActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void UserConstructionScript();
	void OnNotifyEnd_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyBegin_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnInterrupted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnBlendOut_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnCompleted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyEnd_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyBegin_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnInterrupted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnBlendOut_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnCompleted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnInterrupted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnBlendOut_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnCompleted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnInterrupted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnBlendOut_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnCompleted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyEnd_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyBegin_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnInterrupted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnBlendOut_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnCompleted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnInterrupted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnBlendOut_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnCompleted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void Get_Turret_Weapon();
	void Event_On_Weapon_Fired(enum class EDualWeaponHand Hand, bool bPersistantFire);
	void HideQuickBarForAbility(bool Hide);
	void UpdateOverheatCosmetics();
	void Clear_FX_And_AudioTimer();
	void Handle_Rotation_Audio();
	void Start_FX_And_Audio_Timer();
	void ExecuteUbergraph_MountedTurret(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_24, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_23, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_22, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_21, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_20, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, class FName K2Node_CustomEvent_NotifyName_19, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName Temp_name_Variable_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName Temp_name_Variable_4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_NotifyName_28, bool CallFunc_HasAuthority_ReturnValue_1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AFortPlayerPawn* K2Node_Event_PlayerPawn_1, int32 K2Node_Event_SeatIdx, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsOperatingTurret_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerPawn* K2Node_Event_PlayerPawn, class FName K2Node_Event_ExitSocketName, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool Temp_bool_IsClosed_Variable, class FName Temp_name_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, enum class EDualWeaponHand K2Node_CustomEvent_Hand, bool K2Node_CustomEvent_bPersistantFire, class AB_MountedTurretAthena_C* K2Node_DynamicCast_AsB_Mounted_Turret_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Hide, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class FName K2Node_CustomEvent_NotifyName_25, bool CallFunc_IsDedicatedServer_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_29, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class UAnimMontage* K2Node_Select_Default, bool Temp_bool_IsClosed_Variable_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, float K2Node_Select_Default_1, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, class FName K2Node_CustomEvent_NotifyName_26, float CallFunc_CurrentOverheatScalar_ReturnValue, float CallFunc_CurrentOverheatScalar_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_CurrentOverheatScalar_ReturnValue_2, float CallFunc_GetPlayLength_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UAnimBP_MountedTurret_C* K2Node_DynamicCast_AsAnim_BP_Mounted_Turret, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, class FName K2Node_CustomEvent_NotifyName_27, bool CallFunc_IsValid_ReturnValue_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool CallFunc_IsPlaying_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
