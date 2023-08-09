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
// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.OnHeroPawnSetupCompleted
struct ACommandRoomItemPedestal_C_OnHeroPawnSetupCompleted_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function CommandRoomItemPedestal.CommandRoomItemPedestal_C.ExecuteUbergraph_CommandRoomItemPedestal
struct ACommandRoomItemPedestal_C_ExecuteUbergraph_CommandRoomItemPedestal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3746[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_PlayAnimationsMatchingQuery_self_CastInput; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
