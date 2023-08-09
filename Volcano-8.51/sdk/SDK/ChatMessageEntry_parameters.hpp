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

// 0x20 (0x20 - 0x0)
// Function ChatMessageEntry.ChatMessageEntry_C.HandleSelectionStatusChanged
struct UChatMessageEntry_C_HandleSelectionStatusChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A01[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ChatMessageEntry.ChatMessageEntry_C.OnEntryUpdated_1
struct UChatMessageEntry_C_OnEntryUpdated_1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UChatMessageEntry_C_BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ChatMessageEntry.ChatMessageEntry_C.OnFocusedChanged
struct UChatMessageEntry_C_OnFocusedChanged_Params
{
public:
	bool                                         bIsFocused;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry
struct UChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsFocused;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
