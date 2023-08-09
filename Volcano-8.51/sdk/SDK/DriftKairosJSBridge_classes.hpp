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
// Class DriftKairosJSBridge.DriftKairosCommonJSBridge
class UDriftKairosCommonJSBridge : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DriftKairosCommonJSBridge");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class DriftKairosJSBridge.DanceChallengesJSBridge
class UDanceChallengesJSBridge : public UDriftKairosCommonJSBridge
{
public:
	uint8                                        Pad_2BEB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DanceChallengesJSBridge");
		return Clss;
	}

	void GetDanceChallenges(const struct FWebJSResponse& Response);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
