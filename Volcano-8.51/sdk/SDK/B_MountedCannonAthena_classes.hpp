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

// 0x17 (0xDA8 - 0xD91)
// BlueprintGeneratedClass B_MountedCannonAthena.B_MountedCannonAthena_C
class AB_MountedCannonAthena_C : public AB_Ranged_GenericMountedCannon_C
{
public:
	uint8                                        Pad_68D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_FiringDelay;                                     // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_MountedCannonAthena_C");
		return Clss;
	}

	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnFinishedCooling();
	void ExecuteUbergraph_B_MountedCannonAthena(int32 EntryPoint, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue_1, class AFortAthenaSKPushCannon* K2Node_DynamicCast_AsFort_Athena_SKPush_Cannon, bool K2Node_DynamicCast_bSuccess_2, class AFortAthenaSKPushCannon* K2Node_DynamicCast_AsFort_Athena_SKPush_Cannon_1, bool K2Node_DynamicCast_bSuccess_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
