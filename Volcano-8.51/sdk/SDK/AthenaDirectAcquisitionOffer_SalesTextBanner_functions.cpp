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


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Set Sales Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Sales_Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::Set_Sales_Text(class FText Sales_Text)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "Set Sales Text");

	Params::UAthenaDirectAcquisitionOffer_SalesTextBanner_C_Set_Sales_Text_Params Parms;

	Parms.Sales_Text = Sales_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "Construct");

	Params::UAthenaDirectAcquisitionOffer_SalesTextBanner_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "PreConstruct");

	Params::UAthenaDirectAcquisitionOffer_SalesTextBanner_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Sales_Text                                    ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class FText K2Node_CustomEvent_Sales_Text, class FText CallFunc_TextToUpper_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner");

	Params::UAthenaDirectAcquisitionOffer_SalesTextBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_Sales_Text = K2Node_CustomEvent_Sales_Text;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
