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


// Function Lightbox.Lightbox_C.RemoveContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightbox_C::RemoveContent(bool CallFunc_HasAnyChildren_ReturnValue)
{
	static auto Func = Class->GetFunction("Lightbox_C", "RemoveContent");

	Params::ULightbox_C_RemoveContent_Params Parms;

	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.AddContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*           Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightbox_C::AddContent(class UCommonUserWidget* Content, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("Lightbox_C", "AddContent");

	Params::ULightbox_C_AddContent_Params Parms;

	Parms.Content = Content;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightbox_C::Outro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("Lightbox_C", "Outro");

	Params::ULightbox_C_Outro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightbox_C::Intro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("Lightbox_C", "Intro");

	Params::ULightbox_C_Intro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULightbox_C::Destruct()
{
	static auto Func = Class->GetFunction("Lightbox_C", "Destruct");

	Params::ULightbox_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULightbox_C::Construct()
{
	static auto Func = Class->GetFunction("Lightbox_C", "Construct");

	Params::ULightbox_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULightbox_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Lightbox_C", "PreConstruct");

	Params::ULightbox_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void ULightbox_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0()
{
	static auto Func = Class->GetFunction("Lightbox_C", "WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0");

	Params::ULightbox_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void ULightbox_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static auto Func = Class->GetFunction("Lightbox_C", "WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");

	Params::ULightbox_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightbox_C::ExecuteUbergraph_Lightbox(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static auto Func = Class->GetFunction("Lightbox_C", "ExecuteUbergraph_Lightbox");

	Params::ULightbox_C_ExecuteUbergraph_Lightbox_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULightbox_C::OutroEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("Lightbox_C", "OutroEnded__DelegateSignature");

	Params::ULightbox_C_OutroEnded__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULightbox_C::IntroEnded__DelegateSignature()
{
	static auto Func = Class->GetFunction("Lightbox_C", "IntroEnded__DelegateSignature");

	Params::ULightbox_C_IntroEnded__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
