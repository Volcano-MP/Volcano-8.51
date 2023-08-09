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

// 0x904 (0xD14 - 0x410)
// AnimBlueprintGeneratedClass AnimBP_MountedTurret.AnimBP_MountedTurret_C
class UAnimBP_MountedTurret_C : public UFortMountedTurretAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9A0F64B443978FE9073660BBF7089E56; // 0x418(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3D4EF0544A7B103ADCD939B4C1B0C2BF; // 0x460(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FBC9569F415B8820359FAEB09F24D80F; // 0x488(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_A4EE52B948CDE0EF89D51AA76588D69D; // 0x4B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_EDE70BF0434D91B2C8480A99671EA778; // 0x4D8(0x28)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_576B69A444A348D4BB818A85CBD7D3AE; // 0x500(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_D94ECD2C41A5AB1FED74B8843A08644B; // 0x548(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0F6FE4054AA0D1E32CA12E8F62813E62; // 0x568(0x78)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_63329B54429754D46B24A7924B9E9D96; // 0x5E0(0x188)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6D554B1744564CC00FA1E6A1B428D88C; // 0x768(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_D345B9844363B30E70F975B9E4B35039; // 0x788(0xA0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1AFA74184E94B581E1C2D1BDEC32FD09; // 0x828(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9E880BBD4145B6F43615508AADDC5A2F; // 0x8A0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_A512F23E43F386E05611C69D81196D6B; // 0x918(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E612B7AE474934A47EDB1D83F12F5734; // 0x938(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_84035C4E42168134573FD885BE2510FB; // 0x9B0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_C5BBF77047D064FED31B39A483603DF4; // 0x9D0(0xB0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_EA2CB1FD4C421275BE1B9BBE406DC5FA; // 0xA80(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3; // 0xAA0(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_CEA9764C4AF01012B13A4E8199A0F81D; // 0xBA8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_D95E62D3414430DE043E568859F3759C; // 0xBC8(0x20)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D5DA01C140CEEA9FBB32C1BBF5745EE7; // 0xBE8(0x48)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_35B8F2E446650BA3CA987B9F003A7CC0; // 0xC30(0xC8)()
	bool                                         IsTurning;                                         // 0xCF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6673[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAnimInput_MountedTurret          MountedTurretInput;                                // 0xCFC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        AimingYawLastFrame;                                // 0xD0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurnRate;                                          // 0xD10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimBP_MountedTurret_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_RotationOffsetBlendSpace_63329B54429754D46B24A7924B9E9D96();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_MountedTurret(int32 EntryPoint, float Temp_float_Variable, float CallFunc_NormalizeAxis_ReturnValue, bool Temp_bool_Variable, float CallFunc_NormalizeAxis_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_NormalizeAxis_ReturnValue_2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue_3, float CallFunc_NormalizeAxis_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Select_Default, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
