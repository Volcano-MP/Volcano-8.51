#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
struct UJournalQuestRewardDetails_C_UpdatePanelInfo_Params
{
public:
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRewardInfo                       CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x8(0x30)()
};

// 0x4 (0x4 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
struct UJournalQuestRewardDetails_C_UpdatePlayButtonState_Params
{
public:
	bool                                         CallFunc_CanGotoQuest_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanPlayQuest_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortQuestState                   CallFunc_GetQuestState_ReturnValue;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
struct UJournalQuestRewardDetails_C_UpdateButtonStates_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
struct UJournalQuestRewardDetails_C_Setup_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
struct UJournalQuestRewardDetails_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
struct UJournalQuestRewardDetails_C_HandleCurrentQuestChangedBP_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
struct UJournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
