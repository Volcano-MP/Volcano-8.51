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

// 0x48 (0xC0 - 0x78)
// BlueprintGeneratedClass BluGloRequestHandler.BluGloRequestHandler_C
class UBluGloRequestHandler_C : public UEnvQueryInstanceBlueprintWrapper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	UMulticastInlineDelegateProperty_            OnBluGloQueryFinished;                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        NumBluGloToSpawn;                                  // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_571F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ActorToSpawnFrom;                                  // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocationToSpawnFrom;                               // 0xA0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5720[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       LocationsToSpawnTo;                                // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BluGloRequestHandler_C");
		return Clss;
	}

	void BuildLocationsRandomly();
	void BuildLocationsFromQueryLocations(TArray<struct FVector>& QueryResultLocations);
	void EQSQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void InitializeBluGloRequestHandler(int32 NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid);
	void ExecuteUbergraph_BluGloRequestHandler(int32 EntryPoint, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_NumBluGloToSpawn, class AActor* K2Node_CustomEvent_ActorToSpawnFrom, const struct FVector& K2Node_CustomEvent_LocationToSpawnFromIfActorInvalid);
	void OnBluGloQueryFinished__DelegateSignature(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, enum class EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
