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


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StopDrawAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_ExplosiveBow_Athena_C::StopDrawAudio(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "StopDrawAudio");

	Params::AB_ExplosiveBow_Athena_C_StopDrawAudio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StartDrawAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::StartDrawAudio(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "StartDrawAudio");

	Params::AB_ExplosiveBow_Athena_C_StartDrawAudio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupProjectileVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     StartLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InitialVelocity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProjectileVelocity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetDamageStartLocation_AimDir                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDamageStartLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::SetupProjectileVariables(struct FVector* StartLocation, struct FVector* InitialVelocity, float* ProjectileVelocity, struct FRotator* OutRotation, const struct FVector& CallFunc_GetDamageStartLocation_AimDir, const struct FVector& CallFunc_GetDamageStartLocation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "SetupProjectileVariables");

	Params::AB_ExplosiveBow_Athena_C_SetupProjectileVariables_Params Parms;

	Parms.CallFunc_GetDamageStartLocation_AimDir = CallFunc_GetDamageStartLocation_AimDir;
	Parms.CallFunc_GetDamageStartLocation_ReturnValue = CallFunc_GetDamageStartLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StartLocation != nullptr)
		*StartLocation = Parms.StartLocation;

	if (InitialVelocity != nullptr)
		*InitialVelocity = Parms.InitialVelocity;

	if (ProjectileVelocity != nullptr)
		*ProjectileVelocity = Parms.ProjectileVelocity;

	if (OutRotation != nullptr)
		*OutRotation = Parms.OutRotation;

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Velocity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChargePercent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetProjectileSpeed_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::CalculateVelocity(float* Velocity, float CallFunc_GetChargePercent_ReturnValue, float CallFunc_GetProjectileSpeed_ReturnValue)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "CalculateVelocity");

	Params::AB_ExplosiveBow_Athena_C_CalculateVelocity_Params Parms;

	Parms.CallFunc_GetChargePercent_ReturnValue = CallFunc_GetChargePercent_ReturnValue;
	Parms.CallFunc_GetProjectileSpeed_ReturnValue = CallFunc_GetProjectileSpeed_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Velocity != nullptr)
		*Velocity = Parms.Velocity;

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetChargePercent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SetupProjectileVariables_StartLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SetupProjectileVariables_InitialVelocity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetupProjectileVariables_ProjectileVelocity             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SetupProjectileVariables_OutRotation                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints(ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents(ZeroConstructor, ReferenceParm)

void AB_ExplosiveBow_Athena_C::CalculateTrajectorySpline(float CallFunc_GetChargePercent_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_SetupProjectileVariables_StartLocation, const struct FVector& CallFunc_SetupProjectileVariables_InitialVelocity, float CallFunc_SetupProjectileVariables_ProjectileVelocity, const struct FRotator& CallFunc_SetupProjectileVariables_OutRotation, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "CalculateTrajectorySpline");

	Params::AB_ExplosiveBow_Athena_C_CalculateTrajectorySpline_Params Parms;

	Parms.CallFunc_GetChargePercent_ReturnValue = CallFunc_GetChargePercent_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_SetupProjectileVariables_StartLocation = CallFunc_SetupProjectileVariables_StartLocation;
	Parms.CallFunc_SetupProjectileVariables_InitialVelocity = CallFunc_SetupProjectileVariables_InitialVelocity;
	Parms.CallFunc_SetupProjectileVariables_ProjectileVelocity = CallFunc_SetupProjectileVariables_ProjectileVelocity;
	Parms.CallFunc_SetupProjectileVariables_OutRotation = CallFunc_SetupProjectileVariables_OutRotation;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetDummyVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionChannel       CallFunc_GetCollisionObjectType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutRadius                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutHalfHeight                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGravityZ_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::SetDummyVariables(const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "SetDummyVariables");

	Params::AB_ExplosiveBow_Athena_C_SetDummyVariables_Params Parms;

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetCollisionObjectType_ReturnValue = CallFunc_GetCollisionObjectType_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleSize_OutRadius = CallFunc_GetScaledCapsuleSize_OutRadius;
	Parms.CallFunc_GetScaledCapsuleSize_OutHalfHeight = CallFunc_GetScaledCapsuleSize_OutHalfHeight;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetGravityZ_ReturnValue = CallFunc_GetGravityZ_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupTrajectoryProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileTrajectory_ExplosiveBow_C*K2Node_DynamicCast_AsBP_Projectile_Trajectory_Explosive_Bow      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_ExplosiveBow_Athena_C::SetupTrajectoryProjectile(const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_ExplosiveBow_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory_Explosive_Bow, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "SetupTrajectoryProjectile");

	Params::AB_ExplosiveBow_Athena_C_SetupTrajectoryProjectile_Params Parms;

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Trajectory_Explosive_Bow = K2Node_DynamicCast_AsBP_Projectile_Trajectory_Explosive_Bow;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMinCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::OnReachedMinCharge()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnReachedMinCharge");

	Params::AB_ExplosiveBow_Athena_C_OnReachedMinCharge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnStartCharge
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::OnStartCharge()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnStartCharge");

	Params::AB_ExplosiveBow_Athena_C_OnStartCharge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_ExplosiveBow_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnPlayWeaponFireFX");

	Params::AB_ExplosiveBow_Athena_C_OnPlayWeaponFireFX_Params Parms;

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.EndOfCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::EndOfCharge()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "EndOfCharge");

	Params::AB_ExplosiveBow_Athena_C_EndOfCharge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::K2_OnUnEquip()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "K2_OnUnEquip");

	Params::AB_ExplosiveBow_Athena_C_K2_OnUnEquip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeDown
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::OnChargeDown()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnChargeDown");

	Params::AB_ExplosiveBow_Athena_C_OnChargeDown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::OnChargeUp()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnChargeUp");

	Params::AB_ExplosiveBow_Athena_C_OnChargeUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnEndCharge
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::OnEndCharge()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnEndCharge");

	Params::AB_ExplosiveBow_Athena_C_OnEndCharge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ResetCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::ResetCharge()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "ResetCharge");

	Params::AB_ExplosiveBow_Athena_C_ResetCharge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.IncreaseDrawStrength
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::IncreaseDrawStrength()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "IncreaseDrawStrength");

	Params::AB_ExplosiveBow_Athena_C_IncreaseDrawStrength_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnWeaponAttached");

	Params::AB_ExplosiveBow_Athena_C_OnWeaponAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "ReceiveTick");

	Params::AB_ExplosiveBow_Athena_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMaxCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_ExplosiveBow_Athena_C::OnReachedMaxCharge()
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "OnReachedMaxCharge");

	Params::AB_ExplosiveBow_Athena_C_OnReachedMaxCharge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ExecuteUbergraph_B_ExplosiveBow_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateVelocity_Velocity                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChargePercent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChargePercent_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_ExplosiveBow_Athena_C::ExecuteUbergraph_B_ExplosiveBow_Athena(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool Temp_bool_Variable_1, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_CalculateVelocity_Velocity, float K2Node_Event_DeltaSeconds, float CallFunc_GetChargePercent_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_2, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, float CallFunc_GetChargePercent_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, uint8 CallFunc_GetActorTeam_ReturnValue, bool Temp_bool_Variable_3, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USoundBase* K2Node_Select_Default_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class USoundBase* K2Node_Select_Default_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_ExplosiveBow_Athena_C", "ExecuteUbergraph_B_ExplosiveBow_Athena");

	Params::AB_ExplosiveBow_Athena_C_ExecuteUbergraph_B_ExplosiveBow_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_CalculateVelocity_Velocity = CallFunc_CalculateVelocity_Velocity;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetChargePercent_ReturnValue = CallFunc_GetChargePercent_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_2 = CallFunc_GetInstigator_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_GetChargePercent_ReturnValue_1 = CallFunc_GetChargePercent_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
