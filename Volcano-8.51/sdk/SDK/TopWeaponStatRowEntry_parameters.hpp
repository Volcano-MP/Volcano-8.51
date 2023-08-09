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

// 0xF0 (0xF0 - 0x0)
// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.Update
struct UTopWeaponStatRowEntry_C_Update_Params
{
public:
	class UAthenaBaseStatView*                   CallFunc_GetBaseStatView_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIStatStyle                      CallFunc_GetStatStyle_ReturnValue;                 // 0x8(0xC0)(ConstParm)
	float                                        CallFunc_GetStat_ReturnValue;                      // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaWeaponStatView*                 K2Node_DynamicCast_AsAthena_Weapon_Stat_View;      // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponDefinition_ReturnValue;          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.OnStatChanged
struct UTopWeaponStatRowEntry_C_OnStatChanged_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.ExecuteUbergraph_TopWeaponStatRowEntry
struct UTopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
