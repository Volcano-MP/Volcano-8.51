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


// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// class FString                      CloseInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RequestClose(const class FString& CloseInfo)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "RequestClose");

	Params::UPurchaseFlowJSBridge_RequestClose_Params Parms;

	Parms.CloseInfo = CloseInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam   RECEIPT                                                          (Parm, NativeAccessSpecifierPublic)

void UPurchaseFlowJSBridge::RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "RECEIPT");

	Params::UPurchaseFlowJSBridge_RECEIPT_Params Parms;

	Parms.RECEIPT = RECEIPT;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
// (Final, Native, Public)
// Parameters:
// class FString                      AllowedBrowserID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPurchaseFlowJSBridge::LaunchValidatedExternalBrowserUrl(const class FString& AllowedBrowserID, const class FString& URL)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "LaunchValidatedExternalBrowserUrl");

	Params::UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Params Parms;

	Parms.AllowedBrowserID = AllowedBrowserID;
	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
// (Final, Native, Public)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPurchaseFlowJSBridge::LaunchExternalBrowserUrl(const class FString& URL)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "LaunchExternalBrowserUrl");

	Params::UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Params Parms;

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
// (Final, Native, Public)
// Parameters:
// class FString                      BrowserId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPurchaseFlowJSBridge::GetExternalBrowserPath(const class FString& BrowserId)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "GetExternalBrowserPath");

	Params::UPurchaseFlowJSBridge_GetExternalBrowserPath_Params Parms;

	Parms.BrowserId = BrowserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
// (Final, Native, Public)
// Parameters:
// class FString                      BrowserId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPurchaseFlowJSBridge::GetExternalBrowserName(const class FString& BrowserId)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "GetExternalBrowserName");

	Params::UPurchaseFlowJSBridge_GetExternalBrowserName_Params Parms;

	Parms.BrowserId = BrowserId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
// (Final, Native, Public)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPurchaseFlowJSBridge::GetDefaultExternalBrowserID(const class FString& URL)
{
	static auto Func = Class->GetFunction("PurchaseFlowJSBridge", "GetDefaultExternalBrowserID");

	Params::UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Params Parms;

	Parms.URL = URL;

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
