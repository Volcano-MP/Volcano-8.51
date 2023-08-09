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

// 0xB40 (0xF10 - 0x3D0)
// AnimBlueprintGeneratedClass SK_Pickaxe_Jackel_AnimBP.SK_Pickaxe_Jackel_AnimBP_C
class USK_Pickaxe_Jackel_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A1D8019943358C956668FA98508DF50C; // 0x3D8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_998B9725422C6825634863850DF49192; // 0x3F8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14E2E91441529EA44997ECB9B9671258; // 0x418(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_C7315F4F4614EF1BD790E2AA1E5A0E13; // 0x490(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_A620197348165F456C40F885EFF492B2; // 0x4B0(0xB0)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_ECE6BB3242EFB0D722475C95FC3139F3; // 0x560(0x550)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F7B25C9E4CF1DD943771CAA05F634B01; // 0xAB0(0x20)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_17E8AA5F4FB5BE6EEED9F2B5F16A1BDE; // 0xAD0(0x440)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Pickaxe_Jackel_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Pickaxe_Jackel_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
