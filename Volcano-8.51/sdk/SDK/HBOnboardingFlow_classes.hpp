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

// 0xA0 (0x2E0 - 0x240)
// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              OnboardingQuest;                                   // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              PlayPeriodicEventMovieQuest;                       // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayedPeriodicEventMovie;                         // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasRecheckedNeedToPlayPeriodicEventMovie;         // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_369C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CompleteZoneObjective;                             // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   NameHomebaseObjective;                             // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMargin                               NotificationPadding;                               // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                   PlaySatelliteCineObjective;                        // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortAccountItemDefinition*            ShowNewsToken;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginRetryCount;                        // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClientQuestLoginNumRetries;                        // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PlayPeriodicEventCineObjective;                    // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   StormShieldDefenseObjective;                       // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                PeriodicEventMovieAnnouncementClass;               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HBOnboardingFlow_C");
		return Clss;
	}

	bool HasCompletedOnboardingObjective(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue);
	void GetOnboardingQuestItem(class UFortQuestItem** Result, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue);
	void CanAccessManagementFeatures(bool* Can_Manage, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState_1, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EFortFrontEndFeatureState CallFunc_GetFeatureState_OutFeatureState_2, enum class EFortFrontEndFeatureStateReason CallFunc_GetFeatureState_OutReason_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	bool NeedsToPlayEventMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsQuestInProgress_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Handle_Client_Quest_Login_Failed(int32 NewLocalVar_0, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ShowBannerSelect(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBannerSelectionWidget_C* K2Node_DynamicCast_AsBanner_Selection_Widget, bool K2Node_DynamicCast_bSuccess);
	void HandleMcpFailure();
	void OnCanceled_C2C889344301B8DBF8F046A2A175D133();
	void OnAllClientsReady_C2C889344301B8DBF8F046A2A175D133();
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	void OnFailure_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnIgnored_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnSuccess_0A5ABC9C483947108FD9FB9980E7C62F();
	void OnFailure_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnIgnored_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnSuccess_F17CF9054AFDDDAF314AC4911BC9818F();
	void OnStateEntered_CC1C02F844ADF1F9F5546C8115CF00F0();
	void OnCanceled_856A325D44ECC73B857CE5B35313D7CD();
	void OnAllClientsReady_856A325D44ECC73B857CE5B35313D7CD();
	void OnStateEntered_6973C4804831A19E4BDA22AFFEE0F251();
	void OnStateEntered_FEE56B7E40F9EBA0E7D44DBF3391C2D6();
	void OnFailure_74930F274B5470B17CF720953FE7E260();
	void OnSuccess_74930F274B5470B17CF720953FE7E260();
	void OnStateEntered_D3C1532F46B8ACB52198EBB597FE9EF0();
	void OnStateEntered_7FBC276641DD576B7417ED97A4734318();
	void OnStateEntered_B1212BA945BD8297BCCDC69BA3015CC2();
	void DialogResult_1D81E4B94CE33A3425130BABD5A7283B(enum class EFortDialogResult Result, class FName ResultName);
	void OnStateEntered_7E48C3B34B1AC823ECCC5BB9D4D63515();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void OnStateEntered_BB8A89D3479CA430A9243EB07FF8B51D();
	void OnFailure_C786FAEA4B655E5031CC7A8B4C8B9DB5();
	void OnSuccess_C786FAEA4B655E5031CC7A8B4C8B9DB5();
	void OnFailed_4455206B45CBF2A95086D9863C62E1C0();
	void OnCompleted_4455206B45CBF2A95086D9863C62E1C0();
	void StartPlaySatelliteCine();
	void StartNameHomebase();
	void HandleClientEvent_HomebasePersonalized(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void StartOnboardingZone();
	void StartFlow();
	void HandleCheckOnboardingZoneComplete();
	void HandleSwitchToHomeBase();
	void HandlePlaySatelliteCine();
	void HandleNameHomebase();
	void Handle_Client_Quest_Login_Failed_Retry();
	void Handle_Client_Quest_Login_Retries_Exhausted();
	void HandleClientEvent_SubGameSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnRejoinGameAbandoned(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleCompanionAppOnboardingAbort();
	void HandleNoEntitlement();
	void HandleForcedLogout(class FText Reason_Title, class FText Reason);
	void HandlePlayEventCine();
	void HandleMobileManagementRestricted();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_SubGameSelection(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_RejoinAvailable(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleSubGameSelection();
	void ReenterFlow();
	void HandleRetrievePurchaseDataIssue();
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, bool CallFunc_IsMobileApp_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_5, bool CallFunc_IsMobileApp_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_6, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_7, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_9, bool CallFunc_IsMobileApp_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue_3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_11, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_12, enum class ESubGame CallFunc_GetSubGame_ReturnValue, enum class ESubGameAccessReason CallFunc_GetAccessReason_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_13, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, bool CallFunc_AutoSelectSubGame_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, enum class ESubGame CallFunc_GetSubGame_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_14, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_Not_PreBool_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue_6, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_8, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue_9, class UObject* K2Node_HandleClientEvent_EventSource_5, class UObject* K2Node_HandleClientEvent_EventFocus_5, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue_1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager_1, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue_1, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, bool Temp_bool_IsClosed_Variable, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue_1, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_16, class UFortMcpContext* CallFunc_GetContext_ReturnValue_17, const struct FFortHomeBaseInfo& CallFunc_GetHomeBaseInfo_Result, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_TextIsEmpty_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource_4, class UObject* K2Node_HandleClientEvent_EventFocus_4, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent_4, bool CallFunc_BooleanOR_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_12, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_2, class UObject* K2Node_HandleClientEvent_EventSource_3, class UObject* K2Node_HandleClientEvent_EventFocus_3, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FText K2Node_CustomEvent_Reason_Title, class FText K2Node_CustomEvent_Reason, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, bool CallFunc_NeedsToPlayEventMovie_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain, bool CallFunc_RecheckNeedToPlayEventMovie_WaitingToCheckAgain_1, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_CanAccessManagementFeatures_Can_Manage, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, class UObject* K2Node_HandleClientEvent_EventSource_2, class UObject* K2Node_HandleClientEvent_EventFocus_2, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortAsyncAction_LoadCurrentSubgameProfiles* CallFunc_LoadCurrentSubgameProfiles_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, bool CallFunc_IsValid_ReturnValue_14, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_18, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState_1, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result, bool CallFunc_IsValid_ReturnValue_15, class UFortQuestItem* CallFunc_GetOnboardingQuestItem_Result_1, bool CallFunc_HasCompletedQuest_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager_2, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, class UFortQuestManager* CallFunc_GetCampaignQuestManager_QuestManager_3, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue_3, class UObject* K2Node_HandleClientEvent_EventSource_1, class UObject* K2Node_HandleClientEvent_EventFocus_1, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue_1, class AFortClientAnnouncement* CallFunc_FinishSpawningActor_ReturnValue_2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, bool CallFunc_HasCompletedOnboardingObjective_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class UFortAsyncAction_CheckForStwMfaReward* CallFunc_CheckForStwMfaReward_ReturnValue, bool CallFunc_IsValid_ReturnValue_19, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
