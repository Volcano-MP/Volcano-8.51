#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
struct UFortMediaSubtitlesPlayer_Stop_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
struct UFortMediaSubtitlesPlayer_SetSubtitles_Params
{
public:
	class UOverlays*                             Subtitles;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
struct UFortMediaSubtitlesPlayer_Play_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
struct UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
struct USubtitleDisplay_HasSubtitles_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
