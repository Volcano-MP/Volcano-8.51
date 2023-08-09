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


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_ThrowConsumable_C::ShouldOnlyShowTrajectoryOnUse()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "ShouldOnlyShowTrajectoryOnUse");

	Params::UGA_ThrowConsumable_C_ShouldOnlyShowTrajectoryOnUse_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSpawnOnEquip                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileTrajectory*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class AFortProjectileTrajectory* UGA_ThrowConsumable_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "SpawnTrajectoryIndicator");

	Params::UGA_ThrowConsumable_C_SpawnTrajectoryIndicator_Params Parms;

	Parms.bSpawnOnEquip = bSpawnOnEquip;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class AFortProjectileTrajectory>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TSubclassOf<class AFortProjectileTrajectory> UGA_ThrowConsumable_C::GetProjectileTrajectoryActor()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "GetProjectileTrajectoryActor");

	Params::UGA_ThrowConsumable_C_GetProjectileTrajectoryActor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutSplinePoints                                                  (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>             OutSplineTangents                                                (Parm, OutParm, ZeroConstructor)
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSpawnLocationAndRotation_Location                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSpawnLocationAndRotation_Rotation                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints(ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents(ZeroConstructor, ReferenceParm)

void UGA_ThrowConsumable_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "GetProjectileTrajectoryPoints");

	Params::UGA_ThrowConsumable_C_GetProjectileTrajectoryPoints_Params Parms;

	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetSpawnLocationAndRotation_Location = CallFunc_GetSpawnLocationAndRotation_Location;
	Parms.CallFunc_GetSpawnLocationAndRotation_Rotation = CallFunc_GetSpawnLocationAndRotation_Rotation;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints;
	Parms.CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents = CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = Parms.OutSplinePoints;

	if (OutSplineTangents != nullptr)
		*OutSplineTangents = Parms.OutSplineTangents;

	if (OutHitResult != nullptr)
		*OutHitResult = Parms.OutHitResult;

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::CleanupTrajectory()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "CleanupTrajectory");

	Params::UGA_ThrowConsumable_C_CleanupTrajectory_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.PostThrowCleanup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ThrowConsumable_C::PostThrowCleanup(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "PostThrowCleanup");

	Params::UGA_ThrowConsumable_C_PostThrowCleanup_Params Parms;

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints           (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents         (ZeroConstructor, ReferenceParm)
// struct FHitResult                  CallFunc_GetProjectileTrajectoryPoints_OutHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ThrowConsumable_C::UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents, const struct FHitResult& CallFunc_GetProjectileTrajectoryPoints_OutHitResult, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "UpdateTrajectorySpline");

	Params::UGA_ThrowConsumable_C_UpdateTrajectorySpline_Params Parms;

	Parms.CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints = CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints;
	Parms.CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents = CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents;
	Parms.CallFunc_GetProjectileTrajectoryPoints_OutHitResult = CallFunc_GetProjectileTrajectoryPoints_OutHitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileTrajectory*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileTrajectory_C*  K2Node_DynamicCast_AsBP_Projectile_Trajectory                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ThrowConsumable_C::SetupDummyProjectile(class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "SetupDummyProjectile");

	Params::UGA_ThrowConsumable_C_SetupDummyProjectile_Params Parms;

	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Trajectory = K2Node_DynamicCast_AsBP_Projectile_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::OnProjectileSetup()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnProjectileSetup");

	Params::UGA_ThrowConsumable_C_OnProjectileSetup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         SpawnedProjectile                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowConsumable_C::OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnProjectileSpawned");

	Params::UGA_ThrowConsumable_C_OnProjectileSpawned_Params Parms;

	Parms.SpawnedProjectile = SpawnedProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnThrownProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ProjectileClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ProjectileSpawnLocation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ProjectileSpawnDirection                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FFortGameplayEffectContainerSpecExplosionEffectContainerSpec                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              ProjectileInitialSpeed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProjectileGravityScale                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         SpawnedProjectile                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowConsumable_C::SpawnThrownProjectile(class UClass* ProjectileClass, struct FVector& ProjectileSpawnLocation, struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "SpawnThrownProjectile");

	Params::UGA_ThrowConsumable_C_SpawnThrownProjectile_Params Parms;

	Parms.ProjectileClass = ProjectileClass;
	Parms.ProjectileSpawnLocation = ProjectileSpawnLocation;
	Parms.ProjectileSpawnDirection = ProjectileSpawnDirection;
	Parms.ExplosionEffectContainerSpec = ExplosionEffectContainerSpec;
	Parms.ProjectileInitialSpeed = ProjectileInitialSpeed;
	Parms.ProjectileGravityScale = ProjectileGravityScale;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedProjectile != nullptr)
		*SpawnedProjectile = Parms.SpawnedProjectile;

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetOwningPlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*             Player_Pawn                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ThrowConsumable_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "GetOwningPlayer");

	Params::UGA_ThrowConsumable_C_GetOwningPlayer_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Pawn != nullptr)
		*Player_Pawn = Parms.Player_Pawn;

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetSpawnLocationAndRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowConsumable_C::GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_1, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "GetSpawnLocationAndRotation");

	Params::UGA_ThrowConsumable_C_GetSpawnLocationAndRotation_Params Parms;

	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_NormalizeAxis_ReturnValue = CallFunc_NormalizeAxis_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn_1 = CallFunc_GetOwningPlayer_Player_Pawn_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = Parms.Location;

	if (Rotation != nullptr)
		*Rotation = Parms.Rotation;

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.PrethrowSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ThrowConsumable_C::PrethrowSetup(const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "PrethrowSetup");

	Params::UGA_ThrowConsumable_C_PrethrowSetup_Params Parms;

	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Completed_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowConsumable_C::Completed_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "Completed_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::UGA_ThrowConsumable_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowConsumable_C::Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::UGA_ThrowConsumable_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Triggered_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowConsumable_C::Triggered_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "Triggered_01C5B37D48E3DC6F82DDC58640CE2A27");

	Params::UGA_ThrowConsumable_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnFinish_96367E244486362FDDE5ED87D909C17B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::OnFinish_96367E244486362FDDE5ED87D909C17B()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnFinish_96367E244486362FDDE5ED87D909C17B");

	Params::UGA_ThrowConsumable_C_OnFinish_96367E244486362FDDE5ED87D909C17B_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_ThrowConsumable_C_OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_ThrowConsumable_C_OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_ThrowConsumable_C_OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	Params::UGA_ThrowConsumable_C_OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ThrowProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::ThrowProjectile()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "ThrowProjectile");

	Params::UGA_ThrowConsumable_C_ThrowProjectile_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.AttemptSpawnThrownProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::AttemptSpawnThrownProjectile()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "AttemptSpawnThrownProjectile");

	Params::UGA_ThrowConsumable_C_AttemptSpawnThrownProjectile_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ThrowConsumable_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "K2_OnEndAbility");

	Params::UGA_ThrowConsumable_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::InitTrajectoryVariables()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "InitTrajectoryVariables");

	Params::UGA_ThrowConsumable_C_InitTrajectoryVariables_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::OnAbilityInputReleased()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "OnAbilityInputReleased");

	Params::UGA_ThrowConsumable_C_OnAbilityInputReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "K2_ActivateAbility");

	Params::UGA_ThrowConsumable_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "CleanupTrajectoryIndicatorOnUnequip");

	Params::UGA_ThrowConsumable_C_CleanupTrajectoryIndicatorOnUnequip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ThrowConsumable_C::UpdateTrajectory()
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "UpdateTrajectory");

	Params::UGA_ThrowConsumable_C_UpdateTrajectory_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ExecuteUbergraph_GA_ThrowConsumable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutRadius                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutHalfHeight                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGravityZ_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageWaitTarget_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSpawnLocationAndRotation_Location                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSpawnLocationAndRotation_Rotation                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetOwningPlayer_Player_Pawn                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnThrownProjectile_SpawnedProjectile                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGameplayEffectContainerSpecCallFunc_MakeGameplayEffectContainerSpec_ReturnValue             ()
