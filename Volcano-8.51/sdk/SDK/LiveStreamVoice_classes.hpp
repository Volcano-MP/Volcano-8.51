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

// 0x0 (0x80 - 0x80)
// Class LiveStreamVoice.LiveStreamVoiceChannel
class ULiveStreamVoiceChannel : public UVoiceChannel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveStreamVoiceChannel");
		return Clss;
	}

};

// 0x18 (0x48 - 0x30)
// Class LiveStreamVoice.LiveStreamVoiceSubsystem
class ULiveStreamVoiceSubsystem : public UGameInstanceSubsystem
{
public:
	struct FVoiceSettings                        PlaybackSettings;                                  // 0x30(0x18)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveStreamVoiceSubsystem");
		return Clss;
	}

	void SetVoiceSettings(struct FVoiceSettings& InSettings);
	void EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable);
	void ClearVoiceSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
