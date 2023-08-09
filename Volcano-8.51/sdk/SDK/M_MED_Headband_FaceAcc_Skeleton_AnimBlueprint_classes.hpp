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

// 0x6F0 (0x960 - 0x270)
// AnimBlueprintGeneratedClass M_MED_Headband_FaceAcc_Skeleton_AnimBlueprint.M_MED_Headband_FaceAcc_Skeleton_AnimBlueprint_C
class UM_MED_Headband_FaceAcc_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0FCB4A884B139A31E91E11B362E1695F; // 0x278(0x20)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_C55486FC4CEDC8F0134F9996FE0AE4E2; // 0x298(0x138)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_BE6A190F4201E3AFDC381989D5A18012; // 0x3D0(0x550)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1F91919A48FFD720CD903EA24BDD7EF7; // 0x920(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7535EED64A4F664B2F460A94C8A698E5; // 0x940(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Headband_FaceAcc_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_M_MED_Headband_FaceAcc_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
