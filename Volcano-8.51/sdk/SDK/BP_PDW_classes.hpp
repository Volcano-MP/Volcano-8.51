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
// AnimBlueprintGeneratedClass BP_PDW.BP_PDW_C
class UBP_PDW_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0562F6184C86E34D2BBC87BBF67B4E94; // 0x278(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_8DF0F768443238A6FA9CD39C6A756B6D; // 0x298(0x18)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1186B52041A8BE0BBE0BB29197667B1A; // 0x2B0(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PDW_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_PDW(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
