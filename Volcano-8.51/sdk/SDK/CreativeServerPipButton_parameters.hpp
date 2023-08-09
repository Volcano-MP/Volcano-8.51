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

// 0x11A (0x11A - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateInputActionLayout
struct UCreativeServerPipButton_C_UpdateInputActionLayout_Params
{
public:
	struct FSlateBrush                           RimBrush;                                          // 0x0(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x88(0x88)()
	class UOverlaySlot*                          K2Node_DynamicCast_AsOverlay_Slot;                 // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateStyle
struct UCreativeServerPipButton_C_UpdateStyle_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionText;                                        // 0x8(0x18)(Edit, BlueprintVisible)
};

// 0x0 (0x0 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.InitializeButton
struct UCreativeServerPipButton_C_InitializeButton_Params
{
public:
};

// 0xA (0xA - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.UpdateTextAndStyle
struct UCreativeServerPipButton_C_UpdateTextAndStyle_Params
{
public:
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.PreConstruct
struct UCreativeServerPipButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UCreativeServerPipButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.OnTriggeredInputActionChanged
struct UCreativeServerPipButton_C_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.OnActionProgress
struct UCreativeServerPipButton_C_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.OnActionComplete
struct UCreativeServerPipButton_C_OnActionComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.Construct
struct UCreativeServerPipButton_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.BP_OnHovered
struct UCreativeServerPipButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.BP_OnUnhovered
struct UCreativeServerPipButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x24 (0x24 - 0x0)
// Function CreativeServerPipButton.CreativeServerPipButton_C.ExecuteUbergraph_CreativeServerPipButton
struct UCreativeServerPipButton_C_ExecuteUbergraph_CreativeServerPipButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64DF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_Event_NewTriggeredAction;                   // 0x10(0x10)(ConstParm, NoDestructor)
	float                                        K2Node_Event_HeldPercent;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
