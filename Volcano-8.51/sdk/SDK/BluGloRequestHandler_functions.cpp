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


// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsRandomly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBluGloRequestHandler_C::BuildLocationsRandomly()
{
	static auto Func = Class->GetFunction("BluGloRequestHandler_C", "BuildLocationsRandomly");

	Params::UBluGloRequestHandler_C_BuildLocationsRandomly_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             QueryResultLocations                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBluGloRequestHandler_C::BuildLocationsFromQueryLocations(TArray<struct FVector>& QueryResultLocations)
{
	static auto Func = Class->GetFunction("BluGloRequestHandler_C", "BuildLocationsFromQueryLocations");

	Params::UBluGloRequestHandler_C_BuildLocationsFromQueryLocations_Params Parms;

	Parms.QueryResultLocations = QueryResultLocations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBluGloRequestHandler_C::EQSQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static auto Func = Class->GetFunction("BluGloRequestHandler_C", "EQSQueryFinished");

	Params::UBluGloRequestHandler_C_EQSQueryFinished_Params Parms;

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumBluGloToSpawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorToSpawnFrom                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationToSpawnFromIfActorInvalid                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBluGloRequestHandler_C::InitializeBluGloRequestHandler(int32 NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid)
{
	static auto Func = Class->GetFunction("BluGloRequestHandler_C", "InitializeBluGloRequestHandler");

	Params::UBluGloRequestHandler_C_InitializeBluGloRequestHandler_Params Parms;

	Parms.NumBluGloToSpawn = NumBluGloToSpawn;
	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_NumBluGloToSpawn                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorToSpawnFrom                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBluGloRequestHandler_C::ExecuteUbergraph_BluGloRequestHandler(int32 EntryPoint, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_NumBluGloToSpawn, class AActor* K2Node_CustomEvent_ActorToSpawnFrom, const struct FVector& K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid)
{
	static auto Func = Class->GetFunction("BluGloRequestHandler_C", "ExecuteUbergraph_BluGloRequestHandler");

	Params::UBluGloRequestHandler_C_ExecuteUbergraph_BluGloRequestHandler_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NumBluGloToSpawn = K2Node_CustomEvent_NumBluGloToSpawn;
	Parms.K2Node_CustomEvent_ActorToSpawnFrom = K2Node_CustomEvent_ActorToSpawnFrom;
	Parms.K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid = K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorToSpawnFrom                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocationToSpawnFromIfActorInvalid                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumBluGloToSpawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBluGloRequestHandler_C::OnBluGloQueryFinished__DelegateSignature(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn)
{
	static auto Func = Class->GetFunction("BluGloRequestHandler_C", "OnBluGloQueryFinished__DelegateSignature");

	Params::UBluGloRequestHandler_C_OnBluGloQueryFinished__DelegateSignature_Params Parms;

	Parms.ActorToSpawnFrom = ActorToSpawnFrom;
	Parms.LocationToSpawnFromIfActorInvalid = LocationToSpawnFromIfActorInvalid;
	Parms.QueryStatus = QueryStatus;
	Parms.QueryInstance = QueryInstance;
	Parms.NumBluGloToSpawn = NumBluGloToSpawn;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
