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

// 0x40 (0x40 - 0x0)
// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.SetParams
struct UGen_ReadyUp_StartObjective_C_SetParams_Params
{
public:
	float                                        ReadyUpTimerLength;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    InteractSpawnLocation;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  InteractText;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        BluGloMissionActivationQty;                        // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFightTheStorm;                                   // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_42F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGen_ReadyUp_StartObjective_C*         ThisObject;                                        // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C.BreakParams
struct UGen_ReadyUp_StartObjective_C_BreakParams_Params
{
public:
	float                                        ReadyUpTimerLength;                                // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    InteractSpawnLocation;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
	class FText                                  InteractText;                                      // 0x18(0x18)(Parm, OutParm)
	int32                                        BluGloMissionActivationQty;                        // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFightTheStorm;                                   // 0x34(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
