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

// 0x3E (0xC90 - 0xC52)
// BlueprintGeneratedClass GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C
class UGA_Athena_FireworksMortar_WithTrajectory_C : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	uint8                                        Pad_6BD2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        YawOffsetMaster;                                   // 0xC60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_YawOffsetValue;                                // 0xC68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_Tracker;                                        // 0xC88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_FireworksMortar_WithTrajectory_C");
		return Clss;
	}

	void SetBalanceValues(float CallFunc_GetValueAtLevel_ReturnValue);
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void SetupDummyProjectile();
	void CleanupTrajectoryDisplay();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_FireworksMortar_WithTrajectory(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, class AFortProjectileBase* K2Node_Event_ProjectileReference, class AB_Prj_FireworksMortar_Holder_C* K2Node_DynamicCast_AsB_Prj_Fireworks_Mortar_Holder, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AB_ProjectileTrajectory_Athena_FireworksMortar_C* K2Node_DynamicCast_AsB_Projectile_Trajectory_Athena_Fireworks_Mortar, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
