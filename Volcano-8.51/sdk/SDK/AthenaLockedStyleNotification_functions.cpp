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


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.SetLockedStyleDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LockedStyleDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLockedStyleNotification_C::SetLockedStyleDescription(class FText LockedStyleDescription)
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "SetLockedStyleDescription");

	Params::UAthenaLockedStyleNotification_C_SetLockedStyleDescription_Params Parms;

	Parms.LockedStyleDescription = LockedStyleDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "Construct");

	Params::UAthenaLockedStyleNotification_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockedStyleNotification_C::ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "ExecuteUbergraph_AthenaLockedStyleNotification");

	Params::UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
