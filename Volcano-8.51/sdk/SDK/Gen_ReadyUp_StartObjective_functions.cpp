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


// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReadyUpTimerLength                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          InteractSpawnLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FText                        InteractText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              BluGloMissionActivationQty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFightTheStorm                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGen_ReadyUp_StartObjective_C*ThisObject                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGen_ReadyUp_StartObjective_C::SetParams(float ReadyUpTimerLength, TArray<struct FTransform>& InteractSpawnLocation, class FText InteractText, int32 BluGloMissionActivationQty, bool IsFightTheStorm, class UGen_ReadyUp_StartObjective_C** ThisObject)
{
	static auto Func = Class->GetFunction("Gen_ReadyUp_StartObjective_C", "SetParams");

	Params::UGen_ReadyUp_StartObjective_C_SetParams_Params Parms;

	Parms.ReadyUpTimerLength = ReadyUpTimerLength;
	Parms.InteractSpawnLocation = InteractSpawnLocation;
	Parms.InteractText = InteractText;
	Parms.BluGloMissionActivationQty = BluGloMissionActivationQty;
	Parms.IsFightTheStorm = IsFightTheStorm;

	UObject::ProcessEvent(Func, &Parms);

	if (ThisObject != nullptr)
		*ThisObject = Parms.ThisObject;

}


// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReadyUpTimerLength                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          InteractSpawnLocation                                            (Parm, OutParm, ZeroConstructor)
// class FText                        InteractText                                                     (Parm, OutParm)
// int32                              BluGloMissionActivationQty                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFightTheStorm                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGen_ReadyUp_StartObjective_C::BreakParams(float* ReadyUpTimerLength, TArray<struct FTransform>* InteractSpawnLocation, class FText* InteractText, int32* BluGloMissionActivationQty, bool* IsFightTheStorm)
{
	static auto Func = Class->GetFunction("Gen_ReadyUp_StartObjective_C", "BreakParams");

	Params::UGen_ReadyUp_StartObjective_C_BreakParams_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ReadyUpTimerLength != nullptr)
		*ReadyUpTimerLength = Parms.ReadyUpTimerLength;

	if (InteractSpawnLocation != nullptr)
		*InteractSpawnLocation = Parms.InteractSpawnLocation;

	if (InteractText != nullptr)
		*InteractText = Parms.InteractText;

	if (BluGloMissionActivationQty != nullptr)
		*BluGloMissionActivationQty = Parms.BluGloMissionActivationQty;

	if (IsFightTheStorm != nullptr)
		*IsFightTheStorm = Parms.IsFightTheStorm;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
