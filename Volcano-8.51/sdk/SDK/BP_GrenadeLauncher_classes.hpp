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

// 0x89A (0xB0A - 0x270)
// AnimBlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C
class UBP_GrenadeLauncher_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CCD9E03141024373207EA19F7FABC7E4; // 0x278(0x78)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9BE5EC0249061EF1B638FDA411EEAB88; // 0x2F0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15; // 0x310(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5027BC3E4B45A2EA685B7E89AFE7BD76; // 0x418(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_35ADB9784B260E9E0D5321BC72AC51A5; // 0x438(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_545A1542415580C93B2F2CB92FFE6BF9; // 0x480(0x20)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1B48A4454DD43BDD5D313E9BFCAEB34E; // 0x4A0(0xC8)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC; // 0x568(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298; // 0x590(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F; // 0x5B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607; // 0x5E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A; // 0x608(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1; // 0x630(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07; // 0x658(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36B2599748A5ECA6839B26B25ED0F41F; // 0x680(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_F9587DB84CDA0FB47B0428973D59B3E6; // 0x6F8(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5DF1EBF84566794DCDFFA19D400B2E34; // 0x718(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_424E81254A7CDE1BA9149CB49FC795BD; // 0x790(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2C8CA31D4817C8C9693A6EA8C5EBCE9E; // 0x7B0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6385996A47E307977AB5BE9C84F42508; // 0x828(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_03999E3843804F0355B33984C6AB3969; // 0x848(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_CE69749D4FC3C1D98B24CCA69D360D62; // 0x8C0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FF94CAE0484DB857352763B8BC624EA0; // 0x8E0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_BF4E8EC14863F22C7C06589F99DF4C3E; // 0x958(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4DB060FA436822518B51D09E9866705D; // 0x978(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_75D4D2FC46577E0F28088884ABFA1036; // 0x9F0(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_4E6685A948E38158991F278F356AAE07; // 0xA10(0x18)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6975EFCF41B2D616E4B5B4AF156848C7; // 0xA28(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_46F65ED54161388583A1A59736014BD0; // 0xA48(0xB0)()
	float                                        CylinderROT;                                       // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastFrameRotCurveValue;                            // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DrumPositionCount;                                 // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldRotateToPos1;                                // 0xB04(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos2;                                // 0xB05(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos3;                                // 0xB06(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos4;                                // 0xB07(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos5;                                // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldRotateToPos6;                                // 0xB09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_GrenadeLauncher_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15();
	void AnimNotify_RotateDrum();
	void ExecuteUbergraph_BP_GrenadeLauncher(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, int32 Temp_int_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
