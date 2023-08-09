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


// Function Announce_BackpackFull.Announce_BackpackFull_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_BackpackFull_C::OnClientAnnouncementStart()
{
	static auto Func = Class->GetFunction("Announce_BackpackFull_C", "OnClientAnnouncementStart");

	Params::AAnnounce_BackpackFull_C_OnClientAnnouncementStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_BackpackFull.Announce_BackpackFull_C.ExecuteUbergraph_Announce_BackpackFull
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_BackpackFull_C::ExecuteUbergraph_Announce_BackpackFull(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Announce_BackpackFull_C", "ExecuteUbergraph_Announce_BackpackFull");

	Params::AAnnounce_BackpackFull_C_ExecuteUbergraph_Announce_BackpackFull_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
