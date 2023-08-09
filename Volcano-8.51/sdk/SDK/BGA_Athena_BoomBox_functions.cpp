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


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.OnRep_b_BeatStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_BoomBox_C::OnRep_b_BeatStarted()
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "OnRep_b_BeatStarted");

	Params::ABGA_Athena_BoomBox_C_OnRep_b_BeatStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.Death__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Athena_BoomBox_C::Death__FinishedFunc()
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "Death__FinishedFunc");

	Params::ABGA_Athena_BoomBox_C_Death__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.Death__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Athena_BoomBox_C::Death__UpdateFunc()
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "Death__UpdateFunc");

	Params::ABGA_Athena_BoomBox_C_Death__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.Death__SpawnDeathFX__EventFunc
// (BlueprintEvent)
// Parameters:

void ABGA_Athena_BoomBox_C::Death__SpawnDeathFX__EventFunc()
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "Death__SpawnDeathFX__EventFunc");

	Params::ABGA_Athena_BoomBox_C_Death__SpawnDeathFX__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_Athena_BoomBox_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "ReceiveBeginPlay");

	Params::ABGA_Athena_BoomBox_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_BoomBox_C::DestroySelf(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "DestroySelf");

	Params::ABGA_Athena_BoomBox_C_DestroySelf_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.BoundEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_BoomBox_C::BoundEvents()
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "BoundEvents");

	Params::ABGA_Athena_BoomBox_C_BoundEvents_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_BoomBox_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "OnDeathServer");

	Params::ABGA_Athena_BoomBox_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.SpawnDeathFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_Athena_BoomBox_C::SpawnDeathFX()
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "SpawnDeathFX");

	Params::ABGA_Athena_BoomBox_C_SpawnDeathFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_Athena_BoomBox.BGA_Athena_BoomBox_C.ExecuteUbergraph_BGA_Athena_BoomBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_BoomBox_C::ExecuteUbergraph_BGA_Athena_BoomBox(int32 EntryPoint, const struct FVector& CallFunc_VLerp_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, uint8 CallFunc_GetActorTeam_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BGA_Athena_BoomBox_C", "ExecuteUbergraph_BGA_Athena_BoomBox");

	Params::ABGA_Athena_BoomBox_C_ExecuteUbergraph_BGA_Athena_BoomBox_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
