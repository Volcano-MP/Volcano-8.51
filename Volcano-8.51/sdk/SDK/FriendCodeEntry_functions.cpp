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


// Function FriendCodeEntry.FriendCodeEntry_C.SetupMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendCodeEntry_C::SetupMIDs(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("FriendCodeEntry_C", "SetupMIDs");

	Params::UFriendCodeEntry_C_SetupMIDs_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeEntry.FriendCodeEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendCodeEntry_C::Construct()
{
	static auto Func = Class->GetFunction("FriendCodeEntry_C", "Construct");

	Params::UFriendCodeEntry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeEntry.FriendCodeEntry_C.SetUsedDisplayState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendCodeEntry_C::SetUsedDisplayState()
{
	static auto Func = Class->GetFunction("FriendCodeEntry_C", "SetUsedDisplayState");

	Params::UFriendCodeEntry_C_SetUsedDisplayState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeEntry.FriendCodeEntry_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendCodeEntry_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("FriendCodeEntry_C", "BP_OnClicked");

	Params::UFriendCodeEntry_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendCodeEntry.FriendCodeEntry_C.ExecuteUbergraph_FriendCodeEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendCodeEntry_C::ExecuteUbergraph_FriendCodeEntry(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("FriendCodeEntry_C", "ExecuteUbergraph_FriendCodeEntry");

	Params::UFriendCodeEntry_C_ExecuteUbergraph_FriendCodeEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
