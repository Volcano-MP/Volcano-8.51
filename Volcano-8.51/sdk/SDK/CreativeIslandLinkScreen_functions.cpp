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


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnIslandLinkEntryTextChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCreativeIslandLinkScreen_C::OnIslandLinkEntryTextChanged(class FText& Text)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "OnIslandLinkEntryTextChanged");

	Params::UCreativeIslandLinkScreen_C_OnIslandLinkEntryTextChanged_Params Parms;

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnCreativeIslandLinksPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCreativeIslandLinkScreen_C::OnCreativeIslandLinksPopulated()
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "OnCreativeIslandLinksPopulated");

	Params::UCreativeIslandLinkScreen_C_OnCreativeIslandLinksPopulated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InitObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkScreen_C::InitFromObject(class UObject* InitObject)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "InitFromObject");

	Params::UCreativeIslandLinkScreen_C_InitFromObject_Params Parms;

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnAddedToActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCreativeIslandLinkScreen_C::OnAddedToActivationStack()
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "OnAddedToActivationStack");

	Params::UCreativeIslandLinkScreen_C_OnAddedToActivationStack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativeIslandLinkScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "Destruct");

	Params::UCreativeIslandLinkScreen_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativeIslandLinkScreen_C::Construct()
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "Construct");

	Params::UCreativeIslandLinkScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCreativeIslandLinkScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "OnActivated");

	Params::UCreativeIslandLinkScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeIslandLinkScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "PreConstruct");

	Params::UCreativeIslandLinkScreen_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeIslandLinkScreen_C::BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::UCreativeIslandLinkScreen_C_BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkScreen_C::BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UCreativeIslandLinkScreen_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnCreativeIslandLinkValidated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortCreativeIslandLinkValidationResultValidateResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkScreen_C::OnCreativeIslandLinkValidated(enum class EFortCreativeIslandLinkValidationResult ValidateResult)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "OnCreativeIslandLinkValidated");

	Params::UCreativeIslandLinkScreen_C_OnCreativeIslandLinkValidated_Params Parms;

	Parms.ValidateResult = ValidateResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkScreen_C::BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UCreativeIslandLinkScreen_C_BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.ExecuteUbergraph_CreativeIslandLinkScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCreativeIslandLinkValidationResultTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        K2Node_CustomEvent_Text                                          (ConstParm)
// int32                              CallFunc_GetNumItems_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCreativeIslandLinkValidationResultTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InitObject                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_IslandPortal_C*         K2Node_DynamicCast_AsBGA_Island_Portal                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// bool                               K2Node_ComponentBoundEvent_bUsingGamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCreativeIslandLinkValidationResultK2Node_Event_ValidateResult                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandLinkScreen_C::ExecuteUbergraph_CreativeIslandLinkScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EFortCreativeIslandLinkValidationResult Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_CustomEvent_Text, int32 CallFunc_GetNumItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, enum class EFortCreativeIslandLinkValidationResult Temp_byte_Variable_1, class UObject* K2Node_Event_InitObject, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class ABGA_IslandPortal_C* K2Node_DynamicCast_AsBGA_Island_Portal, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_2, bool K2Node_Event_IsDesignTime, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, enum class EFortCreativeIslandLinkValidationResult K2Node_Event_ValidateResult, const struct FLinearColor& K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("CreativeIslandLinkScreen_C", "ExecuteUbergraph_CreativeIslandLinkScreen");

	Params::UCreativeIslandLinkScreen_C_ExecuteUbergraph_CreativeIslandLinkScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_GetNumItems_ReturnValue = CallFunc_GetNumItems_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_InitObject = K2Node_Event_InitObject;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBGA_Island_Portal = K2Node_DynamicCast_AsBGA_Island_Portal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_1 = CallFunc_GetUINavigationManager_ReturnValue_1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_2 = CallFunc_GetUINavigationManager_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bUsingGamepad = K2Node_ComponentBoundEvent_bUsingGamepad;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_Event_ValidateResult = K2Node_Event_ValidateResult;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
