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

// 0x2E9 (0x559 - 0x270)
// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
class UApplyMedkit_Athena_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5FAA15A34682216510D589A50487471A; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_F9A34A2B463D37243970C4B4C478BEEC; // 0x298(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0A922DF04C01828D0F5A42838F0C626E; // 0x2E0(0x78)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_BF6BBA2D4BFA8438C4D6609C33CA86C9; // 0x358(0xB0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_FD3F608B440246E77EBEB1B065FCF60A; // 0x408(0xB8)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_216D9F694D96C1FCFF7C009A530AF1DA; // 0x4C0(0x48)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24AD787544D7B979140370BE70006301; // 0x508(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5DEB5D87408BBFCCBE4CAE8EB3BDFC0F; // 0x530(0x28)()
	enum class EFortCustomGender                 Gender;                                            // 0x558(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ApplyMedkit_Athena_AnimBP_C");
		return Clss;
	}

	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_ConsumableSmall_Medkit_Athena_C* K2Node_DynamicCast_AsB_Consumable_Small_Medkit_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, enum class EFortCustomGender CallFunc_GetCharacterGender_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
