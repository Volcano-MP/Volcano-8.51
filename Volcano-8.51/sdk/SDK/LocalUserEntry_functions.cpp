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


// Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELocalUserOnlineStatus  InLocalUserOnlineStatus                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocalUserOnlineStatus  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::HandleOnlineIndicatorView(enum class ELocalUserOnlineStatus InLocalUserOnlineStatus, enum class ELocalUserOnlineStatus Temp_byte_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LocalUserEntry_C", "HandleOnlineIndicatorView");

	Params::ULocalUserEntry_C_HandleOnlineIndicatorView_Params Parms;

	Parms.InLocalUserOnlineStatus = InLocalUserOnlineStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULocalUserEntry_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("LocalUserEntry_C", "BP_OnHovered");

	Params::ULocalUserEntry_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULocalUserEntry_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("LocalUserEntry_C", "BP_OnUnhovered");

	Params::ULocalUserEntry_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ELocalUserOnlineStatus  OnlineStatus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus)
{
	static auto Func = Class->GetFunction("LocalUserEntry_C", "OnOnlineStatusChanged");

	Params::ULocalUserEntry_C_OnOnlineStatusChanged_Params Parms;

	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocalUserOnlineStatus  K2Node_Event_OnlineStatus                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserEntry_C::ExecuteUbergraph_LocalUserEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ELocalUserOnlineStatus K2Node_Event_OnlineStatus)
{
	static auto Func = Class->GetFunction("LocalUserEntry_C", "ExecuteUbergraph_LocalUserEntry");

	Params::ULocalUserEntry_C_ExecuteUbergraph_LocalUserEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_OnlineStatus = K2Node_Event_OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
