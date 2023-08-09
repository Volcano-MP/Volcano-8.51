#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_FlintlockPistol_Damage.GA_FlintlockPistol_Damage_C.K2_CommitExecute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_FlintlockPistol_Damage_C::K2_CommitExecute()
{
	static auto Func = Class->GetFunction("GA_FlintlockPistol_Damage_C", "K2_CommitExecute");

	Params::UGA_FlintlockPistol_Damage_C_K2_CommitExecute_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_FlintlockPistol_Damage.GA_FlintlockPistol_Damage_C.ExecuteUbergraph_GA_FlintlockPistol_Damage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_FlintlockPistol_Damage_C::ExecuteUbergraph_GA_FlintlockPistol_Damage(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_FlintlockPistol_Damage_C", "ExecuteUbergraph_GA_FlintlockPistol_Damage");

	Params::UGA_FlintlockPistol_Damage_C_ExecuteUbergraph_GA_FlintlockPistol_Damage_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
