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
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.HandleTransitionInComplete
struct UFrontEndRewards_Expedition_C_HandleTransitionInComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueSuccess
struct UFrontEndRewards_Expedition_C_ContinueSuccess_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ContinueFail
struct UFrontEndRewards_Expedition_C_ContinueFail_Params
{
public:
	TArray<struct FFortItemInstanceQuantityPair> K2Node_MakeArray_Array;                            // 0x0(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Check
struct UFrontEndRewards_Expedition_C_Check_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetSuccessChanceFromExpedition
struct UFrontEndRewards_Expedition_C_SetSuccessChanceFromExpedition_Params
{
public:
	float                                        CallFunc_GetExpeditionSuccessChance_ReturnValue;   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)()
};

// 0x18 (0x18 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetTitleFromExpedition
struct UFrontEndRewards_Expedition_C_SetTitleFromExpedition_Params
{
public:
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x0(0x18)()
};

// 0x379 (0x379 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.SetBrushFromExpedition
struct UFrontEndRewards_Expedition_C_SetBrushFromExpedition_Params
{
public:
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetVehicleTagRequiredForExpedition_ReturnValue; // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FFortTagUIData                        CallFunc_GetUIDataForTag_OutData;                  // 0x10(0x368)()
	bool                                         CallFunc_GetUIDataForTag_ReturnValue;              // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.PopulateFromExpedition
struct UFrontEndRewards_Expedition_C_PopulateFromExpedition_Params
{
public:
	class UFortExpeditionItem*                   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionInBegin
struct UFrontEndRewards_Expedition_C_TransitionInBegin_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.TransitionOutBegin
struct UFrontEndRewards_Expedition_C_TransitionOutBegin_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnCollectExpeditionCompleted
struct UFrontEndRewards_Expedition_C_OnCollectExpeditionCompleted_Params
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSucceeded;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnPrimaryAction
struct UFrontEndRewards_Expedition_C_OnPrimaryAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.Construct
struct UFrontEndRewards_Expedition_C_Construct_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.ExecuteUbergraph_FrontEndRewards_Expedition
struct UFrontEndRewards_Expedition_C_ExecuteUbergraph_FrontEndRewards_Expedition_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortExpeditionItem*                   K2Node_Event_Expedition;                           // 0x8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSucceeded;                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> K2Node_Event_Rewards;                              // 0x18(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FrontEndRewards_Expedition.FrontEndRewards_Expedition_C.OnExpeditionCompleted__DelegateSignature
struct UFrontEndRewards_Expedition_C_OnExpeditionCompleted__DelegateSignature_Params
{
public:
	bool                                         Succeeded;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortItemInstanceQuantityPair> Rewards;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
