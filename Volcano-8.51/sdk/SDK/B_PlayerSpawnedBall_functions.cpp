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


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.PlayCueCenteredOnMe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayCueToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// float                              Raw_Magnitude                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize10       K2Node_MakeStruct_Vector_NetQuantize10                           (NoDestructor)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void AB_PlayerSpawnedBall_C::PlayCueCenteredOnMe(const struct FGameplayTag& GameplayCueToPlay, float Raw_Magnitude, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static auto Func = Class->GetFunction("B_PlayerSpawnedBall_C", "PlayCueCenteredOnMe");

	Params::AB_PlayerSpawnedBall_C_PlayCueCenteredOnMe_Params Parms;

	Parms.GameplayCueToPlay = GameplayCueToPlay;
	Parms.Raw_Magnitude = Raw_Magnitude;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_Vector_NetQuantize10 = K2Node_MakeStruct_Vector_NetQuantize10;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.NotifyToyInstanceOfReuse
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_PlayerSpawnedBall_C::NotifyToyInstanceOfReuse()
{
	static auto Func = Class->GetFunction("B_PlayerSpawnedBall_C", "NotifyToyInstanceOfReuse");

	Params::AB_PlayerSpawnedBall_C_NotifyToyInstanceOfReuse_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.StartToyFadeOutDueToNewPlacement
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_PlayerSpawnedBall_C::StartToyFadeOutDueToNewPlacement()
{
	static auto Func = Class->GetFunction("B_PlayerSpawnedBall_C", "StartToyFadeOutDueToNewPlacement");

	Params::AB_PlayerSpawnedBall_C_StartToyFadeOutDueToNewPlacement_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyInstance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*       OwningPC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumTimesSummoned                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_PlayerSpawnedBall_C::InitializeToyInstance(class AFortPlayerController* OwningPC, int32 NumTimesSummoned)
{
	static auto Func = Class->GetFunction("B_PlayerSpawnedBall_C", "InitializeToyInstance");

	Params::AB_PlayerSpawnedBall_C_InitializeToyInstance_Params Parms;

	Parms.OwningPC = OwningPC;
	Parms.NumTimesSummoned = NumTimesSummoned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyPreviewInFrontend
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_PlayerSpawnedBall_C::InitializeToyPreviewInFrontend()
{
	static auto Func = Class->GetFunction("B_PlayerSpawnedBall_C", "InitializeToyPreviewInFrontend");

	Params::AB_PlayerSpawnedBall_C_InitializeToyPreviewInFrontend_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.ExecuteUbergraph_B_PlayerSpawnedBall
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_Event_OwningPC                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumTimesSummoned                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPawnFromPlayerStateZone_OutPawn                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPawnFromPlayerStateZone_PawnReturned                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_PlayerSpawnedBall_C::ExecuteUbergraph_B_PlayerSpawnedBall(int32 EntryPoint, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerController* K2Node_Event_OwningPC, int32 K2Node_Event_NumTimesSummoned, class AFortPlayerPawn* CallFunc_GetPawnFromPlayerStateZone_OutPawn, bool CallFunc_GetPawnFromPlayerStateZone_PawnReturned)
{
	static auto Func = Class->GetFunction("B_PlayerSpawnedBall_C", "ExecuteUbergraph_B_PlayerSpawnedBall");

	Params::AB_PlayerSpawnedBall_C_ExecuteUbergraph_B_PlayerSpawnedBall_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_OwningPC = K2Node_Event_OwningPC;
	Parms.K2Node_Event_NumTimesSummoned = K2Node_Event_NumTimesSummoned;
	Parms.CallFunc_GetPawnFromPlayerStateZone_OutPawn = CallFunc_GetPawnFromPlayerStateZone_OutPawn;
	Parms.CallFunc_GetPawnFromPlayerStateZone_PawnReturned = CallFunc_GetPawnFromPlayerStateZone_PawnReturned;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
