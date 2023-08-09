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


// Function NetUI.BadNetworkIndicator.UpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBadNetworkIndicator::UpdateDisplay()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "UpdateDisplay");

	Params::UBadNetworkIndicator_UpdateDisplay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NetUI.BadNetworkIndicator.ShouldDisplay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::ShouldDisplay()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "ShouldDisplay");

	Params::UBadNetworkIndicator_ShouldDisplay_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasSeverePing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasSeverePing()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "HasSeverePing");

	Params::UBadNetworkIndicator_HasSeverePing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasSeverePacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasSeverePacketLoss()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "HasSeverePacketLoss");

	Params::UBadNetworkIndicator_HasSeverePacketLoss_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasBadPing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasBadPing()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "HasBadPing");

	Params::UBadNetworkIndicator_HasBadPing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.HasBadPacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasBadPacketLoss()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "HasBadPacketLoss");

	Params::UBadNetworkIndicator_HasBadPacketLoss_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.GetPing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBadNetworkIndicator::GetPing()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "GetPing");

	Params::UBadNetworkIndicator_GetPing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NetUI.BadNetworkIndicator.GetPacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBadNetworkIndicator::GetPacketLoss()
{
	static auto Func = Class->GetFunction("BadNetworkIndicator", "GetPacketLoss");

	Params::UBadNetworkIndicator_GetPacketLoss_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StopTimer()
{
	static auto Func = Class->GetFunction("NetDebugWidget", "StopTimer");

	Params::UNetDebugWidget_StopTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StartTimer()
{
	static auto Func = Class->GetFunction("NetDebugWidget", "StartTimer");

	Params::UNetDebugWidget_StartTimer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
