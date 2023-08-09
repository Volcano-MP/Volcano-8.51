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


// Function M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_Med_Soldier_03_Cupid_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static auto Func = Class->GetFunction("M_Med_Soldier_03_Cupid_AnimBlueprint_C", "BlueprintInitializeAnimation");

	Params::UM_Med_Soldier_03_Cupid_AnimBlueprint_C_BlueprintInitializeAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_Med_Soldier_03_Cupid_AnimBlueprint.M_Med_Soldier_03_Cupid_AnimBlueprint_C.ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_Med_Soldier_03_Cupid_AnimBlueprint_C::ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("M_Med_Soldier_03_Cupid_AnimBlueprint_C", "ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint");

	Params::UM_Med_Soldier_03_Cupid_AnimBlueprint_C_ExecuteUbergraph_M_Med_Soldier_03_Cupid_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
