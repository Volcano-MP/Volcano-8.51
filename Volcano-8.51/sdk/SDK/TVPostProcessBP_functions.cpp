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


// Function TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Use_Bluescreen                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Probablility_modulator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Use_Flat_Blue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxColorPerChannelValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Control_replacement_alpha                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATVPostProcessBP_C::RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "RandomizeTheColor");

	Params::ATVPostProcessBP_C_RandomizeTheColor_Params Parms;

	Parms.Use_Bluescreen = Use_Bluescreen;
	Parms.Probablility_modulator = Probablility_modulator;
	Parms.Use_Flat_Blue = Use_Flat_Blue;
	Parms.MaxColorPerChannelValue = MaxColorPerChannelValue;
	Parms.Control_replacement_alpha = Control_replacement_alpha;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "UserConstructionScript");

	Params::ATVPostProcessBP_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Show_the_troll__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Show the troll__FinishedFunc");

	Params::ATVPostProcessBP_C_Show_the_troll__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Show_the_troll__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Show the troll__UpdateFunc");

	Params::ATVPostProcessBP_C_Show_the_troll__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Switch_between_cameras__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Switch between cameras__FinishedFunc");

	Params::ATVPostProcessBP_C_Switch_between_cameras__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Switch_between_cameras__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Switch between cameras__UpdateFunc");

	Params::ATVPostProcessBP_C_Switch_between_cameras__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Switch_between_cameras__Switch_Camera_Position__EventFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Switch between cameras__Switch Camera Position__EventFunc");

	Params::ATVPostProcessBP_C_Switch_between_cameras__Switch_Camera_Position__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Switch_to_live__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Switch to live__FinishedFunc");

	Params::ATVPostProcessBP_C_Switch_to_live__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Switch_to_live__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Switch to live__UpdateFunc");

	Params::ATVPostProcessBP_C_Switch_to_live__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::FadeOut__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "FadeOut__FinishedFunc");

	Params::ATVPostProcessBP_C_FadeOut__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::FadeOut__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "FadeOut__UpdateFunc");

	Params::ATVPostProcessBP_C_FadeOut__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Switch_to_static__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Switch to static__FinishedFunc");

	Params::ATVPostProcessBP_C_Switch_to_static__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Switch_to_static__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Switch to static__UpdateFunc");

	Params::ATVPostProcessBP_C_Switch_to_static__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_StartTheMonitor_Text_Timeline__FinishedFunc");

	Params::ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_StartTheMonitor_Text_Timeline__UpdateFunc");

	Params::ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Jitter_Timeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Jitter Timeline__FinishedFunc");

	Params::ATVPostProcessBP_C_Jitter_Timeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Jitter_Timeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Jitter Timeline__UpdateFunc");

	Params::ATVPostProcessBP_C_Jitter_Timeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Jitter_Timeline__Switch_Camera_Position__EventFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Jitter Timeline__Switch Camera Position__EventFunc");

	Params::ATVPostProcessBP_C_Jitter_Timeline__Switch_Camera_Position__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::FrontEndCameraSwitchFade__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitchFade__FinishedFunc");

	Params::ATVPostProcessBP_C_FrontEndCameraSwitchFade__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::FrontEndCameraSwitchFade__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitchFade__UpdateFunc");

	Params::ATVPostProcessBP_C_FrontEndCameraSwitchFade__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::StartScreen__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "StartScreen__FinishedFunc");

	Params::ATVPostProcessBP_C_StartScreen__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::StartScreen__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "StartScreen__UpdateFunc");

	Params::ATVPostProcessBP_C_StartScreen__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_TriggerTheTroll()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TriggerTheTroll");

	Params::ATVPostProcessBP_C_Camera_TriggerTheTroll_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_SwitchBetweenLocations()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_SwitchBetweenLocations");

	Params::ATVPostProcessBP_C_Camera_SwitchBetweenLocations_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_TransitionToLiveStatic()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TransitionToLiveStatic");

	Params::ATVPostProcessBP_C_Camera_TransitionToLiveStatic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_TurnOffThePostProcess()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TurnOffThePostProcess");

	Params::ATVPostProcessBP_C_Camera_TurnOffThePostProcess_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_TransitionToLiveVideo()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_TransitionToLiveVideo");

	Params::ATVPostProcessBP_C_Camera_TransitionToLiveVideo_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_DebugEvents()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DebugEvents");

	Params::ATVPostProcessBP_C_Camera_DebugEvents_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_StartTheMonitor_Text()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_StartTheMonitor_Text");

	Params::ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_DosTextFinished()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DosTextFinished");

	Params::ATVPostProcessBP_C_Camera_DosTextFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_ReturningPlayerInitializeWithLiveVideo()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_ReturningPlayerInitializeWithLiveVideo");

	Params::ATVPostProcessBP_C_Camera_ReturningPlayerInitializeWithLiveVideo_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::FrontEndCameraSwitch()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitch");

	Params::ATVPostProcessBP_C_FrontEndCameraSwitch_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_LoadAndWait()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_LoadAndWait");

	Params::ATVPostProcessBP_C_Camera_LoadAndWait_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_Sequence_Start_StaticWhoomp()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_Sequence_Start_StaticWhoomp");

	Params::ATVPostProcessBP_C_Camera_Sequence_Start_StaticWhoomp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::WriteOutLoading()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "WriteOutLoading");

	Params::ATVPostProcessBP_C_WriteOutLoading_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.SequenceFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SequenceName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ATVPostProcessBP_C::SequenceFinished(const class FString& SequenceName)
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "SequenceFinished");

	Params::ATVPostProcessBP_C_SequenceFinished_Params Parms;

	Parms.SequenceName = SequenceName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_InitializePost()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_InitializePost");

	Params::ATVPostProcessBP_C_Camera_InitializePost_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DisableEffects");

	Params::ATVPostProcessBP_C_Camera_DisableEffects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATVPostProcessBP_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "ReceiveTick");

	Params::ATVPostProcessBP_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::FastForwardPostProcess()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "FastForwardPostProcess");

	Params::ATVPostProcessBP_C_FastForwardPostProcess_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::JitterTheScreen()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "JitterTheScreen");

	Params::ATVPostProcessBP_C_JitterTheScreen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "ReceiveBeginPlay");

	Params::ATVPostProcessBP_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        CallFunc_GetFrontEndFFSettings_ReturnValue                       ()
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimelineLength_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimelineLength_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimelineLength_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_SequenceName                                  (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, const struct FPostProcessSettings& CallFunc_GetFrontEndFFSettings_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_RandomFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_GetScalarParameterValue_ReturnValue_3, float CallFunc_GetScalarParameterValue_ReturnValue_4, float CallFunc_GetScalarParameterValue_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_GetScalarParameterValue_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_FClamp_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_GetScalarParameterValue_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_RandomFloatInRange_ReturnValue_5, const class FString& K2Node_CustomEvent_SequenceName, float CallFunc_RandomFloat_ReturnValue_2, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_GetScalarParameterValue_ReturnValue_9, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1)
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteUbergraph_TVPostProcessBP");

	Params::ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_Lerp_ReturnValue_6 = CallFunc_Lerp_ReturnValue_6;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFrontEndFFSettings_ReturnValue = CallFunc_GetFrontEndFFSettings_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_1 = CallFunc_GetScalarParameterValue_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_2 = CallFunc_GetScalarParameterValue_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetTimelineLength_ReturnValue = CallFunc_GetTimelineLength_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue_1 = CallFunc_GetTimelineLength_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_4 = CallFunc_RandomFloatInRange_ReturnValue_4;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_3 = CallFunc_GetScalarParameterValue_ReturnValue_3;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_4 = CallFunc_GetScalarParameterValue_ReturnValue_4;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_5 = CallFunc_GetScalarParameterValue_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_6 = CallFunc_GetScalarParameterValue_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_7 = CallFunc_GetScalarParameterValue_ReturnValue_7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTimelineLength_ReturnValue_2 = CallFunc_GetTimelineLength_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_8 = CallFunc_GetScalarParameterValue_ReturnValue_8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_5 = CallFunc_RandomFloatInRange_ReturnValue_5;
	Parms.K2Node_CustomEvent_SequenceName = K2Node_CustomEvent_SequenceName;
	Parms.CallFunc_RandomFloat_ReturnValue_2 = CallFunc_RandomFloat_ReturnValue_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue_9 = CallFunc_GetScalarParameterValue_ReturnValue_9;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
