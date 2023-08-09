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


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15
// (BlueprintEvent)
// Parameters:

void UBP_GrenadeLauncher_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15()
{
	static auto Func = Class->GetFunction("BP_GrenadeLauncher_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15");

	Params::UBP_GrenadeLauncher_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.AnimNotify_RotateDrum
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_GrenadeLauncher_C::AnimNotify_RotateDrum()
{
	static auto Func = Class->GetFunction("BP_GrenadeLauncher_C", "AnimNotify_RotateDrum");

	Params::UBP_GrenadeLauncher_C_AnimNotify_RotateDrum_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_GrenadeLauncher_C::ExecuteUbergraph_BP_GrenadeLauncher(int32 EntryPoint, float CallFunc_GetCurveValue_ReturnValue, int32 Temp_int_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_GrenadeLauncher_C", "ExecuteUbergraph_BP_GrenadeLauncher");

	Params::UBP_GrenadeLauncher_C_ExecuteUbergraph_BP_GrenadeLauncher_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
