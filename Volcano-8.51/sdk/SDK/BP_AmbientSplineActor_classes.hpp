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

// 0x8 (0x2E8 - 0x2E0)
// BlueprintGeneratedClass BP_AmbientSplineActor.BP_AmbientSplineActor_C
class ABP_AmbientSplineActor_C : public AFortSplineAudioActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AmbientSplineActor_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void Check_Closest_Point();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AmbientSplineActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
