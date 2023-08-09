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


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.CreateConversationActor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C*NewAnnoucement                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// struct FFortClientAnnouncementData_ConversationK2Node_MakeStruct_FortClientAnnouncementData_Conversation        (NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Conversation_VO_C::CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, const struct FFortClientAnnouncementData_Conversation& K2Node_MakeStruct_FortClientAnnouncementData_Conversation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "CreateConversationActor");

	Params::UFrontEndRewards_Conversation_VO_C_CreateConversationActor_Params Parms;

	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Conversation = K2Node_MakeStruct_FortClientAnnouncementData_Conversation;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewAnnoucement != nullptr)
		*NewAnnoucement = Parms.NewAnnoucement;

}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PlayConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestRewardType    CallFunc_GetRewardType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValidConversation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C*CallFunc_CreateConversationActor_NewAnnoucement                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Conversation_VO_C::PlayConversation(class UFortQuestItem* QuestItem, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidConversation_ReturnValue, class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* CallFunc_CreateConversationActor_NewAnnoucement)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "PlayConversation");

	Params::UFrontEndRewards_Conversation_VO_C_PlayConversation_Params Parms;

	Parms.QuestItem = QuestItem;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRewardType_ReturnValue = CallFunc_GetRewardType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValidConversation_ReturnValue = CallFunc_IsValidConversation_ReturnValue;
	Parms.CallFunc_CreateConversationActor_NewAnnoucement = CallFunc_CreateConversationActor_NewAnnoucement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleConversationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortQuestRewardType    CallFunc_GetRewardType_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Conversation_VO_C::HandleConversationFinished(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EFortQuestRewardType CallFunc_GetRewardType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "HandleConversationFinished");

	Params::UFrontEndRewards_Conversation_VO_C_HandleConversationFinished_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRewardType_ReturnValue = CallFunc_GetRewardType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleNewSentence
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence   Sentence                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_GetDataFromSentence_Text                                ()
// class UTexture2D*                  CallFunc_GetDataFromSentence_TalkingHeadTexture                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontEndRewards_Conversation_VO_C::HandleNewSentence(const struct FFortConversationSentence& Sentence, class FText CallFunc_GetDataFromSentence_Text, class UTexture2D* CallFunc_GetDataFromSentence_TalkingHeadTexture)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "HandleNewSentence");

	Params::UFrontEndRewards_Conversation_VO_C_HandleNewSentence_Params Parms;

	Parms.Sentence = Sentence;
	Parms.CallFunc_GetDataFromSentence_Text = CallFunc_GetDataFromSentence_Text;
	Parms.CallFunc_GetDataFromSentence_TalkingHeadTexture = CallFunc_GetDataFromSentence_TalkingHeadTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.StopConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFrontEndRewards_Conversation_VO_C::StopConversation()
{
	static auto Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "StopConversation");

	Params::UFrontEndRewards_Conversation_VO_C_StopConversation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleReplayAction
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Committed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFrontEndRewards_Conversation_VO_C::HandleReplayAction(bool* Committed, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "HandleReplayAction");

	Params::UFrontEndRewards_Conversation_VO_C_HandleReplayAction_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Committed != nullptr)
		*Committed = Parms.Committed;

}


// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PopulateFromConversation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*           Conversation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidConversation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UFrontEndRewards_Conversation_VO_C::PopulateFromConversation(class UFortConversation* Conversation, bool CallFunc_IsValidConversation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("FrontEndRewards_Conversation_VO_C", "PopulateFromConversation");

	Params::UFrontEndRewards_Conversation_VO_C_PopulateFromConversation_Params Parms;

	Parms.Conversation = Conversation;
	Parms.CallFunc_IsValidConversation_ReturnValue = CallFunc_IsValidConversation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
