#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x140 - 0xD8)
// BlueprintGeneratedClass PickupItemListComponent.PickupItemListComponent_C
class UPickupItemListComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AFortPickupAthena*>             ItemsToBeAddedQueue;                               // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UFortWorldItemDefinition*>      ItemList;                                          // 0xF0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, RepNotify)
	struct FTimerHandle                          AddItemsTimerHandle;                               // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        AddItemsTimeout;                                   // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4661[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMinigameSpawnerSpawnParams>   ItemsToSpawn;                                      // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	UMulticastInlineDelegateProperty_            OnItemAdded;                                       // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnItemListUpdated;                                 // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PickupItemListComponent_C");
		return Clss;
	}

	bool CanBeSavedToCreativeVolume();
	void IsItemInQueue(class AFortPickupAthena* NewItem, bool* bInQueue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_ItemList();
	void ClearItemList();
	void IsItemInList(class UFortWorldItemDefinition* ItemDefinition, bool* bInList, bool bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void AddItemsToList(const TArray<class UFortWorldItemDefinition*>& NewItemList, class AFortPickupAthena* CurrentPickup, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemEntryNum_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, class AFortPickupAthena* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FFortItemEntry& CallFunc_GetItemEntry_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UFortWorldItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FMinigameSpawnerSpawnParams& K2Node_MakeStruct_MinigameSpawnerSpawnParams, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CanInteractWithOwner(class AFortPawn* InteractingPawn, bool* bCanInteract, class AFortMinigame* CurrentMinigame, class AFortVolume* CurrentVolume, bool bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortMinigame* CallFunc_GetMinigameForVolume_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void AddItemToQueue(class AFortPickupAthena* NewItem, bool* bItemAdded, bool bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* CallFunc_GetPawnWhoDroppedPickup_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanInteractWithOwner_bCanInteract, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void PostFinishSpawning();
	void PostLevelSaveSpawnCleanup();
	void PreFinishSpawning(class AFortVolume* VolumeSpawnedWithin);
	void PreSaveBaseActorRecord();
	void ExecuteUbergraph_PickupItemListComponent(int32 EntryPoint, class AFortVolume* K2Node_Event_VolumeSpawnedWithin);
	void OnItemListUpdated__DelegateSignature();
	void OnItemAdded__DelegateSignature(class AActor* ItemAdded);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
