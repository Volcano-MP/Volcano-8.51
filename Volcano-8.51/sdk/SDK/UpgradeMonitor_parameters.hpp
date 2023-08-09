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
// Function UpgradeMonitor.UpgradeMonitor_C.SetMonitorDistort
struct AUpgradeMonitor_C_SetMonitorDistort_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.SetUtilities-Icon
struct AUpgradeMonitor_C_SetUtilities_Icon_Params
{
public:
	class UTexture2D*                            Active_Icon;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.UserConstructionScript
struct AUpgradeMonitor_C_UserConstructionScript_Params
{
public:
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__FinishedFunc
struct AUpgradeMonitor_C_IconTransition__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__UpdateFunc
struct AUpgradeMonitor_C_IconTransition__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Utilities
struct AUpgradeMonitor_C_Activate_Utilities_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Gadgets
struct AUpgradeMonitor_C_Activate_Gadgets_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.Activation-Distortion
struct AUpgradeMonitor_C_Activation_Distortion_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function UpgradeMonitor.UpgradeMonitor_C.ExecuteUbergraph_UpgradeMonitor
struct AUpgradeMonitor_C_ExecuteUbergraph_UpgradeMonitor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
