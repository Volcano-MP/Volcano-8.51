#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x261 - 0x230)
// WidgetBlueprintGeneratedClass TicketCounter.TicketCounter_C
class UTicketCounter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URefundTicket_C*                       RefundTicket;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefundTicket_C*                       RefundTicket_C_2;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefundTicket_C*                       RefundTicket_C_3;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   TicketArray;                                       // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         HighlightPendingTicket;                            // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TicketCounter_C");
		return Clss;
	}

	void Construct();
	void InitializeTickets(int32 NumTicketsAvailableToUse);
	void ConsumeTicket(int32 TicketIndex);
	void ExecuteUbergraph_TicketCounter(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& K2Node_MakeArray_Array, class UUserWidget* CallFunc_Array_Get_Item, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Array_Get_Item_1, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 K2Node_CustomEvent_NumTicketsAvailableToUse, int32 K2Node_CustomEvent_TicketIndex, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class URefundTicket_C* K2Node_DynamicCast_AsRefund_Ticket_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
