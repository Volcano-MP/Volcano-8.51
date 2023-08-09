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

// 0x10 (0x10 - 0x0)
// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.RefreshTick
struct UStreamingInstallProgressBar_C_RefreshTick_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ContentInstallationProgress_ReturnValue;  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ToggleTimer
struct UStreamingInstallProgressBar_C_ToggleTimer_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_49E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Construct
struct UStreamingInstallProgressBar_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.Destruct
struct UStreamingInstallProgressBar_C_Destruct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function StreamingInstallProgressBar.StreamingInstallProgressBar_C.ExecuteUbergraph_StreamingInstallProgressBar
struct UStreamingInstallProgressBar_C_ExecuteUbergraph_StreamingInstallProgressBar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
