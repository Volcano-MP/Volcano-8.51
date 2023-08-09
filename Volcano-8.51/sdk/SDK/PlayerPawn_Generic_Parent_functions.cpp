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


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawn_Generic_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ReceiveBeginPlay");

	Params::APlayerPawn_Generic_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Generic_Parent_C::Entered_Water_Volume()
{
	static auto Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "Entered Water Volume");

	Params::APlayerPawn_Generic_Parent_C_Entered_Water_Volume_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void APlayerPawn_Generic_Parent_C::Player_Creates_a_Splash(struct FTransform& NewTransform)
{
	static auto Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "Player Creates a Splash");

	Params::APlayerPawn_Generic_Parent_C_Player_Creates_a_Splash_Params Parms;

	Parms.NewTransform = NewTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawn_Generic_Parent_C::ReinitializeWeaponMaterials()
{
	static auto Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ReinitializeWeaponMaterials");

	Params::APlayerPawn_Generic_Parent_C_ReinitializeWeaponMaterials_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPostProcessComponent*       CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_CustomEvent_NewTransform                                  (ConstParm, IsPlainOldData, NoDestructor)

void APlayerPawn_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& K2Node_CustomEvent_NewTransform)
{
	static auto Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ExecuteUbergraph_PlayerPawn_Generic_Parent");

	Params::APlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_NewTransform = K2Node_CustomEvent_NewTransform;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
