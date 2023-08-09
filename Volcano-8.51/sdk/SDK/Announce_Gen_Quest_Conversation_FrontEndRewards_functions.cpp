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


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.StopCurrentConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::StopCurrentConversation()
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "StopCurrentConversation");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_StopCurrentConversation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.PlayCurrentConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_PlayConversation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::PlayCurrentConversation(bool CallFunc_PlayConversation_ReturnValue)
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "PlayCurrentConversation");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_PlayCurrentConversation_Params Parms;

	Parms.CallFunc_PlayConversation_ReturnValue = CallFunc_PlayConversation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   FinishingSentence                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              FinishingSentenceSentenceIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnConversationFinished");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnConversationFinished_Params Parms;

	Parms.FinishingSentence = FinishingSentence;
	Parms.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnSentenceStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              SentenceIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnSentenceStarted(struct FFortConversationSentence& Sentence, int32 SentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnSentenceStarted");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnSentenceStarted_Params Parms;

	Parms.Sentence = Sentence;
	Parms.SentenceIndex = SentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortConversationSentence   K2Node_Event_FinishingSentence                                   ()
// int32                              K2Node_Event_FinishingSentenceSentenceIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortConversationSentence   K2Node_Event_Sentence                                            (ConstParm)
// int32                              K2Node_Event_SentenceIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex, const struct FFortConversationSentence& K2Node_Event_Sentence, int32 K2Node_Event_SentenceIndex)
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FinishingSentence = K2Node_Event_FinishingSentence;
	Parms.K2Node_Event_FinishingSentenceSentenceIndex = K2Node_Event_FinishingSentenceSentenceIndex;
	Parms.K2Node_Event_Sentence = K2Node_Event_Sentence;
	Parms.K2Node_Event_SentenceIndex = K2Node_Event_SentenceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnCurrentConversationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnCurrentConversationFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnCurrentConversationFinished__DelegateSignature");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnCurrentConversationFinished__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnNewSentence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C::OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence)
{
	static auto Func = Class->GetFunction("Announce_Gen_Quest_Conversation_FrontEndRewards_C", "OnNewSentence__DelegateSignature");

	Params::AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnNewSentence__DelegateSignature_Params Parms;

	Parms.Sentence = Sentence;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
