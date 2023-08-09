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

// 0xE8 (0x358 - 0x270)
// AnimBlueprintGeneratedClass SlurpJuice_Prop_AnimBP.SlurpJuice_Prop_AnimBP_C
class USlurpJuice_Prop_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_88BDDE744224870E2C760EAC7460A594; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9884AB784F0D78B1AB55BD9ABAE04FAF; // 0x298(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_88BBE8574985A3AD7C7D4FB01D09E1CF; // 0x2E0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlurpJuice_Prop_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SlurpJuice_Prop_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
