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


// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundDetailsPanel_C::SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectRefundDetailsPanel_C", "SetScrollWidget");

	Params::UItemInspectRefundDetailsPanel_C_SetScrollWidget_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C.SetItemToRefund
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            ItemToRefund                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>CallFunc_GetRefundResults_ReturnValue                            (ZeroConstructor, ReferenceParm)

void UItemInspectRefundDetailsPanel_C::SetItemToRefund(class UFortAccountItem* ItemToRefund, TArray<struct FFortItemQuantityPair>& CallFunc_GetRefundResults_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectRefundDetailsPanel_C", "SetItemToRefund");

	Params::UItemInspectRefundDetailsPanel_C_SetItemToRefund_Params Parms;

	Parms.ItemToRefund = ItemToRefund;
	Parms.CallFunc_GetRefundResults_ReturnValue = CallFunc_GetRefundResults_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
