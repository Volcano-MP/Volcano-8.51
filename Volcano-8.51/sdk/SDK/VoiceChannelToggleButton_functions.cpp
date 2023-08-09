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


// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelToggleButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("VoiceChannelToggleButton_C", "BP_OnHovered");

	Params::UVoiceChannelToggleButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelToggleButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("VoiceChannelToggleButton_C", "BP_OnUnhovered");

	Params::UVoiceChannelToggleButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.OnVoiceChannelSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsPartyChat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelToggleButton_C::OnVoiceChannelSelected(bool bIsPartyChat)
{
	static auto Func = Class->GetFunction("VoiceChannelToggleButton_C", "OnVoiceChannelSelected");

	Params::UVoiceChannelToggleButton_C_OnVoiceChannelSelected_Params Parms;

	Parms.bIsPartyChat = bIsPartyChat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.ExecuteUbergraph_VoiceChannelToggleButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsPartyChat                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceChannelToggleButton_C::ExecuteUbergraph_VoiceChannelToggleButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bIsPartyChat, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("VoiceChannelToggleButton_C", "ExecuteUbergraph_VoiceChannelToggleButton");

	Params::UVoiceChannelToggleButton_C_ExecuteUbergraph_VoiceChannelToggleButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_bIsPartyChat = K2Node_Event_bIsPartyChat;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
