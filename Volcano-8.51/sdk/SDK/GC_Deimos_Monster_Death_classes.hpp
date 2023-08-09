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

// 0x0 (0x468 - 0x468)
// BlueprintGeneratedClass GC_Deimos_Monster_Death.GC_Deimos_Monster_Death_C
class AGC_Deimos_Monster_Death_C : public AFortGameplayCueNotify_BurstLatent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Deimos_Monster_Death_C");
		return Clss;
	}

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, const struct FGameplayTagContainer& BruteTags, const struct FGameplayTagContainer& FiendTags, class UParticleSystemComponent* CallFunc_Array_Get_Item, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, UInterfaceProperty_ K2Node_DynamicCast_AsDeimos_Type_Info, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Variable, const struct FLinearColor& CallFunc_GetEnemyColor_Color, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
