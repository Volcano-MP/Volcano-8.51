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

// 0x71C (0xAEC - 0x3D0)
// AnimBlueprintGeneratedClass SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C
class USK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_6243[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_69B159AC4A6199E0C4FDFB8635E75D79; // 0x3E0(0x440)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_FDE8994F4D210D08EDA033A9D3E81672; // 0x820(0x18)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D4D14D74402362E8B12523B0977EF778; // 0x838(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_A4EDA2894BF1E7CE3BF214AFF3DC2ED6; // 0x858(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3C1BB7DE4FD6FF67836FAE9ACCF37460; // 0x878(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C7700CCB48C6B72B53BABDB1A8E11F3F; // 0x898(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2E06B5DB4589D39F49B61FB14C0B1BFB; // 0x9A0(0x108)()
	struct FRotator                              SocketUpVector;                                    // 0xAA8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6244[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Character;                                         // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 Player_pawn;                                       // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pawn_speed_alpha;                                  // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               backpack_position;                                 // 0xACC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Athena_Balloons_C*                BGA_Athena_Balloons;                               // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              backpack_rotation;                                 // 0xAE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C");
		return Clss;
	}

	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
