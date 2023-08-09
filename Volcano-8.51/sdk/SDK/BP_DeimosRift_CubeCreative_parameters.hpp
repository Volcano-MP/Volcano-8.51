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
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.OnRep_ServerSpawnTime
struct ABP_DeimosRift_CubeCreative_C_OnRep_ServerSpawnTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.UserConstructionScript
struct ABP_DeimosRift_CubeCreative_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.ReceiveBeginPlay
struct ABP_DeimosRift_CubeCreative_C_ReceiveBeginPlay_Params
{
public:
};

// 0xE8 (0xE8 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.OnDamageServer
struct ABP_DeimosRift_CubeCreative_C_OnDamageServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5871[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x34(0x88)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_5872[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           InstigatedBy;                                      // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.SetLifeTimeTimer
struct ABP_DeimosRift_CubeCreative_C_SetLifeTimeTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.LifeTimeExpired
struct ABP_DeimosRift_CubeCreative_C_LifeTimeExpired_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_Intro
struct ABP_DeimosRift_CubeCreative_C_BP_Cosmetic_Intro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_Idle
struct ABP_DeimosRift_CubeCreative_C_BP_Cosmetic_Idle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_RampUp
struct ABP_DeimosRift_CubeCreative_C_BP_Cosmetic_RampUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BP_Cosmetic_ShouldDie
struct ABP_DeimosRift_CubeCreative_C_BP_Cosmetic_ShouldDie_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.HideSpawner
struct ABP_DeimosRift_CubeCreative_C_HideSpawner_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BlueprintHideRift
struct ABP_DeimosRift_CubeCreative_C_BlueprintHideRift_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.BlueprintHideVFX
struct ABP_DeimosRift_CubeCreative_C_BlueprintHideVFX_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.OnStartedEncounterSpawn
struct ABP_DeimosRift_CubeCreative_C_OnStartedEncounterSpawn_Params
{
public:
	class AFortAIPawn*                           SpawnedAI;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function BP_DeimosRift_CubeCreative.BP_DeimosRift_CubeCreative_C.ExecuteUbergraph_BP_DeimosRift_CubeCreative
struct ABP_DeimosRift_CubeCreative_C_ExecuteUbergraph_BP_DeimosRift_CubeCreative_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x8(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x34(0x88)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_5873[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_InstigatedBy;                         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0xD0(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE8(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5874[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x100(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5875[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeSeconds_ReturnValue_1;             // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5876[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x118(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x120(0x8)(NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      K2Node_DynamicCast_AsSphere_Collision;             // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5877[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIPawn*                           K2Node_Event_SpawnedAI;                            // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
