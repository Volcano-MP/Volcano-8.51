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

// 0x10 (0xA90 - 0xA80)
// BlueprintGeneratedClass GA_Perk_H_FullyContained_DamageOnHit.GA_Perk_H_FullyContained_DamageOnHit_C
class UGA_Perk_H_FullyContained_DamageOnHit_C : public UGAT_GenericTriggeredAbility_Perk_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          Request_Reflection_Tag;                            // 0xA88(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Perk_H_FullyContained_DamageOnHit_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Perk_H_FullyContained_DamageOnHit(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
