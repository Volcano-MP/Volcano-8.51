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

// 0x1260 (0x1540 - 0x2E0)
// AnimBlueprintGeneratedClass Biplane_AnimBP_Dyn.Biplane_AnimBP_Dyn_C
class UBiplane_AnimBP_Dyn_C : public UFortVehicleDynAnimInstance_Ferret
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_9E945A36419DA48AE8C0949E7BF4DB36; // 0x2E8(0x20)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_9D46C19245B7E068F3E9F3A7B309E3CF; // 0x308(0x48)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_8ABC4F664659F70A63B714BA81D93BB9; // 0x350(0x550)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4FAE55BC4A7D05C9BB61D985E7591CFE; // 0x8A0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_89B3CD2045EE4E007CC6A4802B8D1598; // 0x8C0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D240CC1747987FA0AB3EFE892C7B5560; // 0x8E0(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6FEBFF7C490218BC227FCCB502C25270; // 0x9E8(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_0F6AB49349DE66307E1545B942E8CA81; // 0xAF0(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_BA7BD86D47FD00A53D946DA1E168B6B8; // 0xBF8(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_B77504334CFBA09330CBB9A987BFC61C; // 0xD00(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C9514F4842336218A444548A2333F44F; // 0xE08(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_533FACC04D35FD99DC8F9DBBDB9DA02D; // 0xF10(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D0C05B4F470CB946A278B1B14F6DD2E0; // 0x1018(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_FB1C2FDB4608EE482C8A70B190DD2543; // 0x1120(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_523D73094C776E0BE58FC680095C9C99; // 0x1228(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_A25535BF447E63F9BEDBE7A37F1092E5; // 0x1330(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_872D375D44824635B928209F3CA026D4; // 0x1438(0x108)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Biplane_AnimBP_Dyn_C");
		return Clss;
	}

	void ExecuteUbergraph_Biplane_AnimBP_Dyn(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
