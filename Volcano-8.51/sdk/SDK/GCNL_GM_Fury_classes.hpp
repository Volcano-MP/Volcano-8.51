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

// 0xB0 (0x3E8 - 0x338)
// BlueprintGeneratedClass GCNL_GM_Fury.GCNL_GM_Fury_C
class AGCNL_GM_Fury_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              FuryPS;                                            // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>       VectorParameters;                                  // 0x348(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FName, float>                     ScalarParameters;                                  // 0x398(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_GM_Fury_C");
		return Clss;
	}

	void DisableFuryPS(bool CallFunc_IsValid_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array);
	void BindOnDied(class AEnemyPawn_Parent_C* EnemyPawnParentReference);
	void OnEnemyDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser);
	void ExecuteUbergraph_GCNL_GM_Fury(int32 EntryPoint, class AActor* K2Node_CustomEvent_DeadActor, float K2Node_CustomEvent_Damage, class AFortPawn* K2Node_CustomEvent_InstigatedBy, const struct FVector& K2Node_CustomEvent_HitLocation, class AActor* K2Node_CustomEvent_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AEnemyPawn_Parent_C* K2Node_CustomEvent_EnemyPawnParentReference);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
