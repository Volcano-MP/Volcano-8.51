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


// Function AthenaTeamMemberButton.AthenaTeamMemberButton_C.OnMuteToggled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsMuted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberButton_C::OnMuteToggled(bool bIsMuted)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberButton_C", "OnMuteToggled");

	Params::UAthenaTeamMemberButton_C_OnMuteToggled_Params Parms;

	Parms.bIsMuted = bIsMuted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberButton.AthenaTeamMemberButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberButton_C", "BP_OnHovered");

	Params::UAthenaTeamMemberButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberButton.AthenaTeamMemberButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberButton_C", "BP_OnUnhovered");

	Params::UAthenaTeamMemberButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberButton.AthenaTeamMemberButton_C.ExecuteUbergraph_AthenaTeamMemberButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsMuted                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberButton_C::ExecuteUbergraph_AthenaTeamMemberButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bIsMuted, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberButton_C", "ExecuteUbergraph_AthenaTeamMemberButton");

	Params::UAthenaTeamMemberButton_C_ExecuteUbergraph_AthenaTeamMemberButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_bIsMuted = K2Node_Event_bIsMuted;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
