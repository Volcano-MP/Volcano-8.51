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

// 0xD1 (0xD1 - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive
struct AGCNL_Generic_BotTurret_C_OnActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2993[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_BGA_BotTurret_Parent_C*             K2Node_DynamicCast_AsB_BGA_Bot_Turret_Parent;      // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC1 (0xC1 - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove
struct AGCNL_Generic_BotTurret_C_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired
struct AGCNL_Generic_BotTurret_C_BotFired_Params
{
public:
	int32                                        Left;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated
struct AGCNL_Generic_BotTurret_C_Activated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired
struct AGCNL_Generic_BotTurret_C_BindBotFired_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning
struct AGCNL_Generic_BotTurret_C_BindBotExplosionWarning_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning
struct AGCNL_Generic_BotTurret_C_BotExplosionWarning_Params
{
public:
};

// 0x2C (0x2C - 0x0)
// Function GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret
struct AGCNL_Generic_BotTurret_C_ExecuteUbergraph_GCNL_Generic_BotTurret_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Left;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2994[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
