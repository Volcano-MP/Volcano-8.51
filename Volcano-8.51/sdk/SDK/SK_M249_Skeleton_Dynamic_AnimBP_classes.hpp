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

// 0x600 (0x870 - 0x270)
// AnimBlueprintGeneratedClass SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C
class USK_M249_Skeleton_Dynamic_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8E0F65D247E6D62D018C2FBA102CD862; // 0x278(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_FFE83FF1460937477A33C495556479A8; // 0x298(0x20)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_7B49CE394F90BE5C65D9C0A9ADF6EB63; // 0x2B8(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_ABE25BC349D1D197C1C97D9008555ECD; // 0x300(0x20)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2A536FC14BBB64BCB3DB19A790BB45C4; // 0x320(0x550)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_M249_Skeleton_Dynamic_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
