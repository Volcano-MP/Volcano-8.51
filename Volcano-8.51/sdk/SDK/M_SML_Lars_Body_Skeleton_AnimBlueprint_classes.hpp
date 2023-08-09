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

// 0x1C40 (0x2010 - 0x3D0)
// AnimBlueprintGeneratedClass M_SML_Lars_Body_Skeleton_AnimBlueprint.M_SML_Lars_Body_Skeleton_AnimBlueprint_C
class UM_SML_Lars_Body_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_6185[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_ABBE7B9049051BD35FC06396913867D3; // 0x3E0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_96AE5B8B43500293DE894ABD15A077A7; // 0x820(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_57F8580A48FCF2889D11D5AD38EDBBB0; // 0xC60(0x440)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F22264944E0128E1663A8D955C57F1C0; // 0x10A0(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_B94146E6410326AE160256996285439C; // 0x10C0(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_30648CCA4031F2B867F3A7880FF97EEE; // 0x10E0(0x20)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A0D3A35D4FDDEF364F7C0CB2BC636E9D; // 0x1100(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_FB6CDDC24FAA9996085270BB888E9329; // 0x1540(0x440)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5F5AF45E4DCAF8F4BB882B97DC5046C4; // 0x1980(0x138)(ContainsInstancedReference)
	uint8                                        Pad_6186[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_500B74434F51B316795CD7B933386919; // 0x1AC0(0x550)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_SML_Lars_Body_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_M_SML_Lars_Body_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
