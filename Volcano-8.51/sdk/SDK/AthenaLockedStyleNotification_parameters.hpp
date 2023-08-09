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

// 0x18 (0x18 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.SetLockedStyleDescription
struct UAthenaLockedStyleNotification_C_SetLockedStyleDescription_Params
{
public:
	class FText                                  LockedStyleDescription;                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.Construct
struct UAthenaLockedStyleNotification_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
struct UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
