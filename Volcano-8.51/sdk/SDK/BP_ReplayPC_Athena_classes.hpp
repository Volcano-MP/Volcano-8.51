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

// 0xA8 (0x2C78 - 0x2BD0)
// BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C
class ABP_ReplayPC_Athena_C : public AFortReplaySpectatorAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2BD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<float, class USoundMix*>                PlaybackRateMap;                                   // 0x2BD8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        CurrentPlayRate;                                   // 0x2C28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFast;                                           // 0x2C2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       SpeedupLoop;                                       // 0x2C30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SlowdownLoop;                                      // 0x2C38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHudVisible;                                     // 0x2C40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       ZoomOutLoop;                                       // 0x2C48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ZoomInLoop;                                        // 0x2C50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSkydivingAudioEnabled;                          // 0x2C58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsTargetParachuting;                              // 0x2C59(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsTargetSkydiving;                                // 0x2C5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       SkydivingAudioLoop;                                // 0x2C60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPaused;                                         // 0x2C68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CurrentSkydivingSound;                             // 0x2C70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ReplayPC_Athena_C");
		return Clss;
	}

	void IsGameplayCamera(bool* IsGameplayCamera, bool NewLocalVar_0, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetSkydivingAudioEnabled(bool Enabled, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USoundBase* CallFunc_GetSkydivingSound_ReturnValue);
	class USoundBase* GetSkydivingSound(bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* K2Node_Select_Default);
	void ReceiveBeginPlay();
	void OnNotifyNewPlaybackMultiplier(float NewMultiplier);
	void _Speedup_Loops(float Playback_Multiplier);
	void OnReplayHudVisibilityChanged(enum class EHudVisibilityState IsVisible);
	void OnZoomOutEnd();
	void OnZoomOutBegin();
	void OnZoomInEnd();
	void OnZoomInBegin();
	void On_Pause_State_Changed(bool bPaused);
	void Handle_Parachute_Audio_State();
	void Looping_Audio_Update();
	void ExecuteUbergraph_BP_ReplayPC_Athena(int32 EntryPoint, bool CallFunc_GetIsPlayingReplay_ReturnValue, enum class EHudVisibilityState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsLocalPlayerController_ReturnValue, float K2Node_Event_NewMultiplier, bool CallFunc_BooleanAND_ReturnValue, class USoundMix* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class USoundMix*>& CallFunc_Map_Values_Values, class USoundMix* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float K2Node_CustomEvent_Playback_Multiplier, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, class USoundBase* Temp_object_Variable, class UFortReplayContext* CallFunc_GetContext_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_2, bool Temp_bool_Variable_4, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_NotEqual_FloatFloat_ReturnValue, enum class EHudVisibilityState K2Node_CustomEvent_IsVisible, const struct FTransform& Temp_struct_Variable, class UBP_AmbientAudioController_C* CallFunc_AddComponent_ReturnValue, bool K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class USoundBase* CallFunc_GetSkydivingSound_ReturnValue, class USoundBase* CallFunc_GetSkydivingSound_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class AActor* CallFunc_GetViewTarget_ReturnValue, bool K2Node_CustomEvent_bPaused, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanAND_ReturnValue_2, class USoundBase* Temp_object_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class USoundBase* K2Node_Select_Default_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsGameplayCamera_IsGameplayCamera, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsGameplayCamera_IsGameplayCamera_1, bool CallFunc_IsGameplayCamera_IsGameplayCamera_2, bool CallFunc_IsGameplayCamera_IsGameplayCamera_3, bool CallFunc_NotEqual_BoolBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
