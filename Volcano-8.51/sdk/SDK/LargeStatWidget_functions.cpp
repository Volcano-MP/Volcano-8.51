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


// Function LargeStatWidget.LargeStatWidget_C.SetStatEntryNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StatEntryNumber                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void ULargeStatWidget_C::SetStatEntryNumber(int32 StatEntryNumber, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("LargeStatWidget_C", "SetStatEntryNumber");

	Params::ULargeStatWidget_C_SetStatEntryNumber_Params Parms;

	Parms.StatEntryNumber = StatEntryNumber;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeStatWidget.LargeStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULargeStatWidget_C::OnStatChanged()
{
	static auto Func = Class->GetFunction("LargeStatWidget_C", "OnStatChanged");

	Params::ULargeStatWidget_C_OnStatChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeStatWidget.LargeStatWidget_C.ExecuteUbergraph_LargeStatWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeStatWidget_C::ExecuteUbergraph_LargeStatWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue)
{
	static auto Func = Class->GetFunction("LargeStatWidget_C", "ExecuteUbergraph_LargeStatWidget");

	Params::ULargeStatWidget_C_ExecuteUbergraph_LargeStatWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
