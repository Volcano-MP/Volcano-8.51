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


// Function ImagePlate.ImagePlateComponent.SetImagePlate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FImagePlateParameters       Plate                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UImagePlateComponent::SetImagePlate(const struct FImagePlateParameters& Plate)
{
	static auto Func = Class->GetFunction("ImagePlateComponent", "SetImagePlate");

	Params::UImagePlateComponent_SetImagePlate_Params Parms;

	Parms.Plate = Plate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
// (Final, Native, Public)
// Parameters:

void UImagePlateComponent::OnRenderTextureChanged()
{
	static auto Func = Class->GetFunction("ImagePlateComponent", "OnRenderTextureChanged");

	Params::UImagePlateComponent_OnRenderTextureChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImagePlate.ImagePlateComponent.GetPlate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FImagePlateParameters       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FImagePlateParameters UImagePlateComponent::GetPlate()
{
	static auto Func = Class->GetFunction("ImagePlateComponent", "GetPlate");

	Params::UImagePlateComponent_GetPlate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
