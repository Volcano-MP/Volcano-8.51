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


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ScaleTitleForCulture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScaleCharThreshold                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxCharCountForScale                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartScaleAfterCharCount                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::ScaleTitleForCulture(float ScaleCharThreshold, float MaxCharCountForScale, int32 StartScaleAfterCharCount, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "ScaleTitleForCulture");

	Params::UEnableMultiFactorAuthModalBP_C_ScaleTitleForCulture_Params Parms;

	Parms.ScaleCharThreshold = ScaleCharThreshold;
	Parms.MaxCharCountForScale = MaxCharCountForScale;
	Parms.StartScaleAfterCharCount = StartScaleAfterCharCount;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.AnimationFullyCompleteBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::AnimationFullyCompleteBP()
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "AnimationFullyCompleteBP");

	Params::UEnableMultiFactorAuthModalBP_C_AnimationFullyCompleteBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleSetScreenMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::HandleSetScreenMode(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "HandleSetScreenMode");

	Params::UEnableMultiFactorAuthModalBP_C_HandleSetScreenMode_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_1 = CallFunc_GetUINavigationManager_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::NavDown(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavDown");

	Params::UEnableMultiFactorAuthModalBP_C_NavDown_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::NavUp(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavUp");

	Params::UEnableMultiFactorAuthModalBP_C_NavUp_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_1 = CallFunc_GetUINavigationManager_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::NavRight(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavRight");

	Params::UEnableMultiFactorAuthModalBP_C_NavRight_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_1 = CallFunc_GetUINavigationManager_ReturnValue_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::NavLeft(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavLeft");

	Params::UEnableMultiFactorAuthModalBP_C_NavLeft_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "PreConstruct");

	Params::UEnableMultiFactorAuthModalBP_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature");

	Params::UEnableMultiFactorAuthModalBP_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleHeaderText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::HandleHeaderText()
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "HandleHeaderText");

	Params::UEnableMultiFactorAuthModalBP_C_HandleHeaderText_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::OnActivated()
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnActivated");

	Params::UEnableMultiFactorAuthModalBP_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnPanelTypeSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESocialImportPanelType  NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::OnPanelTypeSet(enum class ESocialImportPanelType NewType)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnPanelTypeSet");

	Params::UEnableMultiFactorAuthModalBP_C_OnPanelTypeSet_Params Parms;

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnIncentivizedSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIncentivized                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::OnIncentivizedSet(bool bIncentivized)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnIncentivizedSet");

	Params::UEnableMultiFactorAuthModalBP_C_OnIncentivizedSet_Params Parms;

	Parms.bIncentivized = bIncentivized;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetExitButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewButtonText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEnableMultiFactorAuthModalBP_C::OnSetExitButtonText(class FText& NewButtonText)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnSetExitButtonText");

	Params::UEnableMultiFactorAuthModalBP_C_OnSetExitButtonText_Params Parms;

	Parms.NewButtonText = NewButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnConsoleDisplayURLProvided
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        UniquePlayerURLText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEnableMultiFactorAuthModalBP_C::OnConsoleDisplayURLProvided(class FText& UniquePlayerURLText)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnConsoleDisplayURLProvided");

	Params::UEnableMultiFactorAuthModalBP_C_OnConsoleDisplayURLProvided_Params Parms;

	Parms.UniquePlayerURLText = UniquePlayerURLText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetScreenConfiguration
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsConsole                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::OnSetScreenConfiguration(bool bIsConsole)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnSetScreenConfiguration");

	Params::UEnableMultiFactorAuthModalBP_C_OnSetScreenConfiguration_Params Parms;

	Parms.bIsConsole = bIsConsole;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ExecuteUbergraph_EnableMultiFactorAuthModalBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFrontEndCamera         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelType  K2Node_Event_NewType                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIncentivized                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_NewButtonText                                       (ConstParm)
// class FText                        K2Node_Event_UniquePlayerURLText                                 (ConstParm)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsConsole                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32 EntryPoint, enum class EFrontEndCamera Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable, enum class EFrontEndCamera K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESocialImportPanelType K2Node_Event_NewType, float CallFunc_GetEndTime_ReturnValue, bool K2Node_Event_bIncentivized, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText K2Node_Event_NewButtonText, class FText K2Node_Event_UniquePlayerURLText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bIsConsole)
{
	static auto Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "ExecuteUbergraph_EnableMultiFactorAuthModalBP");

	Params::UEnableMultiFactorAuthModalBP_C_ExecuteUbergraph_EnableMultiFactorAuthModalBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_NewType = K2Node_Event_NewType;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.K2Node_Event_bIncentivized = K2Node_Event_bIncentivized;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_NewButtonText = K2Node_Event_NewButtonText;
	Parms.K2Node_Event_UniquePlayerURLText = K2Node_Event_UniquePlayerURLText;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_bIsConsole = K2Node_Event_bIsConsole;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
