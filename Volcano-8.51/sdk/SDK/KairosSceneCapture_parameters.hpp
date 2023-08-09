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

// 0x1 (0x1 - 0x0)
// Function KairosSceneCapture.KairosCaptureStatics.ToggleAutoRotate
struct UKairosCaptureStatics_ToggleAutoRotate_Params
{
public:
	bool                                         bIsAutoRotateAllowed;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function KairosSceneCapture.KairosCaptureStatics.PauseOrResumeSnippet
struct UKairosCaptureStatics_PauseOrResumeSnippet_Params
{
public:
	struct FKairosSnippetParams                  Params;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	struct FWebJSResponse                        Response;                                          // 0x18(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function KairosSceneCapture.KairosCaptureStatics.GetSceneManager
struct UKairosCaptureStatics_GetSceneManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AKairosSceneManagerActor*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function KairosSceneCapture.KairosGameModeBase.GetDefaultConfig
struct AKairosGameModeBase_GetDefaultConfig_Params
{
public:
	class UKairosConfig*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function KairosSceneCapture.KairosHeroBase.EndCapture
struct AKairosHeroBase_EndCapture_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function KairosSceneCapture.KairosHeroBase.BeginCapture
struct AKairosHeroBase_BeginCapture_Params
{
public:
	struct FKairosAnimationFramingInfo           FramingInfo;                                       // 0x0(0x50)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FKairosCaptureParams                  CaptureParams;                                     // 0x50(0x100)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x150(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C00[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function KairosSceneCapture.KairosSceneManagerActor.StopAR
struct AKairosSceneManagerActor_StopAR_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function KairosSceneCapture.KairosSceneManagerActor.PauseOrResumeSnippet
struct AKairosSceneManagerActor_PauseOrResumeSnippet_Params
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldPase;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C03[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function KairosSceneCapture.KairosSceneManagerActor.OLD_OnSceneSetupComplete
struct AKairosSceneManagerActor_OLD_OnSceneSetupComplete_Params
{
public:
	struct FKairosSceneInfo                      CompleteSceneInfoCopy;                             // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function KairosSceneCapture.KairosSceneManagerActor.LoadWorldARMode
struct AKairosSceneManagerActor_LoadWorldARMode_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function KairosSceneCapture.KairosSceneManagerActor.GetSceneInfo
struct AKairosSceneManagerActor_GetSceneInfo_Params
{
public:
	struct FKairosSceneInfo                      ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function KairosSceneCapture.KairosSceneManagerActor.BeginEmotePlaybackForPlayer
struct AKairosSceneManagerActor_BeginEmotePlaybackForPlayer_Params
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmoteID;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
