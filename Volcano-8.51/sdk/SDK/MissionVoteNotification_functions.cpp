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


// Function MissionVoteNotification.MissionVoteNotification_C.OnActionTaken
// (Event, Public, BlueprintEvent)
// Parameters:

void UMissionVoteNotification_C::OnActionTaken()
{
	static auto Func = Class->GetFunction("MissionVoteNotification_C", "OnActionTaken");

	Params::UMissionVoteNotification_C_OnActionTaken_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionVoteNotification.MissionVoteNotification_C.ExecuteUbergraph_MissionVoteNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionActivationWidget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionVoteNotification_C::ExecuteUbergraph_MissionVoteNotification(int32 EntryPoint, class UMissionActivationWidget_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionVoteNotification_C", "ExecuteUbergraph_MissionVoteNotification");

	Params::UMissionVoteNotification_C_ExecuteUbergraph_MissionVoteNotification_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
