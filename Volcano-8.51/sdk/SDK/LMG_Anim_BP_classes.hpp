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

// 0x120 (0x390 - 0x270)
// AnimBlueprintGeneratedClass LMG_Anim_BP.LMG_Anim_BP_C
class ULMG_Anim_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BB04A6824ABBAEED5901A6947B88E4BF; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9A4A91854D66514A7B527393E20AA106; // 0x298(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_7CA80C604BB336829EC42F95092AE7CA; // 0x2E0(0x18)()
	struct FAnimNode_SubInstance                 AnimGraphNode_SubInstance_5BE6D33E46B42B5E2CFBC697BBEE2195; // 0x2F8(0x98)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LMG_Anim_BP_C");
		return Clss;
	}

	void ExecuteUbergraph_LMG_Anim_BP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
