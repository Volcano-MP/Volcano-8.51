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

// 0x5E1 (0x9B1 - 0x3D0)
// AnimBlueprintGeneratedClass SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP.SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_C
class USK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_0C7222DC402E6F6DCF9CECADA46BDCB0; // 0x3D8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5FEADAAA46DB1D7CC07196A7148CD986; // 0x3F8(0x20)()
	uint8                                        Pad_6B4A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_7EB2535345273FBF24F0468E7A9B41E1; // 0x420(0x550)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2134E0EE418DF3E620352FBD78CF280F; // 0x970(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_459D95674252015F43022F9BBBFC3D3B; // 0x990(0x18)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DynamicsOK;                                        // 0x9B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_AnimGraphNode_RigidBody_7EB2535345273FBF24F0468E7A9B41E1();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Conv_BoolToFloat_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
