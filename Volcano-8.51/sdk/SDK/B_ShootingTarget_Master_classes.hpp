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

// 0x3E1 (0xEE9 - 0xB08)
// BlueprintGeneratedClass B_ShootingTarget_Master.B_ShootingTarget_Master_C
class AB_ShootingTarget_Master_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  AimAssistPawn;                                     // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_TargetImpact_Falldown;                           // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      RoundShortWeakPoint;                               // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      RoundWeakPoint;                                    // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     HuskyWeakPoint1;                                   // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PumpkinHeadTargetWeakPoint;                        // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      LlamaTargetWeakPoint;                              // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      TomatoHeadTargetWeakPoint;                         // 0xB48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      HandsOnHipsWeakPoint;                              // 0xB50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PandaHeadWeakPoint;                                // 0xB58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      TeddyBearWeakPoint;                                // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CrouchingTargetWeakPoint;                          // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      HuskTargetWeakPoint;                               // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DancingTargetWeakPoint;                            // 0xB78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      LoserTargetWeakPoint;                              // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     StandingTargetWeakPoint;                           // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  TargetMesh;                                        // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  HeightExtender;                                    // 0xB98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0xBA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      ProximityTrigger;                                  // 0xBA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameProgressComponent*        FortMinigameProgress;                              // 0xBB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xBB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Target_StandShort;                              // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Target_Base;                                    // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        KnockDownTimeline_Rotation_8B965F244DB51315A670CE8BD54F045D; // 0xBD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                KnockDownTimeline__Direction_8B965F244DB51315A670CE8BD54F045D; // 0xBD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    KnockDownTimeline;                                 // 0xBD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_Height_50A7E1DD45D0851E9ECD309DBAE220D5; // 0xBE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_50A7E1DD45D0851E9ECD309DBAE220D5; // 0xBE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6215[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PopUpTimeline_Rotation_EC7265FB4A8A31A05B401FB83B908B21; // 0xBF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PopUpTimeline__Direction_EC7265FB4A8A31A05B401FB83B908B21; // 0xBF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6216[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PopUpTimeline;                                     // 0xBF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Rotated_Piece;                                     // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingHealthSetting;                             // 0xC08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ResetDelaySetting;                                 // 0xC0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        JumpTimeSetting;                                   // 0xC10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeBeforeHidingSetting;                           // 0xC14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentMaxHealthMultiplier;                        // 0xC18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HingeLocationSetting;                              // 0xC1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StartingPositionSetting;                           // 0xC20(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPopUpsSetting;                                  // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ScoreValueSetting;                                 // 0xC28(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WeakPointMultiplierSetting;                        // 0xC2C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ProximityDistanceSetting;                          // 0xC30(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TeamAssignmentSetting;                             // 0xC34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AddGameTimeSetting;                                // 0xC38(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetMeshSetting;                                 // 0xC3C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumResets;                                         // 0xC40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PopUpOnJumpSetting;                                // 0xC44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WeakPointKnockdownSetting;                         // 0xC45(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TargetIsUp;                                        // 0xC46(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6217[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CurrentlyDisplayedMesh;                            // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InJumpUpPosition;                                  // 0xC50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WeakPointHit;                                      // 0xC51(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6218[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ModifyMaxHealth;                                   // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            TargetKnockedDownDispatcher;                       // 0xC60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            TargetPopUpDispatcher;                             // 0xC70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UStaticMesh>            StandingTargetRef;                                 // 0xC80(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            LoserTargetRef;                                    // 0xCA8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            DancingTargetRef;                                  // 0xCD0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            HuskTargetRef;                                     // 0xCF8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            CrouchingTargetRef;                                // 0xD20(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            TeddyBearTargetRef;                                // 0xD48(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            PandaHeadTargetRef;                                // 0xD70(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            HandsOnHipsTargetRef;                              // 0xD98(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            TomatoHeadTargetRef;                               // 0xDC0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            LlamaTargetRef;                                    // 0xDE8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            PumpkinHeadTargetRef;                              // 0xE10(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            HuskyTargetRef;                                    // 0xE38(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            RoundTargetRef;                                    // 0xE60(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            RoundTargetShortRef;                               // 0xE88(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          PopUpDelayTimer;                                   // 0xEB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HideTargetTimer;                                   // 0xEB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HopTimer;                                          // 0xEC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UStaticMesh>>    TargetMeshesArray;                                 // 0xEC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPrimitiveComponent*>           WeakPointArray;                                    // 0xED8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                         UserSuppressHealthBar;                             // 0xEE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_ShootingTarget_Master_C");
		return Clss;
	}

	class UStaticMesh* GetCollisionStaticMesh();
	void WeakPointArrayContainsItems(bool* ArrayContainsItems, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetWeaponDataFromDamageCauser(class UObject* DamageCauser, class UFortWeaponItemDefinition** OutWeaponData, class UFortWeaponItemDefinition* WeaponData, class AFortProjectileAthena* K2Node_DynamicCast_AsFort_Projectile_Athena, bool K2Node_DynamicCast_bSuccess, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon_1, bool K2Node_DynamicCast_bSuccess_2);
	void CalculateDamageFromWeaponData(class UFortWeaponItemDefinition* WeaponData, float InDamage, float* OutDamage, float NewDamage, const struct FDataTableRowHandle& CallFunc_GetWeaponStatHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortBaseWeaponStats& CallFunc_GetWeaponStatsRow_OutRow, bool CallFunc_GetWeaponStatsRow_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	bool IsWithinWeakpointBounds(const struct FVector& Impact_location, class USceneComponent* Component, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4);
	void UpdateHealthBarVisibility(bool ShouldShowBar, bool ShouldSuppress, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	float BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser, float NewDamage, class UFortWeaponItemDefinition* CallFunc_GetWeaponDataFromDamageCauser_OutWeaponData, float CallFunc_BlueprintModifyIncomingDamage_ReturnValue, float CallFunc_CalculateDamageFromWeaponData_OutDamage, const struct FHitResult& CallFunc_EffectContextGetHitResult_ReturnValue, bool CallFunc_EffectContextHasHitResult_ReturnValue, class UPrimitiveComponent* CallFunc_WeakPointWasHit_HitComponent, bool CallFunc_WeakPointWasHit_ReturnValue);
	void SetAimAssistEnabled(bool NewType, bool Temp_bool_Variable, enum class ECollisionResponse Temp_byte_Variable, enum class ECollisionResponse Temp_byte_Variable_1, enum class ECollisionResponse K2Node_Select_Default, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, enum class ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue, class FText CallFunc_Conv_ByteToText_ReturnValue, enum class ECollisionResponse CallFunc_GetCollisionResponseToChannel_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_ByteToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void CreateWeakPointArray(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Add_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_11, int32 CallFunc_Array_Add_ReturnValue_12, int32 CallFunc_Array_Add_ReturnValue_13);
	void CheckIfShouldHop(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void SetBunnyHopTimer(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void ClearBunnyHopTimer();
	void InitializeHideTargetTimer(bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HideTarget();
	void SetMaxHealth(float NewMaxHealth, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
	bool TargetShouldFall(float CallFunc_GetHealth_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetStartingPosition(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void MinigameIsRunning(bool* MinigameIsRunning, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ShouldTriggerTarget(class UObject* Overlapping_Actor, class UPrimitiveComponent* Overlapping_Component, bool* Result, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void AwardScore(class AFortPlayerController* FortPlayerController, int32* ScoreAwarded, int32* TeamAwardedPoints, class UFortMinigameManager* MinigameManager, class UFortMinigameManager* CallFunc_GetMinigameManager_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetSourceAndContextTags_OutSourceTags, const struct FGameplayTagContainer& CallFunc_GetSourceAndContextTags_OutContextTags, uint8 CallFunc_GetActorTeam_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Subtract_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_CalculateScore_ScoreToAward);
	void CalculateScore(int32* ScoreToAward, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void PrepareChosenTarget(class UStaticMeshComponent* StaticMeshComponent, class UPrimitiveComponent* WeakPointComponent_1, class UPrimitiveComponent* WeakPointComponent2);
	bool WeakPointWasHit(struct FHitResult& Hit_Result, class UPrimitiveComponent** HitComponent, bool CallFunc_WeakPointArrayContainsItems_ArrayContainsItems, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ComponentHasTag_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_IsWithinWeakpointBounds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ResetWeakPoints(int32 Temp_int_Array_Index_Variable, bool CallFunc_WeakPointArrayContainsItems_ArrayContainsItems, int32 Temp_int_Loop_Counter_Variable, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CanPopUp(bool MinigameJustStartedOrStopped, bool* CanPopUp, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void PopUpTimeline__FinishedFunc();
	void PopUpTimeline__UpdateFunc();
	void KnockDownTimeline__FinishedFunc();
	void KnockDownTimeline__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnLoaded_E00ACB5548EAE7DC61ECB69BAE5C78CA(class UObject* Loaded);
	void OnReady_A57ED5A14BEB6A98DB20D88D1582D58A();
	void KnockdownTarget();
	void PopUpTarget(bool MinigameJustStartedOrStopped);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature();
	void PickMeshFromSettings();
	void InitializeSettings();
	void ResetFromSettings();
	void HideTargetTimerEvent();
	void SetHideTargetTimer(float TimerDuration);
	void Hop(bool InJumpUpPosition);
	void HopTimerEvent();
	void SetHopTimer();
	void Knock_Down_Audio(bool Knocked_Down_);
	void Impact_Audio(int32 Check_for_Positive_Score, class AController* Instigator);
	void SpawnWeakpointFX(const struct FTransform& ImpactTransform);
	void Target_Movement_Audio(bool Jump_Up_);
	void PopUpTargetTimerEvent();
	void PostFinishSpawning();
	void ExecuteUbergraph_B_ShootingTarget_Master(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, bool Temp_bool_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, bool Temp_bool_Variable_2, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_CustomEvent_MinigameJustStartedOrStopped, bool CallFunc_CanPopUp_CanPopUp, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* CallFunc_WeakPointWasHit_HitComponent, bool CallFunc_WeakPointWasHit_ReturnValue, int32 CallFunc_AwardScore_ScoreAwarded, int32 CallFunc_AwardScore_TeamAwardedPoints, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 Temp_int_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_ShouldTriggerTarget_Result, class UFortAsyncAction_AuthorityMatchReady* CallFunc_MatchReadyAsync_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_TargetShouldFall_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* Temp_object_Variable_6, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, float K2Node_CustomEvent_TimerDuration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_CustomEvent_InJumpUpPosition, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded, TSoftObjectPtr<class UStaticMesh> CallFunc_Array_Get_Item, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_CustomEvent_Knocked_Down_, class USoundBase* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 K2Node_CustomEvent_Check_for_Positive_Score, class AController* K2Node_CustomEvent_Instigator, bool CallFunc_IsLocalController_ReturnValue, class USoundBase* K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FTransform& K2Node_CustomEvent_ImpactTransform, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool K2Node_CustomEvent_Jump_Up_, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class USoundBase* K2Node_Select_Default_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetMaxHealth_ReturnValue_2, bool CallFunc_WeakPointArrayContainsItems_ArrayContainsItems);
	void TargetPopUpDispatcher__DelegateSignature();
	void TargetKnockedDownDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
