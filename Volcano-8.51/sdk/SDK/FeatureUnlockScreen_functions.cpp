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


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeatureUnlockScreen_C::Reset_Intro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "Reset Intro");

	Params::UFeatureUnlockScreen_C_Reset_Intro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeatureUnlockScreen_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "HandleBack");

	Params::UFeatureUnlockScreen_C_HandleBack_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "OnBeginIntro");

	Params::UFeatureUnlockScreen_C_OnBeginIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::RefreshDataBP()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "RefreshDataBP");

	Params::UFeatureUnlockScreen_C_RefreshDataBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFeatureUnlockScreen_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UFeatureUnlockScreen_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::Construct()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "Construct");

	Params::UFeatureUnlockScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "Destruct");

	Params::UFeatureUnlockScreen_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "OnActivated");

	Params::UFeatureUnlockScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::OnRemovedFromActivationStack()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "OnRemovedFromActivationStack");

	Params::UFeatureUnlockScreen_C_OnRemovedFromActivationStack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.AnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::AnimationFinished()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "AnimationFinished");

	Params::UFeatureUnlockScreen_C_AnimationFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTitle_ReturnValue                                    ()
// class FText                        CallFunc_GetDescription_ReturnValue                              ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingFeatureUnlockNotification_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_PopNextPendingFeatureUnlock_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UFeatureUnlockScreen_C::ExecuteUbergraph_FeatureUnlockScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HandleBack_Passthrough, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_GetTitle_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_1, bool CallFunc_IsPendingFeatureUnlockNotification_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_2, const class FString& CallFunc_PopNextPendingFeatureUnlock_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "ExecuteUbergraph_FeatureUnlockScreen");

	Params::UFeatureUnlockScreen_C_ExecuteUbergraph_FeatureUnlockScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue_1 = CallFunc_GetQuestManager_ReturnValue_1;
	Parms.CallFunc_IsPendingFeatureUnlockNotification_ReturnValue = CallFunc_IsPendingFeatureUnlockNotification_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetQuestManager_ReturnValue_2 = CallFunc_GetQuestManager_ReturnValue_2;
	Parms.CallFunc_PopNextPendingFeatureUnlock_ReturnValue = CallFunc_PopNextPendingFeatureUnlock_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnFeatureUnlockClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFeatureUnlockScreen_C::OnFeatureUnlockClosed__DelegateSignature()
{
	static auto Func = Class->GetFunction("FeatureUnlockScreen_C", "OnFeatureUnlockClosed__DelegateSignature");

	Params::UFeatureUnlockScreen_C_OnFeatureUnlockClosed__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
