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
// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
class UBP_Shotgun_BreakAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BA976D5D4DB7967075F7CDB8A77EDD8C; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_40047C1541B43E34DADF6696EC1EDEBE; // 0x298(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_EADE6A484AF7A66F69258C8F614628BF; // 0x2E0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Shotgun_BreakAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Shotgun_BreakAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
