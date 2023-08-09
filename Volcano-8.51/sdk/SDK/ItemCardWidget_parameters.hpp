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

// 0x268 (0x268 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived
struct UItemCardWidget_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)()
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B0(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.OnCentered
struct UItemCardWidget_C_OnCentered_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.PlayShow
struct UItemCardWidget_C_PlayShow_Params
{
public:
	int32                                        Idx;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.OnFocusLost
struct UItemCardWidget_C_OnFocusLost_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.BP_OnHovered
struct UItemCardWidget_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.Construct
struct UItemCardWidget_C_Construct_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget
struct UItemCardWidget_C_ExecuteUbergraph_ItemCardWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Idx;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x18(0x8)(NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature
struct UItemCardWidget_C_OnHoveredEvent__DelegateSignature_Params
{
public:
	struct FFortReceivedItemLootInfo             NewParam;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
