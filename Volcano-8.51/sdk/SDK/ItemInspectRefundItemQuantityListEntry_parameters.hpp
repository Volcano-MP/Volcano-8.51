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
// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.UpdateItemAndQuantity
struct UItemInspectRefundItemQuantityListEntry_C_UpdateItemAndQuantity_Params
{
public:
	bool                                         DirectlySetQuantity;                               // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinition_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
struct UItemInspectRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP_Params
{
public:
	bool                                         IsBeingReset;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.Construct
struct UItemInspectRefundItemQuantityListEntry_C_Construct_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry
struct UItemInspectRefundItemQuantityListEntry_C_ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsBeingReset;                         // 0x4(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
