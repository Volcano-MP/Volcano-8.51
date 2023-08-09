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


// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAnimateOnSelect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportablePlayerReasonEntry_C::SetSelectionState(bool bIsSelected, bool bAnimateOnSelect)
{
	static auto Func = Class->GetFunction("ReportablePlayerReasonEntry_C", "SetSelectionState");

	Params::UReportablePlayerReasonEntry_C_SetSelectionState_Params Parms;

	Parms.bIsSelected = bIsSelected;
	Parms.bAnimateOnSelect = bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReportablePlayerReasonEntry.ReportablePlayerReasonEntry_C.ExecuteUbergraph_ReportablePlayerReasonEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAnimateOnSelect                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UReportablePlayerReasonEntry_C::ExecuteUbergraph_ReportablePlayerReasonEntry(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bAnimateOnSelect)
{
	static auto Func = Class->GetFunction("ReportablePlayerReasonEntry_C", "ExecuteUbergraph_ReportablePlayerReasonEntry");

	Params::UReportablePlayerReasonEntry_C_ExecuteUbergraph_ReportablePlayerReasonEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bAnimateOnSelect = K2Node_Event_bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
