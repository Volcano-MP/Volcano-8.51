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

// 0x18 (0x498 - 0x480)
// BlueprintGeneratedClass Announce_TutorialConversation.Announce_TutorialConversation_C
class AAnnounce_TutorialConversation_C : public AFortClientAnnouncement_TutorialConversation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FTutorialHighlightData>        SentencedIndexedTutorialData;                      // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_TutorialConversation_C");
		return Clss;
	}

	void HandleSentenceStop_UI(int32 SentenceIdx);
	void HandleSentenceStart_UI(int32 SentenceIdx);
	void InitAnnouncement();
	void OnClientAnnouncementStart();
	void OnSentenceStarted(struct FFortConversationSentence& Sentence, int32 SentenceIndex);
	void OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex);
	void OnSentenceFinished(struct FFortConversationSentence& Sentence, int32 SentenceIndex);
	void OnClientAnnouncementStop();
	void ExecuteUbergraph_Announce_TutorialConversation(int32 EntryPoint, bool CallFunc_PlayConversation_ReturnValue, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex, int32 CallFunc_Array_Length_ReturnValue, const struct FFortConversationSentence& K2Node_Event_Sentence_1, int32 K2Node_Event_SentenceIndex_1, const struct FTutorialHighlightData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFortConversationSentence& K2Node_Event_Sentence, int32 K2Node_Event_SentenceIndex, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_PlayConversationFromSentenceIndex_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
