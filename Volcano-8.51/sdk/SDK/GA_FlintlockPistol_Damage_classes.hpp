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

// 0x17 (0x998 - 0x981)
// BlueprintGeneratedClass GA_FlintlockPistol_Damage.GA_FlintlockPistol_Damage_C
class UGA_FlintlockPistol_Damage_C : public UGA_Ranged_GenericDamage_C
{
public:
	uint8                                        Pad_694C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x988(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_SelfKnock;                                      // 0x990(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_FlintlockPistol_Damage_C");
		return Clss;
	}

	void K2_CommitExecute();
	void ExecuteUbergraph_GA_FlintlockPistol_Damage(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
