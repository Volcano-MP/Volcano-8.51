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


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ClientInteractActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::ClientInteractActor(bool CallFunc_IsValidClass_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ClientInteractActor");

	Params::AQuestInteractionProp_Parent_C_ClientInteractActor_Params Parms;

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OverrideDefaultMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::OverrideDefaultMaterialInstance(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OverrideDefaultMaterialInstance");

	Params::AQuestInteractionProp_Parent_C_OverrideDefaultMaterialInstance_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue_1 = CallFunc_GetNumMaterials_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetNumMaterials_ReturnValue_2 = CallFunc_GetNumMaterials_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.FadeInAmbientSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::FadeInAmbientSound(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "FadeInAmbientSound");

	Params::AQuestInteractionProp_Parent_C_FadeInAmbientSound_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ChangeMaterialElements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::ChangeMaterialElements(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ChangeMaterialElements");

	Params::AQuestInteractionProp_Parent_C_ChangeMaterialElements_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetNumMaterials_ReturnValue_1 = CallFunc_GetNumMaterials_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetNumMaterials_ReturnValue_2 = CallFunc_GetNumMaterials_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnAmbientSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::SpawnAmbientSound(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SpawnAmbientSound");

	Params::AQuestInteractionProp_Parent_C_SpawnAmbientSound_Params Parms;

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.FadeOutAmbientSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::FadeOutAmbientSound(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "FadeOutAmbientSound");

	Params::AQuestInteractionProp_Parent_C_FadeOutAmbientSound_Params Parms;

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SwapMeshOnInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::SwapMeshOnInteract(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SwapMeshOnInteract");

	Params::AQuestInteractionProp_Parent_C_SwapMeshOnInteract_Params Parms;

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ScaleEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::ScaleEffects()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ScaleEffects");

	Params::AQuestInteractionProp_Parent_C_ScaleEffects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnRep_InteractedPlayerNetIDRef
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnRep_InteractedPlayerNetIDRef()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnRep_InteractedPlayerNetIDRef");

	Params::AQuestInteractionProp_Parent_C_OnRep_InteractedPlayerNetIDRef_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.StorePlayerInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       InteractingPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::StorePlayerInteract(class AFortPlayerController* InteractingPlayer, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "StorePlayerInteract");

	Params::AQuestInteractionProp_Parent_C_StorePlayerInteract_Params Parms;

	Parms.InteractingPlayer = InteractingPlayer;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnRep_InteractionEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnRep_InteractionEffects()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnRep_InteractionEffects");

	Params::AQuestInteractionProp_Parent_C_OnRep_InteractionEffects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.WhereToSpawnRobot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPlayerPawnRef                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  RobotSpawnTransform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::WhereToSpawnRobot(class AFortPlayerPawn* InteractingPlayerPawnRef, struct FTransform* RobotSpawnTransform, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "WhereToSpawnRobot");

	Params::AQuestInteractionProp_Parent_C_WhereToSpawnRobot_Params Parms;

	Parms.InteractingPlayerPawnRef = InteractingPlayerPawnRef;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RobotSpawnTransform != nullptr)
		*RobotSpawnTransform = Parms.RobotSpawnTransform;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.DoesPlayerHaveQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestValid                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       PlayerControllerRef                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, bool* QuestValid, class AFortPlayerController** PlayerControllerRef, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "DoesPlayerHaveQuest");

	Params::AQuestInteractionProp_Parent_C_DoesPlayerHaveQuest_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestValid != nullptr)
		*QuestValid = Parms.QuestValid;

	if (PlayerControllerRef != nullptr)
		*PlayerControllerRef = Parms.PlayerControllerRef;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.GiveQuestItemToInteractingPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       Player_Controller_Ref                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropChance_DropResult                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorBounds_Origin                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 CallFunc_K2_SpawnPickupInWorld_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::GiveQuestItemToInteractingPlayer(class AFortPlayerController* Player_Controller_Ref, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_DropChance_DropResult, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "GiveQuestItemToInteractingPlayer");

	Params::AQuestInteractionProp_Parent_C_GiveQuestItemToInteractingPlayer_Params Parms;

	Parms.Player_Controller_Ref = Player_Controller_Ref;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_DropChance_DropResult = CallFunc_DropChance_DropResult;
	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
	Parms.CallFunc_GetActorBounds_BoxExtent = CallFunc_GetActorBounds_BoxExtent;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SpawnPickupInWorld_ReturnValue = CallFunc_K2_SpawnPickupInWorld_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.WhatStageIsPlayerOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerControllerRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Stage                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestInteractionProp_Parent_C::WhatStageIsPlayerOn(class AFortPlayerController* PlayerControllerRef, int32* Stage, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "WhatStageIsPlayerOn");

	Params::AQuestInteractionProp_Parent_C_WhatStageIsPlayerOn_Params Parms;

	Parms.PlayerControllerRef = PlayerControllerRef;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Stage != nullptr)
		*Stage = Parms.Stage;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText AQuestInteractionProp_Parent_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintGetInteractionString");

	Params::AQuestInteractionProp_Parent_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              CallFunc_GetQuestWithDefinition_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedObjectiveWithName_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AQuestInteractionProp_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_1, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintCanInteract");

	Params::AQuestInteractionProp_Parent_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue = CallFunc_GetQuestWithDefinition_ReturnValue;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue_1 = CallFunc_GetQuestManager_ReturnValue_1;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue = CallFunc_HasCompletedObjectiveWithName_ReturnValue;
	Parms.CallFunc_GetQuestWithDefinition_ReturnValue_1 = CallFunc_GetQuestWithDefinition_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasCompletedObjectiveWithName_ReturnValue_1 = CallFunc_HasCompletedObjectiveWithName_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_4                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_5                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AQuestInteractionProp_Parent_C::UserConstructionScript(bool K2Node_SwitchEnum_CmpSuccess, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_4, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_5)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "UserConstructionScript");

	Params::AQuestInteractionProp_Parent_C_UserConstructionScript_Params Parms;

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_3 = CallFunc_K2_SetRelativeLocation_SweepHitResult_3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_4 = CallFunc_K2_SetRelativeLocation_SweepHitResult_4;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_5 = CallFunc_K2_SetRelativeLocation_SweepHitResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0AEE0A17A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0AEE0A17A()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0AEE0A17A");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0AEE0A17A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0AEE0A17A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0AEE0A17A()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0AEE0A17A");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0AEE0A17A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB021A73FE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB021A73FE5()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB021A73FE5");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB021A73FE5_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB021A73FE5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB021A73FE5()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB021A73FE5");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB021A73FE5_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1ED02ED748A4140AEF73B29E08F75B65
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1ED02ED748A4140AEF73B29E08F75B65()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1ED02ED748A4140AEF73B29E08F75B65");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1ED02ED748A4140AEF73B29E08F75B65_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E08F75B65
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E08F75B65()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29E08F75B65");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E08F75B65_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1ED02ED748A4140AEF73B29EDC77F3FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1ED02ED748A4140AEF73B29EDC77F3FB()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1ED02ED748A4140AEF73B29EDC77F3FB");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1ED02ED748A4140AEF73B29EDC77F3FB_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EDC77F3FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EDC77F3FB()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29EDC77F3FB");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EDC77F3FB_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0334306E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0334306E5()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0334306E5");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0334306E5_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0334306E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0334306E5()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0334306E5");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0334306E5_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0722EFBB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0722EFBB9()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0722EFBB9");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0722EFBB9_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0722EFBB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0722EFBB9()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0722EFBB9");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0722EFBB9_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0F7D8BA26
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0F7D8BA26()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0F7D8BA26");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0F7D8BA26_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7D8BA26
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7D8BA26()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7D8BA26");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0F7D8BA26_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0B90F3977
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0B90F3977()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0B90F3977");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0B90F3977_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0B90F3977
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0B90F3977()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0B90F3977");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0B90F3977_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0DA8A243C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0DA8A243C()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0DA8A243C");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0DA8A243C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA8A243C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA8A243C()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA8A243C");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0DA8A243C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0AB0CB1DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0AB0CB1DA()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0AB0CB1DA");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0AB0CB1DA_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB0CB1DA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB0CB1DA()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB0CB1DA");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB0CB1DA_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB064E4CE12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB064E4CE12()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB064E4CE12");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB064E4CE12_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB064E4CE12
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB064E4CE12()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB064E4CE12");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB064E4CE12_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB079CD2CBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB079CD2CBC()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB079CD2CBC");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB079CD2CBC_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB079CD2CBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB079CD2CBC()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB079CD2CBC");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB079CD2CBC_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB03BF18E76
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB03BF18E76()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB03BF18E76");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB03BF18E76_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB03BF18E76
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB03BF18E76()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB03BF18E76");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB03BF18E76_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0E3F17DF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0E3F17DF4()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0E3F17DF4");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0E3F17DF4_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0E3F17DF4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0E3F17DF4()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0E3F17DF4");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0E3F17DF4_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0FE3AB7EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0FE3AB7EE()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0FE3AB7EE");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0FE3AB7EE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0FE3AB7EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0FE3AB7EE()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0FE3AB7EE");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0FE3AB7EE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB01375B3EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB01375B3EF()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB01375B3EF");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB01375B3EF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB01375B3EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB01375B3EF()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB01375B3EF");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB01375B3EF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB0AB911DFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB0AB911DFF()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB0AB911DFF");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB0AB911DFF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB911DFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB911DFF()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB911DFF");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB0AB911DFF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnCanceled_1A19862C47F5B5512EBB1BB07FA78F41
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnCanceled_1A19862C47F5B5512EBB1BB07FA78F41()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnCanceled_1A19862C47F5B5512EBB1BB07FA78F41");

	Params::AQuestInteractionProp_Parent_C_OnCanceled_1A19862C47F5B5512EBB1BB07FA78F41_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnAllClientsReady_1A19862C47F5B5512EBB1BB07FA78F41
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnAllClientsReady_1A19862C47F5B5512EBB1BB07FA78F41()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnAllClientsReady_1A19862C47F5B5512EBB1BB07FA78F41");

	Params::AQuestInteractionProp_Parent_C_OnAllClientsReady_1A19862C47F5B5512EBB1BB07FA78F41_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintOnInteract");

	Params::AQuestInteractionProp_Parent_C_BlueprintOnInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.PlayDialogOrLocalizedAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              QuestCountInt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       InteractedController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::PlayDialogOrLocalizedAudio(int32 QuestCountInt, class AFortPlayerController* InteractedController)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "PlayDialogOrLocalizedAudio");

	Params::AQuestInteractionProp_Parent_C_PlayDialogOrLocalizedAudio_Params Parms;

	Parms.QuestCountInt = QuestCountInt;
	Parms.InteractedController = InteractedController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::BlueprintOnBeginInteract()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BlueprintOnBeginInteract");

	Params::AQuestInteractionProp_Parent_C_BlueprintOnBeginInteract_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnRobot
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPlayerPawnRef                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::SpawnRobot(class AFortPlayerPawn* InteractingPlayerPawnRef)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SpawnRobot");

	Params::AQuestInteractionProp_Parent_C_SpawnRobot_Params Parms;

	Parms.InteractingPlayerPawnRef = InteractingPlayerPawnRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.EffectsEvents
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InteractingPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::EffectsEvents(class AFortPlayerPawn* InteractingPlayerPawn)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "EffectsEvents");

	Params::AQuestInteractionProp_Parent_C_EffectsEvents_Params Parms;

	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ReceiveBeginPlay");

	Params::AQuestInteractionProp_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnQuestUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::OnQuestUpdated()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnQuestUpdated");

	Params::AQuestInteractionProp_Parent_C_OnQuestUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.UpdateQuestState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::UpdateQuestState()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "UpdateQuestState");

	Params::AQuestInteractionProp_Parent_C_UpdateQuestState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ServerSuccessfulInteract
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::ServerSuccessfulInteract(class AFortPlayerController* PlayerController)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ServerSuccessfulInteract");

	Params::AQuestInteractionProp_Parent_C_ServerSuccessfulInteract_Params Parms;

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BindActorHit
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::BindActorHit()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BindActorHit");

	Params::AQuestInteractionProp_Parent_C_BindActorHit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Damaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         FHitComponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "Damaged");

	Params::AQuestInteractionProp_Parent_C_Damaged_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.resethitcheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::Resethitcheck()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "resethitcheck");

	Params::AQuestInteractionProp_Parent_C_Resethitcheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.HandleMissionEvent_LocateQuestItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AQuestInteractionProp_Parent_C::HandleMissionEvent_LocateQuestItem(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "HandleMissionEvent_LocateQuestItem");

	Params::AQuestInteractionProp_Parent_C_HandleMissionEvent_LocateQuestItem_Params Parms;

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.SpawnDebugParticle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::SpawnDebugParticle()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "SpawnDebugParticle");

	Params::AQuestInteractionProp_Parent_C_SpawnDebugParticle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.QuestItemNoQuestMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerControllerRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::QuestItemNoQuestMessage(class AFortPlayerController* PlayerControllerRef)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "QuestItemNoQuestMessage");

	Params::AQuestInteractionProp_Parent_C_QuestItemNoQuestMessage_Params Parms;

	Parms.PlayerControllerRef = PlayerControllerRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AQuestInteractionProp_Parent_C::BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AQuestInteractionProp_Parent_C_BndEvt__ContributionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void AQuestInteractionProp_Parent_C::OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "OnDamageServer");

	Params::AQuestInteractionProp_Parent_C_OnDamageServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Explode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::Explode()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "Explode");

	Params::AQuestInteractionProp_Parent_C_Explode_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.CheckProximity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::CheckProximity()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "CheckProximity");

	Params::AQuestInteractionProp_Parent_C_CheckProximity_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.IsPlayerNear
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::IsPlayerNear()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "IsPlayerNear");

	Params::AQuestInteractionProp_Parent_C_IsPlayerNear_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.Proximity_Conversation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::Proximity_Conversation()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "Proximity_Conversation");

	Params::AQuestInteractionProp_Parent_C_Proximity_Conversation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TouchedMe
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AQuestInteractionProp_Parent_C::TouchedMe(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "TouchedMe");

	Params::AQuestInteractionProp_Parent_C_TouchedMe_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.InteractionSpawnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::InteractionSpawnActor()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "InteractionSpawnActor");

	Params::AQuestInteractionProp_Parent_C_InteractionSpawnActor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TriggerParticlePreActivate
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::TriggerParticlePreActivate()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "TriggerParticlePreActivate");

	Params::AQuestInteractionProp_Parent_C_TriggerParticlePreActivate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.TriggerParticleInteractionSucceeded
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestInteractionProp_Parent_C::TriggerParticleInteractionSucceeded()
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "TriggerParticleInteractionSucceeded");

	Params::AQuestInteractionProp_Parent_C_TriggerParticleInteractionSucceeded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInteractionProp_Parent.QuestInteractionProp_Parent_C.ExecuteUbergraph_QuestInteractionProp_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_6                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_7                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_8                             (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_9                             (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_10                            (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_10         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_11                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_11         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_12                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_12         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_13                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_13         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_14                            (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_12                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_14         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_QuestCountInt                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_CustomEvent_InteractedController                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesPlayerHaveQuest_QuestValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_DoesPlayerHaveQuest_PlayerControllerRef                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_13                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_15                            (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_15         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_15                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_CustomEvent_InteractingPlayerPawnRef                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_WhereToSpawnRobot_RobotSpawnTransform                   (IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_CustomEvent_InteractingPlayerPawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlayerHaveQuest_QuestValid_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_FHitComponent                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_BoneName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Momentum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation        (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_1      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_2      (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_3      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_4      (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_5      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_6      (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_7      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic               ()
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_CustomEvent_PlayerControllerRef                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      ()
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic_1             ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_8      (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_9      (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_14                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_16                            (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_16         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_16                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue_1             (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue_1                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       ()
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_17         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AnyPawnNearActor_IsPawnNearActor                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPawn*>           CallFunc_AnyPawnNearActor_PawnsNearActor                         (ZeroConstructor, ReferenceParm)
// class AFortPawn*                   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_DoesPlayerHaveQuest_QuestValid_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_3                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_4                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_5                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_6                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_7                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_8                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_9                                         (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_10                                        (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_11                                        (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_12                                        (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_13                                        (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_14                                        (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_15                                        (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_16                                        (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_38                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_10     (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_11     (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_12     (NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_13     (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_37                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_38                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_14     (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_39                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective(ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_39                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_40                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_41                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_15                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_42                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USphereComponent*            CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFromSweep                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_CustomEvent_SweepResult                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_17                                        (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class AQuestInteractionProp_Parent_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AQuestInteractionProp_Parent_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_17                            (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_18         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount_1    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement_Conversation*CallFunc_FinishSpawningActor_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_17                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_43                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_40                          (ZeroConstructor, NoDestructor)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation_15     (NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_16                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_18                            (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_19         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestInteractionProp_Parent_C::ExecuteUbergraph_QuestInteractionProp_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue_1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_2, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_3, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, bool CallFunc_IsValidClass_ReturnValue_2, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_4, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_5, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_6, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_HasAuthority_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsValidClass_ReturnValue_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValidClass_ReturnValue_6, const struct FTransform& CallFunc_MakeTransform_ReturnValue_7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_7, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_7, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue_8, bool Temp_bool_IsClosed_Variable_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_8, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_8, bool Temp_bool_Has_Been_Initd_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTransform& CallFunc_MakeTransform_ReturnValue_9, bool CallFunc_IsValidClass_ReturnValue_7, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_9, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_Not_PreBool_ReturnValue_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const struct FTransform& CallFunc_MakeTransform_ReturnValue_10, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_10, bool CallFunc_IsValidClass_ReturnValue_8, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_10, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, bool CallFunc_Not_PreBool_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_9, const struct FTransform& CallFunc_MakeTransform_ReturnValue_11, bool CallFunc_IsValidClass_ReturnValue_9, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_11, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_11, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_Not_PreBool_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FTransform& CallFunc_MakeTransform_ReturnValue_12, bool CallFunc_IsValidClass_ReturnValue_10, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_12, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_12, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, const struct FTransform& CallFunc_MakeTransform_ReturnValue_13, bool CallFunc_IsValidClass_ReturnValue_11, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_13, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_13, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_Not_PreBool_ReturnValue_12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, int32 Temp_int_Loop_Counter_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_14, bool CallFunc_IsValidClass_ReturnValue_12, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_14, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_14, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_14, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class AFortPawn* K2Node_Event_InteractingPawn, int32 K2Node_CustomEvent_QuestCountInt, class AFortPlayerController* K2Node_CustomEvent_InteractedController, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_DoesPlayerHaveQuest_QuestValid, class AFortPlayerController* CallFunc_DoesPlayerHaveQuest_PlayerControllerRef, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_13, const struct FTransform& CallFunc_MakeTransform_ReturnValue_15, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_15, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_15, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_15, class AFortPlayerPawn* K2Node_CustomEvent_InteractingPlayerPawnRef, const struct FTransform& CallFunc_WhereToSpawnRobot_RobotSpawnTransform, class AFortPlayerPawn* K2Node_CustomEvent_InteractingPlayerPawn, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_DoesPlayerHaveQuest_QuestValid_1, class AFortPlayerController* CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_1, class AFortPlayerController* K2Node_CustomEvent_PlayerController, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsLocalPlayerController_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool CallFunc_Not_PreBool_ReturnValue_14, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_1, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_18, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_2, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_3, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_4, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_5, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_22, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_6, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_7, bool CallFunc_IsValid_ReturnValue_23, bool CallFunc_IsValid_ReturnValue_24, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, bool Temp_bool_IsClosed_Variable_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, class AFortPlayerController* K2Node_CustomEvent_PlayerControllerRef, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_8, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_9, bool CallFunc_IsValid_ReturnValue_25, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_IsValidClass_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_27, const struct FTransform& CallFunc_MakeTransform_ReturnValue_16, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_28, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_16, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_29, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_15, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item_1, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasAuthority_ReturnValue_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, bool CallFunc_Not_PreBool_ReturnValue_16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_17, class AActor* CallFunc_FinishSpawningActor_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_30, bool CallFunc_Not_PreBool_ReturnValue_17, bool CallFunc_IsValid_ReturnValue_31, bool CallFunc_IsValid_ReturnValue_32, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, bool CallFunc_AnyPawnNearActor_IsPawnNearActor, TArray<class AFortPawn*>& CallFunc_AnyPawnNearActor_PawnsNearActor, class AFortPawn* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_33, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_DoesPlayerHaveQuest_QuestValid_2, class AFortPlayerController* CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_2, class AActor* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_AddUnique_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Array_Contains_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_2, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_3, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_4, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_5, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_6, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_7, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_8, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_9, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_10, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_11, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_12, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_13, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_14, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_15, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_16, bool CallFunc_IsValid_ReturnValue_34, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_38, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required, bool CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_10, bool CallFunc_IsValid_ReturnValue_35, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_11, bool CallFunc_IsValid_ReturnValue_36, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_12, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_13, bool CallFunc_IsValid_ReturnValue_37, bool CallFunc_IsValid_ReturnValue_38, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_14, bool CallFunc_IsValid_ReturnValue_39, class AFortPlayerController* CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut, bool CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_39, bool CallFunc_IsValid_ReturnValue_40, bool CallFunc_IsValid_ReturnValue_41, bool CallFunc_IsValidClass_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_42, class USphereComponent* CallFunc_AddComponent_ReturnValue, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_5, class AController* CallFunc_GetInstigatorController_ReturnValue_2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_4, bool K2Node_DynamicCast_bSuccess_6, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_17, TArray<class AQuestInteractionProp_Parent_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AQuestInteractionProp_Parent_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_17, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_18, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved_1, int32 CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required_1, bool CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortClientAnnouncement_Conversation* CallFunc_FinishSpawningActor_ReturnValue_18, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_17, bool CallFunc_Array_Contains_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_43, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_40, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation_15, bool CallFunc_HasAuthority_ReturnValue_7, bool CallFunc_IsValidClass_ReturnValue_16, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_18, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_19, class AActor* CallFunc_FinishSpawningActor_ReturnValue_19)
{
	static auto Func = Class->GetFunction("QuestInteractionProp_Parent_C", "ExecuteUbergraph_QuestInteractionProp_Parent");

	Params::AQuestInteractionProp_Parent_C_ExecuteUbergraph_QuestInteractionProp_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue = CallFunc_WaitForClientAnnouncement_ReturnValue;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_1 = CallFunc_WaitForClientAnnouncement_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_2 = CallFunc_WaitForClientAnnouncement_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_3 = CallFunc_WaitForClientAnnouncement_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4;
	Parms.CallFunc_IsValidClass_ReturnValue_2 = CallFunc_IsValidClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_4 = CallFunc_FinishSpawningActor_ReturnValue_4;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_4 = CallFunc_WaitForClientAnnouncement_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue_3 = CallFunc_IsValidClass_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_5 = CallFunc_FinishSpawningActor_ReturnValue_5;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_5 = CallFunc_WaitForClientAnnouncement_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_IsValidClass_ReturnValue_4 = CallFunc_IsValidClass_ReturnValue_4;
	Parms.CallFunc_MakeTransform_ReturnValue_6 = CallFunc_MakeTransform_ReturnValue_6;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_6 = CallFunc_FinishSpawningActor_ReturnValue_6;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_6 = CallFunc_WaitForClientAnnouncement_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_IsValidClass_ReturnValue_5 = CallFunc_IsValidClass_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsValidClass_ReturnValue_6 = CallFunc_IsValidClass_ReturnValue_6;
	Parms.CallFunc_MakeTransform_ReturnValue_7 = CallFunc_MakeTransform_ReturnValue_7;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_7;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_7 = CallFunc_FinishSpawningActor_ReturnValue_7;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_7 = CallFunc_WaitForClientAnnouncement_ReturnValue_7;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_MakeTransform_ReturnValue_8 = CallFunc_MakeTransform_ReturnValue_8;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_8;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_8 = CallFunc_FinishSpawningActor_ReturnValue_8;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_8 = CallFunc_WaitForClientAnnouncement_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_MakeTransform_ReturnValue_9 = CallFunc_MakeTransform_ReturnValue_9;
	Parms.CallFunc_IsValidClass_ReturnValue_7 = CallFunc_IsValidClass_ReturnValue_7;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_9;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_9 = CallFunc_FinishSpawningActor_ReturnValue_9;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_9 = CallFunc_WaitForClientAnnouncement_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_MakeTransform_ReturnValue_10 = CallFunc_MakeTransform_ReturnValue_10;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_10 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_10;
	Parms.CallFunc_IsValidClass_ReturnValue_8 = CallFunc_IsValidClass_ReturnValue_8;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_10 = CallFunc_FinishSpawningActor_ReturnValue_10;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_10 = CallFunc_WaitForClientAnnouncement_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_MakeTransform_ReturnValue_11 = CallFunc_MakeTransform_ReturnValue_11;
	Parms.CallFunc_IsValidClass_ReturnValue_9 = CallFunc_IsValidClass_ReturnValue_9;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_11 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_11;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_11 = CallFunc_FinishSpawningActor_ReturnValue_11;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_11 = CallFunc_WaitForClientAnnouncement_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_MakeTransform_ReturnValue_12 = CallFunc_MakeTransform_ReturnValue_12;
	Parms.CallFunc_IsValidClass_ReturnValue_10 = CallFunc_IsValidClass_ReturnValue_10;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_12 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_12;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_12 = CallFunc_FinishSpawningActor_ReturnValue_12;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_12 = CallFunc_WaitForClientAnnouncement_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_MakeTransform_ReturnValue_13 = CallFunc_MakeTransform_ReturnValue_13;
	Parms.CallFunc_IsValidClass_ReturnValue_11 = CallFunc_IsValidClass_ReturnValue_11;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_13 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_13;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_13 = CallFunc_FinishSpawningActor_ReturnValue_13;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_13 = CallFunc_WaitForClientAnnouncement_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_MakeTransform_ReturnValue_14 = CallFunc_MakeTransform_ReturnValue_14;
	Parms.CallFunc_IsValidClass_ReturnValue_12 = CallFunc_IsValidClass_ReturnValue_12;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_14 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_14;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_14 = CallFunc_FinishSpawningActor_ReturnValue_14;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_14 = CallFunc_WaitForClientAnnouncement_ReturnValue_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_CustomEvent_QuestCountInt = K2Node_CustomEvent_QuestCountInt;
	Parms.K2Node_CustomEvent_InteractedController = K2Node_CustomEvent_InteractedController;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_DoesPlayerHaveQuest_QuestValid = CallFunc_DoesPlayerHaveQuest_QuestValid;
	Parms.CallFunc_DoesPlayerHaveQuest_PlayerControllerRef = CallFunc_DoesPlayerHaveQuest_PlayerControllerRef;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_13 = CallFunc_IsValidClass_ReturnValue_13;
	Parms.CallFunc_MakeTransform_ReturnValue_15 = CallFunc_MakeTransform_ReturnValue_15;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_15 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_15;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_15 = CallFunc_FinishSpawningActor_ReturnValue_15;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_15 = CallFunc_WaitForClientAnnouncement_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_CustomEvent_InteractingPlayerPawnRef = K2Node_CustomEvent_InteractingPlayerPawnRef;
	Parms.CallFunc_WhereToSpawnRobot_RobotSpawnTransform = CallFunc_WhereToSpawnRobot_RobotSpawnTransform;
	Parms.K2Node_CustomEvent_InteractingPlayerPawn = K2Node_CustomEvent_InteractingPlayerPawn;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_DoesPlayerHaveQuest_QuestValid_1 = CallFunc_DoesPlayerHaveQuest_QuestValid_1;
	Parms.CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_1 = CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_1;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_HitLocation = K2Node_CustomEvent_HitLocation;
	Parms.K2Node_CustomEvent_FHitComponent = K2Node_CustomEvent_FHitComponent;
	Parms.K2Node_CustomEvent_BoneName = K2Node_CustomEvent_BoneName;
	Parms.K2Node_CustomEvent_Momentum = K2Node_CustomEvent_Momentum;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = K2Node_MakeStruct_FortClientAnnouncementData_Conversation;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_1 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_1;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_2 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_2;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_3 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_3;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_4 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_4;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_5 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_5;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_6 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_6;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_7 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_7;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid = K2Node_HandleMissionEvent_InMissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic = K2Node_MakeStruct_FortClientAnnouncementData_Basic;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_1 = K2Node_DynamicCast_AsFort_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.K2Node_CustomEvent_PlayerControllerRef = K2Node_CustomEvent_PlayerControllerRef;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic_1 = K2Node_MakeStruct_FortClientAnnouncementData_Basic_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_8 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_8;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_9 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_9;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_IsValidClass_ReturnValue_14 = CallFunc_IsValidClass_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_MakeTransform_ReturnValue_16 = CallFunc_MakeTransform_ReturnValue_16;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_16 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_16 = CallFunc_FinishSpawningActor_ReturnValue_16;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_16 = CallFunc_WaitForClientAnnouncement_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_15 = CallFunc_Not_PreBool_ReturnValue_15;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue_1 = CallFunc_GetLocalFortPlayerControllers_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetGameAccountId_ReturnValue_1 = CallFunc_GetGameAccountId_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_2 = K2Node_DynamicCast_AsFort_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.CallFunc_Not_PreBool_ReturnValue_16 = CallFunc_Not_PreBool_ReturnValue_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_17 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_17;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_17 = CallFunc_FinishSpawningActor_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_Not_PreBool_ReturnValue_17 = CallFunc_Not_PreBool_ReturnValue_17;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_AnyPawnNearActor_IsPawnNearActor = CallFunc_AnyPawnNearActor_IsPawnNearActor;
	Parms.CallFunc_AnyPawnNearActor_PawnsNearActor = CallFunc_AnyPawnNearActor_PawnsNearActor;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue = CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_DoesPlayerHaveQuest_QuestValid_2 = CallFunc_DoesPlayerHaveQuest_QuestValid_2;
	Parms.CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_2 = CallFunc_DoesPlayerHaveQuest_PlayerControllerRef_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue_1 = CallFunc_GetInstigatorController_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_3 = K2Node_DynamicCast_AsFort_Player_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.K2Node_MakeArray_Array_11 = K2Node_MakeArray_Array_11;
	Parms.K2Node_MakeArray_Array_12 = K2Node_MakeArray_Array_12;
	Parms.K2Node_MakeArray_Array_13 = K2Node_MakeArray_Array_13;
	Parms.K2Node_MakeArray_Array_14 = K2Node_MakeArray_Array_14;
	Parms.K2Node_MakeArray_Array_15 = K2Node_MakeArray_Array_15;
	Parms.K2Node_MakeArray_Array_16 = K2Node_MakeArray_Array_16;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.K2Node_CreateDelegate_OutputDelegate_38 = K2Node_CreateDelegate_OutputDelegate_38;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required;
	Parms.CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount = CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_10 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_10;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_11 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_11;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_12 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_12;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_13 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_13;
	Parms.CallFunc_IsValid_ReturnValue_37 = CallFunc_IsValid_ReturnValue_37;
	Parms.CallFunc_IsValid_ReturnValue_38 = CallFunc_IsValid_ReturnValue_38;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_14 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_14;
	Parms.CallFunc_IsValid_ReturnValue_39 = CallFunc_IsValid_ReturnValue_39;
	Parms.CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut = CallFunc_HasPlayerCompletedQuestObjective_PlayerControllerOut;
	Parms.CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective = CallFunc_HasPlayerCompletedQuestObjective_CompletedQuestObjective;
	Parms.K2Node_CreateDelegate_OutputDelegate_39 = K2Node_CreateDelegate_OutputDelegate_39;
	Parms.CallFunc_IsValid_ReturnValue_40 = CallFunc_IsValid_ReturnValue_40;
	Parms.CallFunc_IsValid_ReturnValue_41 = CallFunc_IsValid_ReturnValue_41;
	Parms.CallFunc_IsValidClass_ReturnValue_15 = CallFunc_IsValidClass_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_42 = CallFunc_IsValid_ReturnValue_42;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_CustomEvent_OverlappedComponent = K2Node_CustomEvent_OverlappedComponent;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_OtherComp = K2Node_CustomEvent_OtherComp;
	Parms.K2Node_CustomEvent_OtherBodyIndex = K2Node_CustomEvent_OtherBodyIndex;
	Parms.K2Node_CustomEvent_bFromSweep = K2Node_CustomEvent_bFromSweep;
	Parms.K2Node_CustomEvent_SweepResult = K2Node_CustomEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetInstigatorController_ReturnValue_2 = CallFunc_GetInstigatorController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_4 = K2Node_DynamicCast_AsFort_Player_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_MakeArray_Array_17 = K2Node_MakeArray_Array_17;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_17 = CallFunc_MakeTransform_ReturnValue_17;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_18 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_18;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved_1 = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Achieved_1;
	Parms.CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required_1 = CallFunc_QuestObjectiveCountAchieved_Quest_Count_Required_1;
	Parms.CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount_1 = CallFunc_QuestObjectiveCountAchieved_SuccessfullyFoundCount_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_18 = CallFunc_FinishSpawningActor_ReturnValue_18;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_17 = CallFunc_WaitForClientAnnouncement_ReturnValue_17;
	Parms.CallFunc_Array_Contains_ReturnValue_3 = CallFunc_Array_Contains_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_43 = CallFunc_IsValid_ReturnValue_43;
	Parms.K2Node_CreateDelegate_OutputDelegate_40 = K2Node_CreateDelegate_OutputDelegate_40;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation_15 = K2Node_MakeStruct_FortClientAnnouncementData_Conversation_15;
	Parms.CallFunc_HasAuthority_ReturnValue_7 = CallFunc_HasAuthority_ReturnValue_7;
	Parms.CallFunc_IsValidClass_ReturnValue_16 = CallFunc_IsValidClass_ReturnValue_16;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_MakeTransform_ReturnValue_18 = CallFunc_MakeTransform_ReturnValue_18;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_19 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_19;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_19 = CallFunc_FinishSpawningActor_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
