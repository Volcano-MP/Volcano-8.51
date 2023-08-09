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


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URecentMatchesStatScreen_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "HandleBack");

	Params::URecentMatchesStatScreen_C_HandleBack_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::Construct()
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "Construct");

	Params::URecentMatchesStatScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnDeactivated");

	Params::URecentMatchesStatScreen_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnActivated");

	Params::URecentMatchesStatScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnStartFetchingData
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnStartFetchingData()
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnStartFetchingData");

	Params::URecentMatchesStatScreen_C_OnStartFetchingData_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnNoData
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnNoData()
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnNoData");

	Params::URecentMatchesStatScreen_C_OnNoData_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDataRecieved
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnDataRecieved()
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnDataRecieved");

	Params::URecentMatchesStatScreen_C_OnDataRecieved_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnRecentMatcheChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void URecentMatchesStatScreen_C::OnRecentMatcheChanged()
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "OnRecentMatcheChanged");

	Params::URecentMatchesStatScreen_C_OnRecentMatcheChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.ExecuteUbergraph_RecentMatchesStatScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaMatchStatView*>CallFunc_GetRecentMatches_ReturnValue                            (ZeroConstructor, ReferenceParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void URecentMatchesStatScreen_C::ExecuteUbergraph_RecentMatchesStatScreen(int32 EntryPoint, TArray<class UAthenaMatchStatView*>& CallFunc_GetRecentMatches_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("RecentMatchesStatScreen_C", "ExecuteUbergraph_RecentMatchesStatScreen");

	Params::URecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRecentMatches_ReturnValue = CallFunc_GetRecentMatches_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
