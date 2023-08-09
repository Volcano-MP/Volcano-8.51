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


// Function ControlRig.ControlRig.SetGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        JointName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InTransform                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UControlRig::SetGlobalTransform(class FName JointName, struct FTransform& InTransform)
{
	static auto Func = Class->GetFunction("ControlRig", "SetGlobalTransform");

	Params::UControlRig_SetGlobalTransform_Params Parms;

	Parms.JointName = JointName;
	Parms.InTransform = InTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRig.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        JointName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UControlRig::GetGlobalTransform(class FName JointName)
{
	static auto Func = Class->GetFunction("ControlRig", "GetGlobalTransform");

	Params::UControlRig_GetGlobalTransform_Params Parms;

	Parms.JointName = JointName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRig.GetDeltaTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UControlRig::GetDeltaTime()
{
	static auto Func = Class->GetFunction("ControlRig", "GetDeltaTime");

	Params::UControlRig_GetDeltaTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UControlRigComponent::OnPreInitialize()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPreInitialize");

	Params::UControlRigComponent_OnPreInitialize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPreEvaluate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UControlRigComponent::OnPreEvaluate()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPreEvaluate");

	Params::UControlRigComponent_OnPreEvaluate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UControlRigComponent::OnPostInitialize()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPostInitialize");

	Params::UControlRigComponent_OnPostInitialize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.OnPostEvaluate
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UControlRigComponent::OnPostEvaluate()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "OnPostEvaluate");

	Params::UControlRigComponent_OnPostEvaluate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ControlRig.ControlRigComponent.BP_GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UControlRig* UControlRigComponent::BP_GetControlRig()
{
	static auto Func = Class->GetFunction("ControlRigComponent", "BP_GetControlRig");

	Params::UControlRigComponent_BP_GetControlRig_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ControlRig.ControlRigControl.OnTransformChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AControlRigControl::OnTransformChanged(struct FTransform& NewTransform)
{
	static auto Func = Class->GetFunction("ControlRigControl", "OnTransformChanged");

	Params::AControlRigControl_OnTransformChanged_Params Parms;

	Parms.NewTransform = NewTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigControl.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ControlRigControl", "OnSelectionChanged");

	Params::AControlRigControl_OnSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigControl.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsManipulating                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnManipulatingChanged(bool bIsManipulating)
{
	static auto Func = Class->GetFunction("ControlRigControl", "OnManipulatingChanged");

	Params::AControlRigControl_OnManipulatingChanged_Params Parms;

	Parms.bIsManipulating = bIsManipulating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigControl.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnHoveredChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ControlRigControl", "OnHoveredChanged");

	Params::AControlRigControl_OnHoveredChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigControl.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnEnabledChanged(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ControlRigControl", "OnEnabledChanged");

	Params::AControlRigControl_OnEnabledChanged_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
