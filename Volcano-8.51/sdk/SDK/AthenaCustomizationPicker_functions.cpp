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


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::HandleDifferentFilterSetBP()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "HandleDifferentFilterSetBP");

	Params::UAthenaCustomizationPicker_C_HandleDifferentFilterSetBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        EmptyDisplayText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaCustomizationPicker_C::OnNoItemsAvailableInFilter(class FText& EmptyDisplayText)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnNoItemsAvailableInFilter");

	Params::UAthenaCustomizationPicker_C_OnNoItemsAvailableInFilter_Params Parms;

	Parms.EmptyDisplayText = EmptyDisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnItemsAvailableInFilter()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnItemsAvailableInFilter");

	Params::UAthenaCustomizationPicker_C_OnItemsAvailableInFilter_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetQualifiedFilterDisplayName_ReturnValue               ()
// class FText                        K2Node_Event_EmptyDisplayText                                    (ConstParm)

void UAthenaCustomizationPicker_C::ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint, class FText CallFunc_GetQualifiedFilterDisplayName_ReturnValue, class FText K2Node_Event_EmptyDisplayText)
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "ExecuteUbergraph_AthenaCustomizationPicker");

	Params::UAthenaCustomizationPicker_C_ExecuteUbergraph_AthenaCustomizationPicker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQualifiedFilterDisplayName_ReturnValue = CallFunc_GetQualifiedFilterDisplayName_ReturnValue;
	Parms.K2Node_Event_EmptyDisplayText = K2Node_Event_EmptyDisplayText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnEnableSaveButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnEnableSaveButton__DelegateSignature");

	Params::UAthenaCustomizationPicker_C_OnEnableSaveButton__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaCustomizationPicker_C::OnDisableSaveButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaCustomizationPicker_C", "OnDisableSaveButton__DelegateSignature");

	Params::UAthenaCustomizationPicker_C_OnDisableSaveButton__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
