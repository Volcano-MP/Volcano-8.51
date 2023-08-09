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
// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger
struct ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
struct ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Params
{
public:
	class FString                                SubjectName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
struct ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Params
{
public:
	struct FIntPoint                             Size;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
struct ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Params
{
public:
	float                                        CurveValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           ReturnValue;                                       // 0x8(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
