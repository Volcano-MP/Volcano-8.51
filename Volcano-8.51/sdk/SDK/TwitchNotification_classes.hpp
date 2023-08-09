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

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass TwitchNotification.TwitchNotification_C
class UTwitchNotification_C : public UFortUIFriendNotification
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TwitchNotification_C");
		return Clss;
	}

	class UTexture2D* GetImageOverride();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
