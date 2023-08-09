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

// 0x10 (0x10 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.CurrentScalarValue
struct AB_Minigun_Athena_C_CurrentScalarValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetOverheatingMaxValue_ReturnValue;       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurrentOverheatValue_ReturnValue;      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
struct AB_Minigun_Athena_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__FinishedFunc
struct AB_Minigun_Athena_C_SpinAudioVolumeTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__UpdateFunc
struct AB_Minigun_Athena_C_SpinAudioVolumeTimeline__UpdateFunc_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
struct AB_Minigun_Athena_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp
struct AB_Minigun_Athena_C_OnChargeUp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown
struct AB_Minigun_Athena_C_OnChargeDown_Params
{
public:
};

// 0x558 (0x558 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
struct AB_Minigun_Athena_C_OnInitCosmeticAlterations_Params
{
public:
	struct FFortCosmeticModification             CosmeticMod;                                       // 0x0(0x558)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnAmmoCountChanged
struct AB_Minigun_Athena_C_OnAmmoCountChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio
struct AB_Minigun_Athena_C_Start_Spin_Up_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio
struct AB_Minigun_Athena_C_Start_Spin_Down_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnWeaponAttached
struct AB_Minigun_Athena_C_OnWeaponAttached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.OnStartOverheated
struct AB_Minigun_Athena_C_OnStartOverheated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.BarrelOverheatFXandSound
struct AB_Minigun_Athena_C_BarrelOverheatFXandSound_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.K2_OnUnEquip
struct AB_Minigun_Athena_C_K2_OnUnEquip_Params
{
public:
};

// 0x592 (0x592 - 0x0)
// Function B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
struct AB_Minigun_Athena_C_ExecuteUbergraph_B_Minigun_Athena_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AB6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortCosmeticModification             K2Node_Event_CosmeticMod;                          // 0x8(0x558)()
	int32                                        CallFunc_GetLocalMagazineAmmoCount_ReturnValue;    // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x564(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x565(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AB7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_CurrentScalarValue_ReturnValue;           // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x56C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x570(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_CurrentScalarValue_ReturnValue_1;         // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x588(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x591(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
