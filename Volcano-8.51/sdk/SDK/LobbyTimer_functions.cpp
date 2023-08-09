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


// Function LobbyTimer.LobbyTimer_C.Handle Lobby Timer Updated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seconds_Remaining                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsTimespan_Timespan_ReturnValue                         ()
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyTimer_C::Handle_Lobby_Timer_Updated(int32 Seconds_Remaining, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, class FText CallFunc_AsTimespan_Timespan_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "Handle Lobby Timer Updated");

	Params::ULobbyTimer_C_Handle_Lobby_Timer_Updated_Params Parms;

	Parms.Seconds_Remaining = Seconds_Remaining;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_AsTimespan_Timespan_ReturnValue = CallFunc_AsTimespan_Timespan_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyTimer.LobbyTimer_C.Handle Show Lobby Timer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyTimer_C::Handle_Show_Lobby_Timer(bool Show)
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "Handle Show Lobby Timer");

	Params::ULobbyTimer_C_Handle_Show_Lobby_Timer_Params Parms;

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyTimer.LobbyTimer_C.Bind Delegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyTimer_C::Bind_Delegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_2)
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "Bind Delegates");

	Params::ULobbyTimer_C_Bind_Delegates_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyTimer.LobbyTimer_C.Show Lobby Timer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyTimer_C::Show_Lobby_Timer(bool Show, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "Show Lobby Timer");

	Params::ULobbyTimer_C_Show_Lobby_Timer_Params Parms;

	Parms.Show = Show;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyTimer.LobbyTimer_C.Handle Lobby Disconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyTimer_C::Handle_Lobby_Disconnected()
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "Handle Lobby Disconnected");

	Params::ULobbyTimer_C_Handle_Lobby_Disconnected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyTimer.LobbyTimer_C.Handle Lobby Started
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobbyTimer_C::Handle_Lobby_Started()
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "Handle Lobby Started");

	Params::ULobbyTimer_C_Handle_Lobby_Started_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyTimer.LobbyTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobbyTimer_C::Construct()
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "Construct");

	Params::ULobbyTimer_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyTimer.LobbyTimer_C.ExecuteUbergraph_LobbyTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyTimer_C::ExecuteUbergraph_LobbyTimer(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("LobbyTimer_C", "ExecuteUbergraph_LobbyTimer");

	Params::ULobbyTimer_C_ExecuteUbergraph_LobbyTimer_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
