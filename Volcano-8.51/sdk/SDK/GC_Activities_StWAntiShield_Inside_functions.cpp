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


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_Activities_StWAntiShield_Inside_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "OnRemove");

	Params::AGC_Activities_StWAntiShield_Inside_C_OnRemove_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGC_Activities_StWAntiShield_Inside_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "OnActive");

	Params::AGC_Activities_StWAntiShield_Inside_C_OnActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Activities_StWAntiShield_Inside_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue)
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "UserConstructionScript");

	Params::AGC_Activities_StWAntiShield_Inside_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.Fade Smoke TL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AGC_Activities_StWAntiShield_Inside_C::Fade_Smoke_TL__FinishedFunc()
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "Fade Smoke TL__FinishedFunc");

	Params::AGC_Activities_StWAntiShield_Inside_C_Fade_Smoke_TL__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.Fade Smoke TL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AGC_Activities_StWAntiShield_Inside_C::Fade_Smoke_TL__UpdateFunc()
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "Fade Smoke TL__UpdateFunc");

	Params::AGC_Activities_StWAntiShield_Inside_C_Fade_Smoke_TL__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGC_Activities_StWAntiShield_Inside_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "ReceiveBeginPlay");

	Params::AGC_Activities_StWAntiShield_Inside_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_Activities_StWAntiShield_Inside_C::FadeIn()
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "FadeIn");

	Params::AGC_Activities_StWAntiShield_Inside_C_FadeIn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGC_Activities_StWAntiShield_Inside_C::FadeOut()
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "FadeOut");

	Params::AGC_Activities_StWAntiShield_Inside_C_FadeOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Activities_StWAntiShield_Inside.GC_Activities_StWAntiShield_Inside_C.ExecuteUbergraph_GC_Activities_StWAntiShield_Inside
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Activities_StWAntiShield_Inside_C::ExecuteUbergraph_GC_Activities_StWAntiShield_Inside(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GC_Activities_StWAntiShield_Inside_C", "ExecuteUbergraph_GC_Activities_StWAntiShield_Inside");

	Params::AGC_Activities_StWAntiShield_Inside_C_ExecuteUbergraph_GC_Activities_StWAntiShield_Inside_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
