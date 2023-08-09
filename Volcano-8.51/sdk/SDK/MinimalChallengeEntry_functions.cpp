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


// Function MinimalChallengeEntry.MinimalChallengeEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsInProgress                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinimalChallengeEntry_C::OnChallengeInfoSet(bool bIsInProgress)
{
	static auto Func = Class->GetFunction("MinimalChallengeEntry_C", "OnChallengeInfoSet");

	Params::UMinimalChallengeEntry_C_OnChallengeInfoSet_Params Parms;

	Parms.bIsInProgress = bIsInProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalChallengeEntry.MinimalChallengeEntry_C.ExecuteUbergraph_MinimalChallengeEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsInProgress                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalChallengeEntry_C::ExecuteUbergraph_MinimalChallengeEntry(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_bIsInProgress, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MinimalChallengeEntry_C", "ExecuteUbergraph_MinimalChallengeEntry");

	Params::UMinimalChallengeEntry_C_ExecuteUbergraph_MinimalChallengeEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_bIsInProgress = K2Node_Event_bIsInProgress;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
