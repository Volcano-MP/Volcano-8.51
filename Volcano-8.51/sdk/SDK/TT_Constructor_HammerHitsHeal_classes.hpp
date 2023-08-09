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

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass TT_Constructor_HammerHitsHeal.TT_Constructor_HammerHitsHeal_C
class UTT_Constructor_HammerHitsHeal_C : public UFortGameplayAbilityTooltip
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TT_Constructor_HammerHitsHeal_C");
		return Clss;
	}

	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, struct FGameplayTag& Tag, class UFortTooltipContext* Context, struct FGameplayTag& Token, class FText* OutText, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UGA_Constructor_HammerHitsHeal_C* K2Node_DynamicCast_AsGA_Constructor_Hammer_Hits_Heal, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void InitializeAbilityInstanceInternal(class UGameplayAbility* AbilityInstance, class UFortTooltipContext* Context, class UGA_Constructor_HammerHitsHeal_C* K2Node_DynamicCast_AsGA_Constructor_Hammer_Hits_Heal, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
