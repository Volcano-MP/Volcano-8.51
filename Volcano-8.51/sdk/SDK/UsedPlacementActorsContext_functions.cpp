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


// Function UsedPlacementActorsContext.UsedPlacementActorsContext_C.ProvideActorsSet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm, ZeroConstructor)
// TArray<class AActor*>              CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors(ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void UUsedPlacementActorsContext_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class AActor*>& CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors, bool CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue)
{
	static auto Func = Class->GetFunction("UsedPlacementActorsContext_C", "ProvideActorsSet");

	Params::UUsedPlacementActorsContext_C_ProvideActorsSet_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors = CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors;
	Parms.CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue = CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = Parms.ResultingActorsSet;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
