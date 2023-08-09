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


// Function FortCheckbox.FortCheckbox_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCheckbox_C::Refresh(bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FortCheckbox_C", "Refresh");

	Params::UFortCheckbox_C_Refresh_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCheckbox.FortCheckbox_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCheckbox_C::SetSelected(bool NewSelected)
{
	static auto Func = Class->GetFunction("FortCheckbox_C", "SetSelected");

	Params::UFortCheckbox_C_SetSelected_Params Parms;

	Parms.NewSelected = NewSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCheckbox.FortCheckbox_C.ToggleCheckbox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCheckbox_C::ToggleCheckbox(bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("FortCheckbox_C", "ToggleCheckbox");

	Params::UFortCheckbox_C_ToggleCheckbox_Params Parms;

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCheckbox.FortCheckbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortCheckbox_C::Construct()
{
	static auto Func = Class->GetFunction("FortCheckbox_C", "Construct");

	Params::UFortCheckbox_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCheckbox.FortCheckbox_C.BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFortCheckbox_C::BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortCheckbox_C", "BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UFortCheckbox_C_BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCheckbox.FortCheckbox_C.ExecuteUbergraph_FortCheckbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCheckbox_C::ExecuteUbergraph_FortCheckbox(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("FortCheckbox_C", "ExecuteUbergraph_FortCheckbox");

	Params::UFortCheckbox_C_ExecuteUbergraph_FortCheckbox_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCheckbox.FortCheckbox_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFortCheckbox_C::OnClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("FortCheckbox_C", "OnClicked__DelegateSignature");

	Params::UFortCheckbox_C_OnClicked__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
