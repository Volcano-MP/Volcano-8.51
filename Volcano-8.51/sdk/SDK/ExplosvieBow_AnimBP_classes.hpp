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

// 0xF28 (0x1258 - 0x330)
// AnimBlueprintGeneratedClass ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C
class UExplosvieBow_AnimBP_C : public UFortBowWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BEC95E3847BCA5DB370AE8ABF0883FFA; // 0x338(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_0048D06C4B06229328DED9A70334D916; // 0x358(0x48)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D1D9434544B3EFE25F8410BCE4E510FA; // 0x3A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_CD361B0F41F56F7919BDE0A08A9DD90E; // 0x3C8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5569B29E412C00E84CD1E2B798971FF7; // 0x3F0(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8A1C46354E3AAC7F118D258387F50A2E; // 0x418(0xE0)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1AA4919A4039C74A05518DB7B6325FDE; // 0x4F8(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_71C8585B47FF4C60C6594DA412BB50EB; // 0x5A8(0x78)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_0258644644EDB11CABB0879AD850DC73; // 0x620(0xB0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_FBA65F2D47DF3DB251B80CB1F4133A0A; // 0x6D0(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6A596766412BE2A81058678C2D401F3A; // 0x798(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7C5179394BD6E157890D04BC08D7E61A; // 0x810(0x78)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_DFE1FB17478B266421599093D1ECDBA0; // 0x888(0x188)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_A1A55ACB4B6C73CEE5AE1EB997460B5C; // 0xA10(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_CBED26EA49583696D6BB15A368661896; // 0xAD8(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_D23A17544DB04EEBA1FF1A84FCF2D543; // 0xBB8(0xE0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_C090A94F4DBB1D8DBA0CF88C89B0517C; // 0xC98(0xC8)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_750C650D41FA05EF3BC699A6459FD9B5; // 0xD60(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_30DDA7BE41CEE21E5249778B63236462; // 0xD80(0x18)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_23BC57494C35D2C151B4849C843A7344; // 0xD98(0xA0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9003208F4239CCAB108D3C821C9D39DF; // 0xE38(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_C5143B384C380AC5084A07AA178566D7; // 0xF00(0xE0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FA9D7A944BC2BD1564E64D871613C1AE; // 0xFE0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_45A789F449DD3F30227200BC768F37C4; // 0x1058(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_A3DA7738409B3EBB16160DAEDF118026; // 0x1078(0xB0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E0F7654D426D0C074EA7CC9A00EB5C6A; // 0x1128(0xB8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_016F01A44AA3EA15944E679DDC2B14B4; // 0x11E0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExplosvieBow_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_ExplosvieBow_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
