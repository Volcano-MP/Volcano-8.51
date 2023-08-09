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


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "FullBlinkTimeline__FinishedFunc");

	Params::AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "FullBlinkTimeline__UpdateFunc");

	Params::AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_BoostJumpPack_FuelRegen_C::ResetBlink(class AFortPlayerPawn* PlayerPawn)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "ResetBlink");

	Params::AGCL_BoostJumpPack_FuelRegen_C_ResetBlink_Params Parms;

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_BoostJumpPack_FuelRegen_C::ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32 EntryPoint, class AFortPlayerPawn* K2Node_Event_PlayerPawn, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue)
{
	static auto Func = Class->GetFunction("GCL_BoostJumpPack_FuelRegen_C", "ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen");

	Params::AGCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
