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


// Function RefundTicket.RefundTicket_C.ConsumeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URefundTicket_C::ConsumeEvent()
{
	static auto Func = Class->GetFunction("RefundTicket_C", "ConsumeEvent");

	Params::URefundTicket_C_ConsumeEvent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RefundTicket.RefundTicket_C.IsConsumed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URefundTicket_C::IsConsumed()
{
	static auto Func = Class->GetFunction("RefundTicket_C", "IsConsumed");

	Params::URefundTicket_C_IsConsumed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RefundTicket.RefundTicket_C.PendingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPending                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URefundTicket_C::PendingEvent(bool IsPending)
{
	static auto Func = Class->GetFunction("RefundTicket_C", "PendingEvent");

	Params::URefundTicket_C_PendingEvent_Params Parms;

	Parms.IsPending = IsPending;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RefundTicket.RefundTicket_C.ExecuteUbergraph_RefundTicket
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isPending                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URefundTicket_C::ExecuteUbergraph_RefundTicket(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_isPending, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static auto Func = Class->GetFunction("RefundTicket_C", "ExecuteUbergraph_RefundTicket");

	Params::URefundTicket_C_ExecuteUbergraph_RefundTicket_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_isPending = K2Node_CustomEvent_isPending;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
