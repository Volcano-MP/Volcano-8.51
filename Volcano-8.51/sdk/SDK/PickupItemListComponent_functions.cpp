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


// Function PickupItemListComponent.PickupItemListComponent_C.CanBeSavedToCreativeVolume
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPickupItemListComponent_C::CanBeSavedToCreativeVolume()
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "CanBeSavedToCreativeVolume");

	Params::UPickupItemListComponent_C_CanBeSavedToCreativeVolume_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PickupItemListComponent.PickupItemListComponent_C.IsItemInQueue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPickupAthena*           NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInQueue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupItemListComponent_C::IsItemInQueue(class AFortPickupAthena* NewItem, bool* bInQueue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "IsItemInQueue");

	Params::UPickupItemListComponent_C_IsItemInQueue_Params Parms;

	Parms.NewItem = NewItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bInQueue != nullptr)
		*bInQueue = Parms.bInQueue;

}


// Function PickupItemListComponent.PickupItemListComponent_C.OnRep_ItemList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPickupItemListComponent_C::OnRep_ItemList()
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "OnRep_ItemList");

	Params::UPickupItemListComponent_C_OnRep_ItemList_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.ClearItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPickupItemListComponent_C::ClearItemList()
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "ClearItemList");

	Params::UPickupItemListComponent_C_ClearItemList_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.IsItemInList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortWorldItemDefinition*    ItemDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInList                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSuccess                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupItemListComponent_C::IsItemInList(class UFortWorldItemDefinition* ItemDefinition, bool* bInList, bool bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "IsItemInList");

	Params::UPickupItemListComponent_C_IsItemInList_Params Parms;

	Parms.ItemDefinition = ItemDefinition;
	Parms.bSuccess = bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bInList != nullptr)
		*bInList = Parms.bInList;

}


// Function PickupItemListComponent.PickupItemListComponent_C.AddItemsToList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItemDefinition*>NewItemList                                                      (Edit, BlueprintVisible, ZeroConstructor)
// class AFortPickupAthena*           CurrentPickup                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemEntryNum_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// class AFortPickupAthena*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemEntry              CallFunc_GetItemEntry_ReturnValue                                (ConstParm)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItemDefinition*    K2Node_DynamicCast_AsFort_World_Item_Definition                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFortWorldItemDefinition>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMinigameSpawnerSpawnParams K2Node_MakeStruct_MinigameSpawnerSpawnParams                     ()
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupItemListComponent_C::AddItemsToList(const TArray<class UFortWorldItemDefinition*>& NewItemList, class AFortPickupAthena* CurrentPickup, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemEntryNum_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, class AFortPickupAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FFortItemEntry& CallFunc_GetItemEntry_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UFortWorldItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FMinigameSpawnerSpawnParams& K2Node_MakeStruct_MinigameSpawnerSpawnParams, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "AddItemsToList");

	Params::UPickupItemListComponent_C_AddItemsToList_Params Parms;

	Parms.NewItemList = NewItemList;
	Parms.CurrentPickup = CurrentPickup;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemEntryNum_ReturnValue = CallFunc_GetItemEntryNum_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetItemEntry_ReturnValue = CallFunc_GetItemEntry_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_World_Item_Definition = K2Node_DynamicCast_AsFort_World_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_MinigameSpawnerSpawnParams = K2Node_MakeStruct_MinigameSpawnerSpawnParams;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.CanInteractWithOwner
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCanInteract                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 CurrentVolume                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetMinigameForVolume_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStarted_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupItemListComponent_C::CanInteractWithOwner(class AFortPawn* InteractingPawn, bool* bCanInteract, class AFortMinigame* CurrentMinigame, class AFortVolume* CurrentVolume, bool bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortMinigame* CallFunc_GetMinigameForVolume_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "CanInteractWithOwner");

	Params::UPickupItemListComponent_C_CanInteractWithOwner_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CurrentVolume = CurrentVolume;
	Parms.bSuccess = bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMinigameForVolume_ReturnValue = CallFunc_GetMinigameForVolume_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume = CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue = CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_HasStarted_ReturnValue = CallFunc_HasStarted_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInteract != nullptr)
		*bCanInteract = Parms.bCanInteract;

}


// Function PickupItemListComponent.PickupItemListComponent_C.AddItemToQueue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickupAthena*           NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bItemAdded                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSuccess                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPawn*                   CallFunc_GetPawnWhoDroppedPickup_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInteractWithOwner_bCanInteract                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPickupItemListComponent_C::AddItemToQueue(class AFortPickupAthena* NewItem, bool* bItemAdded, bool bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* CallFunc_GetPawnWhoDroppedPickup_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanInteractWithOwner_bCanInteract, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "AddItemToQueue");

	Params::UPickupItemListComponent_C_AddItemToQueue_Params Parms;

	Parms.NewItem = NewItem;
	Parms.bSuccess = bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPawnWhoDroppedPickup_ReturnValue = CallFunc_GetPawnWhoDroppedPickup_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanInteractWithOwner_bCanInteract = CallFunc_CanInteractWithOwner_bCanInteract;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bItemAdded != nullptr)
		*bItemAdded = Parms.bItemAdded;

}


// Function PickupItemListComponent.PickupItemListComponent_C.PostFinishSpawning
// (Event, Public, BlueprintEvent)
// Parameters:

void UPickupItemListComponent_C::PostFinishSpawning()
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "PostFinishSpawning");

	Params::UPickupItemListComponent_C_PostFinishSpawning_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.PostLevelSaveSpawnCleanup
// (Event, Public, BlueprintEvent)
// Parameters:

void UPickupItemListComponent_C::PostLevelSaveSpawnCleanup()
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "PostLevelSaveSpawnCleanup");

	Params::UPickupItemListComponent_C_PostLevelSaveSpawnCleanup_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.PreFinishSpawning
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*                 VolumeSpawnedWithin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemListComponent_C::PreFinishSpawning(class AFortVolume* VolumeSpawnedWithin)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "PreFinishSpawning");

	Params::UPickupItemListComponent_C_PreFinishSpawning_Params Parms;

	Parms.VolumeSpawnedWithin = VolumeSpawnedWithin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.PreSaveBaseActorRecord
// (Event, Public, BlueprintEvent)
// Parameters:

void UPickupItemListComponent_C::PreSaveBaseActorRecord()
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "PreSaveBaseActorRecord");

	Params::UPickupItemListComponent_C_PreSaveBaseActorRecord_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.ExecuteUbergraph_PickupItemListComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 K2Node_Event_VolumeSpawnedWithin                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemListComponent_C::ExecuteUbergraph_PickupItemListComponent(int32 EntryPoint, class AFortVolume* K2Node_Event_VolumeSpawnedWithin)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "ExecuteUbergraph_PickupItemListComponent");

	Params::UPickupItemListComponent_C_ExecuteUbergraph_PickupItemListComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_VolumeSpawnedWithin = K2Node_Event_VolumeSpawnedWithin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.OnItemListUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPickupItemListComponent_C::OnItemListUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "OnItemListUpdated__DelegateSignature");

	Params::UPickupItemListComponent_C_OnItemListUpdated__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItemListComponent.PickupItemListComponent_C.OnItemAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ItemAdded                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItemListComponent_C::OnItemAdded__DelegateSignature(class AActor* ItemAdded)
{
	static auto Func = Class->GetFunction("PickupItemListComponent_C", "OnItemAdded__DelegateSignature");

	Params::UPickupItemListComponent_C_OnItemAdded__DelegateSignature_Params Parms;

	Parms.ItemAdded = ItemAdded;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
