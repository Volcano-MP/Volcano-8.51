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
// Function WM_Lights.WM_Lights_C.UserConstructionScript
struct AWM_Lights_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function WM_Lights.WM_Lights_C.ReceiveBeginPlay
struct AWM_Lights_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function WM_Lights.WM_Lights_C.WM-Lightcontrol
struct AWM_Lights_C_WM_Lightcontrol_Params
{
public:
	bool                                         TurnOn;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
struct AWM_Lights_C_ExecuteUbergraph_WM_Lights_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_TurnOn;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
