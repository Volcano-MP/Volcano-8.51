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

// 0x4A8 (0x7A8 - 0x300)
// AnimBlueprintGeneratedClass MenuScreen_Constructor.MenuScreen_Constructor_C
class UMenuScreen_Constructor_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_51136A9E446592F9DA802D8316553F4A; // 0x308(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_72E3A5084877E826D78190958B50B30E; // 0x328(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_F64C467C442A6D34A1666EA1BF342A2B; // 0x348(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_D9B684254003641AE72DD489B091046B; // 0x368(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_07E146734FAAC10EDA1AA99B23C1DCC3; // 0x3B0(0x78)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_39B34F994D4009B88DDC4CBFB15815AD; // 0x428(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FE38F79D451A9AF748C98B81F3662628; // 0x4D8(0x78)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_2652A70742C375CFD05CB38F1B50C95A; // 0x550(0xF8)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C5561120498D2F0E23E19DB15CEF0EF7; // 0x648(0x108)()
	UMulticastInlineDelegateProperty_            MenuScreenDispatcher;                              // 0x750(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               Offset;                                            // 0x760(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotate;                                      // 0x76C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USkeletalMesh*>                 FrontendNPCMeshes;                                 // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        IKAlpha;                                           // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_618F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawn_Generic_C*                 PawnOwnerGeneric;                                  // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  NPCMontageList;                                    // 0x798(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MenuScreen_Constructor_C");
		return Clss;
	}

	void AnimNotify_playFacialAnim();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_MenuScreen_Constructor(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaTimeX, class USkeletalMesh* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* CallFunc_Array_Get_Item_1, float CallFunc_Montage_Play_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void MenuScreenDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
