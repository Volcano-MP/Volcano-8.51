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


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWidget* UDeadzoneAdjustment_C::DoCustomNavigation_0(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("DeadzoneAdjustment_C", "DoCustomNavigation_0");

	Params::UDeadzoneAdjustment_C_DoCustomNavigation_0_Params Parms;

	Parms.Navigation = Navigation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDeadzoneAdjustment_C::Construct()
{
	static auto Func = Class->GetFunction("DeadzoneAdjustment_C", "Construct");

	Params::UDeadzoneAdjustment_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.OnValueChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeadzoneAdjustment_C::OnValueChanged_Bind(float Value)
{
	static auto Func = Class->GetFunction("DeadzoneAdjustment_C", "OnValueChanged_Bind");

	Params::UDeadzoneAdjustment_C_OnValueChanged_Bind_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DeadzoneAdjustment.DeadzoneAdjustment_C.ExecuteUbergraph_DeadzoneAdjustment
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_ConvertSliderValueToSettingsValue_SettingsValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeadzoneAdjustment_C::ExecuteUbergraph_DeadzoneAdjustment(int32 EntryPoint, float CallFunc_GetValue_ReturnValue, float K2Node_CustomEvent_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_ConvertSliderValueToSettingsValue_SettingsValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("DeadzoneAdjustment_C", "ExecuteUbergraph_DeadzoneAdjustment");

	Params::UDeadzoneAdjustment_C_ExecuteUbergraph_DeadzoneAdjustment_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ConvertSliderValueToSettingsValue_SettingsValue = CallFunc_ConvertSliderValueToSettingsValue_SettingsValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
