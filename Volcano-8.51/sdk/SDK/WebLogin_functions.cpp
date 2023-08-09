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


// Function WebLogin.WebLogin_C.DisplayWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WebWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebLogin_C::DisplayWidget(class UWidget* WebWidget)
{
	static auto Func = Class->GetFunction("WebLogin_C", "DisplayWidget");

	Params::UWebLogin_C_DisplayWidget_Params Parms;

	Parms.WebWidget = WebWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebLogin.WebLogin_C.DismissWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWebLogin_C::DismissWidget()
{
	static auto Func = Class->GetFunction("WebLogin_C", "DismissWidget");

	Params::UWebLogin_C_DismissWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_WebWidget                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWebLogin_C::ExecuteUbergraph_WebLogin(int32 EntryPoint, class UWidget* K2Node_Event_WebWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("WebLogin_C", "ExecuteUbergraph_WebLogin");

	Params::UWebLogin_C_ExecuteUbergraph_WebLogin_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_WebWidget = K2Node_Event_WebWidget;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
