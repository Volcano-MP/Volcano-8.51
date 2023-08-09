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


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneCaptureProtocolBase::IsCapturing()
{
	static auto Func = Class->GetFunction("MovieSceneCaptureProtocolBase", "IsCapturing");

	Params::UMovieSceneCaptureProtocolBase_IsCapturing_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieSceneCaptureProtocolStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
{
	static auto Func = Class->GetFunction("MovieSceneCaptureProtocolBase", "GetState");

	Params::UMovieSceneCaptureProtocolBase_GetState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMovieSceneCaptureProtocolBase>ProtocolType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCapture::SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType)
{
	static auto Func = Class->GetFunction("MovieSceneCapture", "SetImageCaptureProtocolType");

	Params::UMovieSceneCapture_SetImageCaptureProtocolType_Params Parms;

	Parms.ProtocolType = ProtocolType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UMovieSceneCaptureProtocolBase>ProtocolType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCapture::SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType)
{
	static auto Func = Class->GetFunction("MovieSceneCapture", "SetAudioCaptureProtocolType");

	Params::UMovieSceneCapture_SetAudioCaptureProtocolType_Params Parms;

	Parms.ProtocolType = ProtocolType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
	static auto Func = Class->GetFunction("MovieSceneCapture", "GetImageCaptureProtocol");

	Params::UMovieSceneCapture_GetImageCaptureProtocol_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
	static auto Func = Class->GetFunction("MovieSceneCapture", "GetAudioCaptureProtocol");

	Params::UMovieSceneCapture_GetAudioCaptureProtocol_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
{
	static auto Func = Class->GetFunction("MovieSceneCaptureEnvironment", "IsCaptureInProgress");

	Params::UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static auto Func = Class->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureFrameNumber");

	Params::UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static auto Func = Class->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureElapsedTime");

	Params::UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneImageCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
{
	static auto Func = Class->GetFunction("MovieSceneCaptureEnvironment", "FindImageCaptureProtocol");

	Params::UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneAudioCaptureProtocolBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
{
	static auto Func = Class->GetFunction("MovieSceneCaptureEnvironment", "FindAudioCaptureProtocol");

	Params::UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "StopCapturingFinalPixels");

	Params::UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCapturedPixelsID           StreamID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID)
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "StartCapturingFinalPixels");

	Params::UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params Parms;

	Parms.StreamID = StreamID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                    Buffer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           BufferID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, struct FCapturedPixelsID& BufferID)
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "ResolveBuffer");

	Params::UUserDefinedCaptureProtocol_ResolveBuffer_Params Parms;

	Parms.Buffer = Buffer;
	Parms.BufferID = BufferID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnWarmUp");

	Params::UUserDefinedCaptureProtocol_OnWarmUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnTick()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnTick");

	Params::UUserDefinedCaptureProtocol_OnTick_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnStartCapture");

	Params::UUserDefinedCaptureProtocol_OnStartCapture_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserDefinedCaptureProtocol::OnSetup()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnSetup");

	Params::UUserDefinedCaptureProtocol_OnSetup_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnPreTick()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPreTick");

	Params::UUserDefinedCaptureProtocol_OnPreTick_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCapturedPixels             Pixels                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFrameMetrics               FrameMetrics                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserDefinedCaptureProtocol::OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics)
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPixelsReceived");

	Params::UUserDefinedCaptureProtocol_OnPixelsReceived_Params Parms;

	Parms.Pixels = Pixels;
	Parms.ID = ID;
	Parms.FrameMetrics = FrameMetrics;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnPauseCapture");

	Params::UUserDefinedCaptureProtocol_OnPauseCapture_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnFinalize()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnFinalize");

	Params::UUserDefinedCaptureProtocol_OnFinalize_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnCaptureFrame");

	Params::UUserDefinedCaptureProtocol_OnCaptureFrame_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserDefinedCaptureProtocol::OnCanFinalize()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnCanFinalize");

	Params::UUserDefinedCaptureProtocol_OnCanFinalize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "OnBeginFinalize");

	Params::UUserDefinedCaptureProtocol_OnBeginFinalize_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameMetrics               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "GetCurrentFrameMetrics");

	Params::UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameMetrics               InFrameMetrics                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserDefinedCaptureProtocol::GenerateFilename(struct FFrameMetrics& InFrameMetrics)
{
	static auto Func = Class->GetFunction("UserDefinedCaptureProtocol", "GenerateFilename");

	Params::UUserDefinedCaptureProtocol_GenerateFilename_Params Parms;

	Parms.InFrameMetrics = InFrameMetrics;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCapturedPixels             PixelData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           StreamID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFrameMetrics               FrameMetrics                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bCopyImageData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static auto Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "WriteImageToDisk");

	Params::UUserDefinedImageCaptureProtocol_WriteImageToDisk_Params Parms;

	Parms.PixelData = PixelData;
	Parms.StreamID = StreamID;
	Parms.FrameMetrics = FrameMetrics;
	Parms.bCopyImageData = bCopyImageData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static auto Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForCurrentFrame");

	Params::UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture*                    Buffer                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCapturedPixelsID           StreamID                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, struct FCapturedPixelsID& StreamID)
{
	static auto Func = Class->GetFunction("UserDefinedImageCaptureProtocol", "GenerateFilenameForBuffer");

	Params::UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Params Parms;

	Parms.Buffer = Buffer;
	Parms.StreamID = StreamID;

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
