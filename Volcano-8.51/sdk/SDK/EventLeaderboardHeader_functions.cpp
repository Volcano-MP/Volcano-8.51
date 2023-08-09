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


// Function EventLeaderboardHeader.EventLeaderboardHeader_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventLeaderboardHeader_C::RefreshDataBP()
{
	static auto Func = Class->GetFunction("EventLeaderboardHeader_C", "RefreshDataBP");

	Params::UEventLeaderboardHeader_C_RefreshDataBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardHeader.EventLeaderboardHeader_C.ExecuteUbergraph_EventLeaderboardHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWindowRoundDisplayString_ReturnValue                 ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UEventLeaderboardHeader_C::ExecuteUbergraph_EventLeaderboardHeader(int32 EntryPoint, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("EventLeaderboardHeader_C", "ExecuteUbergraph_EventLeaderboardHeader");

	Params::UEventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWindowRoundDisplayString_ReturnValue = CallFunc_GetWindowRoundDisplayString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
