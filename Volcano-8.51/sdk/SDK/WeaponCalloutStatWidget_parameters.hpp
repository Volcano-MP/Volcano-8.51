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

// 0x1F0 (0x1F0 - 0x0)
// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.Update
struct UWeaponCalloutStatWidget_C_Update_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIStatStyle                      CallFunc_GetStatStyle_ReturnValue;                 // 0x8(0xC0)(ConstParm)
	class UAthenaBaseStatView*                   CallFunc_GetBaseStatView_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetStat_ReturnValue;                      // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaWeaponStatView*                 K2Node_DynamicCast_AsAthena_Weapon_Stat_View;      // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponDefinition_ReturnValue;          // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x100(0x80)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x180(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x198(0x18)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x1B0(0x28)()
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x1D8(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.OnStatChanged
struct UWeaponCalloutStatWidget_C_OnStatChanged_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.ExecuteUbergraph_WeaponCalloutStatWidget
struct UWeaponCalloutStatWidget_C_ExecuteUbergraph_WeaponCalloutStatWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaBaseStatView*                   CallFunc_GetBaseStatView_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchStatView*                  K2Node_DynamicCast_AsAthena_Match_Stat_View;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaWeaponStatView*                 CallFunc_GetWeaponViewHighestStat_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
