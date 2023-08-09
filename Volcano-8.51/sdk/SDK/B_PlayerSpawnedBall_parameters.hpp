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

// 0xE8 (0xE8 - 0x0)
// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.PlayCueCenteredOnMe
struct AB_PlayerSpawnedBall_C_PlayCueCenteredOnMe_Params
{
public:
	struct FGameplayTag                          GameplayCueToPlay;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	float                                        Raw_Magnitude;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize10                 K2Node_MakeStruct_Vector_NetQuantize10;            // 0x24(0xC)(NoDestructor)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x30(0xB8)(ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.NotifyToyInstanceOfReuse
struct AB_PlayerSpawnedBall_C_NotifyToyInstanceOfReuse_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.StartToyFadeOutDueToNewPlacement
struct AB_PlayerSpawnedBall_C_StartToyFadeOutDueToNewPlacement_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyInstance
struct AB_PlayerSpawnedBall_C_InitializeToyInstance_Params
{
public:
	class AFortPlayerController*                 OwningPC;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumTimesSummoned;                                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.InitializeToyPreviewInFrontend
struct AB_PlayerSpawnedBall_C_InitializeToyPreviewInFrontend_Params
{
public:
};

// 0x31 (0x31 - 0x0)
// Function B_PlayerSpawnedBall.B_PlayerSpawnedBall_C.ExecuteUbergraph_B_PlayerSpawnedBall
struct AB_PlayerSpawnedBall_C_ExecuteUbergraph_B_PlayerSpawnedBall_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue_1;         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B18[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_Event_OwningPC;                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_NumTimesSummoned;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetPawnFromPlayerStateZone_OutPawn;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPawnFromPlayerStateZone_PawnReturned;  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
