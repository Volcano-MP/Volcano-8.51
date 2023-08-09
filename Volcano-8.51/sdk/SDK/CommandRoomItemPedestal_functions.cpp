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


// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.OnHeroPawnSetupCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACommandRoomItemPedestal_C::OnHeroPawnSetupCompleted()
{
	static auto Func = Class->GetFunction("CommandRoomItemPedestal_C", "OnHeroPawnSetupCompleted");

	Params::ACommandRoomItemPedestal_C_OnHeroPawnSetupCompleted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.ExecuteUbergraph_CommandRoomItemPedestal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_PlayAnimationsMatchingQuery_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACommandRoomItemPedestal_C::ExecuteUbergraph_CommandRoomItemPedestal(int32 EntryPoint, UInterfaceProperty_ CallFunc_PlayAnimationsMatchingQuery_self_CastInput)
{
	static auto Func = Class->GetFunction("CommandRoomItemPedestal_C", "ExecuteUbergraph_CommandRoomItemPedestal");

	Params::ACommandRoomItemPedestal_C_ExecuteUbergraph_CommandRoomItemPedestal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationsMatchingQuery_self_CastInput = CallFunc_PlayAnimationsMatchingQuery_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
