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


// Function TicketCounter.TicketCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTicketCounter_C::Construct()
{
	static auto Func = Class->GetFunction("TicketCounter_C", "Construct");

	Params::UTicketCounter_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TicketCounter.TicketCounter_C.InitializeTickets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumTicketsAvailableToUse                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTicketCounter_C::InitializeTickets(int32 NumTicketsAvailableToUse)
{
	static auto Func = Class->GetFunction("TicketCounter_C", "InitializeTickets");

	Params::UTicketCounter_C_InitializeTickets_Params Parms;

	Parms.NumTicketsAvailableToUse = NumTicketsAvailableToUse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TicketCounter.TicketCounter_C.ConsumeTicket
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TicketIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTicketCounter_C::ConsumeTicket(int32 TicketIndex)
{
	static auto Func = Class->GetFunction("TicketCounter_C", "ConsumeTicket");

	Params::UTicketCounter_C_ConsumeTicket_Params Parms;

	Parms.TicketIndex = TicketIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TicketCounter.TicketCounter_C.ExecuteUbergraph_TicketCounter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URefundTicket_C*             K2Node_DynamicCast_AsRefund_Ticket                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URefundTicket_C*             K2Node_DynamicCast_AsRefund_Ticket_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumTicketsAvailableToUse                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TicketIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URefundTicket_C*             K2Node_DynamicCast_AsRefund_Ticket_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTicketCounter_C::ExecuteUbergraph_TicketCounter(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& K2Node_MakeArray_Array, class UUserWidget* CallFunc_Array_Get_Item, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Array_Get_Item_1, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 K2Node_CustomEvent_NumTicketsAvailableToUse, int32 K2Node_CustomEvent_TicketIndex, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static auto Func = Class->GetFunction("TicketCounter_C", "ExecuteUbergraph_TicketCounter");

	Params::UTicketCounter_C_ExecuteUbergraph_TicketCounter_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsRefund_Ticket = K2Node_DynamicCast_AsRefund_Ticket;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsRefund_Ticket_1 = K2Node_DynamicCast_AsRefund_Ticket_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CustomEvent_NumTicketsAvailableToUse = K2Node_CustomEvent_NumTicketsAvailableToUse;
	Parms.K2Node_CustomEvent_TicketIndex = K2Node_CustomEvent_TicketIndex;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsRefund_Ticket_2 = K2Node_DynamicCast_AsRefund_Ticket_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
