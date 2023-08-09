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


// Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::HandleShowTimerComplete()
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "HandleShowTimerComplete");

	Params::UHealthWarningWidget_C_HandleShowTimerComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealthWarningWidget_C::ExecuteUbergraph_HealthWarningWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "ExecuteUbergraph_HealthWarningWidget");

	Params::UHealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningWidget_C::HealthWarningCompleted__DelegateSignature()
{
	static auto Func = Class->GetFunction("HealthWarningWidget_C", "HealthWarningCompleted__DelegateSignature");

	Params::UHealthWarningWidget_C_HealthWarningCompleted__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
