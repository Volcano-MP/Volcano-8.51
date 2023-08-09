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

// 0x8 (0x980 - 0x978)
// BlueprintGeneratedClass GA_GM_OnDmgDealt_LifeSteal.GA_GM_OnDmgDealt_LifeSteal_C
class UGA_GM_OnDmgDealt_LifeSteal_C : public UGA_GM_OnDmgDealt_SelfHeal_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x978(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_GM_OnDmgDealt_LifeSteal_C");
		return Clss;
	}

	void DoOnDmgDealtBehavior(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_GM_OnDmgDealt_LifeSteal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
