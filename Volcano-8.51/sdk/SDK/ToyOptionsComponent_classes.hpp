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

// 0x80 (0x348 - 0x2C8)
// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
class UToyOptionsComponent_C : public UFortActorOptionsComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UFortMatchmakingKnobsModal> OptionsWidgetClass;                                // 0x2D0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UUserWidget>             MyIslandTabList;                                   // 0x2F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsMachine;                                         // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 InteractingPlayer;                                 // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingKnobsModal*            OutModalWidget;                                    // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInteractSuccess;                                  // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ClassToLoad;                                       // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ToyOptionsComponent_C");
		return Clss;
	}

	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AFortMinigameSettingsBuilding* K2Node_DynamicCast_AsFort_Minigame_Settings_Building, bool K2Node_DynamicCast_bSuccess, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UFortTrapItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(class UClass* Loaded);
	void DisplayOptions(class APlayerController* InteractingPlayer, TSoftClassPtr<class UObject> WidgetClass);
	void ExecuteUbergraph_ToyOptionsComponent(int32 EntryPoint, class UClass* Temp_class_Variable, class UClass* K2Node_CustomEvent_Loaded, class APlayerController* K2Node_CustomEvent_InteractingPlayer, TSoftClassPtr<class UObject> K2Node_CustomEvent_WidgetClass, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
