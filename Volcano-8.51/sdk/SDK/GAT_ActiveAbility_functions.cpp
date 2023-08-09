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


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                T_Event_HeroAbilityActivate                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::SendHeroAbilityActivationEvent(const struct FGameplayTag& T_Event_HeroAbilityActivate)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "SendHeroAbilityActivationEvent");

	Params::UGAT_ActiveAbility_C_SendHeroAbilityActivationEvent_Params Parms;

	Parms.T_Event_HeroAbilityActivate = T_Event_HeroAbilityActivate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Target_Fort_Pawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldHolster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlayEquipAnim                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDebugPrintName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsWeaponHolstered                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OperationSuccessful                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bOperationSuccessful                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful, bool bOperationSuccessful, bool CallFunc_BooleanXOR_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "SetHolsterWeaponWithName");

	Params::UGAT_ActiveAbility_C_SetHolsterWeaponWithName_Params Parms;

	Parms.Target_Fort_Pawn = Target_Fort_Pawn;
	Parms.ShouldHolster = ShouldHolster;
	Parms.PlayEquipAnim = PlayEquipAnim;
	Parms.ShowDebugPrintName = ShowDebugPrintName;
	Parms.bOperationSuccessful = bOperationSuccessful;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWeaponHolstered != nullptr)
		*IsWeaponHolstered = Parms.IsWeaponHolstered;

	if (OperationSuccessful != nullptr)
		*OperationSuccessful = Parms.OperationSuccessful;

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGAT_ActiveAbility_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     AbilitySystemOut                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "ActiveAbilitySetup");

	Params::UGAT_ActiveAbility_C_ActiveAbilitySetup_Params Parms;

	Parms.AbilitySystemIn = AbilitySystemIn;

	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySystemOut != nullptr)
		*AbilitySystemOut = Parms.AbilitySystemOut;

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ImmunityOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              ()
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::SetKnockbackImmunity(bool ImmunityOn, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "SetKnockbackImmunity");

	Params::UGAT_ActiveAbility_C_SetKnockbackImmunity_Params Parms;

	Parms.ImmunityOn = ImmunityOn;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   FortPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CollisionOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCollisionProfileName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_ActiveAbility_C::SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "SetPawnCollision");

	Params::UGAT_ActiveAbility_C_SetPawnCollision_Params Parms;

	Parms.FortPawn = FortPawn;
	Parms.CollisionOn = CollisionOn;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCollisionProfileName_ReturnValue = CallFunc_GetCollisionProfileName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "K2_ActivateAbility");

	Params::UGAT_ActiveAbility_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GAT_ActiveAbility_C", "ExecuteUbergraph_GAT_ActiveAbility");

	Params::UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
