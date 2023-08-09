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

// 0x118 (0xC20 - 0xB08)
// BlueprintGeneratedClass B_TargetTrack.B_TargetTrack_C
class AB_TargetTrack_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Target_Move_Loop_Cue;                              // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Target_Move_Stop_Cue;                              // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Target_Move_Start_Cue;                             // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      ProximityTrigger;                                  // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TargetAttachPoint;                                 // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Target_Track;                                   // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TargetMovement_NewTrack_0_9F61BF394D22B10B7DAB4683CA4746AC; // 0xB48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TargetMovement__Direction_9F61BF394D22B10B7DAB4683CA4746AC; // 0xB4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TargetMovement;                                    // 0xB50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AB9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransformForTarget;                            // 0xB60(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        LengthScaleSetting;                                // 0xB90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayAtEndSetting;                                 // 0xB94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ProximityTriggerSizeSetting;                       // 0xB98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitialMovementDelaySetting;                       // 0xB9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrackSpeedSetting;                                 // 0xBA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentlyMoving;                                 // 0xBA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AtStartPoint;                                      // 0xBA5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LoopingSetting;                                    // 0xBA6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6ABA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RotationSetting;                                   // 0xBA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ABB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_ShootingTarget_Master_C*            AttachedTarget;                                    // 0xBB0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            LeftRightTargetBaseMesh;                           // 0xBB8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>            ForwardBackwardTargetBaseMesh;                     // 0xBE0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>           NewVar_0;                                          // 0xC08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         IsTargetUp;                                        // 0xC18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        CurrentMovementState;                              // 0xC19(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6ABC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Audio_Speed_Parameter;                             // 0xC1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_TargetTrack_C");
		return Clss;
	}

	class UStaticMesh* GetCollisionStaticMesh();
	void Set_Audio_Speed_Sound(float Target_Speed, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_CurrentMovementState(int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void SetMovementState(uint8 State, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void UpdateLerpedPosition(float Alpha, const struct FVector& CallFunc_GetFinalDestinationOfTarget_Destination, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	void OnRep_CurrentLerpValue();
	void UpdateForRepNotify();
	void OnRep_IsCurrentlyMoving();
	void OnRep_CurrentDirection();
	void OnRep_IsTargetUp();
	void OnRep_ServerMoveStartTime();
	void SetTrackLength(const struct FVector& CallFunc_MakeVector_ReturnValue);
	void SetTargetRotationAndBaseMesh(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, bool K2Node_SwitchInteger_CmpSuccess);
	float CalculatePlayRate(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetFinalDestinationOfTarget(struct FVector* Destination, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void TargetMovement__FinishedFunc();
	void TargetMovement__UpdateFunc();
	void OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(class UObject* Loaded);
	void OnLoaded_3C01053C48BCC07B689033B6DB9706E0(class UObject* Loaded);
	void ReceiveBeginPlay();
	void MoveTarget();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void AttachedTargetKnockedDown();
	void StopTargetMovement();
	void AttachedTargetPoppedUp();
	void ResumeTargetMovement();
	void ReverseTargetMovement();
	void AsyncLoadTargetBase();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void InitializeSettings();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Move_Target_Audio();
	void Stop_Move_Target_Audio();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_TargetTrack(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_CalculatePlayRate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_ShootingTarget_Master_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UObject* Temp_object_Variable, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_SetStaticMesh_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_4, bool CallFunc_EqualEqual_BoolBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UObject* Temp_object_Variable_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_3, bool K2Node_DynamicCast_bSuccess_3, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_SetStaticMesh_ReturnValue_3, TMap<class FString, class FString> CallFunc_GetPropertyOverrides_CurrentOptions, bool CallFunc_GetPropertyOverrides_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetPropertyOverrides_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
