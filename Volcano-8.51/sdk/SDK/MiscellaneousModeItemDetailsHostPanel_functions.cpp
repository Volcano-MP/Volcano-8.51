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


// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiscellaneousModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto Func = Class->GetFunction("MiscellaneousModeItemDetailsHostPanel_C", "HandleHasItemMarkedForMulchingChanged");

	Params::UMiscellaneousModeItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiscellaneousModeItemDetailsHostPanel_C::ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MiscellaneousModeItemDetailsHostPanel_C", "ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel");

	Params::UMiscellaneousModeItemDetailsHostPanel_C_ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
