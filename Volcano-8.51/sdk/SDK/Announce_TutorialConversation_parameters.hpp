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

// 0x4 (0x4 - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI
struct AAnnounce_TutorialConversation_C_HandleSentenceStop_UI_Params
{
public:
	int32                                        SentenceIdx;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI
struct AAnnounce_TutorialConversation_C_HandleSentenceStart_UI_Params
{
public:
	int32                                        SentenceIdx;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement
struct AAnnounce_TutorialConversation_C_InitAnnouncement_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart
struct AAnnounce_TutorialConversation_C_OnClientAnnouncementStart_Params
{
public:
};

// 0xCC (0xCC - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted
struct AAnnounce_TutorialConversation_C_OnSentenceStarted_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        SentenceIndex;                                     // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished
struct AAnnounce_TutorialConversation_C_OnConversationFinished_Params
{
public:
	struct FFortConversationSentence             FinishingSentence;                                 // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        FinishingSentenceSentenceIndex;                    // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished
struct AAnnounce_TutorialConversation_C_OnSentenceFinished_Params
{
public:
	struct FFortConversationSentence             Sentence;                                          // 0x0(0xC8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        SentenceIndex;                                     // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop
struct AAnnounce_TutorialConversation_C_OnClientAnnouncementStop_Params
{
public:
};

// 0x289 (0x289 - 0x0)
// Function Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation
struct AAnnounce_TutorialConversation_C_ExecuteUbergraph_Announce_TutorialConversation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayConversation_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortConversationSentence             K2Node_Event_FinishingSentence;                    // 0x8(0xC8)()
	int32                                        K2Node_Event_FinishingSentenceSentenceIndex;       // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortConversationSentence             K2Node_Event_Sentence_1;                           // 0xD8(0xC8)(ConstParm)
	int32                                        K2Node_Event_SentenceIndex_1;                      // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTutorialHighlightData                CallFunc_Array_Get_Item;                           // 0x1A4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FD4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortConversationSentence             K2Node_Event_Sentence;                             // 0x1B8(0xC8)(ConstParm)
	int32                                        K2Node_Event_SentenceIndex;                        // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayConversationFromSentenceIndex_ReturnValue; // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
