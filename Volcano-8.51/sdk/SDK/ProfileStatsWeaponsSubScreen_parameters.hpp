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
// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleBack
struct UProfileStatsWeaponsSubScreen_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.Construct
struct UProfileStatsWeaponsSubScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleStatViewChanged
struct UProfileStatsWeaponsSubScreen_C_HandleStatViewChanged_Params
{
public:
	class UAthenaBaseStatView*                   StatView;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.ExecuteUbergraph_ProfileStatsWeaponsSubScreen
struct UProfileStatsWeaponsSubScreen_C_ExecuteUbergraph_ProfileStatsWeaponsSubScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5C0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaBaseStatView*                   K2Node_CustomEvent_StatView;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchStatView*                  K2Node_DynamicCast_AsAthena_Match_Stat_View;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthenaWeaponStatView*>         CallFunc_GetWeaponViews_ReturnValue;               // 0x40(0x10)(ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
