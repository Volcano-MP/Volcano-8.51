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


// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UProgressModalWidget_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "OnAnalogValueChanged");

	Params::UProgressModalWidget_C_OnAnalogValueChanged_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressModalWidget.ProgressModalWidget_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressModalWidget_C::Initialize(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "Initialize");

	Params::UProgressModalWidget_C_Initialize_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "Construct");

	Params::UProgressModalWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::HandleIntroEnded()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "HandleIntroEnded");

	Params::UProgressModalWidget_C_HandleIntroEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::HandleOutroEnded()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "HandleOutroEnded");

	Params::UProgressModalWidget_C_HandleOutroEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginIntro");

	Params::UProgressModalWidget_C_OnBeginIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginOutro");

	Params::UProgressModalWidget_C_OnBeginOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "Destruct");

	Params::UProgressModalWidget_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.SetTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InTitle                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProgressModalWidget_C::SetTitle(class FText& InTitle)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "SetTitle");

	Params::UProgressModalWidget_C_SetTitle_Params Parms;

	Parms.InTitle = InTitle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.SetDescription
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InDescription                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProgressModalWidget_C::SetDescription(class FText& InDescription)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "SetDescription");

	Params::UProgressModalWidget_C_SetDescription_Params Parms;

	Parms.InDescription = InDescription;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.SetIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 InIcon                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UProgressModalWidget_C::SetIcon(const struct FSlateBrush& InIcon)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "SetIcon");

	Params::UProgressModalWidget_C_SetIcon_Params Parms;

	Parms.InIcon = InIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Event_InTitle                                             (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FText                        K2Node_Event_InDescription                                       (ConstParm)
// struct FSlateBrush                 K2Node_Event_InIcon                                              ()

void UProgressModalWidget_C::ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText K2Node_Event_InTitle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText K2Node_Event_InDescription, const struct FSlateBrush& K2Node_Event_InIcon)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "ExecuteUbergraph_ProgressModalWidget");

	Params::UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_InTitle = K2Node_Event_InTitle;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_InDescription = K2Node_Event_InDescription;
	Parms.K2Node_Event_InIcon = K2Node_Event_InIcon;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
