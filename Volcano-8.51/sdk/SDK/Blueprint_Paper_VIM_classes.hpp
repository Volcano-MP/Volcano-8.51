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

// 0x4F8 (0x808 - 0x310)
// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_985813CD40257121C24510B1EFA3045F; // 0x318(0x128)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_88B6F311437F6802F9D4E885AEBB612D; // 0x440(0x128)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_62132DD84DE9792F6948379FF19FE9B0; // 0x568(0x128)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC; // 0x690(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_209BCB204FB8EDDD0FE0ECAF3A14490E; // 0x7B8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7; // 0x7D8(0x20)()
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose_12EF14484EC26A755A1F178B81B266BF; // 0x7F8(0x10)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Blueprint_Paper_VIM_C");
		return Clss;
	}

	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
