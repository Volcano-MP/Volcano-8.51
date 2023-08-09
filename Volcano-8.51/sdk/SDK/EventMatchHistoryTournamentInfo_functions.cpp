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


// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventMatchHistoryTournamentInfo_C::RefreshDataBP()
{
	static auto Func = Class->GetFunction("EventMatchHistoryTournamentInfo_C", "RefreshDataBP");

	Params::UEventMatchHistoryTournamentInfo_C_RefreshDataBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.ExecuteUbergraph_EventMatchHistoryTournamentInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWindowRoundDisplayString_ReturnValue                 ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UEventMatchHistoryTournamentInfo_C::ExecuteUbergraph_EventMatchHistoryTournamentInfo(int32 EntryPoint, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("EventMatchHistoryTournamentInfo_C", "ExecuteUbergraph_EventMatchHistoryTournamentInfo");

	Params::UEventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWindowRoundDisplayString_ReturnValue = CallFunc_GetWindowRoundDisplayString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
