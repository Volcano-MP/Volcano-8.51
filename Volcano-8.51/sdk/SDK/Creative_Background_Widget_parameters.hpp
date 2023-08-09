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

// 0x38 (0x38 - 0x0)
// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor
struct UCreative_Background_Widget_C_SetTextColor_Params
{
public:
	struct FLinearColor                          TextColor;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x10(0x28)()
};

// 0x1 (0x1 - 0x0)
// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment
struct UCreative_Background_Widget_C_SetTextAlignment_Params
{
public:
	enum class ETextJustify                      Alignment;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale
struct UCreative_Background_Widget_C_SetTextScale_Params
{
public:
	int32                                        FontSize;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x8(0x50)(HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor
struct UCreative_Background_Widget_C_SetBackgroundColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Creative_Background_Widget.Creative_Background_Widget_C.SetText
struct UCreative_Background_Widget_C_SetText_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)()
};

// 0x4 (0x4 - 0x0)
// Function Creative_Background_Widget.Creative_Background_Widget_C.ExecuteUbergraph_Creative_Background_Widget
struct UCreative_Background_Widget_C_ExecuteUbergraph_Creative_Background_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
