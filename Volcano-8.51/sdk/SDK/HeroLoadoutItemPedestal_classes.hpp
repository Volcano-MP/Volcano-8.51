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

// 0xB8 (0x3E0 - 0x328)
// BlueprintGeneratedClass HeroLoadoutItemPedestal.HeroLoadoutItemPedestal_C
class AHeroLoadoutItemPedestal_C : public AFortHeroLoadoutPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     AnimationTagQuery_Idle;                            // 0x338(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FTransform                            CommandScreenTransform;                            // 0x380(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            HeroLoadoutScreenTransform;                        // 0x3B0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeroLoadoutItemPedestal_C");
		return Clss;
	}

	void HandleSlotFocusInUIChanged();
	void OnHeroPawnSetupCompleted();
	void ExecuteUbergraph_HeroLoadoutItemPedestal(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsCustom_Character_Part_Owner_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
