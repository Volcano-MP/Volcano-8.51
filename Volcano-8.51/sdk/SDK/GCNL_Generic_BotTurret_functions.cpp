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


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AB_BGA_BotTurret_Parent_C*   K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_BotTurret_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AB_BGA_BotTurret_Parent_C* K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "OnActive");

	Params::AGCNL_Generic_BotTurret_C_OnActive_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent = K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_Generic_BotTurret_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "OnRemove");

	Params::AGCNL_Generic_BotTurret_C_OnRemove_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Generic_BotTurret_C::BotFired(int32 Left)
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BotFired");

	Params::AGCNL_Generic_BotTurret_C_BotFired_Params Parms;

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::Activated()
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "Activated");

	Params::AGCNL_Generic_BotTurret_C_Activated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::BindBotFired()
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BindBotFired");

	Params::AGCNL_Generic_BotTurret_C_BindBotFired_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::BindBotExplosionWarning()
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BindBotExplosionWarning");

	Params::AGCNL_Generic_BotTurret_C_BindBotExplosionWarning_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCNL_Generic_BotTurret_C::BotExplosionWarning()
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "BotExplosionWarning");

	Params::AGCNL_Generic_BotTurret_C_BotExplosionWarning_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Left                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void AGCNL_Generic_BotTurret_C::ExecuteUbergraph_GCNL_Generic_BotTurret(int32 EntryPoint, int32 K2Node_CustomEvent_Left, bool K2Node_SwitchInteger_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("GCNL_Generic_BotTurret_C", "ExecuteUbergraph_GCNL_Generic_BotTurret");

	Params::AGCNL_Generic_BotTurret_C_ExecuteUbergraph_GCNL_Generic_BotTurret_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Left = K2Node_CustomEvent_Left;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
