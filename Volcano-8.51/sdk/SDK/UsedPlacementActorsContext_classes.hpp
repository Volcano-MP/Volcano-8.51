#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x78 - 0x30)
// BlueprintGeneratedClass UsedPlacementActorsContext.UsedPlacementActorsContext_C
class UUsedPlacementActorsContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	struct FGameplayTagQuery                     UsedTagsAddedQuery;                                // 0x30(0x48)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UsedPlacementActorsContext_C");
		return Clss;
	}

	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class AActor*>& CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_SpawnLocationActors, bool CallFunc_GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
