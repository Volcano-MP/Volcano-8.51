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

// 0x8 (0x8 - 0x0)
// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.GetListItemObject
struct UBundleItemMiniCardWidget_C_GetListItemObject_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Play Anim - Show
struct UBundleItemMiniCardWidget_C_Play_Anim___Show_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Construct
struct UBundleItemMiniCardWidget_C_Construct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.ExecuteUbergraph_BundleItemMiniCardWidget
struct UBundleItemMiniCardWidget_C_ExecuteUbergraph_BundleItemMiniCardWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
