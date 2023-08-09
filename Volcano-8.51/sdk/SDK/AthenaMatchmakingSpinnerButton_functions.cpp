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


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UAthenaMatchmakingSpinnerButton_C::DoCustomNavigation_0(enum class EUINavigation Navigation)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "DoCustomNavigation_0");

	Params::UAthenaMatchmakingSpinnerButton_C_DoCustomNavigation_0_Params Parms;

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.Set Button Sizes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingSpinnerButton_C::Set_Button_Sizes(bool CallFunc_IsMobileGame_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "Set Button Sizes");

	Params::UAthenaMatchmakingSpinnerButton_C_Set_Button_Sizes_Params Parms;

	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingSpinnerButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "PreConstruct");

	Params::UAthenaMatchmakingSpinnerButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.InputModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Gamepad                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingSpinnerButton_C::InputModeChanged(bool Gamepad)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "InputModeChanged");

	Params::UAthenaMatchmakingSpinnerButton_C_InputModeChanged_Params Parms;

	Parms.Gamepad = Gamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingSpinnerButton_C::BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingSpinnerButton_C_BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingSpinnerButton_C::BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingSpinnerButton_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingSpinnerButton_C::CustomEvent(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "CustomEvent");

	Params::UAthenaMatchmakingSpinnerButton_C_CustomEvent_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.InputUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingSpinnerButton_C::InputUpdated(enum class ECommonInputType bNewInputType)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "InputUpdated");

	Params::UAthenaMatchmakingSpinnerButton_C_InputUpdated_Params Parms;

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.AfterleftisDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::AfterleftisDone()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "AfterleftisDone");

	Params::UAthenaMatchmakingSpinnerButton_C_AfterleftisDone_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.AfterRightIsDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::AfterRightIsDone()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "AfterRightIsDone");

	Params::UAthenaMatchmakingSpinnerButton_C_AfterRightIsDone_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "BP_OnHovered");

	Params::UAthenaMatchmakingSpinnerButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "BP_OnUnhovered");

	Params::UAthenaMatchmakingSpinnerButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.ClearHoverState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::ClearHoverState()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "ClearHoverState");

	Params::UAthenaMatchmakingSpinnerButton_C_ClearHoverState_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingSpinnerButton_C::AnimateIn(int32 Index)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "AnimateIn");

	Params::UAthenaMatchmakingSpinnerButton_C_AnimateIn_Params Parms;

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.OnLoadingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCurrentlyLoading                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingSpinnerButton_C::OnLoadingStateChanged(bool bCurrentlyLoading)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "OnLoadingStateChanged");

	Params::UAthenaMatchmakingSpinnerButton_C_OnLoadingStateChanged_Params Parms;

	Parms.bCurrentlyLoading = bCurrentlyLoading;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.SetSpinnerOptionsVisiblity
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingSpinnerButton_C::SetSpinnerOptionsVisiblity(bool bVisible)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "SetSpinnerOptionsVisiblity");

	Params::UAthenaMatchmakingSpinnerButton_C_SetSpinnerOptionsVisiblity_Params Parms;

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.BP_OnDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::BP_OnDoubleClicked()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "BP_OnDoubleClicked");

	Params::UAthenaMatchmakingSpinnerButton_C_BP_OnDoubleClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "Construct");

	Params::UAthenaMatchmakingSpinnerButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingSpinnerButton_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "BP_OnClicked");

	Params::UAthenaMatchmakingSpinnerButton_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C.ExecuteUbergraph_AthenaMatchmakingSpinnerButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_GamePad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCurrentlyLoading                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingSpinnerButton_C::ExecuteUbergraph_AthenaMatchmakingSpinnerButton(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_GamePad, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bUsingGamepad, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, class UClass* Temp_class_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UClass* Temp_class_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default, int32 K2Node_CustomEvent_Index, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_bCurrentlyLoading, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_bVisible)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingSpinnerButton_C", "ExecuteUbergraph_AthenaMatchmakingSpinnerButton");

	Params::UAthenaMatchmakingSpinnerButton_C_ExecuteUbergraph_AthenaMatchmakingSpinnerButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_GamePad = K2Node_CustomEvent_GamePad;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputType_ReturnValue_1 = CallFunc_GetCurrentInputType_ReturnValue_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_Event_bCurrentlyLoading = K2Node_Event_bCurrentlyLoading;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
