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

// 0x88 (0x2F8 - 0x270)
// AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
class URPG_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F7E820434538DD4C6AD2A1B5BCE33A39; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_782D94BD4EFDE1439B44CB93C212AD03; // 0x298(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_829520A14F89D74E64C7AEBBB88029DD; // 0x2E0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RPG_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
