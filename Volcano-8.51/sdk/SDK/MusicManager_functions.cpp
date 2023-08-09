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


// Function MusicManager.MusicManager_C.Primary Music Threshold 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortMusicCombatIntensityIntensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPlayStinger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Primary_Music_Threshold_(enum class EFortMusicCombatIntensity Intensity, bool bPlayStinger, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Primary Music Threshold ");

	Params::AMusicManager_C_Primary_Music_Threshold__Params Parms;

	Parms.Intensity = Intensity;
	Parms.bPlayStinger = bPlayStinger;
	Parms.CallFunc_GetMusicBank_ReturnValue = CallFunc_GetMusicBank_ReturnValue;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue = CallFunc_GetAssetFromCombatIntensity_ReturnValue;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue = CallFunc_ChangePrimaryMusic_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::ResetMusicBools()
{
	static auto Func = Class->GetFunction("MusicManager_C", "ResetMusicBools");

	Params::AMusicManager_C_ResetMusicBools_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerFrontEnd*K2Node_DynamicCast_AsFort_Player_Controller_Front_End_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("MusicManager_C", "UserConstructionScript");

	Params::AMusicManager_C_UserConstructionScript_Params Parms;

	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End = K2Node_DynamicCast_AsFort_Player_Controller_Front_End;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Front_End_1 = K2Node_DynamicCast_AsFort_Player_Controller_Front_End_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AMusicManager_C::Gameplay_Music_Fader__FinishedFunc()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__FinishedFunc");

	Params::AMusicManager_C_Gameplay_Music_Fader__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AMusicManager_C::Gameplay_Music_Fader__UpdateFunc()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__UpdateFunc");

	Params::AMusicManager_C_Gameplay_Music_Fader__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Stop Boss Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Stop_Boss_Music()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Stop Boss Music");

	Params::AMusicManager_C_Stop_Boss_Music_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Play Boss Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Boss_Music(class USoundBase* Sound)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Play Boss Music");

	Params::AMusicManager_C_Play_Boss_Music_Params Parms;

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Start Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Start_Boss_DBNO_Music(class USoundBase* Sound)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Start Boss DBNO Music");

	Params::AMusicManager_C_Start_Boss_DBNO_Music_Params Parms;

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Stop Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Stop_Boss_DBNO_Music()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Stop Boss DBNO Music");

	Params::AMusicManager_C_Stop_Boss_DBNO_Music_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Player Fighting Boss DBNO
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Player_Fighting_Boss_DBNO()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Player Fighting Boss DBNO");

	Params::AMusicManager_C_Player_Fighting_Boss_DBNO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Start Weak Point Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Start_Weak_Point_Music(class USoundBase* Sound)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Start Weak Point Music");

	Params::AMusicManager_C_Start_Weak_Point_Music_Params Parms;

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Stop Weakpoint Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Stop_Weakpoint_Music()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Stop Weakpoint Music");

	Params::AMusicManager_C_Stop_Weakpoint_Music_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnDayPhaseChanged");

	Params::AMusicManager_C_OnDayPhaseChanged_Params Parms;

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::OnUpdateMusic()
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnUpdateMusic");

	Params::AMusicManager_C_OnUpdateMusic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::PlayAmbientMusic()
{
	static auto Func = Class->GetFunction("MusicManager_C", "PlayAmbientMusic");

	Params::AMusicManager_C_PlayAmbientMusic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMusicManager_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("MusicManager_C", "ReceiveBeginPlay");

	Params::AMusicManager_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.On Music Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::On_Music_Tick()
{
	static auto Func = Class->GetFunction("MusicManager_C", "On Music Tick");

	Params::AMusicManager_C_On_Music_Tick_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.PlayStinger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicAsset*             NewMusicAsset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::PlayStinger(class UFortMusicAsset* NewMusicAsset)
{
	static auto Func = Class->GetFunction("MusicManager_C", "PlayStinger");

	Params::AMusicManager_C_PlayStinger_Params Parms;

	Parms.NewMusicAsset = NewMusicAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Music Fade In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_In(float Time)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Music Fade In");

	Params::AMusicManager_C_Music_Fade_In_Params Parms;

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Music Fade Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_Out(float Time)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Music Fade Out");

	Params::AMusicManager_C_Music_Fade_Out_Params Parms;

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.On Stinger Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicVoice*             Voice                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::On_Stinger_Completed(class UFortMusicVoice* Voice)
{
	static auto Func = Class->GetFunction("MusicManager_C", "On Stinger Completed");

	Params::AMusicManager_C_On_Stinger_Completed_Params Parms;

	Parms.Voice = Voice;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Gather Combat Graph Tresholds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Gather_Combat_Graph_Tresholds()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Gather Combat Graph Tresholds");

	Params::AMusicManager_C_Gather_Combat_Graph_Tresholds_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnMusicBankChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMusicManagerBank*       NewBank                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::OnMusicBankChanged(class UFortMusicManagerBank* NewBank)
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnMusicBankChanged");

	Params::AMusicManager_C_OnMusicBankChanged_Params Parms;

	Parms.NewBank = NewBank;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnPlayerDowned
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport      DeathReport                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMusicManager_C::OnPlayerDowned(struct FFortPlayerDeathReport& DeathReport)
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnPlayerDowned");

	Params::AMusicManager_C_OnPlayerDowned_Params Parms;

	Parms.DeathReport = DeathReport;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Play Countdown Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Counter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Countdown_Music(float Counter)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Play Countdown Music");

	Params::AMusicManager_C_Play_Countdown_Music_Params Parms;

	Parms.Counter = Counter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Play Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Mission_Music(class USoundBase* Sound)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Play Mission Music");

	Params::AMusicManager_C_Play_Mission_Music_Params Parms;

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Stop Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             Mission_Music                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Stop_Mission_Music(class UAudioComponent* Mission_Music)
{
	static auto Func = Class->GetFunction("MusicManager_C", "Stop Mission Music");

	Params::AMusicManager_C_Stop_Mission_Music_Params Parms;

	Parms.Mission_Music = Mission_Music;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnThresholdChange
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortCombatThresholds   OldThreshold                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCombatThresholds   NewThreshold                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::OnThresholdChange(enum class EFortCombatThresholds OldThreshold, enum class EFortCombatThresholds NewThreshold)
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnThresholdChange");

	Params::AMusicManager_C_OnThresholdChange_Params Parms;

	Parms.OldThreshold = OldThreshold;
	Parms.NewThreshold = NewThreshold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.OnPlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:

void AMusicManager_C::OnPlayerSpawned()
{
	static auto Func = Class->GetFunction("MusicManager_C", "OnPlayerSpawned");

	Params::AMusicManager_C_OnPlayerSpawned_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.Spawn from being down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMusicManager_C::Spawn_from_being_down()
{
	static auto Func = Class->GetFunction("MusicManager_C", "Spawn from being down");

	Params::AMusicManager_C_Spawn_from_being_down_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue_1                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue_2                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_CustomEvent_Sound_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue_3                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromDayPhase_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDayPhase           K2Node_Event_CurrentDayPhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_PreviousDayPhase                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAtCreation                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue_4                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicAsset*             CallFunc_GetAssetFromDayPhase_ReturnValue_1                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             K2Node_Event_NewMusicAsset                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_PlayMusicVoice_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             K2Node_CustomEvent_Voice                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicManagerBank*       K2Node_Event_NewBank                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPlayerDeathReport      K2Node_Event_DeathReport                                         (ConstParm)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Counter                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue_5                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_CustomEvent_Mission_Music                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortCombatThresholds   K2Node_Event_OldThreshold                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCombatThresholds   K2Node_Event_NewThreshold                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue_1               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicManagerBank*       CallFunc_GetMusicBank_ReturnValue_6                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromDayPhase_ReturnValue_2                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue_2               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicAsset*             CallFunc_GetAssetFromCombatIntensity_ReturnValue_3               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicVoice*             CallFunc_ChangePrimaryMusic_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEventHeatPercent_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int32 EntryPoint, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_2, float Temp_float_Variable, bool Temp_bool_IsClosed_Variable, class USoundBase* K2Node_CustomEvent_Sound_3, class USoundBase* K2Node_CustomEvent_Sound_2, bool Temp_bool_Has_Been_Initd_Variable_1, float Temp_float_Variable_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_4, class USoundBase* K2Node_CustomEvent_Sound_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_5, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_3, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool Temp_bool_Variable, float Temp_float_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float Temp_float_Variable_3, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool Temp_bool_Variable_4, bool CallFunc_EqualEqual_NameName_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float Temp_float_Variable_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float Temp_float_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_3, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_2, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_3, class UFortMusicAsset* K2Node_Event_NewMusicAsset, class UFortMusicVoice* CallFunc_PlayMusicVoice_ReturnValue, float K2Node_CustomEvent_Time_1, float K2Node_CustomEvent_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UFortMusicVoice* K2Node_CustomEvent_Voice, bool Temp_bool_Variable_5, float Temp_float_Variable_6, bool Temp_bool_IsClosed_Variable_2, float Temp_float_Variable_7, float CallFunc_GetGameTimeInSeconds_ReturnValue_6, class UFortMusicManagerBank* K2Node_Event_NewBank, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_1, const struct FFortPlayerDeathReport& K2Node_Event_DeathReport, bool Temp_bool_Has_Been_Initd_Variable_3, float K2Node_CustomEvent_Counter, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_4, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_5, class USoundBase* K2Node_CustomEvent_Sound, class UAudioComponent* K2Node_CustomEvent_Mission_Music, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, bool Temp_bool_Variable_6, bool CallFunc_EqualEqual_NameName_ReturnValue_5, enum class EFortCombatThresholds K2Node_Event_OldThreshold, enum class EFortCombatThresholds K2Node_Event_NewThreshold, bool Temp_bool_IsClosed_Variable_3, float CallFunc_GetGameTimeInSeconds_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_7, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_MakeLiteralInt_ReturnValue_1, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue_1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_6, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, float CallFunc_GetEventHeatPercent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_4, float CallFunc_GetEventHeatPercent_ReturnValue_1, float CallFunc_GetEventHeatPercent_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_5, bool CallFunc_Greater_FloatFloat_ReturnValue_6, float CallFunc_GetEventHeatPercent_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_7, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, float K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_FInterpTo_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue_2, float CallFunc_GetEventHeatPercent_ReturnValue_4, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_8, float CallFunc_GetEventHeatPercent_ReturnValue_5, float CallFunc_GetEventHeatPercent_ReturnValue_6, bool CallFunc_Greater_FloatFloat_ReturnValue_9, float CallFunc_GetEventHeatPercent_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_6, float CallFunc_GetEventHeatPercent_ReturnValue_8, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_3, float K2Node_Select_Default_1, bool CallFunc_Greater_IntInt_ReturnValue_3, float CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue_3, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_5, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_6, float CallFunc_GetEventHeatPercent_ReturnValue_9, float CallFunc_GetEventHeatPercent_ReturnValue_10, float CallFunc_GetEventHeatPercent_ReturnValue_11, float CallFunc_GetEventHeatPercent_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetEventHeatPercent_ReturnValue_13, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_FInterpTo_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue_3)
{
	static auto Func = Class->GetFunction("MusicManager_C", "ExecuteUbergraph_MusicManager");

	Params::AMusicManager_C_ExecuteUbergraph_MusicManager_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue = CallFunc_GetMusicBank_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_2 = CallFunc_GetGameTimeInSeconds_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_3 = CallFunc_GetGameTimeInSeconds_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue_1 = CallFunc_GetMusicBank_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue_2 = CallFunc_GetMusicBank_ReturnValue_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_Sound_3 = K2Node_CustomEvent_Sound_3;
	Parms.K2Node_CustomEvent_Sound_2 = K2Node_CustomEvent_Sound_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_4 = CallFunc_GetGameTimeInSeconds_ReturnValue_4;
	Parms.K2Node_CustomEvent_Sound_1 = K2Node_CustomEvent_Sound_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_5 = CallFunc_GetGameTimeInSeconds_ReturnValue_5;
	Parms.CallFunc_GetMusicBank_ReturnValue_3 = CallFunc_GetMusicBank_ReturnValue_3;
	Parms.CallFunc_GetAssetFromDayPhase_ReturnValue = CallFunc_GetAssetFromDayPhase_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue = CallFunc_ChangePrimaryMusic_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_CurrentDayPhase = K2Node_Event_CurrentDayPhase;
	Parms.K2Node_Event_PreviousDayPhase = K2Node_Event_PreviousDayPhase;
	Parms.K2Node_Event_bAtCreation = K2Node_Event_bAtCreation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_3 = CallFunc_NotEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetMusicBank_ReturnValue_4 = CallFunc_GetMusicBank_ReturnValue_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_GetAssetFromDayPhase_ReturnValue_1 = CallFunc_GetAssetFromDayPhase_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.K2Node_Event_NewMusicAsset = K2Node_Event_NewMusicAsset;
	Parms.CallFunc_PlayMusicVoice_ReturnValue = CallFunc_PlayMusicVoice_ReturnValue;
	Parms.K2Node_CustomEvent_Time_1 = K2Node_CustomEvent_Time_1;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_Voice = K2Node_CustomEvent_Voice;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_6 = CallFunc_GetGameTimeInSeconds_ReturnValue_6;
	Parms.K2Node_Event_NewBank = K2Node_Event_NewBank;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_3 = CallFunc_EqualEqual_NameName_ReturnValue_3;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue_1 = CallFunc_ChangePrimaryMusic_ReturnValue_1;
	Parms.K2Node_Event_DeathReport = K2Node_Event_DeathReport;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_CustomEvent_Counter = K2Node_CustomEvent_Counter;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_4 = CallFunc_EqualEqual_NameName_ReturnValue_4;
	Parms.CallFunc_GetMusicBank_ReturnValue_5 = CallFunc_GetMusicBank_ReturnValue_5;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.K2Node_CustomEvent_Mission_Music = K2Node_CustomEvent_Mission_Music;
	Parms.CallFunc_SpawnSound2D_ReturnValue_2 = CallFunc_SpawnSound2D_ReturnValue_2;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_5 = CallFunc_EqualEqual_NameName_ReturnValue_5;
	Parms.K2Node_Event_OldThreshold = K2Node_Event_OldThreshold;
	Parms.K2Node_Event_NewThreshold = K2Node_Event_NewThreshold;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_7 = CallFunc_GetGameTimeInSeconds_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_6 = CallFunc_EqualEqual_NameName_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_7 = CallFunc_EqualEqual_NameName_ReturnValue_7;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue = CallFunc_GetAssetFromCombatIntensity_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue_2 = CallFunc_ChangePrimaryMusic_ReturnValue_2;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue_1 = CallFunc_GetAssetFromCombatIntensity_ReturnValue_1;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue_3 = CallFunc_ChangePrimaryMusic_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_GetMusicBank_ReturnValue_6 = CallFunc_GetMusicBank_ReturnValue_6;
	Parms.CallFunc_GetAssetFromDayPhase_ReturnValue_2 = CallFunc_GetAssetFromDayPhase_ReturnValue_2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue = CallFunc_GetEventHeatPercent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_1 = CallFunc_GetEventHeatPercent_ReturnValue_1;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_2 = CallFunc_GetEventHeatPercent_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_5 = CallFunc_Greater_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_6 = CallFunc_Greater_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_3 = CallFunc_GetEventHeatPercent_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_7 = CallFunc_Greater_FloatFloat_ReturnValue_7;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_2 = CallFunc_MakeLiteralInt_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue_2 = CallFunc_GetAssetFromCombatIntensity_ReturnValue_2;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_4 = CallFunc_GetEventHeatPercent_ReturnValue_4;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue_4 = CallFunc_ChangePrimaryMusic_ReturnValue_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_8 = CallFunc_Greater_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_5 = CallFunc_GetEventHeatPercent_ReturnValue_5;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_6 = CallFunc_GetEventHeatPercent_ReturnValue_6;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_9 = CallFunc_Greater_FloatFloat_ReturnValue_9;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_7 = CallFunc_GetEventHeatPercent_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_8 = CallFunc_GetEventHeatPercent_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_3 = CallFunc_MakeLiteralInt_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_GetAssetFromCombatIntensity_ReturnValue_3 = CallFunc_GetAssetFromCombatIntensity_ReturnValue_3;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue_5 = CallFunc_ChangePrimaryMusic_ReturnValue_5;
	Parms.CallFunc_ChangePrimaryMusic_ReturnValue_6 = CallFunc_ChangePrimaryMusic_ReturnValue_6;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_9 = CallFunc_GetEventHeatPercent_ReturnValue_9;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_10 = CallFunc_GetEventHeatPercent_ReturnValue_10;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_11 = CallFunc_GetEventHeatPercent_ReturnValue_11;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_12 = CallFunc_GetEventHeatPercent_ReturnValue_12;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetEventHeatPercent_ReturnValue_13 = CallFunc_GetEventHeatPercent_ReturnValue_13;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
