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


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetUserName(const class FString& Name)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "SetUserName");

	Params::UCrashlyticsBlueprintLibrary_SetUserName_Params Parms;

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserIdentifier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ID                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetUserIdentifier(const class FString& ID)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "SetUserIdentifier");

	Params::UCrashlyticsBlueprintLibrary_SetUserIdentifier_Params Parms;

	Parms.ID = ID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetUserEmail
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetUserEmail(const class FString& Email)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "SetUserEmail");

	Params::UCrashlyticsBlueprintLibrary_SetUserEmail_Params Parms;

	Parms.Email = Email;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetStringKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetStringKey(const class FString& Key, const class FString& Value)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "SetStringKey");

	Params::UCrashlyticsBlueprintLibrary_SetStringKey_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetIntegerKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetIntegerKey(const class FString& Key, int32 Value)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "SetIntegerKey");

	Params::UCrashlyticsBlueprintLibrary_SetIntegerKey_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetFloatKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetFloatKey(const class FString& Key, float Value)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "SetFloatKey");

	Params::UCrashlyticsBlueprintLibrary_SetFloatKey_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.SetBooleanKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::SetBooleanKey(const class FString& Key, bool Value)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "SetBooleanKey");

	Params::UCrashlyticsBlueprintLibrary_SetBooleanKey_Params Parms;

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.LogMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MESSAGE                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::LogMessage(const class FString& MESSAGE)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "LogMessage");

	Params::UCrashlyticsBlueprintLibrary_LogMessage_Params Parms;

	Parms.MESSAGE = MESSAGE;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Crashlytics.CrashlyticsBlueprintLibrary.LogException
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MESSAGE                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrashlyticsBlueprintLibrary::LogException(const class FString& MESSAGE)
{
	static auto Func = Class->GetFunction("CrashlyticsBlueprintLibrary", "LogException");

	Params::UCrashlyticsBlueprintLibrary_LogException_Params Parms;

	Parms.MESSAGE = MESSAGE;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
