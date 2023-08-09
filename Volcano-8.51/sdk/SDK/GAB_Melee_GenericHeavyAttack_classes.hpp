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

// 0x18 (0x990 - 0x978)
// BlueprintGeneratedClass GAB_Melee_GenericHeavyAttack.GAB_Melee_GenericHeavyAttack_C
class UGAB_Melee_GenericHeavyAttack_C : public UGAB_Melee_Generic_EventGraph_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          T_Event_Activate;                                  // 0x980(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Event_Deactivate;                                // 0x988(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_Melee_GenericHeavyAttack_C");
		return Clss;
	}

	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_Melee_GenericHeavyAttack(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
