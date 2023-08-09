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

// 0x2C20 (0x2FF0 - 0x3D0)
// AnimBlueprintGeneratedClass M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint.M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C
class UM_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4D083CFB43E11F85A96087A218BB7BAE; // 0x3D8(0x20)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1872ACF04C46FFA045FC69B4A8A5BE74; // 0x3F8(0x138)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DA7F616742A73676682DFE962C7A9097; // 0x530(0x440)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7DB76C3F48F97D8CF7DFB98F3C0DF756; // 0x970(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F250A6D64C5D0DFA740D4AA5A241B6D7; // 0x990(0x20)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_68C7555B4952C826BD5E4CB53F095FA7; // 0x9B0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8651B63E4AA91C51A815929C08C3C559; // 0xDF0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_EFFE8AEA4DD194B52BCE94B3662DE607; // 0x1230(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_38FA54CC43BC1C1D2C4408A8C09F82E6; // 0x1670(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A5E507C9415604E9DAE77683DBC92AE0; // 0x1AB0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8C4AA5B641FE517FCA350DB5D1932FE4; // 0x1EF0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_01EDC5964A42C785313443AE90C2EA31; // 0x2330(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B78997D142A0D1CF2837DF888BDB7B06; // 0x2770(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A0C97E4A46266B7CFE56A7BC1B12FC7C; // 0x2BB0(0x440)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_M_SML_Lars_FaceAccessory_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
