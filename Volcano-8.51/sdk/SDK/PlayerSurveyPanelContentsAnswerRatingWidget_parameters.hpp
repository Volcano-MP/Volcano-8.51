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
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandlePlayerRequestAnswer
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandlePlayerRequestAnswer_Params
{
public:
	int32                                        AnswerIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4708[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimespan                             CallFunc_GetStopwatchTime_ReturnValue;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFortPlayerSurveyAnswerMultipleChoice K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice; // 0x10(0x10)(NoDestructor)
	struct FFortPlayerSurveyAnswer               CallFunc_MakeMultipleChoiceAnswer_ReturnValue;     // 0x20(0x18)()
};

// 0x10 (0x10 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidgetPostDummy_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4709[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultIndex;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_470A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               TargetWidget;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCurrentAnswer_IsSet;                   // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_470B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyAnswerMultipleChoice CallFunc_GetCurrentAnswer_Result;                  // 0x20(0x10)(NoDestructor)
	class UCommonButton*                         CallFunc_GetButtonAtIndex_ReturnValue;             // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentAnswer_Params
{
public:
	bool                                         IsSet;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_470C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyAnswerMultipleChoice Result;                                            // 0x8(0x10)(Parm, OutParm, NoDestructor)
	bool                                         IsSetValue;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_470D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyAnswerMultipleChoice ResultValue;                                       // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FFortPlayerSurveyAnswer               CallFunc_GetAnswer_ReturnValue;                    // 0x30(0x18)()
	bool                                         CallFunc_GetMultipleChoiceAnswer_bIsValid;         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_470E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyAnswerMultipleChoice CallFunc_GetMultipleChoiceAnswer_ReturnValue;      // 0x50(0x10)(ConstParm, NoDestructor)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateAnswerDisplay
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateAnswerDisplay_Params
{
public:
	bool                                         CallFunc_GetCurrentAnswer_IsSet;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_470F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyAnswerMultipleChoice CallFunc_GetCurrentAnswer_Result;                  // 0x8(0x10)(NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentQuestion
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentQuestion_Params
{
public:
	class UFortPlayerSurveyQuestionMultipleChoice* Result;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerSurveyQuestionMultipleChoice* ResultValue;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerSurveyQuestion*             CallFunc_GetQuestion_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlayerSurveyQuestionMultipleChoice* K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateRatingButtons
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateRatingButtons_Params
{
public:
	class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumRatingButtons;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4711[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_Result;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4A (0x4A - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateText
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateText_Params
{
public:
	class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  MaxRatingText;                                     // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  MinRatingText;                                     // 0x20(0x18)(Edit, BlueprintVisible)
	class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_Result;                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_OnInitialized_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonClicked_Params
{
public:
	int32                                        ButtonIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQAChanged
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleQAChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.Construct
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonFocused_Params
{
public:
	int32                                        ButtonIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleAnswerChanged
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleAnswerChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleCommitCurrentAnswer_Params
{
public:
};

// 0x34 (0x34 - 0x0)
// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentAnswer_IsSet;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4712[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyAnswerMultipleChoice CallFunc_GetCurrentAnswer_Result;                  // 0x8(0x10)(NoDestructor)
	int32                                        K2Node_Event_ButtonIndex_1;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4713[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCommonButton*>                 K2Node_MakeArray_Array;                            // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        K2Node_Event_ButtonIndex;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
