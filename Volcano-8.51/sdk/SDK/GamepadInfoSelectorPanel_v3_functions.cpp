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


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleReset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadInfoSelectorPanel_v3_C::HandleReset(bool* PassThrough)
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "HandleReset");

	Params::UGamepadInfoSelectorPanel_v3_C_HandleReset_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleApply
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadInfoSelectorPanel_v3_C::HandleApply(bool* PassThrough)
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "HandleApply");

	Params::UGamepadInfoSelectorPanel_v3_C_HandleApply_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadInfoSelectorPanel_v3_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "HandleBack");

	Params::UGamepadInfoSelectorPanel_v3_C_HandleBack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "OnDeactivated");

	Params::UGamepadInfoSelectorPanel_v3_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGamepadInfoSelectorPanel_v3_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "OnAddedToFocusPath");

	Params::UGamepadInfoSelectorPanel_v3_C_OnAddedToFocusPath_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::OnActivated()
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "OnActivated");

	Params::UGamepadInfoSelectorPanel_v3_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.ExecuteUbergraph_GamepadInfoSelectorPanel_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_HasInputActionHandler_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGamepadInfoSelectorPanel_v3_C::ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_HasInputActionHandler_ReturnValue_2)
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "ExecuteUbergraph_GamepadInfoSelectorPanel_v3");

	Params::UGamepadInfoSelectorPanel_v3_C_ExecuteUbergraph_GamepadInfoSelectorPanel_v3_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasInputActionHandler_ReturnValue = CallFunc_HasInputActionHandler_ReturnValue;
	Parms.CallFunc_HasInputActionHandler_ReturnValue_1 = CallFunc_HasInputActionHandler_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_HasInputActionHandler_ReturnValue_2 = CallFunc_HasInputActionHandler_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorFocus__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorFocus__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorFocus__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorReset__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorReset__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorReset__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorApply__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorApply__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorApply__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadInfoSelectorPanel_v3_C::GamepadInfoSelectorBack__DelegateSignature()
{
	static auto Func = Class->GetFunction("GamepadInfoSelectorPanel_v3_C", "GamepadInfoSelectorBack__DelegateSignature");

	Params::UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorBack__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
