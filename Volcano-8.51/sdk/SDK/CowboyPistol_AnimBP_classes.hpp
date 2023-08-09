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

// 0x74A (0x9BA - 0x270)
// AnimBlueprintGeneratedClass CowboyPistol_AnimBP.CowboyPistol_AnimBP_C
class UCowboyPistol_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_442E6B9D435AE8995A390EB7E8F3C581; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3ED598E0460076589068709A8B67886F; // 0x298(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7263B320484139E8E8AEE681524D2915; // 0x2E0(0x78)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2F6FBC31412496F7A84CA088C79E45E5; // 0x358(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_ADF14F354FC283207EA8EAADFE15105D; // 0x420(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FD0EAE864F3471C855E9B280A42E92F9; // 0x448(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DF2336604D6803012122B4878C5D8393; // 0x470(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1000B18F4202289D2CAE59BE965C93D3; // 0x498(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_EFF414694ECE3CB3FC0617AF218EFB1D; // 0x4C0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27C94DCF4E9CA702B64B778A5F360593; // 0x4E8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_91F106DE49491495C4B4A182F401CF49; // 0x510(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4595911243E88B402643B0B8404BF73E; // 0x538(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2CB40C09401B5E93F8D884834E9E68E5; // 0x5B0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0E4B92E04C71FBA7612306B313CBD0A8; // 0x5D0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_EBEB96034A0E0A8AD6951D8CC3924E80; // 0x648(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C1B3E375486AA11B282A6892F3073CFE; // 0x668(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_73771CD347CA78F9FCF00BB394E78E3E; // 0x6E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A1BDA177449286213C03CB95FE124AC3; // 0x700(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1E54201D44888361B87A89B66B0D08C3; // 0x778(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31D6BFEF41AC9219BC11C9B1EC988910; // 0x798(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6D6620BA467C5297112E64A55DD33F3A; // 0x810(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_061BCCBC4B58400CEB7CB7B88B7D9DEC; // 0x830(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6838A9C349D4D11B0ED2D28CA863AC31; // 0x8A8(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_933AA3FD4059406AE023909CF3DF3046; // 0x8C8(0x18)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_E5E3080E424CC9CA67EDD1B343B030C3; // 0x8E0(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_73B093474CE4B196755BD5AACA808B91; // 0x900(0xB0)()
	int32                                        ChamberRotationCounter;                            // 0x9B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChamberPosition_1;                                 // 0x9B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_6;                                 // 0x9B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_2;                                 // 0x9B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_3;                                 // 0x9B7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_4;                                 // 0x9B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChamberPosition_5;                                 // 0x9B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CowboyPistol_AnimBP_C");
		return Clss;
	}

	void AnimNotify_ChamberRotation();
	void ExecuteUbergraph_CowboyPistol_AnimBP(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
