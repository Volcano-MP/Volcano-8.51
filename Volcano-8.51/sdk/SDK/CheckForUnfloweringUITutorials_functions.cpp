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


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.CanRunTutorialQuests
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyRewards_C*             K2Node_DynamicCast_AsDaily_Rewards                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentlyRunning_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckForUnfloweringUITutorials_C::CanRunTutorialQuests(bool* Result, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UDailyRewards_C* K2Node_DynamicCast_AsDaily_Rewards, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCurrentlyRunning_Result, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckForUnfloweringUITutorials_C", "CanRunTutorialQuests");

	Params::ACheckForUnfloweringUITutorials_C_CanRunTutorialQuests_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsDaily_Rewards = K2Node_DynamicCast_AsDaily_Rewards;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCurrentlyRunning_Result = CallFunc_IsCurrentlyRunning_Result;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckForUnfloweringUITutorials_C::Execute(struct FFortScriptedActionParams& Params)
{
	static auto Func = Class->GetFunction("CheckForUnfloweringUITutorials_C", "Execute");

	Params::ACheckForUnfloweringUITutorials_C_Execute_Params Parms;

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.ExecuteUbergraph_CheckForUnfloweringUITutorials
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// bool                               CallFunc_CanRunTutorialQuests_Result                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckForUnfloweringUITutorials_C::ExecuteUbergraph_CheckForUnfloweringUITutorials(int32 EntryPoint, const struct FFortScriptedActionParams& K2Node_Event_Params, bool CallFunc_CanRunTutorialQuests_Result)
{
	static auto Func = Class->GetFunction("CheckForUnfloweringUITutorials_C", "ExecuteUbergraph_CheckForUnfloweringUITutorials");

	Params::ACheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.CallFunc_CanRunTutorialQuests_Result = CallFunc_CanRunTutorialQuests_Result;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
