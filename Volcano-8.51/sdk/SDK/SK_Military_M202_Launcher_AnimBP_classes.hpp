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
// AnimBlueprintGeneratedClass SK_Military_M202_Launcher_AnimBP.SK_Military_M202_Launcher_AnimBP_C
class USK_Military_M202_Launcher_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_17CF37A94A2C7AC4053A03A9139BF1E7; // 0x278(0x20)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_E162F90747951BA3BEDA4896DEED9E40; // 0x298(0x48)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_B765535648D151547097BEA864D8C8D4; // 0x2E0(0x550)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_43CF7C314AA3EFEE15AD1687FA14E458; // 0x830(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_68F46D374AA96ADBF7D82B82DA19EDA7; // 0x850(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Military_M202_Launcher_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Military_M202_Launcher_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
