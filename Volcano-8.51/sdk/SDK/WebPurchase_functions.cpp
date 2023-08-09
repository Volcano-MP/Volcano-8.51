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


// Function WebPurchase.WebPurchase_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebPurchase_C::HandleBack(bool* bPassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("WebPurchase_C", "HandleBack");

	Params::UWebPurchase_C_HandleBack_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function WebPurchase.WebPurchase_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWebPurchase_C::BindDelegates()
{
	static auto Func = Class->GetFunction("WebPurchase_C", "BindDelegates");

	Params::UWebPurchase_C_BindDelegates_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WebPurchase.WebPurchase_C.Dismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExitWebPayment_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWebPurchase_C::Dismiss(class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_ExitWebPayment_ReturnValue)
{
	static auto Func = Class->GetFunction("WebPurchase_C", "Dismiss");

	Params::UWebPurchase_C_Dismiss_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_ExitWebPayment_ReturnValue = CallFunc_ExitWebPayment_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebPurchase.WebPurchase_C.Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WebWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      AttemptedMTXOfferId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenWebPayment_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebPurchase_C::Display(class UWidget* WebWidget, const class FString& AttemptedMTXOfferId, class UFortStoreContext* CallFunc_GetContext_ReturnValue, bool CallFunc_OpenWebPayment_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("WebPurchase_C", "Display");

	Params::UWebPurchase_C_Display_Params Parms;

	Parms.WebWidget = WebWidget;
	Parms.AttemptedMTXOfferId = AttemptedMTXOfferId;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_OpenWebPayment_ReturnValue = CallFunc_OpenWebPayment_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebPurchase.WebPurchase_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWebPurchase_C::OnActivated()
{
	static auto Func = Class->GetFunction("WebPurchase_C", "OnActivated");

	Params::UWebPurchase_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWebPurchase_C::ExecuteUbergraph_WebPurchase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue)
{
	static auto Func = Class->GetFunction("WebPurchase_C", "ExecuteUbergraph_WebPurchase");

	Params::UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
