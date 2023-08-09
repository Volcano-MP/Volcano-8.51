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
// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.HandleBack
struct UProfileStatsOverviewSubScreen_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.Construct
struct UProfileStatsOverviewSubScreen_C_Construct_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.ExecuteUbergraph_ProfileStatsOverviewSubScreen
struct UProfileStatsOverviewSubScreen_C_ExecuteUbergraph_ProfileStatsOverviewSubScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
