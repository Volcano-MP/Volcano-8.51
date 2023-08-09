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


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.GetOverrideMeshMaterial
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*        MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MatIdx                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UMaterialInterface* ABP_DeimosSpawner_C::GetOverrideMeshMaterial(class UStaticMeshComponent* MeshComp, int32 MatIdx, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "GetOverrideMeshMaterial");

	Params::ABP_DeimosSpawner_C_GetOverrideMeshMaterial_Params Parms;

	Parms.MeshComp = MeshComp;
	Parms.MatIdx = MatIdx;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.UpdateSpawnLocationVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosSpawner_C::UpdateSpawnLocationVisuals(bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "UpdateSpawnLocationVisuals");

	Params::ABP_DeimosSpawner_C_UpdateSpawnLocationVisuals_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.ChooseEQSRift
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseArea                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUseVisibility                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CalculatedIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UEnvQuery>    CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void ABP_DeimosSpawner_C::ChooseEQSRift(bool bUseArea, bool bUseVisibility, int32 CalculatedIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, TSoftObjectPtr<class UEnvQuery> CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "ChooseEQSRift");

	Params::ABP_DeimosSpawner_C_ChooseEQSRift_Params Parms;

	Parms.bUseArea = bUseArea;
	Parms.bUseVisibility = bUseVisibility;
	Parms.CalculatedIndex = CalculatedIndex;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.SetupConfigurables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnGroupProgression>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// TSoftClassPtr<class UFortDifficultyOptionEncounter_PawnNumberCap>CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnLimitPawns>CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnTiming>CallFunc_Array_Get_Item_3                                        (HasGetValueTypeHash)

void ABP_DeimosSpawner_C::SetupConfigurables(float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnGroupProgression> CallFunc_Array_Get_Item, TSoftClassPtr<class UFortDifficultyOptionEncounter_PawnNumberCap> CallFunc_Array_Get_Item_1, TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnLimitPawns> CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TSoftClassPtr<class UFortDifficultyOptionEncounter_SpawnTiming> CallFunc_Array_Get_Item_3)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "SetupConfigurables");

	Params::ABP_DeimosSpawner_C_SetupConfigurables_Params Parms;

	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.BP_ShouldTrigger
// (HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              TouchingActors                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Touching                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// bool                               bTouchingIsAlreadyLaunched                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_DeimosSpawner_C::BP_ShouldTrigger(TArray<class AActor*>& TouchingActors, const TArray<class AActor*>& Touching, bool bTouchingIsAlreadyLaunched)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "BP_ShouldTrigger");

	Params::ABP_DeimosSpawner_C_BP_ShouldTrigger_Params Parms;

	Parms.TouchingActors = TouchingActors;
	Parms.Touching = Touching;
	Parms.bTouchingIsAlreadyLaunched = bTouchingIsAlreadyLaunched;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosSpawner_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "UserConstructionScript");

	Params::ABP_DeimosSpawner_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DeimosSpawner_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "ReceiveBeginPlay");

	Params::ABP_DeimosSpawner_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.MinigameStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DeimosSpawner_C::MinigameStarted()
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "MinigameStarted");

	Params::ABP_DeimosSpawner_C_MinigameStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.MinigameEnded
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DeimosSpawner_C::MinigameEnded()
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "MinigameEnded");

	Params::ABP_DeimosSpawner_C_MinigameEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.OnSpawnedRift
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingRift*               SpawnedRift                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DeimosSpawner_C::OnSpawnedRift(class ABuildingRift* SpawnedRift)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "OnSpawnedRift");

	Params::ABP_DeimosSpawner_C_OnSpawnedRift_Params Parms;

	Parms.SpawnedRift = SpawnedRift;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_DeimosSpawner_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature");

	Params::ABP_DeimosSpawner_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_DeimosSpawner_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	Params::ABP_DeimosSpawner_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeimosSpawner.BP_DeimosSpawner_C.ExecuteUbergraph_BP_DeimosSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingRift*               K2Node_Event_SpawnedRift                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreativeDeimosRift_C*    K2Node_DynamicCast_AsBP_Creative_Deimos_Rift                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DeimosSpawner_C::ExecuteUbergraph_BP_DeimosSpawner(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class ABuildingRift* K2Node_Event_SpawnedRift, class ABP_CreativeDeimosRift_C* K2Node_DynamicCast_AsBP_Creative_Deimos_Rift, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BP_DeimosSpawner_C", "ExecuteUbergraph_BP_DeimosSpawner");

	Params::ABP_DeimosSpawner_C_ExecuteUbergraph_BP_DeimosSpawner_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_SpawnedRift = K2Node_Event_SpawnedRift;
	Parms.K2Node_DynamicCast_AsBP_Creative_Deimos_Rift = K2Node_DynamicCast_AsBP_Creative_Deimos_Rift;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
