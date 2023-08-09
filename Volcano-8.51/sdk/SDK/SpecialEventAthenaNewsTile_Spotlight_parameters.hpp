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
// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.PlayIntroAnim
struct USpecialEventAthenaNewsTile_Spotlight_C_PlayIntroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.SetDefaultImage
struct USpecialEventAthenaNewsTile_Spotlight_C_SetDefaultImage_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight
struct USpecialEventAthenaNewsTile_Spotlight_C_ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
