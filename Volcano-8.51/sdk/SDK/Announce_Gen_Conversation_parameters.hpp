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

// 0xCC (0xCC - 0x0)
// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.OnConversationFinished
struct AAnnounce_Gen_Conversation_C_OnConversationFinished_Params
{
public:
	struct FFortConversationSentence             FinishingSentence;                                 // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        FinishingSentenceSentenceIndex;                    // 0xC8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD4 (0xD4 - 0x0)
// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.ExecuteUbergraph_Announce_Gen_Conversation
struct AAnnounce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6225[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortConversationSentence             K2Node_Event_FinishingSentence;                    // 0x8(0xC8)()
	int32                                        K2Node_Event_FinishingSentenceSentenceIndex;       // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
