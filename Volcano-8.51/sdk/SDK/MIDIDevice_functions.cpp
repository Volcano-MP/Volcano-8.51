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


// Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      DeviceName                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DeviceID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetMIDIOutputDeviceIDByName(const class FString& DeviceName, int32* DeviceID)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "GetMIDIOutputDeviceIDByName");

	Params::UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params Parms;

	Parms.DeviceName = DeviceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      DeviceName                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DeviceID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetMIDIInputDeviceIDByName(const class FString& DeviceName, int32* DeviceID)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "GetMIDIInputDeviceIDByName");

	Params::UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params Parms;

	Parms.DeviceName = DeviceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIOutputDeviceID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              DeviceID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetDefaultIMIDIOutputDeviceID(int32* DeviceID)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "GetDefaultIMIDIOutputDeviceID");

	Params::UMIDIDeviceManager_GetDefaultIMIDIOutputDeviceID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.GetDefaultIMIDIInputDeviceID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              DeviceID                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::GetDefaultIMIDIInputDeviceID(int32* DeviceID)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "GetDefaultIMIDIInputDeviceID");

	Params::UMIDIDeviceManager_GetDefaultIMIDIInputDeviceID_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (DeviceID != nullptr)
		*DeviceID = Parms.DeviceID;

}


// Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFoundMIDIDevice>    OutMIDIDevices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "FindMIDIDevices");

	Params::UMIDIDeviceManager_FindMIDIDevices_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMIDIDevices != nullptr)
		*OutMIDIDevices = Parms.OutMIDIDevices;

}


// Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMIDIDeviceInfo>     OutMIDIInputDevices                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FMIDIDeviceInfo>     OutMIDIOutputDevices                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UMIDIDeviceManager::FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "FindAllMIDIDeviceInfo");

	Params::UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMIDIInputDevices != nullptr)
		*OutMIDIInputDevices = Parms.OutMIDIInputDevices;

	if (OutMIDIOutputDevices != nullptr)
		*OutMIDIOutputDevices = Parms.OutMIDIOutputDevices;

}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              DeviceID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceOutputController* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceOutputController* UMIDIDeviceManager::CreateMIDIDeviceOutputController(int32 DeviceID)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceOutputController");

	Params::UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params Parms;

	Parms.DeviceID = DeviceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              DeviceID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MIDIBufferSize                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceInputController*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceInputController* UMIDIDeviceManager::CreateMIDIDeviceInputController(int32 DeviceID, int32 MIDIBufferSize)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceInputController");

	Params::UMIDIDeviceManager_CreateMIDIDeviceInputController_Params Parms;

	Parms.DeviceID = DeviceID;
	Parms.MIDIBufferSize = MIDIBufferSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              DeviceID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MIDIBufferSize                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMIDIDeviceController*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(int32 DeviceID, int32 MIDIBufferSize)
{
	static auto Func = Class->GetFunction("MIDIDeviceManager", "CreateMIDIDeviceController");

	Params::UMIDIDeviceManager_CreateMIDIDeviceController_Params Parms;

	Parms.DeviceID = DeviceID;
	Parms.MIDIBufferSize = MIDIBufferSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ProgramNumber                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIProgramChange(int32 Channel, int32 ProgramNumber)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIProgramChange");

	Params::UMIDIDeviceOutputController_SendMIDIProgramChange_Params Parms;

	Parms.Channel = Channel;
	Parms.ProgramNumber = ProgramNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIPitchBend(int32 Channel, int32 Pitch)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIPitchBend");

	Params::UMIDIDeviceOutputController_SendMIDIPitchBend_Params Parms;

	Parms.Channel = Channel;
	Parms.Pitch = Pitch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Note                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDINoteOn(int32 Channel, int32 Note, int32 Velocity)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDINoteOn");

	Params::UMIDIDeviceOutputController_SendMIDINoteOn_Params Parms;

	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Velocity = Velocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Note                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDINoteOff(int32 Channel, int32 Note, int32 Velocity)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDINoteOff");

	Params::UMIDIDeviceOutputController_SendMIDINoteOff_Params Parms;

	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Velocity = Velocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Note                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDINoteAftertouch(int32 Channel, int32 Note, float Amount)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDINoteAftertouch");

	Params::UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params Parms;

	Parms.Channel = Channel;
	Parms.Note = Note;
	Parms.Amount = Amount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMIDIEventType          EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data1                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Data2                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIEvent(enum class EMIDIEventType EventType, int32 Channel, int32 Data1, int32 Data2)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIEvent");

	Params::UMIDIDeviceOutputController_SendMIDIEvent_Params Parms;

	Parms.EventType = EventType;
	Parms.Channel = Channel;
	Parms.Data1 = Data1;
	Parms.Data2 = Data2;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIControlChange(int32 Channel, int32 Type, int32 Value)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIControlChange");

	Params::UMIDIDeviceOutputController_SendMIDIControlChange_Params Parms;

	Parms.Channel = Channel;
	Parms.Type = Type;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMIDIDeviceOutputController::SendMIDIChannelAftertouch(int32 Channel, float Amount)
{
	static auto Func = Class->GetFunction("MIDIDeviceOutputController", "SendMIDIChannelAftertouch");

	Params::UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params Parms;

	Parms.Channel = Channel;
	Parms.Amount = Amount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
