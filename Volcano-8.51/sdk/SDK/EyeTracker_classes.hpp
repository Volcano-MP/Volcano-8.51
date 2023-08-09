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

// 0x0 (0x28 - 0x28)
// Class EyeTracker.EyeTrackerFunctionLibrary
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EyeTrackerFunctionLibrary");
		return Clss;
	}

	void SetEyeTrackedPlayer(class APlayerController* PlayerController);
	bool IsStereoGazeDataAvailable();
	bool IsEyeTrackerConnected();
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	bool GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
