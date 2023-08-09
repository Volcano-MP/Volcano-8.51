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
// AnimBlueprintGeneratedClass Bush_Prop_AnimBP.Bush_Prop_AnimBP_C
class UBush_Prop_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_EE5ED2D945FD5514B88BF98B77E08C6A; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_E53F6986413B8C68DCEE24B2C89E608D; // 0x298(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_5381A7F34597C5AABF71E1A171C0D63C; // 0x2E0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Bush_Prop_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_Bush_Prop_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
