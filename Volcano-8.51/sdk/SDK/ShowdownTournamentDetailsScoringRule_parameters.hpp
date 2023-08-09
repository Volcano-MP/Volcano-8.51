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

// 0x2D0 (0x2D0 - 0x0)
// Function ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C.SetData
struct UShowdownTournamentDetailsScoringRule_C_SetData_Params
{
public:
	struct FFortShowdownScoringRuleInfo          ScoreRule;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortTournamentDisplayInfo            TournamentDisplayInfo;                             // 0x18(0x170)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                          Temp_struct_Variable;                              // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x198(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1A8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1E8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x200(0x18)()
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x220(0x18)()
	struct FLinearColor                          K2Node_Select_Default;                             // 0x238(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortShowdownScoringRuleDisplayInfo   CallFunc_GetDataTableRowFromName_OutRow;           // 0x250(0x48)()
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2A0(0x18)()
	class FText                                  K2Node_Select_Default_1;                           // 0x2B8(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
