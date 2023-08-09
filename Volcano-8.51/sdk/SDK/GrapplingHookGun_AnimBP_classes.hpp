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

// 0x189 (0x3F9 - 0x270)
// AnimBlueprintGeneratedClass GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C
class UGrapplingHookGun_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_7F4939FF463BFA7ADBE0D0BC3CE8B2CF; // 0x278(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_32473B4946F7224F26381CAE8FAF7655; // 0x298(0x18)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6A9209514BE4883363DAA19CF4AF7118; // 0x2B0(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FACD2E7D44A066EA8B462DB8C1391182; // 0x3B8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_54A8C16E43BFCF837D3972B21E76142E; // 0x3D8(0x20)()
	bool                                         IsFired;                                           // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GrapplingHookGun_AnimBP_C");
		return Clss;
	}

	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_GrapplingHookGun_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, float K2Node_Event_DeltaTimeX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
