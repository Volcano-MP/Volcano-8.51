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


// Function PlacementStatRowWidget.PlacementStatRowWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlacementStatRowWidget_C::OnStatChanged()
{
	static auto Func = Class->GetFunction("PlacementStatRowWidget_C", "OnStatChanged");

	Params::UPlacementStatRowWidget_C_OnStatChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlacementStatRowWidget.PlacementStatRowWidget_C.ExecuteUbergraph_PlacementStatRowWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlacementStatRowWidget_C::ExecuteUbergraph_PlacementStatRowWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, float CallFunc_GetStat_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, int32 CallFunc_Round_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PlacementStatRowWidget_C", "ExecuteUbergraph_PlacementStatRowWidget");

	Params::UPlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
