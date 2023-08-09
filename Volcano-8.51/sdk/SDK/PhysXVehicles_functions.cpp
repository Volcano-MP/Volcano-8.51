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


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseAuto                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetUseAutoGears");

	Params::UWheeledVehicleMovementComponent_SetUseAutoGears_Params Parms;

	Parms.bUseAuto = bUseAuto;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Throttle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetThrottleInput");

	Params::UWheeledVehicleMovementComponent_SetThrottleInput_Params Parms;

	Parms.Throttle = Throttle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GearNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetTargetGear(int32 GearNum, bool bImmediate)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetTargetGear");

	Params::UWheeledVehicleMovementComponent_SetTargetGear_Params Parms;

	Parms.GearNum = GearNum;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Steering                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetSteeringInput");

	Params::UWheeledVehicleMovementComponent_SetSteeringInput_Params Parms;

	Parms.Steering = Steering;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewHandbrake                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetHandbrakeInput");

	Params::UWheeledVehicleMovementComponent_SetHandbrakeInput_Params Parms;

	Parms.bNewHandbrake = bNewHandbrake;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask           GroupMask                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToIgnoreMask");

	Params::UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params Parms;

	Parms.GroupMask = GroupMask;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupFlags                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int32 GroupFlags)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToIgnore");

	Params::UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params Parms;

	Parms.GroupFlags = GroupFlags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask           GroupMask                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToAvoidMask");

	Params::UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params Parms;

	Parms.GroupMask = GroupMask;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupFlags                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int32 GroupFlags)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToAvoid");

	Params::UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params Parms;

	Parms.GroupFlags = GroupFlags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGearUp");

	Params::UWheeledVehicleMovementComponent_SetGearUp_Params Parms;

	Parms.bNewGearUp = bNewGearUp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetGearDown");

	Params::UWheeledVehicleMovementComponent_SetGearDown_Params Parms;

	Parms.bNewGearDown = bNewGearDown;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Brake                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetBrakeInput");

	Params::UWheeledVehicleMovementComponent_SetBrakeInput_Params Parms;

	Parms.Brake = Brake;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask           GroupMask                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceGroupMask");

	Params::UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params Parms;

	Parms.GroupMask = GroupMask;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GroupFlags                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int32 GroupFlags)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceGroup");

	Params::UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params Parms;

	Parms.GroupFlags = GroupFlags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceEnabled");

	Params::UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params Parms;

	Parms.bEnable = bEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                              InSteeringInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThrottleInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InBrakeInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InHandbrakeInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CurrentGear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear)
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "ServerUpdateState");

	Params::UWheeledVehicleMovementComponent_ServerUpdateState_Params Parms;

	Parms.InSteeringInput = InSteeringInput;
	Parms.InThrottleInput = InThrottleInput;
	Parms.InBrakeInput = InBrakeInput;
	Parms.InHandbrakeInput = InHandbrakeInput;
	Parms.CurrentGear = CurrentGear;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetUseAutoGears");

	Params::UWheeledVehicleMovementComponent_GetUseAutoGears_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWheeledVehicleMovementComponent::GetTargetGear()
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetTargetGear");

	Params::UWheeledVehicleMovementComponent_GetTargetGear_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetForwardSpeed");

	Params::UWheeledVehicleMovementComponent_GetForwardSpeed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetEngineRotationSpeed");

	Params::UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetEngineMaxRotationSpeed");

	Params::UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static auto Func = Class->GetFunction("WheeledVehicleMovementComponent", "GetCurrentGear");

	Params::UWheeledVehicleMovementComponent_GetCurrentGear_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SteerAngle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int32 WheelIndex)
{
	static auto Func = Class->GetFunction("SimpleWheeledVehicleMovementComponent", "SetSteerAngle");

	Params::USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params Parms;

	Parms.SteerAngle = SteerAngle;
	Parms.WheelIndex = WheelIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DriveTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32 WheelIndex)
{
	static auto Func = Class->GetFunction("SimpleWheeledVehicleMovementComponent", "SetDriveTorque");

	Params::USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params Parms;

	Parms.DriveTorque = DriveTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              BrakeTorque                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32 WheelIndex)
{
	static auto Func = Class->GetFunction("SimpleWheeledVehicleMovementComponent", "SetBrakeTorque");

	Params::USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params Parms;

	Parms.BrakeTorque = BrakeTorque;
	Parms.WheelIndex = WheelIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehicle*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static auto Func = Class->GetFunction("VehicleAnimInstance", "GetVehicle");

	Params::UVehicleAnimInstance_GetVehicle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.VehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVehicleWheel::IsInAir()
{
	static auto Func = Class->GetFunction("VehicleWheel", "IsInAir");

	Params::UVehicleWheel_IsInAir_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleWheel::GetSuspensionOffset()
{
	static auto Func = Class->GetFunction("VehicleWheel", "GetSuspensionOffset");

	Params::UVehicleWheel_GetSuspensionOffset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleWheel::GetSteerAngle()
{
	static auto Func = Class->GetFunction("VehicleWheel", "GetSteerAngle");

	Params::UVehicleWheel_GetSteerAngle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVehicleWheel::GetRotationAngle()
{
	static auto Func = Class->GetFunction("VehicleWheel", "GetRotationAngle");

	Params::UVehicleWheel_GetRotationAngle_Params Parms;


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
