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


// Function ErrorEntry.ErrorEntry_C.Center on Widget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Did_Center                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UErrorEntry_C::Center_on_Widget(bool* Did_Center, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ErrorEntry_C", "Center on Widget");

	Params::UErrorEntry_C_Center_on_Widget_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Did_Center != nullptr)
		*Did_Center = Parms.Did_Center;

}


// Function ErrorEntry.ErrorEntry_C.SetErrorInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo              ErrorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UErrorEntry_C::SetErrorInfo(const struct FFortErrorInfo& ErrorInfo)
{
	static auto Func = Class->GetFunction("ErrorEntry_C", "SetErrorInfo");

	Params::UErrorEntry_C_SetErrorInfo_Params Parms;

	Parms.ErrorInfo = ErrorInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorEntry.ErrorEntry_C.GetButtonVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorEntry_C::GetButtonVisibility(enum class ESlateVisibility* NewParam)
{
	static auto Func = Class->GetFunction("ErrorEntry_C", "GetButtonVisibility");

	Params::UErrorEntry_C_GetButtonVisibility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function ErrorEntry.ErrorEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorEntry_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ErrorEntry_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature");

	Params::UErrorEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorEntry.ErrorEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UErrorEntry_C::Construct()
{
	static auto Func = Class->GetFunction("ErrorEntry_C", "Construct");

	Params::UErrorEntry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UErrorEntry_C::ExecuteUbergraph_ErrorEntry(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static auto Func = Class->GetFunction("ErrorEntry_C", "ExecuteUbergraph_ErrorEntry");

	Params::UErrorEntry_C_ExecuteUbergraph_ErrorEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
