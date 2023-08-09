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


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetUIExtensions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       Return_Value                                                     (Parm, OutParm)
// struct FGameplayTagContainer       Final_UI_Extensions                                              (Edit, BlueprintVisible)
// struct FGameplayTagContainer       CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::GetUIExtensions(struct FGameplayTagContainer* Return_Value, const struct FGameplayTagContainer& Final_UI_Extensions, const struct FGameplayTagContainer& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "GetUIExtensions");

	Params::AMinigameSettingsMachine_C_GetUIExtensions_Params Parms;

	Parms.Final_UI_Extensions = Final_UI_Extensions;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.Game Mode Preset Upgrade Path
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionKey_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionValueNameFromValue_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionValueNameFromValue_ReturnValue_1               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionKey_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionValueNameFromValue_ReturnValue_2               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionValueNameFromValue_ReturnValue_3               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionKey_ReturnValue_2                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionKey_ReturnValue_3                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionValueNameFromValue_ReturnValue_4               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionValueNameFromValue_ReturnValue_5               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionKey_ReturnValue_4                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionKey_ReturnValue_5                              (ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString> K2Node_MakeMap_Map                                               (ConstParm, ZeroConstructor)
// struct FMinigameScoringPreset      CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_SetPropertyOverrides_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::Game_Mode_Preset_Upgrade_Path(TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetOptionKey_ReturnValue, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_1, const class FString& CallFunc_GetOptionKey_ReturnValue_1, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_2, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_3, const class FString& CallFunc_GetOptionKey_ReturnValue_2, const class FString& CallFunc_GetOptionKey_ReturnValue_3, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_4, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue_5, const class FString& CallFunc_GetOptionKey_ReturnValue_4, const class FString& CallFunc_GetOptionKey_ReturnValue_5, TMap<class FString, class FString> K2Node_MakeMap_Map, const struct FMinigameScoringPreset& CallFunc_Array_Get_Item, bool CallFunc_SetPropertyOverrides_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, class UClass* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_2, class UClass* CallFunc_Array_Get_Item_3, class UClass* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Find_ReturnValue_3, int32 CallFunc_Array_Find_ReturnValue_4, class UClass* CallFunc_Array_Get_Item_5, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_5, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_Array_IsValidIndex_ReturnValue_4, bool CallFunc_Array_IsValidIndex_ReturnValue_5)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "Game Mode Preset Upgrade Path");

	Params::AMinigameSettingsMachine_C_Game_Mode_Preset_Upgrade_Path_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetOptionKey_ReturnValue = CallFunc_GetOptionKey_ReturnValue;
	Parms.CallFunc_GetOptionValueNameFromValue_ReturnValue = CallFunc_GetOptionValueNameFromValue_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_GetOptionValueNameFromValue_ReturnValue_1 = CallFunc_GetOptionValueNameFromValue_ReturnValue_1;
	Parms.CallFunc_GetOptionKey_ReturnValue_1 = CallFunc_GetOptionKey_ReturnValue_1;
	Parms.CallFunc_GetOptionValueNameFromValue_ReturnValue_2 = CallFunc_GetOptionValueNameFromValue_ReturnValue_2;
	Parms.CallFunc_GetOptionValueNameFromValue_ReturnValue_3 = CallFunc_GetOptionValueNameFromValue_ReturnValue_3;
	Parms.CallFunc_GetOptionKey_ReturnValue_2 = CallFunc_GetOptionKey_ReturnValue_2;
	Parms.CallFunc_GetOptionKey_ReturnValue_3 = CallFunc_GetOptionKey_ReturnValue_3;
	Parms.CallFunc_GetOptionValueNameFromValue_ReturnValue_4 = CallFunc_GetOptionValueNameFromValue_ReturnValue_4;
	Parms.CallFunc_GetOptionValueNameFromValue_ReturnValue_5 = CallFunc_GetOptionValueNameFromValue_ReturnValue_5;
	Parms.CallFunc_GetOptionKey_ReturnValue_4 = CallFunc_GetOptionKey_ReturnValue_4;
	Parms.CallFunc_GetOptionKey_ReturnValue_5 = CallFunc_GetOptionKey_ReturnValue_5;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetPropertyOverrides_ReturnValue = CallFunc_SetPropertyOverrides_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue_2 = CallFunc_Array_Find_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Find_ReturnValue_3 = CallFunc_Array_Find_ReturnValue_3;
	Parms.CallFunc_Array_Find_ReturnValue_4 = CallFunc_Array_Find_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue_5 = CallFunc_Array_Find_ReturnValue_5;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_4 = CallFunc_Array_IsValidIndex_ReturnValue_4;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_5 = CallFunc_Array_IsValidIndex_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetScoreboardStatsArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>              ScoreboardStats                                                  (Parm, OutParm, ZeroConstructor)
// TArray<class UClass*>              TrackedScoreboardStats                                           (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::GetScoreboardStatsArray(TArray<class UClass*>* ScoreboardStats, const TArray<class UClass*>& TrackedScoreboardStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "GetScoreboardStatsArray");

	Params::AMinigameSettingsMachine_C_GetScoreboardStatsArray_Params Parms;

	Parms.TrackedScoreboardStats = TrackedScoreboardStats;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ScoreboardStats != nullptr)
		*ScoreboardStats = Parms.ScoreboardStats;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.FillTrackedStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)

