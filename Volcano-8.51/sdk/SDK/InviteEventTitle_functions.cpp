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


// Function InviteEventTitle.InviteEventTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInviteEventTitle_C::Construct()
{
	static auto Func = Class->GetFunction("InviteEventTitle_C", "Construct");

	Params::UInviteEventTitle_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InviteEventTitle.InviteEventTitle_C.ExecuteUbergraph_InviteEventTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInviteUIDisabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInviteEventTitle_C::ExecuteUbergraph_InviteEventTitle(int32 EntryPoint, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsInviteUIDisabled_ReturnValue)
{
	static auto Func = Class->GetFunction("InviteEventTitle_C", "ExecuteUbergraph_InviteEventTitle");

	Params::UInviteEventTitle_C_ExecuteUbergraph_InviteEventTitle_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_IsInviteUIDisabled_ReturnValue = CallFunc_IsInviteUIDisabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
