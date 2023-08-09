#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SentenceIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_TutorialConversation_C::HandleSentenceStop_UI(int32 SentenceIdx)
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "HandleSentenceStop_UI");

	Params::AAnnounce_TutorialConversation_C_HandleSentenceStop_UI_Params Parms;

	Parms.SentenceIdx = SentenceIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SentenceIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_TutorialConversation_C::HandleSentenceStart_UI(int32 SentenceIdx)
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "HandleSentenceStart_UI");

	Params::AAnnounce_TutorialConversation_C_HandleSentenceStart_UI_Params Parms;

	Parms.SentenceIdx = SentenceIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_TutorialConversation_C::InitAnnouncement()
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "InitAnnouncement");

	Params::AAnnounce_TutorialConversation_C_InitAnnouncement_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_TutorialConversation_C::OnClientAnnouncementStart()
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "OnClientAnnouncementStart");

	Params::AAnnounce_TutorialConversation_C_OnClientAnnouncementStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SentenceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_TutorialConversation_C::OnSentenceStarted(struct FFortConversationSentence& Sentence, int32 SentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "OnSentenceStarted");

	Params::AAnnounce_TutorialConversation_C_OnSentenceStarted_Params Parms;

	Parms.Sentence = Sentence;
	Parms.SentenceIndex = SentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   FinishingSentence                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              FinishingSentenceSentenceIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_TutorialConversation_C::OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "OnConversationFinished");

	Params::AAnnounce_TutorialConversation_C_OnConversationFinished_Params Parms;

	Parms.FinishingSentence = FinishingSentence;
	Parms.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SentenceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_TutorialConversation_C::OnSentenceFinished(struct FFortConversationSentence& Sentence, int32 SentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "OnSentenceFinished");

	Params::AAnnounce_TutorialConversation_C_OnSentenceFinished_Params Parms;

	Parms.Sentence = Sentence;
	Parms.SentenceIndex = SentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_TutorialConversation_C::OnClientAnnouncementStop()
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "OnClientAnnouncementStop");

	Params::AAnnounce_TutorialConversation_C_OnClientAnnouncementStop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayConversation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortConversationSentence   K2Node_Event_FinishingSentence                                   ()
// int32                              K2Node_Event_FinishingSentenceSentenceIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortConversationSentence   K2Node_Event_Sentence_1                                          (ConstParm)
// int32                              K2Node_Event_SentenceIndex_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTutorialHighlightData      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortConversationSentence   K2Node_Event_Sentence                                            (ConstParm)
// int32                              K2Node_Event_SentenceIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayConversationFromSentenceIndex_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAnnounce_TutorialConversation_C::ExecuteUbergraph_Announce_TutorialConversation(int32 EntryPoint, bool CallFunc_PlayConversation_ReturnValue, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex, int32 CallFunc_Array_Length_ReturnValue, const struct FFortConversationSentence& K2Node_Event_Sentence_1, int32 K2Node_Event_SentenceIndex_1, const struct FTutorialHighlightData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFortConversationSentence& K2Node_Event_Sentence, int32 K2Node_Event_SentenceIndex, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_PlayConversationFromSentenceIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("Announce_TutorialConversation_C", "ExecuteUbergraph_Announce_TutorialConversation");

	Params::AAnnounce_TutorialConversation_C_ExecuteUbergraph_Announce_TutorialConversation_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayConversation_ReturnValue = CallFunc_PlayConversation_ReturnValue;
	Parms.K2Node_Event_FinishingSentence = K2Node_Event_FinishingSentence;
	Parms.K2Node_Event_FinishingSentenceSentenceIndex = K2Node_Event_FinishingSentenceSentenceIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_Sentence_1 = K2Node_Event_Sentence_1;
	Parms.K2Node_Event_SentenceIndex_1 = K2Node_Event_SentenceIndex_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_Sentence = K2Node_Event_Sentence;
	Parms.K2Node_Event_SentenceIndex = K2Node_Event_SentenceIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_PlayConversationFromSentenceIndex_ReturnValue = CallFunc_PlayConversationFromSentenceIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
