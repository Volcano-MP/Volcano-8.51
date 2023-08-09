#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// UserDefinedStruct FrontEndRewards_Definition.FrontEndRewards_Definition
struct FFrontEndRewards_Definition
{
public:
	bool                                         ShowMissionRewards_1_C7BDE40E456913658E82C99BDF716FD0; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowMissionAlertRewards_16_45DFCE744858A450CF7A6F8DDB3019E2; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5ACE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortQuestItem*>                CompletedQuests_5_F0B57A5444C985942CB6438097704985; // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortQuestItem*>                NewQuests_7_9B70ABD44C42EFEED67C05BAA7B44AC7;      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UFortExpeditionItem*>           Expeditions_10_F1E594504A730C86DC1574996D8CD6F5;   // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFortCollectionBookRewards>    CollectionBookRewards_14_257477CC44DB7B3E9CE221BEFD80F48E; // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                         ShowDifficultyIncreaseRewards_23_65788A384F15925597F8D2BC507844A4; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         NewGiftBoxes_25_8CF5BBD04ED2FF67BBD1278A910766B6;  // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5ACF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     ItemCacheRewards_31_92CF1A0A40AB5D12F4ABAC8731BF4329; // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
