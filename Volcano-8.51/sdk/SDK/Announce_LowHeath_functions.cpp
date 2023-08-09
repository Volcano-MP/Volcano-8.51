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


// Function Announce_LowHeath.Announce_LowHeath_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_LowHeath_C::OnClientAnnouncementStart()
{
	static auto Func = Class->GetFunction("Announce_LowHeath_C", "OnClientAnnouncementStart");

	Params::AAnnounce_LowHeath_C_OnClientAnnouncementStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_LowHeath.Announce_LowHeath_C.ExecuteUbergraph_Announce_LowHeath
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_LowHeath_C::ExecuteUbergraph_Announce_LowHeath(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Announce_LowHeath_C", "ExecuteUbergraph_Announce_LowHeath");

	Params::AAnnounce_LowHeath_C_ExecuteUbergraph_Announce_LowHeath_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
