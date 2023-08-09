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


// Function RebootVanIndicator.RebootVanIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URebootVanIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("RebootVanIndicator_C", "Construct");

	Params::URebootVanIndicator_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URebootVanIndicator_C::ExecuteUbergraph_RebootVanIndicator(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("RebootVanIndicator_C", "ExecuteUbergraph_RebootVanIndicator");

	Params::URebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
