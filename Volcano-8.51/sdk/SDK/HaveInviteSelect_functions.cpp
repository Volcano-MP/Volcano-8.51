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


// Function HaveInviteSelect.HaveInviteSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHaveInviteSelect_C::OnActivated()
{
	static auto Func = Class->GetFunction("HaveInviteSelect_C", "OnActivated");

	Params::UHaveInviteSelect_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HaveInviteSelect.HaveInviteSelect_C.ExecuteUbergraph_HaveInviteSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHaveInviteSelect_C::ExecuteUbergraph_HaveInviteSelect(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("HaveInviteSelect_C", "ExecuteUbergraph_HaveInviteSelect");

	Params::UHaveInviteSelect_C_ExecuteUbergraph_HaveInviteSelect_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
