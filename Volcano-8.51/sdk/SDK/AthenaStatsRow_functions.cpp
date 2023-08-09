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


// Function AthenaStatsRow.AthenaStatsRow_C.SetStatValueAsText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaStatsRow_C::SetStatValueAsText(class FText StatValue)
{
	static auto Func = Class->GetFunction("AthenaStatsRow_C", "SetStatValueAsText");

	Params::UAthenaStatsRow_C_SetStatValueAsText_Params Parms;

	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsRow.AthenaStatsRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsRow_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaStatsRow_C", "PreConstruct");

	Params::UAthenaStatsRow_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsRow.AthenaStatsRow_C.ExecuteUbergraph_AthenaStatsRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsRow_C::ExecuteUbergraph_AthenaStatsRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaStatsRow_C", "ExecuteUbergraph_AthenaStatsRow");

	Params::UAthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
