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

// 0x700 (0x970 - 0x270)
// AnimBlueprintGeneratedClass SK_Pickaxe_Lion_AnimBP.SK_Pickaxe_Lion_AnimBP_C
class USK_Pickaxe_Lion_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_8D50838C44AF9D1DE0E0F0B928CFDF98; // 0x278(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_26C0AA3848EED348489A2C9D58E901BA; // 0x298(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F885D8BE4E41E0AC4C2F1F986B927309; // 0x2B8(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_E4F1A1A44E5CBA797024FABEB0F302C0; // 0x330(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_57AEDF414DB4EB76A7EAFBBC9D155BF7; // 0x350(0xB0)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_A5DA35424AD2DC86A0C279B34E798B69; // 0x400(0x550)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_09E7BBE9430017596BDF528EDCCD741A; // 0x950(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Pickaxe_Lion_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Pickaxe_Lion_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
