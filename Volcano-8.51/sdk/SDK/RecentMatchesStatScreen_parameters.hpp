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
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.HandleBack
struct URecentMatchesStatScreen_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_570E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.Construct
struct URecentMatchesStatScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDeactivated
struct URecentMatchesStatScreen_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnActivated
struct URecentMatchesStatScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnStartFetchingData
struct URecentMatchesStatScreen_C_OnStartFetchingData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnNoData
struct URecentMatchesStatScreen_C_OnNoData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnDataRecieved
struct URecentMatchesStatScreen_C_OnDataRecieved_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.OnRecentMatcheChanged
struct URecentMatchesStatScreen_C_OnRecentMatcheChanged_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function RecentMatchesStatScreen.RecentMatchesStatScreen_C.ExecuteUbergraph_RecentMatchesStatScreen
struct URecentMatchesStatScreen_C_ExecuteUbergraph_RecentMatchesStatScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_570F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthenaMatchStatView*>          CallFunc_GetRecentMatches_ReturnValue;             // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
