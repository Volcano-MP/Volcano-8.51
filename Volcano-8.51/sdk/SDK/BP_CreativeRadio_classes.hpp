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

// 0x33 (0xBAB - 0xB78)
// BlueprintGeneratedClass BP_CreativeRadio.BP_CreativeRadio_C
class ABP_CreativeRadio_C : public ABuildingPropPlaygroundMusicPlayer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreative_Radio_AudioToMPC_C*          Creative_Radio_AudioToMPC;                         // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameProgressComponent*        FortMinigameProgress;                              // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RadioAttenuationDistance;                          // 0xB98(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VolumeOverride;                                    // 0xB9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedVolumeMultiplier;                            // 0xBA0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        CachedAttenuationSetting;                          // 0xBA4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldDriveVisualization;                          // 0xBA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         CachedShouldDriveVisualization;                    // 0xBA9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         IsMeshVisibleDuringMinigame;                       // 0xBAA(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_CreativeRadio_C");
		return Clss;
	}

	void UpdateMinigameVisuals(enum class EFortMinigameState MinigameState, bool bShouldBeVisible, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateCachedAttenuationSettings(bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
	void SetAttenuationDistance(bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, bool InteractSuccess, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	void OnRep_CachedShouldDriveVisualization(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnRep_CachedAttenuationSetting();
	void OnRep_CachedVolumeMultiplier(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnPropertyChanged(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_3_OnMinigameStateChanged__DelegateSignature(enum class EFortMinigameState NewMinigameState);
	void ExecuteUbergraph_BP_CreativeRadio(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, enum class EFortMinigameState K2Node_ComponentBoundEvent_NewMinigameState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
