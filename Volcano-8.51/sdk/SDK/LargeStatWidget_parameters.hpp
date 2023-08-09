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

// 0x70 (0x70 - 0x0)
// Function LargeStatWidget.LargeStatWidget_C.SetStatEntryNumber
struct ULargeStatWidget_C_SetStatEntryNumber_Params
{
public:
	int32                                        StatEntryNumber;                                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4913[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x58(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function LargeStatWidget.LargeStatWidget_C.OnStatChanged
struct ULargeStatWidget_C_OnStatChanged_Params
{
public:
};

// 0xD4 (0xD4 - 0x0)
// Function LargeStatWidget.LargeStatWidget_C.ExecuteUbergraph_LargeStatWidget
struct ULargeStatWidget_C_ExecuteUbergraph_LargeStatWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4914[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaBaseStatView*                   CallFunc_GetBaseStatView_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIStatStyle                      CallFunc_GetStatStyle_ReturnValue;                 // 0x10(0xC0)(ConstParm)
	float                                        CallFunc_GetStat_ReturnValue;                      // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
