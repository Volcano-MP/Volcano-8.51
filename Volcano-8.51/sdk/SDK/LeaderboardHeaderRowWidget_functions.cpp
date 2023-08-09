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


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.SetStatNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaderboardHeaderRowWidget_C::SetStatNameText(class FText Text)
{
	static auto Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "SetStatNameText");

	Params::ULeaderboardHeaderRowWidget_C_SetStatNameText_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULeaderboardHeaderRowWidget_C::Construct()
{
	static auto Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "Construct");

	Params::ULeaderboardHeaderRowWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.ExecuteUbergraph_LeaderboardHeaderRowWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardHeaderRowWidget_C::ExecuteUbergraph_LeaderboardHeaderRowWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("LeaderboardHeaderRowWidget_C", "ExecuteUbergraph_LeaderboardHeaderRowWidget");

	Params::ULeaderboardHeaderRowWidget_C_ExecuteUbergraph_LeaderboardHeaderRowWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
