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


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInterfacePlayerPawn_C::FootStepRight()
{
	static auto Func = Class->GetFunction("InterfacePlayerPawn_C", "FootStepRight");

	Params::UInterfacePlayerPawn_C_FootStepRight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInterfacePlayerPawn_C::FootStepLeft()
{
	static auto Func = Class->GetFunction("InterfacePlayerPawn_C", "FootStepLeft");

	Params::UInterfacePlayerPawn_C_FootStepLeft_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Melee_Color_Set                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterfacePlayerPawn_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static auto Func = Class->GetFunction("InterfacePlayerPawn_C", "Melee_Effect_Color");

	Params::UInterfacePlayerPawn_C_Melee_Effect_Color_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = Parms.Melee_Color_Set;

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInterfacePlayerPawn_C::MeleeSwingLeft()
{
	static auto Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingLeft");

	Params::UInterfacePlayerPawn_C_MeleeSwingLeft_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInterfacePlayerPawn_C::MeleeSwingRight()
{
	static auto Func = Class->GetFunction("InterfacePlayerPawn_C", "MeleeSwingRight");

	Params::UInterfacePlayerPawn_C_MeleeSwingRight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
