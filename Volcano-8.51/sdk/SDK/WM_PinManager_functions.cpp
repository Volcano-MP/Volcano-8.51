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


// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheaterId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AWorldMapPin*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTheaterMapData         CallFunc_GetTheaterData_OutTheaterData                           ()
// bool                               CallFunc_GetTheaterData_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorldMapPin*                CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AWorldMapPin* AWM_PinManager_C::CreateWorldMapPin(const class FString& TheaterId, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, const struct FFortTheaterMapData& CallFunc_GetTheaterData_OutTheaterData, bool CallFunc_GetTheaterData_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AWorldMapPin* CallFunc_FinishSpawningActor_ReturnValue)
{
	static auto Func = Class->GetFunction("WM_PinManager_C", "CreateWorldMapPin");

	Params::AWM_PinManager_C_CreateWorldMapPin_Params Parms;

	Parms.TheaterId = TheaterId;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTheaterData_OutTheaterData = CallFunc_GetTheaterData_OutTheaterData;
	Parms.CallFunc_GetTheaterData_ReturnValue = CallFunc_GetTheaterData_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWM_PinManager_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("WM_PinManager_C", "ReceiveBeginPlay");

	Params::AWM_PinManager_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_PinManager_C::ExecuteUbergraph_WM_PinManager(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("WM_PinManager_C", "ExecuteUbergraph_WM_PinManager");

	Params::AWM_PinManager_C_ExecuteUbergraph_WM_PinManager_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
