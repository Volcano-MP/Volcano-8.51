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


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_Supported
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_Supported()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_Supported");

	Params::ABP_ReadyUp_Interact_C_OnRep_Supported_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_ActivateVoteInProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_ActivateVoteInProgress()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_ActivateVoteInProgress");

	Params::ABP_ReadyUp_Interact_C_OnRep_ActivateVoteInProgress_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_IsFightTheStorm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_IsFightTheStorm()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_IsFightTheStorm");

	Params::ABP_ReadyUp_Interact_C_OnRep_IsFightTheStorm_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_BluGloTaken
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_BluGloTaken()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_BluGloTaken");

	Params::ABP_ReadyUp_Interact_C_OnRep_BluGloTaken_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_DifficultyVoteInProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_DifficultyVoteInProgress()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_DifficultyVoteInProgress");

	Params::ABP_ReadyUp_Interact_C_OnRep_DifficultyVoteInProgress_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_ShouldDisableDifficultyVoting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_ShouldDisableDifficultyVoting()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_ShouldDisableDifficultyVoting");

	Params::ABP_ReadyUp_Interact_C_OnRep_ShouldDisableDifficultyVoting_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UInterfaceProperty_                InventoryOwner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumberBGtoReturn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::ReturnBluGloToPlayer(UInterfaceProperty_ InventoryOwner, int32 NumberBGtoReturn)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ReturnBluGloToPlayer");

	Params::ABP_ReadyUp_Interact_C_ReturnBluGloToPlayer_Params Parms;

	Parms.InventoryOwner = InventoryOwner;
	Parms.NumberBGtoReturn = NumberBGtoReturn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumberBGtoTake                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_RemoveItemFromPlayer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::TakeBluGloFromPlayer(class AFortPlayerController* PlayerController, int32 NumberBGtoTake, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "TakeBluGloFromPlayer");

	Params::ABP_ReadyUp_Interact_C_TakeBluGloFromPlayer_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.NumberBGtoTake = NumberBGtoTake;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnRep_CanInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnRep_CanInteract()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnRep_CanInteract");

	Params::ABP_ReadyUp_Interact_C_OnRep_CanInteract_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ReadyUp_Interact_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ShouldDie");

	Params::ABP_ReadyUp_Interact_C_ShouldDie_Params Parms;

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_ReadyUp_Interact_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintGetInteractionString");

	Params::ABP_ReadyUp_Interact_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ReadyUp_Interact_C::BlueprintCanInteract(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintCanInteract");

	Params::ABP_ReadyUp_Interact_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A");

	Params::ABP_ReadyUp_Interact_C_OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A");

	Params::ABP_ReadyUp_Interact_C_OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnCanceled_1ED02ED748A4140AEF73B29EC94AD234
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnCanceled_1ED02ED748A4140AEF73B29EC94AD234()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnCanceled_1ED02ED748A4140AEF73B29EC94AD234");

	Params::ABP_ReadyUp_Interact_C_OnCanceled_1ED02ED748A4140AEF73B29EC94AD234_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234");

	Params::ABP_ReadyUp_Interact_C_OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE");

	Params::ABP_ReadyUp_Interact_C_OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ReceiveBeginPlay");

	Params::ABP_ReadyUp_Interact_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OpenMissionControl
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::OpenMissionControl()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "OpenMissionControl");

	Params::ABP_ReadyUp_Interact_C_OpenMissionControl_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ReadyUp_Interact_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "BlueprintOnInteract");

	Params::ABP_ReadyUp_Interact_C_BlueprintOnInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteStatus         VoteStatus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              VoteResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoter>              Voters                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ReadyUp_Interact_C::VoteCalled(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "VoteCalled");

	Params::ABP_ReadyUp_Interact_C_VoteCalled_Params Parms;

	Parms.VoteType = VoteType;
	Parms.VoteStatus = VoteStatus;
	Parms.VoteResult = VoteResult;
	Parms.Voters = Voters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.DisableDifficultyVoting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::DisableDifficultyVoting()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "DisableDifficultyVoting");

	Params::ABP_ReadyUp_Interact_C_DisableDifficultyVoting_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.AtlasUnsupported
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReadyUp_Interact_C::AtlasUnsupported()
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "AtlasUnsupported");

	Params::ABP_ReadyUp_Interact_C_AtlasUnsupported_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_Supported
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ReadyUp_Interact_C::HandleMissionEvent_Supported(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "HandleMissionEvent_Supported");

	Params::ABP_ReadyUp_Interact_C_HandleMissionEvent_Supported_Params Parms;

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_UnSupported
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ReadyUp_Interact_C::HandleMissionEvent_UnSupported(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "HandleMissionEvent_UnSupported");

	Params::ABP_ReadyUp_Interact_C_HandleMissionEvent_UnSupported_Params Parms;

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_ActivatePrimary
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InMissionGuid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ObjectiveHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams*     Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  EventContent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GenericInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GenericFloat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        GenericText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer       GameplayTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent           MissionEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ReadyUp_Interact_C::HandleMissionEvent_ActivatePrimary(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "HandleMissionEvent_ActivatePrimary");

	Params::ABP_ReadyUp_Interact_C_HandleMissionEvent_ActivatePrimary_Params Parms;

	Parms.InMissionGuid = InMissionGuid;
	Parms.ObjectiveHandle = ObjectiveHandle;
	Parms.Params = Params;
	Parms.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.EventFocus = EventFocus;
	Parms.EventContent = EventContent;
	Parms.EventInstigator = EventInstigator;
	Parms.GenericInt = GenericInt;
	Parms.GenericFloat = GenericFloat;
	Parms.GenericText = GenericText;
	Parms.GameplayTags = GameplayTags;
	Parms.MissionEvent = MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AAnnounce_Gen_Basic_C*       CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_WaitForClientAnnouncement*CallFunc_WaitForClientAnnouncement_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           K2Node_CustomEvent_VoteType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteStatus         K2Node_CustomEvent_VoteStatus                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_VoteResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVoter>              K2Node_CustomEvent_Voters                                        (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateZone*          K2Node_DynamicCast_AsFort_Game_State_Zone                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortMission*                CallFunc_GetMission_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        ()
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic               ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      ()
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle_2                      ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_2   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent_2                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText_2                          (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags_2                         ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent_2                         (ConstParm)
// struct FFortClientAnnouncementData_BasicK2Node_MakeStruct_FortClientAnnouncementData_Basic_1             ()
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle_1                      ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_1   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent_1                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText_1                          (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags_1                         ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent_1                         (ConstParm)
// struct FGuid                       K2Node_HandleMissionEvent_InMissionGuid                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_ObjectiveHandle                        ()
// class UFortMissionEventParams*     K2Node_HandleMissionEvent_Params                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleMissionEvent_EventFocus                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataAsset*                  K2Node_HandleMissionEvent_EventContent                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_HandleMissionEvent_EventInstigator                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_HandleMissionEvent_GenericInt                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_HandleMissionEvent_GenericFloat                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_HandleMissionEvent_GenericText                            (ConstParm)
// struct FGameplayTagContainer       K2Node_HandleMissionEvent_GameplayTags                           ()
// struct FFortMissionEvent           K2Node_HandleMissionEvent_MissionEvent                           (ConstParm)

void ABP_ReadyUp_Interact_C::ExecuteUbergraph_BP_ReadyUp_Interact(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue_1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array_1, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AFortPawn* K2Node_Event_InteractingPawn, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class AController* CallFunc_GetController_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, enum class EFortVoteType K2Node_CustomEvent_VoteType, enum class EFortVoteStatus K2Node_CustomEvent_VoteStatus, int32 K2Node_CustomEvent_VoteResult, TArray<struct FVoter>& K2Node_CustomEvent_Voters, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, UInterfaceProperty_ CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, UInterfaceProperty_ CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput_1, class AFortMission* CallFunc_GetMission_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid_2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle_2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params_2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_2, class UObject* K2Node_HandleMissionEvent_EventFocus_2, class UDataAsset* K2Node_HandleMissionEvent_EventContent_2, class AActor* K2Node_HandleMissionEvent_EventInstigator_2, int32 K2Node_HandleMissionEvent_GenericInt_2, float K2Node_HandleMissionEvent_GenericFloat_2, class FText K2Node_HandleMissionEvent_GenericText_2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags_2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent_2, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic_1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid_1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle_1, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params_1, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_1, class UObject* K2Node_HandleMissionEvent_EventFocus_1, class UDataAsset* K2Node_HandleMissionEvent_EventContent_1, class AActor* K2Node_HandleMissionEvent_EventInstigator_1, int32 K2Node_HandleMissionEvent_GenericInt_1, float K2Node_HandleMissionEvent_GenericFloat_1, class FText K2Node_HandleMissionEvent_GenericText_1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags_1, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent_1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent)
{
	static auto Func = Class->GetFunction("BP_ReadyUp_Interact_C", "ExecuteUbergraph_BP_ReadyUp_Interact");

	Params::ABP_ReadyUp_Interact_C_ExecuteUbergraph_BP_ReadyUp_Interact_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue = CallFunc_WaitForClientAnnouncement_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_WaitForClientAnnouncement_ReturnValue_1 = CallFunc_WaitForClientAnnouncement_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_VoteType = K2Node_CustomEvent_VoteType;
	Parms.K2Node_CustomEvent_VoteStatus = K2Node_CustomEvent_VoteStatus;
	Parms.K2Node_CustomEvent_VoteResult = K2Node_CustomEvent_VoteResult;
	Parms.K2Node_CustomEvent_Voters = K2Node_CustomEvent_Voters;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput = CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Zone = K2Node_DynamicCast_AsFort_Game_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput_1 = CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput_1;
	Parms.CallFunc_GetMission_ReturnValue = CallFunc_GetMission_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic = K2Node_MakeStruct_FortClientAnnouncementData_Basic;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid_2 = K2Node_HandleMissionEvent_InMissionGuid_2;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle_2 = K2Node_HandleMissionEvent_ObjectiveHandle_2;
	Parms.K2Node_HandleMissionEvent_Params_2 = K2Node_HandleMissionEvent_Params_2;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_2 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_2;
	Parms.K2Node_HandleMissionEvent_EventFocus_2 = K2Node_HandleMissionEvent_EventFocus_2;
	Parms.K2Node_HandleMissionEvent_EventContent_2 = K2Node_HandleMissionEvent_EventContent_2;
	Parms.K2Node_HandleMissionEvent_EventInstigator_2 = K2Node_HandleMissionEvent_EventInstigator_2;
	Parms.K2Node_HandleMissionEvent_GenericInt_2 = K2Node_HandleMissionEvent_GenericInt_2;
	Parms.K2Node_HandleMissionEvent_GenericFloat_2 = K2Node_HandleMissionEvent_GenericFloat_2;
	Parms.K2Node_HandleMissionEvent_GenericText_2 = K2Node_HandleMissionEvent_GenericText_2;
	Parms.K2Node_HandleMissionEvent_GameplayTags_2 = K2Node_HandleMissionEvent_GameplayTags_2;
	Parms.K2Node_HandleMissionEvent_MissionEvent_2 = K2Node_HandleMissionEvent_MissionEvent_2;
	Parms.K2Node_MakeStruct_FortClientAnnouncementData_Basic_1 = K2Node_MakeStruct_FortClientAnnouncementData_Basic_1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid_1 = K2Node_HandleMissionEvent_InMissionGuid_1;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle_1 = K2Node_HandleMissionEvent_ObjectiveHandle_1;
	Parms.K2Node_HandleMissionEvent_Params_1 = K2Node_HandleMissionEvent_Params_1;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_1 = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW_1;
	Parms.K2Node_HandleMissionEvent_EventFocus_1 = K2Node_HandleMissionEvent_EventFocus_1;
	Parms.K2Node_HandleMissionEvent_EventContent_1 = K2Node_HandleMissionEvent_EventContent_1;
	Parms.K2Node_HandleMissionEvent_EventInstigator_1 = K2Node_HandleMissionEvent_EventInstigator_1;
	Parms.K2Node_HandleMissionEvent_GenericInt_1 = K2Node_HandleMissionEvent_GenericInt_1;
	Parms.K2Node_HandleMissionEvent_GenericFloat_1 = K2Node_HandleMissionEvent_GenericFloat_1;
	Parms.K2Node_HandleMissionEvent_GenericText_1 = K2Node_HandleMissionEvent_GenericText_1;
	Parms.K2Node_HandleMissionEvent_GameplayTags_1 = K2Node_HandleMissionEvent_GameplayTags_1;
	Parms.K2Node_HandleMissionEvent_MissionEvent_1 = K2Node_HandleMissionEvent_MissionEvent_1;
	Parms.K2Node_HandleMissionEvent_InMissionGuid = K2Node_HandleMissionEvent_InMissionGuid;
	Parms.K2Node_HandleMissionEvent_ObjectiveHandle = K2Node_HandleMissionEvent_ObjectiveHandle;
	Parms.K2Node_HandleMissionEvent_Params = K2Node_HandleMissionEvent_Params;
	Parms.K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW = K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	Parms.K2Node_HandleMissionEvent_EventFocus = K2Node_HandleMissionEvent_EventFocus;
	Parms.K2Node_HandleMissionEvent_EventContent = K2Node_HandleMissionEvent_EventContent;
	Parms.K2Node_HandleMissionEvent_EventInstigator = K2Node_HandleMissionEvent_EventInstigator;
	Parms.K2Node_HandleMissionEvent_GenericInt = K2Node_HandleMissionEvent_GenericInt;
	Parms.K2Node_HandleMissionEvent_GenericFloat = K2Node_HandleMissionEvent_GenericFloat;
	Parms.K2Node_HandleMissionEvent_GenericText = K2Node_HandleMissionEvent_GenericText;
	Parms.K2Node_HandleMissionEvent_GameplayTags = K2Node_HandleMissionEvent_GameplayTags;
	Parms.K2Node_HandleMissionEvent_MissionEvent = K2Node_HandleMissionEvent_MissionEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
