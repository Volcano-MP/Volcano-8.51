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

// 0x6F0 (0xAC0 - 0x3D0)
// AnimBlueprintGeneratedClass F_MED_Weaponsmith_FaceAcc_AnimBP.F_MED_Weaponsmith_FaceAcc_AnimBP_C
class UF_MED_Weaponsmith_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6ADB1E924A69A9B47261728A57C90322; // 0x3D8(0x20)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_B668EC764724C9E704DB9882F844B344; // 0x3F8(0x138)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_00F0BAAF4611AD82C8B7BCBF6571CD1D; // 0x530(0x550)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_88458D474A312ACB930E6A9E91A193D7; // 0xA80(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_39E082974576B23B2FC63890B520AFA1; // 0xAA0(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_Weaponsmith_FaceAcc_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_F_MED_Weaponsmith_FaceAcc_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
