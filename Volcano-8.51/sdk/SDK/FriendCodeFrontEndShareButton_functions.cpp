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


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodeFrontEndShareButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("FriendCodeFrontEndShareButton_C", "BP_OnClicked");

	Params::UFriendCodeFrontEndShareButton_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodeFrontEndShareButton_C::Construct()
{
	static auto Func = Class->GetFunction("FriendCodeFrontEndShareButton_C", "Construct");

	Params::UFriendCodeFrontEndShareButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeFrontEndShareButton.FriendCodeFrontEndShareButton_C.ExecuteUbergraph_FriendCodeFrontEndShareButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendCodeFrontEndShareButton_C::ExecuteUbergraph_FriendCodeFrontEndShareButton(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("FriendCodeFrontEndShareButton_C", "ExecuteUbergraph_FriendCodeFrontEndShareButton");

	Params::UFriendCodeFrontEndShareButton_C_ExecuteUbergraph_FriendCodeFrontEndShareButton_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
