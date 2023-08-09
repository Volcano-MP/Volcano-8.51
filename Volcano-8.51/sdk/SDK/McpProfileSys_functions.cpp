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


// Function McpProfileSys.McpProfile.UnlockProfileForWrite
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// class FString                      Code                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDedicatedServerUrlContext  Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context)
{
	static auto Func = Class->GetFunction("McpProfile", "UnlockProfileForWrite");

	Params::UMcpProfile_UnlockProfileForWrite_Params Parms;

	Parms.Code = Code;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function McpProfileSys.McpProfile.QueryPublicProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FBaseUrlContext             Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::QueryPublicProfile(struct FBaseUrlContext* Context)
{
	static auto Func = Class->GetFunction("McpProfile", "QueryPublicProfile");

	Params::UMcpProfile_QueryPublicProfile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function McpProfileSys.McpProfile.QueryProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FBaseUrlContext             Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::QueryProfile(struct FBaseUrlContext* Context)
{
	static auto Func = Class->GetFunction("McpProfile", "QueryProfile");

	Params::UMcpProfile_QueryProfile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function McpProfileSys.McpProfile.LockProfileForWrite
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// class FString                      Code                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Timeout                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDedicatedServerUrlContext  Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context)
{
	static auto Func = Class->GetFunction("McpProfile", "LockProfileForWrite");

	Params::UMcpProfile_LockProfileForWrite_Params Parms;

	Parms.Code = Code;
	Parms.Timeout = Timeout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function McpProfileSys.McpProfile.DeleteProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FClientUrlContext           Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::DeleteProfile(struct FClientUrlContext* Context)
{
	static auto Func = Class->GetFunction("McpProfile", "DeleteProfile");

	Params::UMcpProfile_DeleteProfile_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function McpProfileSys.McpProfile.DeleteAllProfiles
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParams)
// Parameters:
// struct FClientUrlContext           Context                                                          (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::DeleteAllProfiles(struct FClientUrlContext* Context)
{
	static auto Func = Class->GetFunction("McpProfile", "DeleteAllProfiles");

	Params::UMcpProfile_DeleteAllProfiles_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Context != nullptr)
		*Context = Parms.Context;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
