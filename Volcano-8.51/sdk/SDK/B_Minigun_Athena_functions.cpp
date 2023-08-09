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


// Function B_Minigun_Athena.B_Minigun_Athena_C.CurrentScalarValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetOverheatingMaxValue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentOverheatValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AB_Minigun_Athena_C::CurrentScalarValue(float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "CurrentScalarValue");

	Params::AB_Minigun_Athena_C_CurrentScalarValue_Params Parms;

	Parms.CallFunc_GetOverheatingMaxValue_ReturnValue = CallFunc_GetOverheatingMaxValue_ReturnValue;
	Parms.CallFunc_GetCurrentOverheatValue_ReturnValue = CallFunc_GetCurrentOverheatValue_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Minigun_Athena_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "UserConstructionScript");

	Params::AB_Minigun_Athena_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::SpinAudioVolumeTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "SpinAudioVolumeTimeline__FinishedFunc");

	Params::AB_Minigun_Athena_C_SpinAudioVolumeTimeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::SpinAudioVolumeTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "SpinAudioVolumeTimeline__UpdateFunc");

	Params::AB_Minigun_Athena_C_SpinAudioVolumeTimeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Minigun_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnPlayWeaponFireFX");

	Params::AB_Minigun_Athena_C_OnPlayWeaponFireFX_Params Parms;

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnChargeUp()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnChargeUp");

	Params::AB_Minigun_Athena_C_OnChargeUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnChargeDown()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnChargeDown");

	Params::AB_Minigun_Athena_C_OnChargeDown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification   CosmeticMod                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Minigun_Athena_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnInitCosmeticAlterations");

	Params::AB_Minigun_Athena_C_OnInitCosmeticAlterations_Params Parms;

	Parms.CosmeticMod = CosmeticMod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnAmmoCountChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnAmmoCountChanged()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnAmmoCountChanged");

	Params::AB_Minigun_Athena_C_OnAmmoCountChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::Start_Spin_Up_Audio()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "Start Spin Up Audio");

	Params::AB_Minigun_Athena_C_Start_Spin_Up_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::Start_Spin_Down_Audio()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "Start Spin Down Audio");

	Params::AB_Minigun_Athena_C_Start_Spin_Down_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnWeaponAttached");

	Params::AB_Minigun_Athena_C_OnWeaponAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.OnStartOverheated
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::OnStartOverheated()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "OnStartOverheated");

	Params::AB_Minigun_Athena_C_OnStartOverheated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelOverheatFXandSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::BarrelOverheatFXandSound()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "BarrelOverheatFXandSound");

	Params::AB_Minigun_Athena_C_BarrelOverheatFXandSound_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Minigun_Athena_C::K2_OnUnEquip()
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "K2_OnUnEquip");

	Params::AB_Minigun_Athena_C_K2_OnUnEquip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortCosmeticModification   K2Node_Event_CosmeticMod                                         ()
// int32                              CallFunc_GetLocalMagazineAmmoCount_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CurrentScalarValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_CurrentScalarValue_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Minigun_Athena_C::ExecuteUbergraph_B_Minigun_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, float CallFunc_CurrentScalarValue_ReturnValue, float CallFunc_Lerp_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_CurrentScalarValue_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Minigun_Athena_C", "ExecuteUbergraph_B_Minigun_Athena");

	Params::AB_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_Event_CosmeticMod = K2Node_Event_CosmeticMod;
	Parms.CallFunc_GetLocalMagazineAmmoCount_ReturnValue = CallFunc_GetLocalMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_CurrentScalarValue_ReturnValue = CallFunc_CurrentScalarValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CurrentScalarValue_ReturnValue_1 = CallFunc_CurrentScalarValue_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
