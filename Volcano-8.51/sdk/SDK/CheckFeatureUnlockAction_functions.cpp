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


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.HandleFeatureUnlockClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACheckFeatureUnlockAction_C::HandleFeatureUnlockClosed()
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "HandleFeatureUnlockClosed");

	Params::ACheckFeatureUnlockAction_C_HandleFeatureUnlockClosed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRunning                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFeatureUnlockScreen_C*      K2Node_DynamicCast_AsFeature_Unlock_Screen                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFeatureUnlockAction_C::IsFeatureUnlockRunning(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFeatureUnlockScreen_C* K2Node_DynamicCast_AsFeature_Unlock_Screen, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "IsFeatureUnlockRunning");

	Params::ACheckFeatureUnlockAction_C_IsFeatureUnlockRunning_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFeature_Unlock_Screen = K2Node_DynamicCast_AsFeature_Unlock_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bRunning != nullptr)
		*bRunning = Parms.bRunning;

}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontendDailyRewardsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFrontEndRewards_Widget_C*   K2Node_DynamicCast_AsFront_End_Rewards_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFeatureUnlockAction_C::IsFrontendDailyRewardsRunning(bool* IsRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "IsFrontendDailyRewardsRunning");

	Params::ACheckFeatureUnlockAction_C_IsFrontendDailyRewardsRunning_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Widget = K2Node_DynamicCast_AsFront_End_Rewards_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ShowFeatureUnlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_PopNextPendingFeatureUnlock_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class UFeatureUnlockScreen_C*      K2Node_DynamicCast_AsFeature_Unlock_Screen                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFeatureUnlockAction_C::ShowFeatureUnlock(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, const class FString& CallFunc_PopNextPendingFeatureUnlock_ReturnValue, class UFeatureUnlockScreen_C* K2Node_DynamicCast_AsFeature_Unlock_Screen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInViewport_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "ShowFeatureUnlock");

	Params::ACheckFeatureUnlockAction_C_ShowFeatureUnlock_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.CallFunc_PopNextPendingFeatureUnlock_ReturnValue = CallFunc_PopNextPendingFeatureUnlock_ReturnValue;
	Parms.K2Node_DynamicCast_AsFeature_Unlock_Screen = K2Node_DynamicCast_AsFeature_Unlock_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFeatureUnlockAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Feature_Unlock_Available                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingFeatureUnlockNotification_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFeatureUnlockAction_C::IsFeatureUnlockAvailable(bool* Feature_Unlock_Available, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsPendingFeatureUnlockNotification_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "IsFeatureUnlockAvailable");

	Params::ACheckFeatureUnlockAction_C_IsFeatureUnlockAvailable_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_IsPendingFeatureUnlockNotification_ReturnValue = CallFunc_IsPendingFeatureUnlockNotification_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Feature_Unlock_Available != nullptr)
		*Feature_Unlock_Available = Parms.Feature_Unlock_Available;

}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.IsFrontEndRewardsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRunning                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFrontEndRewards_Widget_C*   K2Node_DynamicCast_AsFront_End_Rewards_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFeatureUnlockAction_C::IsFrontEndRewardsRunning(bool* bRunning, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFrontEndRewards_Widget_C* K2Node_DynamicCast_AsFront_End_Rewards_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "IsFrontEndRewardsRunning");

	Params::ACheckFeatureUnlockAction_C_IsFrontEndRewardsRunning_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsFront_End_Rewards_Widget = K2Node_DynamicCast_AsFront_End_Rewards_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bRunning != nullptr)
		*bRunning = Parms.bRunning;

}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.Execute
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams   Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACheckFeatureUnlockAction_C::Execute(struct FFortScriptedActionParams& Params)
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "Execute");

	Params::ACheckFeatureUnlockAction_C_Execute_Params Parms;

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckFeatureUnlockAction.CheckFeatureUnlockAction_C.ExecuteUbergraph_CheckFeatureUnlockAction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingLogout_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFeatureUnlockAvailable_Feature_Unlock_Available       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFrontendDailyRewardsRunning_IsRunning                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortScriptedActionParams   K2Node_Event_Params                                              (ConstParm, NoDestructor)
// bool                               CallFunc_IsFeatureUnlockRunning_bRunning                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACheckFeatureUnlockAction_C::ExecuteUbergraph_CheckFeatureUnlockAction(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsFeatureUnlockAvailable_Feature_Unlock_Available, bool CallFunc_IsFrontendDailyRewardsRunning_IsRunning, const struct FFortScriptedActionParams& K2Node_Event_Params, bool CallFunc_IsFeatureUnlockRunning_bRunning, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("CheckFeatureUnlockAction_C", "ExecuteUbergraph_CheckFeatureUnlockAction");

	Params::ACheckFeatureUnlockAction_C_ExecuteUbergraph_CheckFeatureUnlockAction_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_IsPendingLogout_ReturnValue = CallFunc_IsPendingLogout_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsFeatureUnlockAvailable_Feature_Unlock_Available = CallFunc_IsFeatureUnlockAvailable_Feature_Unlock_Available;
	Parms.CallFunc_IsFrontendDailyRewardsRunning_IsRunning = CallFunc_IsFrontendDailyRewardsRunning_IsRunning;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.CallFunc_IsFeatureUnlockRunning_bRunning = CallFunc_IsFeatureUnlockRunning_bRunning;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
