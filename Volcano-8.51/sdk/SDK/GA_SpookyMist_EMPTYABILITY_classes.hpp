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

// 0x8 (0x948 - 0x940)
// BlueprintGeneratedClass GA_SpookyMist_EMPTYABILITY.GA_SpookyMist_EMPTYABILITY_C
class UGA_SpookyMist_EMPTYABILITY_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_SpookyMist_EMPTYABILITY_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_SpookyMist_EMPTYABILITY(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
