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


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnRep_ServerSpawnTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::OnRep_ServerSpawnTime()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "OnRep_ServerSpawnTime");

	Params::ABP_DeimosRift_Dynamic_C_OnRep_ServerSpawnTime_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "UserConstructionScript");

	Params::ABP_DeimosRift_Dynamic_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "ReceiveBeginPlay");

	Params::ABP_DeimosRift_Dynamic_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DeimosRift_Dynamic_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "OnDamageServer");

	Params::ABP_DeimosRift_Dynamic_C_OnDamageServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.SetLifeTimeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::SetLifeTimeTimer()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "SetLifeTimeTimer");

	Params::ABP_DeimosRift_Dynamic_C_SetLifeTimeTimer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.LifeTimeExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::LifeTimeExpired()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "LifeTimeExpired");

	Params::ABP_DeimosRift_Dynamic_C_LifeTimeExpired_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Intro
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_Intro()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_Intro");

	Params::ABP_DeimosRift_Dynamic_C_BP_Cosmetic_Intro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Idle
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_Idle()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_Idle");

	Params::ABP_DeimosRift_Dynamic_C_BP_Cosmetic_Idle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_RampUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_RampUp()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_RampUp");

	Params::ABP_DeimosRift_Dynamic_C_BP_Cosmetic_RampUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_ShouldDie
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosRift_Dynamic_C::BP_Cosmetic_ShouldDie()
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "BP_Cosmetic_ShouldDie");

	Params::ABP_DeimosRift_Dynamic_C_BP_Cosmetic_ShouldDie_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ExecuteUbergraph_BP_DeimosRift_Dynamic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void ABP_DeimosRift_Dynamic_C::ExecuteUbergraph_BP_DeimosRift_Dynamic(int32 EntryPoint, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetTimeSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_DeimosRift_Dynamic_C", "ExecuteUbergraph_BP_DeimosRift_Dynamic");

	Params::ABP_DeimosRift_Dynamic_C_ExecuteUbergraph_BP_DeimosRift_Dynamic_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
