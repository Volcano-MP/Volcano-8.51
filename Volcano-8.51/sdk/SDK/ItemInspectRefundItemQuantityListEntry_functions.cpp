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


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.UpdateItemAndQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DirectlySetQuantity                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundItemQuantityListEntry_C::UpdateItemAndQuantity(bool DirectlySetQuantity, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "UpdateItemAndQuantity");

	Params::UItemInspectRefundItemQuantityListEntry_C_UpdateItemAndQuantity_Params Parms;

	Parms.DirectlySetQuantity = DirectlySetQuantity;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectRefundItemQuantityListEntry_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static auto Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UItemInspectRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP_Params Parms;

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectRefundItemQuantityListEntry_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "Construct");

	Params::UItemInspectRefundItemQuantityListEntry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectRefundItemQuantityListEntry_C::ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset)
{
	static auto Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry");

	Params::UItemInspectRefundItemQuantityListEntry_C_ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
