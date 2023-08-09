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

// 0x1 (0x1 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleReset
struct UGamepadInfoSelectorPanel_v3_C_HandleReset_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleApply
struct UGamepadInfoSelectorPanel_v3_C_HandleApply_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleBack
struct UGamepadInfoSelectorPanel_v3_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnDeactivated
struct UGamepadInfoSelectorPanel_v3_C_OnDeactivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnAddedToFocusPath
struct UGamepadInfoSelectorPanel_v3_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnActivated
struct UGamepadInfoSelectorPanel_v3_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.ExecuteUbergraph_GamepadInfoSelectorPanel_v3
struct UGamepadInfoSelectorPanel_v3_C_ExecuteUbergraph_GamepadInfoSelectorPanel_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue;        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue_1;      // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4459[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x38(0x8)(NoDestructor)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue_2;      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorFocus__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorFocus__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorReset__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorReset__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorApply__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorApply__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorBack__DelegateSignature
struct UGamepadInfoSelectorPanel_v3_C_GamepadInfoSelectorBack__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
