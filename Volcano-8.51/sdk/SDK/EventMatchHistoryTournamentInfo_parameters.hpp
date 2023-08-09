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
// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.RefreshDataBP
struct UEventMatchHistoryTournamentInfo_C_RefreshDataBP_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.ExecuteUbergraph_EventMatchHistoryTournamentInfo
struct UEventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetWindowRoundDisplayString_ReturnValue;  // 0x8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x60(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0xA0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xF0(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
