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


// Function ScreenCapture.ScreenCaptureContext.ToggleMicrophoneRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnableMicrophone                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenCaptureContext::ToggleMicrophoneRecording(bool bEnableMicrophone)
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "ToggleMicrophoneRecording");

	Params::UScreenCaptureContext_ToggleMicrophoneRecording_Params Parms;

	Parms.bEnableMicrophone = bEnableMicrophone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScreenCapture.ScreenCaptureContext.TakeScreenshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScreenCaptureContext::TakeScreenshot()
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "TakeScreenshot");

	Params::UScreenCaptureContext_TakeScreenshot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScreenCapture.ScreenCaptureContext.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsCaptureInterrupted                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenCaptureContext::StopCapture(bool bIsCaptureInterrupted)
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "StopCapture");

	Params::UScreenCaptureContext_StopCapture_Params Parms;

	Parms.bIsCaptureInterrupted = bIsCaptureInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScreenCapture.ScreenCaptureContext.StartCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRecordAppAudio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGeneratePreviewImage                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScreenCaptureContext::StartCapture(bool bInRecordAppAudio, bool bGeneratePreviewImage)
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "StartCapture");

	Params::UScreenCaptureContext_StartCapture_Params Parms;

	Parms.bInRecordAppAudio = bInRecordAppAudio;
	Parms.bGeneratePreviewImage = bGeneratePreviewImage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ScreenCapture.ScreenCaptureContext.SaveToAlbum
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      LocalFilePath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenCaptureContext::SaveToAlbum(const class FString& LocalFilePath)
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "SaveToAlbum");

	Params::UScreenCaptureContext_SaveToAlbum_Params Parms;

	Parms.LocalFilePath = LocalFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScreenCapture.ScreenCaptureContext.RemoveFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      LocalFilePath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenCaptureContext::RemoveFile(const class FString& LocalFilePath)
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "RemoveFile");

	Params::UScreenCaptureContext_RemoveFile_Params Parms;

	Parms.LocalFilePath = LocalFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScreenCapture.ScreenCaptureContext.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScreenCaptureContext::IsRecording()
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "IsRecording");

	Params::UScreenCaptureContext_IsRecording_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ScreenCapture.ScreenCaptureContext.CreateScreenCaptureContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScreenCaptureContext*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScreenCaptureContext* UScreenCaptureContext::CreateScreenCaptureContext(class UObject* WorldContextObject)
{
	static auto Func = Class->GetFunction("ScreenCaptureContext", "CreateScreenCaptureContext");

	Params::UScreenCaptureContext_CreateScreenCaptureContext_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

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
