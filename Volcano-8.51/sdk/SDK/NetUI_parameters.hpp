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
// Function NetUI.BadNetworkIndicator.UpdateDisplay
struct UBadNetworkIndicator_UpdateDisplay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function NetUI.BadNetworkIndicator.ShouldDisplay
struct UBadNetworkIndicator_ShouldDisplay_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NetUI.BadNetworkIndicator.HasSeverePing
struct UBadNetworkIndicator_HasSeverePing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NetUI.BadNetworkIndicator.HasSeverePacketLoss
struct UBadNetworkIndicator_HasSeverePacketLoss_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NetUI.BadNetworkIndicator.HasBadPing
struct UBadNetworkIndicator_HasBadPing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NetUI.BadNetworkIndicator.HasBadPacketLoss
struct UBadNetworkIndicator_HasBadPacketLoss_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NetUI.BadNetworkIndicator.GetPing
struct UBadNetworkIndicator_GetPing_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NetUI.BadNetworkIndicator.GetPacketLoss
struct UBadNetworkIndicator_GetPacketLoss_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NetUI.NetDebugWidget.StopTimer
struct UNetDebugWidget_StopTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function NetUI.NetDebugWidget.StartTimer
struct UNetDebugWidget_StartTimer_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
