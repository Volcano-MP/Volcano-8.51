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


// Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchmakingRegionAndPool_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("MatchmakingRegionAndPool_C", "Tick");

	Params::UMatchmakingRegionAndPool_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.ExecuteUbergraph_MatchmakingRegionAndPool
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue       ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetMCPRegionText_ReturnValue                            ()
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchmakingRegionAndPool_C::ExecuteUbergraph_MatchmakingRegionAndPool(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue, class FText CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue, bool Temp_bool_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1, class FText CallFunc_GetMCPRegionText_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MatchmakingRegionAndPool_C", "ExecuteUbergraph_MatchmakingRegionAndPool");

	Params::UMatchmakingRegionAndPool_C_ExecuteUbergraph_MatchmakingRegionAndPool_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue = CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue;
	Parms.CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue = CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1 = CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1;
	Parms.CallFunc_GetMCPRegionText_ReturnValue = CallFunc_GetMCPRegionText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
