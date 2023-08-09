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


// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.SetNumOfBattlePassStars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumOfBattlePassStars                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::SetNumOfBattlePassStars(int32 NumOfBattlePassStars)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C", "SetNumOfBattlePassStars");

	Params::UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C_SetNumOfBattlePassStars_Params Parms;

	Parms.NumOfBattlePassStars = NumOfBattlePassStars;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitonDetails_BattlePassStarDetails.AthenaDirectAcquisitonDetails_BattlePassStarDetails_C.ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NumOfBattlePassStars                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C::ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails(int32 EntryPoint, int32 K2Node_CustomEvent_NumOfBattlePassStars, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitonDetails_BattlePassStarDetails_C", "ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails");

	Params::UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C_ExecuteUbergraph_AthenaDirectAcquisitonDetails_BattlePassStarDetails_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NumOfBattlePassStars = K2Node_CustomEvent_NumOfBattlePassStars;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
