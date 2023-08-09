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


// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// int32                              CallFunc_PointerEvent_GetPointerIndex_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PointerEvent_GetUserIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_HasMouseCaptureByUser_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue                         ()

struct FEventReply UTutorialToastWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 CallFunc_PointerEvent_GetPointerIndex_ReturnValue, int32 CallFunc_PointerEvent_GetUserIndex_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_HasMouseCaptureByUser_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue)
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "OnMouseButtonUp");

	Params::UTutorialToastWidget_C_OnMouseButtonUp_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetPointerIndex_ReturnValue = CallFunc_PointerEvent_GetPointerIndex_ReturnValue;
	Parms.CallFunc_PointerEvent_GetUserIndex_ReturnValue = CallFunc_PointerEvent_GetUserIndex_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_HasMouseCaptureByUser_ReturnValue = CallFunc_HasMouseCaptureByUser_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue = CallFunc_ReleaseMouseCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_CaptureMouse_ReturnValue                                ()

struct FEventReply UTutorialToastWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue)
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "OnMouseButtonDown");

	Params::UTutorialToastWidget_C_OnMouseButtonDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_CaptureMouse_ReturnValue = CallFunc_CaptureMouse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TutorialToastWidget.TutorialToastWidget_C.SetAndShowText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*            TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit, BlueprintVisible)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UTutorialToastWidget_C::SetAndShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "SetAndShowText");

	Params::UTutorialToastWidget_C_SetAndShowText_Params Parms;

	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.ShowToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo       DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialToastWidget_C::ShowToast(const struct FFortToastDisplayInfo& DisplayInfo)
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "ShowToast");

	Params::UTutorialToastWidget_C_ShowToast_Params Parms;

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.OnLoaded_3011ADA2432D60D311EC38ADECCDDF44
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialToastWidget_C::OnLoaded_3011ADA2432D60D311EC38ADECCDDF44(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "OnLoaded_3011ADA2432D60D311EC38ADECCDDF44");

	Params::UTutorialToastWidget_C_OnLoaded_3011ADA2432D60D311EC38ADECCDDF44_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.OnShowToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo       DispalyInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialToastWidget_C::OnShowToast(const struct FFortToastDisplayInfo& DispalyInfo)
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "OnShowToast");

	Params::UTutorialToastWidget_C_OnShowToast_Params Parms;

	Parms.DispalyInfo = DispalyInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.Start Toast Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::Start_Toast_Animation()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "Start Toast Animation");

	Params::UTutorialToastWidget_C_Start_Toast_Animation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.On Idle Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::On_Idle_Finished()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "On Idle Finished");

	Params::UTutorialToastWidget_C_On_Idle_Finished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.SimulateAthenaStoreToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::SimulateAthenaStoreToast()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "SimulateAthenaStoreToast");

	Params::UTutorialToastWidget_C_SimulateAthenaStoreToast_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::Clicked()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "Clicked");

	Params::UTutorialToastWidget_C_Clicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::RemoveWidget()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "RemoveWidget");

	Params::UTutorialToastWidget_C_RemoveWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0");

	Params::UTutorialToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2");

	Params::UTutorialToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.ExecuteUbergraph_TutorialToastWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortToastDisplayInfo       K2Node_CustomEvent_DispalyInfo                                   ()
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FFortToastDisplayInfo       K2Node_MakeStruct_FortToastDisplayInfo                           ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UTutorialToastWidget_C::ExecuteUbergraph_TutorialToastWidget(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FFortToastDisplayInfo& K2Node_CustomEvent_DispalyInfo, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFortToastDisplayInfo& K2Node_MakeStruct_FortToastDisplayInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "ExecuteUbergraph_TutorialToastWidget");

	Params::UTutorialToastWidget_C_ExecuteUbergraph_TutorialToastWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_DispalyInfo = K2Node_CustomEvent_DispalyInfo;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeStruct_FortToastDisplayInfo = K2Node_MakeStruct_FortToastDisplayInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.OnToastClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::OnToastClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "OnToastClicked__DelegateSignature");

	Params::UTutorialToastWidget_C_OnToastClicked__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TutorialToastWidget.TutorialToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTutorialToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("TutorialToastWidget_C", "OnFinishedToast__DelegateSignature");

	Params::UTutorialToastWidget_C_OnFinishedToast__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
