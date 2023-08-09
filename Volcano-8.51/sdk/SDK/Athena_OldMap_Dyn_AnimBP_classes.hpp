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

// 0x1B8 (0x428 - 0x270)
// AnimBlueprintGeneratedClass Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C
class UAthena_OldMap_Dyn_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_C50417FB4CEEC766610D8B8826E6EF4E; // 0x278(0x20)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_E20190B541022F1ED36DDD8D005572CE; // 0x298(0x48)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_47CB88DE495010F92DE91E86C87BFA3D; // 0x2E0(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_92D8A6714CBD87BBA9ED8EB290A4AF2C; // 0x3E8(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_771DA2CD45411A636FA772B1D89F9F05; // 0x408(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_OldMap_Dyn_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
