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
// Function AthenaNewsTile.AthenaNewsTile_C.PlayIntroAnim
struct UAthenaNewsTile_C_PlayIntroAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaNewsTile.AthenaNewsTile_C.SetDefaultImage
struct UAthenaNewsTile_C_SetDefaultImage_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaNewsTile.AthenaNewsTile_C.ExecuteUbergraph_AthenaNewsTile
struct UAthenaNewsTile_C_ExecuteUbergraph_AthenaNewsTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
