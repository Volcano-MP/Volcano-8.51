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


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F
// (BlueprintEvent)
// Parameters:

void UJackalVehicle_Hoverboard_Base_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F()
{
	static auto Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_AnimGraphNode_TransitionResult_EF91C0A945322DE8438F4BA03DD7D01F_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JackalVehicle_Hoverboard_Base_AnimBP.JackalVehicle_Hoverboard_Base_AnimBP_C.ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetDriver_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortnite_M_Avg_Player_AnimBlueprint_C*K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJackalVehicle_Hoverboard_Base_AnimBP_C::ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP(int32 EntryPoint, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static auto Func = Class->GetFunction("JackalVehicle_Hoverboard_Base_AnimBP_C", "ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP");

	Params::UJackalVehicle_Hoverboard_Base_AnimBP_C_ExecuteUbergraph_JackalVehicle_Hoverboard_Base_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDriver_ReturnValue = CallFunc_GetDriver_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint = K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