// class AFortProjectileTrajectory*   CallFunc_SpawnTrajectoryIndicator_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ThrowConsumable_C::ExecuteUbergraph_GA_ThrowConsumable(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, class AFortProjectileBase* CallFunc_SpawnThrownProjectile_SpawnedProjectile, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, class AFortProjectileTrajectory* CallFunc_SpawnTrajectoryIndicator_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_ThrowConsumable_C", "ExecuteUbergraph_GA_ThrowConsumable");

	Params::UGA_ThrowConsumable_C_ExecuteUbergraph_GA_ThrowConsumable_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleSize_OutRadius = CallFunc_GetScaledCapsuleSize_OutRadius;
	Parms.CallFunc_GetScaledCapsuleSize_OutHalfHeight = CallFunc_GetScaledCapsuleSize_OutHalfHeight;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetGravityZ_ReturnValue = CallFunc_GetGravityZ_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_PlayMontageWaitTarget_ReturnValue = CallFunc_PlayMontageWaitTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetSpawnLocationAndRotation_Location = CallFunc_GetSpawnLocationAndRotation_Location;
	Parms.CallFunc_GetSpawnLocationAndRotation_Rotation = CallFunc_GetSpawnLocationAndRotation_Rotation;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_Player_Pawn = CallFunc_GetOwningPlayer_Player_Pawn;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_SpawnThrownProjectile_SpawnedProjectile = CallFunc_SpawnThrownProjectile_SpawnedProjectile;
	Parms.CallFunc_MakeGameplayEffectContainerSpec_ReturnValue = CallFunc_MakeGameplayEffectContainerSpec_ReturnValue;
	Parms.CallFunc_SpawnTrajectoryIndicator_ReturnValue = CallFunc_SpawnTrajectoryIndicator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
