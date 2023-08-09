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


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveSpringStiffness(float InStiffness)
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveSpringStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveSpringStiffness_Params Parms;

	Parms.InStiffness = InStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params Parms;

	Parms.InStiffness = InStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::EnableGravityOverride(struct FVector& InVector)
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractorNv", "EnableGravityOverride");

	Params::UClothingSimulationInteractorNv_EnableGravityOverride_Params Parms;

	Parms.InVector = InVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractorNv::DisableGravityOverride()
{
	static auto Func = Class->GetFunction("ClothingSimulationInteractorNv", "DisableGravityOverride");

	Params::UClothingSimulationInteractorNv_DisableGravityOverride_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
