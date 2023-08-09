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
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP
struct UAthenaCustomizationPicker_C_HandleDifferentFilterSetBP_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter
struct UAthenaCustomizationPicker_C_OnNoItemsAvailableInFilter_Params
{
public:
	class FText                                  EmptyDisplayText;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter
struct UAthenaCustomizationPicker_C_OnItemsAvailableInFilter_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker
struct UAthenaCustomizationPicker_C_ExecuteUbergraph_AthenaCustomizationPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CE8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetQualifiedFilterDisplayName_ReturnValue; // 0x8(0x18)()
	class FText                                  K2Node_Event_EmptyDisplayText;                     // 0x20(0x18)(ConstParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature
struct UAthenaCustomizationPicker_C_OnEnableSaveButton__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature
struct UAthenaCustomizationPicker_C_OnDisableSaveButton__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
