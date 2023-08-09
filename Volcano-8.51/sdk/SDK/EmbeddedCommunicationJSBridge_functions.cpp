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


// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.SetEventListener
// (Final, Native, Public)
// Parameters:
// struct FWebJSFunction              Callback                                                         (Parm, NativeAccessSpecifierPublic)

void UEmbeddedCommunicationJSBridge::SetEventListener(const struct FWebJSFunction& Callback)
{
	static auto Func = Class->GetFunction("EmbeddedCommunicationJSBridge", "SetEventListener");

	Params::UEmbeddedCommunicationJSBridge_SetEventListener_Params Parms;

	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.RunCommand
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        Subsystem                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JsonParams                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWebJSResponse              Response                                                         (Parm, NativeAccessSpecifierPublic)

void UEmbeddedCommunicationJSBridge::RunCommand(class FName& Subsystem, const class FString& Command, const class FString& JsonParams, const struct FWebJSResponse& Response)
{
	static auto Func = Class->GetFunction("EmbeddedCommunicationJSBridge", "RunCommand");

	Params::UEmbeddedCommunicationJSBridge_RunCommand_Params Parms;

	Parms.Subsystem = Subsystem;
	Parms.Command = Command;
	Parms.JsonParams = JsonParams;
	Parms.Response = Response;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.PostMessage
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Subsystem                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Command                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JsonParams                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEmbeddedCommunicationJSBridge::PostMessage(const class FString& ID, class FName& Subsystem, const class FString& Command, const class FString& JsonParams)
{
	static auto Func = Class->GetFunction("EmbeddedCommunicationJSBridge", "PostMessage");

	Params::UEmbeddedCommunicationJSBridge_PostMessage_Params Parms;

	Parms.ID = ID;
	Parms.Subsystem = Subsystem;
	Parms.Command = Command;
	Parms.JsonParams = JsonParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
