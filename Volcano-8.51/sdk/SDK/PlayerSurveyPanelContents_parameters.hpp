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

// 0x63 (0x63 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ShouldShowConfirmCancelDialog
struct UPlayerSurveyPanelContents_C_ShouldShowConfirmCancelDialog_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortPlayerSurveyDescription          CallFunc_GetDescription_ReturnValue;               // 0x10(0x50)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ResetSurvey
struct UPlayerSurveyPanelContents_C_ResetSurvey_Params
{
public:
	UInterfaceProperty_                          CallFunc_SetSelectedIndex_self_CastInput;          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelContents_C_GetDefaultFocusedWidget_Params
{
public:
	class UWidget*                               Result;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetDefaultFocusedWidget_Result;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionChanged
struct UPlayerSurveyPanelContents_C_HandleQuestionChanged_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionText
struct UPlayerSurveyPanelContents_C_UpdateQuestionText_Params
{
public:
	class FText                                  QuestionText;                                      // 0x0(0x18)(Edit, BlueprintVisible)
	UInterfaceProperty_                          CallFunc_GetQuestion_self_CastInput;               // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortPlayerSurveyQuestion*             CallFunc_GetQuestion_ReturnValue;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerSurveyQuestionMultipleChoice* K2Node_DynamicCast_AsFort_Player_Survey_Question_Multiple_Choice; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleAnswerChanged
struct UPlayerSurveyPanelContents_C_HandleAnswerChanged_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateNextButtonState
struct UPlayerSurveyPanelContents_C_UpdateNextButtonState_Params
{
public:
	class UCommonButton*                         ActiveNextButton;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasMoreQuestions;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasAnsweredCurrentQuestion;                        // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46E5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_GetAnswer_self_CastInput;                 // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortPlayerSurveyAnswer               CallFunc_GetAnswer_ReturnValue;                    // 0x20(0x18)()
	enum class EFortPlayerSurveyQuestionType     CallFunc_GetAnswerType_ReturnValue;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          CallFunc_CanMoveDelta_self_CastInput;              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EIndexNavigationResult            CallFunc_CanMoveDelta_ReturnValue;                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNumQuestionsChanged
struct UPlayerSurveyPanelContents_C_HandleNumQuestionsChanged_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNavigationStateChanged
struct UPlayerSurveyPanelContents_C_HandleNavigationStateChanged_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleIndexChanged
struct UPlayerSurveyPanelContents_C_HandleIndexChanged_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.FinishSurvey
struct UPlayerSurveyPanelContents_C_FinishSurvey_Params
{
public:
	enum class EFortPlayerSurveyFinishReason     Reason;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateSurveyDescription
struct UPlayerSurveyPanelContents_C_UpdateSurveyDescription_Params
{
public:
	class FText                                  SurveyTitleText;                                   // 0x0(0x18)(Edit, BlueprintVisible)
	struct FFortPlayerSurveyDescription          CallFunc_GetDescription_ReturnValue;               // 0x18(0x50)()
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10D (0x10D - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionNumberLabel
struct UPlayerSurveyPanelContents_C_UpdateQuestionNumberLabel_Params
{
public:
	class FText                                  FormattedText;                                     // 0x0(0x18)(Edit, BlueprintVisible)
	int32                                        NumQuestions;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        QuestionIndex;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x70(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)()
	UInterfaceProperty_                          CallFunc_GetNumItems_self_CastInput;               // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetNumItems_ReturnValue;                  // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_GetSelectedIndex_self_CastInput;          // 0xF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.DialogResult_1F2955434D7A098B1B9CC2A074F61086
struct UPlayerSurveyPanelContents_C_DialogResult_1F2955434D7A098B1B9CC2A074F61086_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.Construct
struct UPlayerSurveyPanelContents_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleSurveyChanged
struct UPlayerSurveyPanelContents_C_HandleSurveyChanged_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionsChanged
struct UPlayerSurveyPanelContents_C_HandleQuestionsChanged_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnInitialized
struct UPlayerSurveyPanelContents_C_OnInitialized_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UPlayerSurveyPanelContents_C_BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__FinishButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UPlayerSurveyPanelContents_C_BndEvt__FinishButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UPlayerSurveyPanelContents_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleDescriptionChanged
struct UPlayerSurveyPanelContents_C_HandleDescriptionChanged_Params
{
public:
};

// 0x199 (0x199 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ExecuteUbergraph_PlayerSurveyPanelContents
struct UPlayerSurveyPanelContents_C_ExecuteUbergraph_PlayerSurveyPanelContents_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Index;                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerSurveyQuestionSelector*     CallFunc_SpawnObject_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_TryMoveDelta_self_CastInput;              // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EIndexNavigationResult            CallFunc_TryMoveDelta_ReturnValue;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46EE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_AddOnSelectedIndexChangedDelegate_self_CastInput; // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x5C(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_46F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_AddOnNavigationChangedDelegate_self_CastInput; // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UInterfaceProperty_                          CallFunc_AddOnNumItemsChangedDelegate_self_CastInput; // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UInterfaceProperty_                          CallFunc_SetQA_Value_CastInput;                    // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0xCC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xD4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_46F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CallFunc_AddOnAnswerChangedDelegate_self_CastInput; // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xF8(0x10)(ZeroConstructor, NoDestructor)
	UInterfaceProperty_                          CallFunc_AddOnQuestionChangedDelegate_self_CastInput; // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetDefaultFocusedWidget_Result;           // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowConfirmCancelDialog_Result;     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x12C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_46F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPlayerSurveyDescription          CallFunc_GetDescription_ReturnValue;               // 0x140(0x50)()
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnSurveyEnded__DelegateSignature
struct UPlayerSurveyPanelContents_C_OnSurveyEnded__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
