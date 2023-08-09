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


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  New_Music                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::Change_Music(class USoundBase* New_Music)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Change Music");

	Params::AFort_Entry_Music_Controller_BP_C_Change_Music_Params Parms;

	Parms.New_Music = New_Music;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::ListenToMusicPacks()
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ListenToMusicPacks");

	Params::AFort_Entry_Music_Controller_BP_C_ListenToMusicPacks_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition*NewMusicPack                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "OnMusicPackChanged");

	Params::AFort_Entry_Music_Controller_BP_C_OnMusicPackChanged_Params Parms;

	Parms.NewMusicPack = NewMusicPack;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Lobby_Music_Activate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  New_Music                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Lobby Music Override");

	Params::AFort_Entry_Music_Controller_BP_C_Lobby_Music_Override_Params Parms;

	Parms.Lobby_Music_Activate = Lobby_Music_Activate;
	Parms.New_Music = New_Music;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.MakeNextMusicPackStartFromBeginning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::MakeNextMusicPackStartFromBeginning()
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "MakeNextMusicPackStartFromBeginning");

	Params::AFort_Entry_Music_Controller_BP_C_MakeNextMusicPackStartFromBeginning_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.DelayedPlayMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition*MusicPackToPlayLater                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* MusicPackToPlayLater)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "DelayedPlayMusicPack");

	Params::AFort_Entry_Music_Controller_BP_C_DelayedPlayMusicPack_Params Parms;

	Parms.MusicPackToPlayLater = MusicPackToPlayLater;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ClearDelayedPlayMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFort_Entry_Music_Controller_BP_C::ClearDelayedPlayMusicPack()
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ClearDelayedPlayMusicPack");

	Params::AFort_Entry_Music_Controller_BP_C_ClearDelayedPlayMusicPack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_CustomEvent_New_Music_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMusicPackItemDefinition*K2Node_CustomEvent_NewMusicPack                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Lobby_Music_Activate                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  K2Node_CustomEvent_New_Music                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_DynamicCast_AsSound_Base                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMusicPackItemDefinition*CallFunc_GetEquippedMusicPack_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaMusicPackItemDefinition*K2Node_CustomEvent_MusicPackToPlayLater                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMusicContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFort_Entry_Music_Controller_BP_C::ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class USoundBase* K2Node_CustomEvent_New_Music_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlaying_ReturnValue, class UFortMusicContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_MusicPackToPlayLater, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ExecuteUbergraph_Fort_Entry_Music_Controller_BP");

	Params::AFort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_New_Music_1 = K2Node_CustomEvent_New_Music_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_NewMusicPack = K2Node_CustomEvent_NewMusicPack;
	Parms.K2Node_CustomEvent_Lobby_Music_Activate = K2Node_CustomEvent_Lobby_Music_Activate;
	Parms.K2Node_CustomEvent_New_Music = K2Node_CustomEvent_New_Music;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsSound_Base = K2Node_DynamicCast_AsSound_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetEquippedMusicPack_ReturnValue = CallFunc_GetEquippedMusicPack_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_MusicPackToPlayLater = K2Node_CustomEvent_MusicPackToPlayLater;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
