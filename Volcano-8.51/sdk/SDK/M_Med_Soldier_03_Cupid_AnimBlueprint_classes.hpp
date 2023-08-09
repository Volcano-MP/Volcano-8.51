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

// 0xE68 (0x1238 - 0x3D0)
// AnimBlueprintGeneratedClass M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C
class UM_Med_Soldier_03_Cupid_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1AE2FEE843862DB0926247ABCDEDD974; // 0x3D8(0x138)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root_91EDDABE45FF40660C7C398C88D576B7; // 0x510(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C02AB20348B2B54CFA0C50803C42321A; // 0x530(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_308ADA1248ABA3187DFA7ABFC12BC130; // 0x550(0x20)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_02B303FA4DDA5584C595D48F2A2D11D1; // 0x570(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B17F58154A349B54BB143CBE152F66E8; // 0x9B0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4ABFB15A48A29BF94F74F6BBBF5874AF; // 0xDF0(0x440)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_Med_Soldier_03_Cupid_AnimBlueprint_C");
		return Clss;
	}

	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