void AMinigameSettingsMachine_C::FillTrackedStats(TArray<int32>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "FillTrackedStats");

	Params::AMinigameSettingsMachine_C_FillTrackedStats_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.LoadOrCreateVPL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SolarisPrototype_C*      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::LoadOrCreateVPL(class UBP_SolarisPrototype_C* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "LoadOrCreateVPL");

	Params::AMinigameSettingsMachine_C_LoadOrCreateVPL_Params Parms;

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.IsScriptedGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              GameModeIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsScriptedGame                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlaylistUserOptionBase*     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlaylistUserOptionIntEnum*  K2Node_DynamicCast_AsPlaylist_User_Option_Int_Enum               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::IsScriptedGame(int32 GameModeIndex, bool* bIsScriptedGame, class UPlaylistUserOptionBase* CallFunc_Array_Get_Item, class UPlaylistUserOptionIntEnum* K2Node_DynamicCast_AsPlaylist_User_Option_Int_Enum, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "IsScriptedGame");

	Params::AMinigameSettingsMachine_C_IsScriptedGame_Params Parms;

	Parms.GameModeIndex = GameModeIndex;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsPlaylist_User_Option_Int_Enum = K2Node_DynamicCast_AsPlaylist_User_Option_Int_Enum;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsScriptedGame != nullptr)
		*bIsScriptedGame = Parms.bIsScriptedGame;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ToggleScriptedGameRules
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsScriptedGame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USolarisPrototype*           Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarisPrototype*           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::ToggleScriptedGameRules(bool bIsScriptedGame, bool Temp_bool_Variable, class USolarisPrototype* Temp_object_Variable, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, class USolarisPrototype* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "ToggleScriptedGameRules");

	Params::AMinigameSettingsMachine_C_ToggleScriptedGameRules_Params Parms;

	Parms.bIsScriptedGame = bIsScriptedGame;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_DestroyObjects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortMinigameStatQuery>EndConditions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               bResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAdded                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMinigameStatQuery      K2Node_MakeStruct_FortMinigameStatQuery                          (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::TryAddEndCondition_DestroyObjects(TArray<struct FFortMinigameStatQuery>& EndConditions, bool* bResult, bool bAdded, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "TryAddEndCondition_DestroyObjects");

	Params::AMinigameSettingsMachine_C_TryAddEndCondition_DestroyObjects_Params Parms;

	Parms.EndConditions = EndConditions;
	Parms.bAdded = bAdded;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FortMinigameStatQuery = K2Node_MakeStruct_FortMinigameStatQuery;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTotalRounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateTotalRounds(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTotalRounds");

	Params::AMinigameSettingsMachine_C_UpdateTotalRounds_Params Parms;

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateMinigameMutators
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMutatorListComponent*   MutatorList                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMutatorListComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FString> CallFunc_GetPropertyOverrides_CurrentOptions                     (ZeroConstructor)
// bool                               CallFunc_GetPropertyOverrides_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::UpdateMinigameMutators(class UFortMutatorListComponent* MutatorList, class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMutatorListComponent* CallFunc_GetComponentByClass_ReturnValue, TMap<class FString, class FString> CallFunc_GetPropertyOverrides_CurrentOptions, bool CallFunc_GetPropertyOverrides_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateMinigameMutators");

	Params::AMinigameSettingsMachine_C_UpdateMinigameMutators_Params Parms;

	Parms.MutatorList = MutatorList;
	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPropertyOverrides_CurrentOptions = CallFunc_GetPropertyOverrides_CurrentOptions;
	Parms.CallFunc_GetPropertyOverrides_ReturnValue = CallFunc_GetPropertyOverrides_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateJoinInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               NewLocalVar_1                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateJoinInProgress(class AFortMinigame* NewLocalVar_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateJoinInProgress");

	Params::AMinigameSettingsMachine_C_UpdateJoinInProgress_Params Parms;

	Parms.NewLocalVar_1 = NewLocalVar_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_CollectItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortMinigameStatQuery>EndConditions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                               bResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAdded                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMinigameStatQuery      K2Node_MakeStruct_FortMinigameStatQuery                          (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::TryAddEndCondition_CollectItems(TArray<struct FFortMinigameStatQuery>& EndConditions, bool* bResult, bool bAdded, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "TryAddEndCondition_CollectItems");

	Params::AMinigameSettingsMachine_C_TryAddEndCondition_CollectItems_Params Parms;

	Parms.EndConditions = EndConditions;
	Parms.bAdded = bAdded;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FortMinigameStatQuery = K2Node_MakeStruct_FortMinigameStatQuery;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateAutoStart(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateAutoStart");

	Params::AMinigameSettingsMachine_C_UpdateAutoStart_Params Parms;

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortMinigameStatQuery>EndConditions                                                    (Edit, BlueprintVisible, ZeroConstructor)
// class AFortMinigame*               Minigame                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMinigameStatQuery      K2Node_MakeStruct_FortMinigameStatQuery                          (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMinigameStatQuery      K2Node_MakeStruct_FortMinigameStatQuery_1                        (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryAddEndCondition_DestroyObjects_bResult               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryAddEndCondition_CollectItems_bResult                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortMinigameStatQuery      K2Node_MakeStruct_FortMinigameStatQuery_2                        (NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateEndConditions(const TArray<struct FFortMinigameStatQuery>& EndConditions, class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_TryAddEndCondition_DestroyObjects_bResult, bool CallFunc_TryAddEndCondition_CollectItems_bResult, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FFortMinigameStatQuery& K2Node_MakeStruct_FortMinigameStatQuery_2, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_2, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateEndConditions");

	Params::AMinigameSettingsMachine_C_UpdateEndConditions_Params Parms;

	Parms.EndConditions = EndConditions;
	Parms.Minigame = Minigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_MakeStruct_FortMinigameStatQuery = K2Node_MakeStruct_FortMinigameStatQuery;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FortMinigameStatQuery_1 = K2Node_MakeStruct_FortMinigameStatQuery_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_TryAddEndCondition_DestroyObjects_bResult = CallFunc_TryAddEndCondition_DestroyObjects_bResult;
	Parms.CallFunc_TryAddEndCondition_CollectItems_bResult = CallFunc_TryAddEndCondition_CollectItems_bResult;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_FortMinigameStatQuery_2 = K2Node_MakeStruct_FortMinigameStatQuery_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Subtract_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::UpdateTeamToMoveToWhenOutOfSpawns(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_Subtract_ByteByte_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTeamToMoveToWhenOutOfSpawns");

	Params::AMinigameSettingsMachine_C_UpdateTeamToMoveToWhenOutOfSpawns_Params Parms;

	Parms.Minigame = Minigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Subtract_ByteByte_ReturnValue = CallFunc_Subtract_ByteByte_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_Add_ByteByte_ReturnValue = CallFunc_Add_ByteByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateAutoEndTeamThreshold(class AFortMinigame* Minigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateAutoEndTeamThreshold");

	Params::AMinigameSettingsMachine_C_UpdateAutoEndTeamThreshold_Params Parms;

	Parms.Minigame = Minigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdatePlayerLives(class AFortMinigame* NewLocalVar_0, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdatePlayerLives");

	Params::AMinigameSettingsMachine_C_UpdatePlayerLives_Params Parms;

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdatePostGameSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdatePostGameSpawnLocationSetting");

	Params::AMinigameSettingsMachine_C_UpdatePostGameSpawnLocationSetting_Params Parms;

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString
// (HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText AMinigameSettingsMachine_C::BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintGetFailedInteractionString");

	Params::AMinigameSettingsMachine_C_BlueprintGetFailedInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateTeamSetting(bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTeamSetting");

	Params::AMinigameSettingsMachine_C_UpdateTeamSetting_Params Parms;

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateSpawnLocationSetting(class AFortMinigame* CurrentMinigame, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateSpawnLocationSetting");

	Params::AMinigameSettingsMachine_C_UpdateSpawnLocationSetting_Params Parms;

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortMinigame*               Minigame                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMinigameVolumeComponent*LinkedVolumeComp                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 LinkedVolume                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMinigameVolumeComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_GetLinkedVolume_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::GetCurrentMinigame(class AFortMinigame** Minigame, class UFortMinigameVolumeComponent* LinkedVolumeComp, class AFortVolume* LinkedVolume, class AFortMinigame* CurrentMinigame, bool CallFunc_IsValid_ReturnValue, class UFortMinigameVolumeComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortVolume* CallFunc_GetLinkedVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "GetCurrentMinigame");

	Params::AMinigameSettingsMachine_C_GetCurrentMinigame_Params Parms;

	Parms.LinkedVolumeComp = LinkedVolumeComp;
	Parms.LinkedVolume = LinkedVolume;
	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLinkedVolume_ReturnValue = CallFunc_GetLinkedVolume_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Minigame != nullptr)
		*Minigame = Parms.Minigame;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateTimeLimit(class AFortMinigame* CurrentMinigame, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTimeLimit");

	Params::AMinigameSettingsMachine_C_UpdateTimeLimit_Params Parms;

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*               CurrentMinigame                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetUIExtensions_Return_Value                            ()
// TArray<class UClass*>              CallFunc_GetScoreboardStatsArray_ScoreboardStats                 (ZeroConstructor, ReferenceParm)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::UpdateGameMode(class AFortMinigame* CurrentMinigame, const struct FGameplayTagContainer& CallFunc_GetUIExtensions_Return_Value, TArray<class UClass*>& CallFunc_GetScoreboardStatsArray_ScoreboardStats, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateGameMode");

	Params::AMinigameSettingsMachine_C_UpdateGameMode_Params Parms;

	Parms.CurrentMinigame = CurrentMinigame;
	Parms.CallFunc_GetUIExtensions_Return_Value = CallFunc_GetUIExtensions_Return_Value;
	Parms.CallFunc_GetScoreboardStatsArray_ScoreboardStats = CallFunc_GetScoreboardStatsArray_ScoreboardStats;
	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bHasStarted                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMinigame*               CallFunc_GetCurrentMinigame_Minigame                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasStarted_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::HasMinigameStarted(bool* bHasStarted, class AFortMinigame* CallFunc_GetCurrentMinigame_Minigame, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasStarted_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "HasMinigameStarted");

	Params::AMinigameSettingsMachine_C_HasMinigameStarted_Params Parms;

	Parms.CallFunc_GetCurrentMinigame_Minigame = CallFunc_GetCurrentMinigame_Minigame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasStarted_ReturnValue = CallFunc_HasStarted_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasStarted != nullptr)
		*bHasStarted = Parms.bHasStarted;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     SpawnLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::GetPickupSpawnLocation(struct FVector* SpawnLocation, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "GetPickupSpawnLocation");

	Params::AMinigameSettingsMachine_C_GetPickupSpawnLocation_Params Parms;

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnLocation != nullptr)
		*SpawnLocation = Parms.SpawnLocation;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString
// (HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText AMinigameSettingsMachine_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintGetInteractionString");

	Params::AMinigameSettingsMachine_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract
// (HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CanInteract                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortVolume*                 CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AMinigameSettingsMachine_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, bool CanInteract, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintCanInteract");

	Params::AMinigameSettingsMachine_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.CanInteract = CanInteract;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume = CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume;
	Parms.CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue = CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "ReceiveBeginPlay");

	Params::AMinigameSettingsMachine_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::OnGameSettingsUpdated()
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "OnGameSettingsUpdated");

	Params::AMinigameSettingsMachine_C_OnGameSettingsUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::StartMinigameHelper()
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "StartMinigameHelper");

	Params::AMinigameSettingsMachine_C_StartMinigameHelper_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMinigameSettingsMachine_C::AbandonMinigameHelper()
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "AbandonMinigameHelper");

	Params::AMinigameSettingsMachine_C_AbandonMinigameHelper_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue_1             (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetOptionValueNameFromValue_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetOptionKey_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TMap<class FString, class FString> K2Node_MakeMap_Map                                               (ConstParm, ZeroConstructor)
// bool                               CallFunc_SetPropertyOverrides_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::ExecuteUbergraph_MinigameSettingsMachine(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue_1, class AFortPlayerController* CallFunc_Array_Get_Item, class AFortPlayerController* CallFunc_Array_Get_Item_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue_1, const class FString& CallFunc_GetOptionValueNameFromValue_ReturnValue, const class FString& CallFunc_GetOptionKey_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, TMap<class FString, class FString> K2Node_MakeMap_Map, bool CallFunc_SetPropertyOverrides_ReturnValue)
{
	static auto Func = Class->GetFunction("MinigameSettingsMachine_C", "ExecuteUbergraph_MinigameSettingsMachine");

	Params::AMinigameSettingsMachine_C_ExecuteUbergraph_MinigameSettingsMachine_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue_1 = CallFunc_GetLocalFortPlayerControllers_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena_1 = K2Node_DynamicCast_AsFort_Player_Controller_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOptionValueNameFromValue_ReturnValue = CallFunc_GetOptionValueNameFromValue_ReturnValue;
	Parms.CallFunc_GetOptionKey_ReturnValue = CallFunc_GetOptionKey_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_SetPropertyOverrides_ReturnValue = CallFunc_SetPropertyOverrides_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
