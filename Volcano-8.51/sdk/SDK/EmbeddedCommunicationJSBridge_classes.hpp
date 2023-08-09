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

// 0x20 (0x48 - 0x28)
// Class EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge
class UEmbeddedCommunicationJSBridge : public UObject
{
public:
	uint8                                        Pad_1150[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EmbeddedCommunicationJSBridge");
		return Clss;
	}

	void SetEventListener(const struct FWebJSFunction& Callback);
	void RunCommand(class FName& Subsystem, const class FString& Command, const class FString& JsonParams, const struct FWebJSResponse& Response);
	void PostMessage(const class FString& ID, class FName& Subsystem, const class FString& Command, const class FString& JsonParams);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
