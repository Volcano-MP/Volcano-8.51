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


// Function GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C.SetBalanceValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_FireworksMortar_WithTrajectory_C::SetBalanceValues(float CallFunc_GetValueAtLevel_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_FireworksMortar_WithTrajectory_C", "SetBalanceValues");

	Params::UGA_Athena_FireworksMortar_WithTrajectory_C_SetBalanceValues_Params Parms;

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C.AthenaProjectileSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         ProjectileReference                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_FireworksMortar_WithTrajectory_C::AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference)
{
	static auto Func = Class->GetFunction("GA_Athena_FireworksMortar_WithTrajectory_C", "AthenaProjectileSpawned");

	Params::UGA_Athena_FireworksMortar_WithTrajectory_C_AthenaProjectileSpawned_Params Parms;

	Parms.ProjectileReference = ProjectileReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C.SetupDummyProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_FireworksMortar_WithTrajectory_C::SetupDummyProjectile()
{
	static auto Func = Class->GetFunction("GA_Athena_FireworksMortar_WithTrajectory_C", "SetupDummyProjectile");

	Params::UGA_Athena_FireworksMortar_WithTrajectory_C_SetupDummyProjectile_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_FireworksMortar_WithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto Func = Class->GetFunction("GA_Athena_FireworksMortar_WithTrajectory_C", "CleanupTrajectoryDisplay");

	Params::UGA_Athena_FireworksMortar_WithTrajectory_C_CleanupTrajectoryDisplay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_FireworksMortar_WithTrajectory_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_FireworksMortar_WithTrajectory_C", "K2_ActivateAbility");

	Params::UGA_Athena_FireworksMortar_WithTrajectory_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FireworksMortar_WithTrajectory.GA_Athena_FireworksMortar_WithTrajectory_C.ExecuteUbergraph_GA_Athena_FireworksMortar_WithTrajectory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         K2Node_Event_ProjectileReference                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Prj_FireworksMortar_Holder_C*K2Node_DynamicCast_AsB_Prj_Fireworks_Mortar_Holder               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// class AB_ProjectileTrajectory_Athena_FireworksMortar_C*K2Node_DynamicCast_AsB_Projectile_Trajectory_Athena_Fireworks_Mortar(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_FireworksMortar_WithTrajectory_C::ExecuteUbergraph_GA_Athena_FireworksMortar_WithTrajectory(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, class AFortProjectileBase* K2Node_Event_ProjectileReference, class AB_Prj_FireworksMortar_Holder_C* K2Node_DynamicCast_AsB_Prj_Fireworks_Mortar_Holder, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AB_ProjectileTrajectory_Athena_FireworksMortar_C* K2Node_DynamicCast_AsB_Projectile_Trajectory_Athena_Fireworks_Mortar, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("GA_Athena_FireworksMortar_WithTrajectory_C", "ExecuteUbergraph_GA_Athena_FireworksMortar_WithTrajectory");

	Params::UGA_Athena_FireworksMortar_WithTrajectory_C_ExecuteUbergraph_GA_Athena_FireworksMortar_WithTrajectory_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.K2Node_Event_ProjectileReference = K2Node_Event_ProjectileReference;
	Parms.K2Node_DynamicCast_AsB_Prj_Fireworks_Mortar_Holder = K2Node_DynamicCast_AsB_Prj_Fireworks_Mortar_Holder;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_DynamicCast_AsB_Projectile_Trajectory_Athena_Fireworks_Mortar = K2Node_DynamicCast_AsB_Projectile_Trajectory_Athena_Fireworks_Mortar;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
