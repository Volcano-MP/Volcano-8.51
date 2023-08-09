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


// Function Announce_LowDurability.Announce_LowDurability_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_LowDurability_C::OnClientAnnouncementStart()
{
	static auto Func = Class->GetFunction("Announce_LowDurability_C", "OnClientAnnouncementStart");

	Params::AAnnounce_LowDurability_C_OnClientAnnouncementStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_LowDurability.Announce_LowDurability_C.ExecuteUbergraph_Announce_LowDurability
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_LowDurability_C::ExecuteUbergraph_Announce_LowDurability(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Announce_LowDurability_C", "ExecuteUbergraph_Announce_LowDurability");

	Params::AAnnounce_LowDurability_C_ExecuteUbergraph_Announce_LowDurability_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
