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
// AnimBlueprintGeneratedClass M_MED_Sensei_Skeleton_AnimBP.M_MED_Sensei_Skeleton_AnimBP_C
class UM_MED_Sensei_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5E084898416371838CA1089A5E1B1CEA; // 0x278(0x20)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_E3FD8AF948BEB1EAD305D2A116E07CA1; // 0x298(0x138)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_8E692366460EAE1338EDA4A0A4384C19; // 0x3D0(0x550)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CD383559480255357BB3A2A3FF5B5D11; // 0x920(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BF12781348363226E1060A876B332CB5; // 0x940(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Sensei_Skeleton_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_M_MED_Sensei_Skeleton_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
