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

// 0x128 (0x128 - 0x0)
// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.Update
struct UWeaponSummaryListEntryWidget_C_Update_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaBaseStatView*                   CallFunc_GetBaseStatView_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaWeaponStatView*                 K2Node_DynamicCast_AsAthena_Weapon_Stat_View;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponDefinition_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4449[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x38(0x80)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xB8(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0xD0(0x18)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xE8(0x28)()
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x110(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.OnStatChanged
struct UWeaponSummaryListEntryWidget_C_OnStatChanged_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.ExecuteUbergraph_WeaponSummaryListEntryWidget
struct UWeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
