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

// 0x35 (0x5D - 0x28)
// BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C
class UGen_ReadyUp_StartObjective_C : public UFortMissionEventParams
{
public:
	float                                        ReadyUpTimerLength;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InteractText;                                      // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                    InteractSpawnLocation;                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        BluGloMissionActivationQty;                        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFightTheStorm;                                   // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Gen_ReadyUp_StartObjective_C");
		return Clss;
	}

	void SetParams(float ReadyUpTimerLength, TArray<struct FTransform>& InteractSpawnLocation, class FText InteractText, int32 BluGloMissionActivationQty, bool IsFightTheStorm, class UGen_ReadyUp_StartObjective_C** ThisObject);
	void BreakParams(float* ReadyUpTimerLength, TArray<struct FTransform>* InteractSpawnLocation, class FText* InteractText, int32* BluGloMissionActivationQty, bool* IsFightTheStorm);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
