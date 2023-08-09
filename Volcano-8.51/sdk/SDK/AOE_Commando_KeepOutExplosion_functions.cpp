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


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundAttenuationSettings   CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings ()
// bool                               CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundAttenuationSettings   K2Node_MakeStruct_SoundAttenuationSettings                       ()

void AAOE_Commando_KeepOutExplosion_C::OnRep_Radius(const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FSoundAttenuationSettings& K2Node_MakeStruct_SoundAttenuationSettings)
{
	static auto Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "OnRep_Radius");

	Params::AAOE_Commando_KeepOutExplosion_C_OnRep_Radius_Params Parms;

	Parms.CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings = CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings;
	Parms.CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue = CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeStruct_SoundAttenuationSettings = K2Node_MakeStruct_SoundAttenuationSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAOE_Commando_KeepOutExplosion_C::Send_Info(float Radius)
{
	static auto Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "Send_Info");

	Params::AAOE_Commando_KeepOutExplosion_C_Send_Info_Params Parms;

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AAOE_Commando_KeepOutExplosion_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveDestroyed");

	Params::AAOE_Commando_KeepOutExplosion_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAOE_Commando_KeepOutExplosion_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ReceiveBeginPlay");

	Params::AAOE_Commando_KeepOutExplosion_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAOE_Commando_KeepOutExplosion_C::ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32 EntryPoint, float K2Node_CustomEvent_Radius)
{
	static auto Func = Class->GetFunction("AOE_Commando_KeepOutExplosion_C", "ExecuteUbergraph_AOE_Commando_KeepOutExplosion");

	Params::AAOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
