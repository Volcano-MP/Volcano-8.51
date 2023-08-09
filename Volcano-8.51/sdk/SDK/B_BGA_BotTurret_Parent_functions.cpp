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


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.GetPlayerPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerPawn*             AsFort_Player_Pawn                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BGA_BotTurret_Parent_C::GetPlayerPawn(class AFortPlayerPawn** AsFort_Player_Pawn, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "GetPlayerPawn");

	Params::AB_BGA_BotTurret_Parent_C_GetPlayerPawn_Params Parms;

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Pawn != nullptr)
		*AsFort_Player_Pawn = Parms.AsFort_Player_Pawn;

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::OnRep_BotData()
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "OnRep_BotData");

	Params::AB_BGA_BotTurret_Parent_C_OnRep_BotData_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::LeftOrRightGunFired(int32 A)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "LeftOrRightGunFired");

	Params::AB_BGA_BotTurret_Parent_C_LeftOrRightGunFired_Params Parms;

	Parms.A = A;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InVect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::SetGunSpawnRotFromSocket(class FName SocketName, const struct FVector& InVect)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "SetGunSpawnRotFromSocket");

	Params::AB_BGA_BotTurret_Parent_C_SetGunSpawnRotFromSocket_Params Parms;

	Parms.SocketName = SocketName;
	Parms.InVect = InVect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WarmupTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BotDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FireRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RadiusDefault                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExplosionUpgrade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BGA_BotTurret_Parent_C::PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "PassBotInfo");

	Params::AB_BGA_BotTurret_Parent_C_PassBotInfo_Params Parms;

	Parms.WarmupTime = WarmupTime;
	Parms.BotDuration = BotDuration;
	Parms.FireRate = FireRate;
	Parms.Radius = Radius;
	Parms.RadiusDefault = RadiusDefault;
	Parms.ExplosionUpgrade = ExplosionUpgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::SetTarget(class AFortAIPawn* Target)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "SetTarget");

	Params::AB_BGA_BotTurret_Parent_C_SetTarget_Params Parms;

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::Ready()
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "Ready");

	Params::AB_BGA_BotTurret_Parent_C_Ready_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::Destroyed(class AActor* DestroyedActor)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "Destroyed");

	Params::AB_BGA_BotTurret_Parent_C_Destroyed_Params Parms;

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BindOnDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::BindOnDestroyed()
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BindOnDestroyed");

	Params::AB_BGA_BotTurret_Parent_C_BindOnDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_WarmUpTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BotDuration                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FireRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_RadiusDefault                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ExplosionUpgrade                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFBotTurretData             K2Node_MakeStruct_FBotTurretData                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_AsFort_Player_Pawn                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_AsFort_Player_Pawn_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPlayerPawn_AsFort_Player_Pawn_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void AB_BGA_BotTurret_Parent_C::ExecuteUbergraph_B_BGA_BotTurret_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortAIPawn* K2Node_CustomEvent_Target, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float K2Node_CustomEvent_WarmUpTime, float K2Node_CustomEvent_BotDuration, float K2Node_CustomEvent_FireRate, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_RadiusDefault, bool K2Node_CustomEvent_ExplosionUpgrade, const struct FFBotTurretData& K2Node_MakeStruct_FBotTurretData, bool CallFunc_HasAuthority_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_AsFort_Player_Pawn, class AFortPlayerPawn* CallFunc_GetPlayerPawn_AsFort_Player_Pawn_1, class AActor* K2Node_CustomEvent_DestroyedActor, class AFortPlayerPawn* CallFunc_GetPlayerPawn_AsFort_Player_Pawn_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "ExecuteUbergraph_B_BGA_BotTurret_Parent");

	Params::AB_BGA_BotTurret_Parent_C_ExecuteUbergraph_B_BGA_BotTurret_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_WarmUpTime = K2Node_CustomEvent_WarmUpTime;
	Parms.K2Node_CustomEvent_BotDuration = K2Node_CustomEvent_BotDuration;
	Parms.K2Node_CustomEvent_FireRate = K2Node_CustomEvent_FireRate;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;
	Parms.K2Node_CustomEvent_RadiusDefault = K2Node_CustomEvent_RadiusDefault;
	Parms.K2Node_CustomEvent_ExplosionUpgrade = K2Node_CustomEvent_ExplosionUpgrade;
	Parms.K2Node_MakeStruct_FBotTurretData = K2Node_MakeStruct_FBotTurretData;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_AsFort_Player_Pawn = CallFunc_GetPlayerPawn_AsFort_Player_Pawn;
	Parms.CallFunc_GetPlayerPawn_AsFort_Player_Pawn_1 = CallFunc_GetPlayerPawn_AsFort_Player_Pawn_1;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.CallFunc_GetPlayerPawn_AsFort_Player_Pawn_2 = CallFunc_GetPlayerPawn_AsFort_Player_Pawn_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::BotExplode__DelegateSignature()
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BotExplode__DelegateSignature");

	Params::AB_BGA_BotTurret_Parent_C_BotExplode__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::BotExplosionWarning__DelegateSignature()
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BotExplosionWarning__DelegateSignature");

	Params::AB_BGA_BotTurret_Parent_C_BotExplosionWarning__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::BotFired__DelegateSignature(int32 Left)
{
	static auto Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BotFired__DelegateSignature");

	Params::AB_BGA_BotTurret_Parent_C_BotFired__DelegateSignature_Params Parms;

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
