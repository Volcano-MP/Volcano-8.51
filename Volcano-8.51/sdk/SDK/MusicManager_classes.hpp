#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x3A8 - 0x2A0)
// BlueprintGeneratedClass MusicManager.MusicManager_C
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Boss_Music_B;                                      // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Boss_Weak_Point_Stinger;                           // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Boss_DBNO_Music;                                   // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Boss_Music_A;                                      // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Gameplay_Music_Fader_Volume_9439D7624B6E99ADF50793B4628A7615; // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Gameplay_Music_Fader__Direction_9439D7624B6E99ADF50793B4628A7615; // 0x2CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Gameplay_Music_Fader;                              // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicFrontend;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            MusicLobby;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StingerReturningToAmbientMusic;                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug;                                             // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameMode_Current;                                  // 0x2F4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Lobby;                                    // 0x2FC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_Frontend;                                 // 0x304(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  GameMode_InGame;                                   // 0x30C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayStingerWhenReturningToAmbientMusic;            // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingAmbientMusic;                               // 0x315(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingThreatMusic;                                // 0x316(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingNearbyEnemiesMusic;                         // 0x317(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskLowMusic;                               // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingHuskHighMusic;                              // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingLargeEnemyMusic;                            // 0x31A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D40[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastTimeMusicWasStartedOrContinued;                // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentMusicIntensityLevel;                        // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MusicLogicUpdateTickTime;                          // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDurationBeforeMusicCanIncreaseIntensity;        // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityIncreaseFadeTime;                         // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityIncreaseFadeStyle;                        // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDurationBeforeMusicCanDecreaseInIntensity;      // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityDecreaseFadeTime;                         // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMusicFadeStyles                  IntensityDecreaseFadeStyle;                        // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MusicShouldStop;                                   // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingStingerMusic;                               // 0x342(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D43[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntensityVeryHigh;                                 // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityHigh;                                     // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityMedium;                                   // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityLow;                                      // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMusicAsset*                       DeathMusic;                                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Countdown_Music_;                                  // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Coundown_Atlas_Music;                              // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Mission_Music;                                     // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Boss_Fight;                                     // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       Weak_Point_Music;                                  // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Current_Boss_Music;                                // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCombatThresholds             Combat_Threshold;                                  // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Player_Downed_Timer_Handle;                        // 0x398(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortMusicAsset*                       Current_TOD;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MusicManager_C");
		return Clss;
	}

	void Primary_Music_Threshold_(enum class EFortMusicCombatIntensity Intensity, bool bPlayStinger, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue);
	void ResetMusicBools();
	void UserConstructionScript(class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End_1, bool K2Node_DynamicCast_bSuccess_1);
	void Gameplay_Music_Fader__FinishedFunc();
	void Gameplay_Music_Fader__UpdateFunc();
	void Stop_Boss_Music();
	void Play_Boss_Music(class USoundBase* Sound);
	void Start_Boss_DBNO_Music(class USoundBase* Sound);
	void Stop_Boss_DBNO_Music();
	void Player_Fighting_Boss_DBNO();
	void Start_Weak_Point_Music(class USoundBase* Sound);
	void Stop_Weakpoint_Music();
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void OnUpdateMusic();
	void PlayAmbientMusic();
	void ReceiveBeginPlay();
	void On_Music_Tick();
	void PlayStinger(class UFortMusicAsset* NewMusicAsset);
	void Music_Fade_In(float Time);
	void Music_Fade_Out(float Time);
	void On_Stinger_Completed(class UFortMusicVoice* Voice);
	void Gather_Combat_Graph_Tresholds();
	void OnMusicBankChanged(class UFortMusicManagerBank* NewBank);
	void OnPlayerDowned(struct FFortPlayerDeathReport& DeathReport);
	void Play_Countdown_Music(float Counter);
	void Play_Mission_Music(class USoundBase* Sound);
	void Stop_Mission_Music(class UAudioComponent* Mission_Music);
	void OnThresholdChange(enum class EFortCombatThresholds OldThreshold, enum class EFortCombatThresholds NewThreshold);
	void OnPlayerSpawned();
	void Spawn_from_being_down();
	void ExecuteUbergraph_MusicManager(int32 EntryPoint, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_2, float Temp_float_Variable, bool Temp_bool_IsClosed_Variable, class USoundBase* K2Node_CustomEvent_Sound_3, class USoundBase* K2Node_CustomEvent_Sound_2, bool Temp_bool_Has_Been_Initd_Variable_1, float Temp_float_Variable_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_4, class USoundBase* K2Node_CustomEvent_Sound_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_5, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_3, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue, bool Temp_bool_IsClosed_Variable_1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool Temp_bool_Variable, float Temp_float_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float Temp_float_Variable_3, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue, bool Temp_bool_Variable_4, bool CallFunc_EqualEqual_NameName_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float Temp_float_Variable_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float Temp_float_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_3, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_2, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_3, class UFortMusicAsset* K2Node_Event_NewMusicAsset, class UFortMusicVoice* CallFunc_PlayMusicVoice_ReturnValue, float K2Node_CustomEvent_Time_1, float K2Node_CustomEvent_Time, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UFortMusicVoice* K2Node_CustomEvent_Voice, bool Temp_bool_Variable_5, float Temp_float_Variable_6, bool Temp_bool_IsClosed_Variable_2, float Temp_float_Variable_7, float CallFunc_GetGameTimeInSeconds_ReturnValue_6, class UFortMusicManagerBank* K2Node_Event_NewBank, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_1, const struct FFortPlayerDeathReport& K2Node_Event_DeathReport, bool Temp_bool_Has_Been_Initd_Variable_3, float K2Node_CustomEvent_Counter, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_4, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_5, class USoundBase* K2Node_CustomEvent_Sound, class UAudioComponent* K2Node_CustomEvent_Mission_Music, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, bool Temp_bool_Variable_6, bool CallFunc_EqualEqual_NameName_ReturnValue_5, enum class EFortCombatThresholds K2Node_Event_OldThreshold, enum class EFortCombatThresholds K2Node_Event_NewThreshold, bool Temp_bool_IsClosed_Variable_3, float CallFunc_GetGameTimeInSeconds_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_7, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_MakeLiteralInt_ReturnValue_1, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue_1, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class UFortMusicManagerBank* CallFunc_GetMusicBank_ReturnValue_6, class UFortMusicAsset* CallFunc_GetAssetFromDayPhase_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, float CallFunc_GetEventHeatPercent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_4, float CallFunc_GetEventHeatPercent_ReturnValue_1, float CallFunc_GetEventHeatPercent_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_5, bool CallFunc_Greater_FloatFloat_ReturnValue_6, float CallFunc_GetEventHeatPercent_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_7, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, float K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_FInterpTo_ReturnValue, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue_2, float CallFunc_GetEventHeatPercent_ReturnValue_4, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_8, float CallFunc_GetEventHeatPercent_ReturnValue_5, float CallFunc_GetEventHeatPercent_ReturnValue_6, bool CallFunc_Greater_FloatFloat_ReturnValue_9, float CallFunc_GetEventHeatPercent_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_6, float CallFunc_GetEventHeatPercent_ReturnValue_8, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_3, float K2Node_Select_Default_1, bool CallFunc_Greater_IntInt_ReturnValue_3, float CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, class UFortMusicAsset* CallFunc_GetAssetFromCombatIntensity_ReturnValue_3, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_5, class UFortMusicVoice* CallFunc_ChangePrimaryMusic_ReturnValue_6, float CallFunc_GetEventHeatPercent_ReturnValue_9, float CallFunc_GetEventHeatPercent_ReturnValue_10, float CallFunc_GetEventHeatPercent_ReturnValue_11, float CallFunc_GetEventHeatPercent_ReturnValue_12, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetEventHeatPercent_ReturnValue_13, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_3, float K2Node_Select_Default_2, float K2Node_Select_Default_3, float CallFunc_FInterpTo_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
