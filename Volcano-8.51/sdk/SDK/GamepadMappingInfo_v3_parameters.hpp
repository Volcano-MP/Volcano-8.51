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
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab
struct UGamepadMappingInfo_v3_C_ShowDeadZoneTab_Params
{
public:
};

// 0xD (0xD - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab
struct UGamepadMappingInfo_v3_C_HideDeadZoneTab_Params
{
public:
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DoCustomNavigation_0
struct UGamepadMappingInfo_v3_C_DoCustomNavigation_0_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               NextWidget_Local;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue_1;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue_2;            // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue_3;            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
struct UGamepadMappingInfo_v3_C_GamepadMappingInfoNavLeft_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
struct UGamepadMappingInfo_v3_C_ShowEditModeTab_Params
{
public:
};

// 0xD (0xD - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
struct UGamepadMappingInfo_v3_C_HideEditModeTab_Params
{
public:
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x218 (0x218 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown_0
struct UGamepadMappingInfo_v3_C_On_Image_LightBox_MouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0x108 (0x108 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
struct UGamepadMappingInfo_v3_C_GetCustomButtonDataForKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DescText;                                          // 0x20(0x18)(Parm, OutParm)
	enum class EFortInputActionGroup             InputActionGroup_Local;                            // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescText_Local;                                    // 0x40(0x18)(Edit, BlueprintVisible)
	class FName                                  ActionName_Local;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PresetName_Local;                                  // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Key_Local;                                         // 0x68(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCustomGamepadInputPresetName_ReturnValue; // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D41[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetScreenLabel_ReturnValue;               // 0xC8(0x18)()
	class FName                                  CallFunc_GetActionForKey_ReturnValue;              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetActionForKey_ReturnValue_1;            // 0xEC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_3;                 // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActionForKey_ReturnValue_2;            // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
struct UGamepadMappingInfo_v3_C_SetTextForMode_Params
{
public:
	enum class EFortInputActionGroup             Selection;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
struct UGamepadMappingInfo_v3_C_SetButtonTextLabelsFromTextArray_Params
{
public:
	TArray<class FText>                          Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4E4 (0x4E4 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTW_BuilderProBuild_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(ConstParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x70(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetBuildingEditResetLabel_ReturnValue;    // 0xB0(0x18)()
	class FText                                  CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue; // 0xC8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0xF8(0x18)()
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0x110(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_4; // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_5; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0x140(0x18)()
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x158(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_6; // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_7; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadTrapPickerHoldLabel_ReturnValue; // 0x188(0x18)()
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x1A0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_8; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_9; // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadTrapSelectAndPlaceLabel_ReturnValue; // 0x1D0(0x18)()
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x1E8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_10; // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_11; // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadFloorSelectAndPlaceLabel_ReturnValue; // 0x218(0x18)()
	class FText                                  CallFunc_GetGamepadWallSelectAndPlaceLabel_ReturnValue; // 0x230(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_12; // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_13; // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x260(0x18)()
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x278(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_14; // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_15; // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue; // 0x2A8(0x18)()
	class FText                                  CallFunc_GetGamepadChangeMaterialOrTrapPickerLabel_ReturnValue_1; // 0x2C0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_19;                 // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_20;                 // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_16; // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_17; // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x2F0(0x18)()
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue_1;    // 0x308(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_21;                 // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_22;                 // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_18; // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_19; // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;     // 0x338(0x18)()
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1;   // 0x350(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_23;                 // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_24;                 // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_20; // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_21; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x380(0x18)()
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue_1;         // 0x398(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_25;                 // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_26;                 // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_22; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_23; // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x3C8(0x18)()
	class FText                                  CallFunc_GetSprintLabel_ReturnValue_1;             // 0x3E0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_27;                 // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_28;                 // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_24; // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_25; // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x410(0x18)()
	class FText                                  CallFunc_GetMoveLabel_ReturnValue_1;               // 0x428(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_29;                 // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_30;                 // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_26; // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_27; // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGamepadRoofSelectAndPlaceLabel_ReturnValue; // 0x458(0x18)()
	class FText                                  CallFunc_GetGamepadStairSelectAndPlaceLabel_ReturnValue; // 0x470(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_31;                 // 0x488(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_32;                 // 0x48C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_4;                              // 0x490(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_5;                              // 0x4A8(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_33;                 // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_34;                 // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_6;                              // 0x4C8(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_35;                 // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
struct UGamepadMappingInfo_v3_C_GetControllerImage_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Array_Get_Item;                           // 0x30(0x28)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
struct UGamepadMappingInfo_v3_C_ClearAllComboTextLines_Params
{
public:
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x0(0x18)()
};

// 0x50C (0x50C - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProCombat_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility2Label_ReturnValue;             // 0x18(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility1Label_ReturnValue;             // 0x40(0x18)()
	class FText                                  CallFunc_GetAbility3Label_ReturnValue;             // 0x58(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_4; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetRepairImproveSpotEnemyLabel_ReturnValue; // 0x90(0x18)()
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0xA8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_5; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_6; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0xD8(0x18)()
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0xF0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_7; // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_8; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDeployHoverboardLabel_ReturnValue;     // 0x120(0x18)()
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x138(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_9; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_10; // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCraftAmmoHoldLabel_ReturnValue;        // 0x168(0x18)()
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x180(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_11; // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_12; // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetReloadTapLabel_ReturnValue;            // 0x1B0(0x18)()
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x1C8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_13; // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_14; // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetNextWeaponTapLabel_ReturnValue;        // 0x1F8(0x18)()
	class FText                                  CallFunc_GetAttackConfirmLabel_ReturnValue;        // 0x210(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_15; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_16; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x240(0x18)()
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x258(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_17; // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_18; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGadget2Label_ReturnValue;              // 0x288(0x18)()
	class FText                                  CallFunc_GetGadget2Label_ReturnValue_1;            // 0x2A0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_19; // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_20; // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGadget1Label_ReturnValue;              // 0x2D0(0x18)()
	class FText                                  CallFunc_GetGadget1Label_ReturnValue_1;            // 0x2E8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_19;                 // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_20;                 // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_21; // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_22; // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x318(0x18)()
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue_1;    // 0x330(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_21;                 // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_22;                 // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_23; // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_24; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;     // 0x360(0x18)()
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1;   // 0x378(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_23;                 // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_24;                 // 0x394(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_25; // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_26; // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x3A8(0x18)()
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue_1;         // 0x3C0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_25;                 // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_26;                 // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_27; // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_28; // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x3F0(0x18)()
	class FText                                  CallFunc_GetSprintLabel_ReturnValue_1;             // 0x408(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_27;                 // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_28;                 // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_29; // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_30; // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x438(0x18)()
	class FText                                  CallFunc_GetMoveLabel_ReturnValue_1;               // 0x450(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_29;                 // 0x468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_30;                 // 0x46C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_31; // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_32; // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPreviousWeaponTapLabel_ReturnValue;    // 0x480(0x18)()
	class FText                                  CallFunc_GetAimDownSightsHeavyMeleeLabel_ReturnValue; // 0x498(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_31;                 // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_32;                 // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x4B8(0x18)()
	class FText                                  Temp_text_Variable;                                // 0x4D0(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_33;                 // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_34;                 // 0x4EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x4F0(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_35;                 // 0x508(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
struct UGamepadMappingInfo_v3_C_SetTextFieldVisibilityForExtraLine_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D48[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D49[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
struct UGamepadMappingInfo_v3_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  DesiredSlateVisibility;                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D4A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D4B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4D4 (0x4D4 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonTextForSTWCombatProBuild_Params
{
public:
	TArray<class FText>                          ButtonTextLabels;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_5;                              // 0x88(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetBuildingEditResetLabel_ReturnValue;    // 0xC8(0x18)()
	class FText                                  CallFunc_GetRotateBuildingTapRepairHoldLabel_ReturnValue; // 0xE0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLookLabel_ReturnValue;                 // 0x110(0x18)()
	class FText                                  CallFunc_GetJumpLabel_ReturnValue;                 // 0x128(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_4; // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_5; // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEditBuildingPieceHoldLabel_ReturnValue; // 0x158(0x18)()
	class FText                                  CallFunc_GetSwitchQuickbarLabel_ReturnValue;       // 0x170(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_6; // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_7; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTrapInventoryHoldLabel_ReturnValue;    // 0x1A0(0x18)()
	class FText                                  CallFunc_GetInteractTapHoldLabel_ReturnValue;      // 0x1B8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_8; // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_9; // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPickTrapTapHoldLabel_ReturnValue;      // 0x1E8(0x18)()
	class FText                                  CallFunc_GetHarvestWeaponLabel_ReturnValue;        // 0x200(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_10; // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_11; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetNextBuildingPieceLabel_ReturnValue;    // 0x230(0x18)()
	class FText                                  CallFunc_GetPlaceBuildingOrTrapConfirmLabel_ReturnValue; // 0x248(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_12; // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_13; // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameMenuLabel_ReturnValue;             // 0x278(0x18)()
	class FText                                  CallFunc_GetToggleFullScreenMapLabel_ReturnValue;  // 0x290(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_18;                 // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_19;                 // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_14; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_15; // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue;      // 0x2C0(0x18)()
	class FText                                  CallFunc_GetToggleInventoryLabel_ReturnValue_1;    // 0x2D8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_20;                 // 0x2F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_21;                 // 0x2F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_16; // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_17; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue;     // 0x308(0x18)()
	class FText                                  CallFunc_GetEmoteOrQuickChatLabel_ReturnValue_1;   // 0x320(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_22;                 // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_23;                 // 0x33C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_18; // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_19; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue;           // 0x350(0x18)()
	class FText                                  CallFunc_GetAutoSprintLabel_ReturnValue_1;         // 0x368(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_24;                 // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_25;                 // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_20; // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_21; // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetSprintLabel_ReturnValue;               // 0x398(0x18)()
	class FText                                  CallFunc_GetSprintLabel_ReturnValue_1;             // 0x3B0(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_26;                 // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_27;                 // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_22; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_23; // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMoveLabel_ReturnValue;                 // 0x3E0(0x18)()
	class FText                                  CallFunc_GetMoveLabel_ReturnValue_1;               // 0x3F8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_28;                 // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_29;                 // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_24; // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_25; // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPreviousBuildingPieceLabel_ReturnValue; // 0x428(0x18)()
	class FText                                  CallFunc_GetChangeMaterialLabel_ReturnValue;       // 0x440(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_30;                 // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_31;                 // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_6;                              // 0x460(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_7;                              // 0x478(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_32;                 // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_33;                 // 0x494(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_8;                              // 0x498(0x18)(ConstParm)
	int32                                        CallFunc_Array_Add_ReturnValue_34;                 // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x4B8(0x18)()
	int32                                        CallFunc_Array_Add_ReturnValue_35;                 // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
struct UGamepadMappingInfo_v3_C_InitializeListOfButtonLabelTextWidgets_Params
{
public:
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array_1;                          // 0x18(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_4;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_5;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_6;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_7;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_8;                  // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_9;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_10;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_11;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_12;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_13;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_14;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_15;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_16;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_17;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCommonTextBlock*>              K2Node_MakeArray_Array_2;                          // 0x70(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
};

// 0xA (0xA - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_1; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_DesiredSlateVisibility_2; // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7E8 (0x7E8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Combat_Mode_Params
{
public:
	int32                                        Config;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)()
	int32                                        Temp_int_Variable_1;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)()
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)()
	int32                                        Temp_int_Variable_2;                               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x98(0x18)()
	class FText                                  Temp_text_Variable_4;                              // 0xB0(0x18)()
	class FText                                  Temp_text_Variable_5;                              // 0xC8(0x18)()
	int32                                        Temp_int_Variable_3;                               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0xE8(0x18)()
	class FText                                  Temp_text_Variable_6;                              // 0x100(0x18)()
	class FText                                  Temp_text_Variable_7;                              // 0x118(0x18)()
	int32                                        Temp_int_Variable_4;                               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_3;                           // 0x138(0x18)()
	class FText                                  Temp_text_Variable_8;                              // 0x150(0x18)()
	class FText                                  Temp_text_Variable_9;                              // 0x168(0x18)()
	int32                                        Temp_int_Variable_5;                               // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_4;                           // 0x188(0x18)()
	class FText                                  Temp_text_Variable_10;                             // 0x1A0(0x18)()
	class FText                                  Temp_text_Variable_11;                             // 0x1B8(0x18)()
	int32                                        Temp_int_Variable_6;                               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_5;                           // 0x1D8(0x18)()
	class FText                                  Temp_text_Variable_12;                             // 0x1F0(0x18)()
	class FText                                  Temp_text_Variable_13;                             // 0x208(0x18)()
	int32                                        Temp_int_Variable_7;                               // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_6;                           // 0x228(0x18)()
	class FText                                  Temp_text_Variable_14;                             // 0x240(0x18)()
	class FText                                  Temp_text_Variable_15;                             // 0x258(0x18)()
	int32                                        Temp_int_Variable_8;                               // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_7;                           // 0x278(0x18)()
	class FText                                  Temp_text_Variable_16;                             // 0x290(0x18)()
	class FText                                  Temp_text_Variable_17;                             // 0x2A8(0x18)()
	int32                                        Temp_int_Variable_9;                               // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D58[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_8;                           // 0x2C8(0x18)()
	class FText                                  Temp_text_Variable_18;                             // 0x2E0(0x18)()
	class FText                                  Temp_text_Variable_19;                             // 0x2F8(0x18)()
	int32                                        Temp_int_Variable_10;                              // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D59[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_9;                           // 0x318(0x18)()
	class FText                                  Temp_text_Variable_20;                             // 0x330(0x18)()
	class FText                                  Temp_text_Variable_21;                             // 0x348(0x18)()
	int32                                        Temp_int_Variable_11;                              // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_10;                          // 0x368(0x18)()
	class FText                                  Temp_text_Variable_22;                             // 0x380(0x18)()
	class FText                                  Temp_text_Variable_23;                             // 0x398(0x18)()
	int32                                        Temp_int_Variable_12;                              // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_11;                          // 0x3B8(0x18)()
	class FText                                  Temp_text_Variable_24;                             // 0x3D0(0x18)()
	class FText                                  Temp_text_Variable_25;                             // 0x3E8(0x18)()
	int32                                        Temp_int_Variable_13;                              // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_12;                          // 0x408(0x18)()
	class FText                                  Temp_text_Variable_26;                             // 0x420(0x18)()
	class FText                                  Temp_text_Variable_27;                             // 0x438(0x18)()
	int32                                        Temp_int_Variable_14;                              // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_13;                          // 0x458(0x18)()
	class FText                                  Temp_text_Variable_28;                             // 0x470(0x18)()
	class FText                                  Temp_text_Variable_29;                             // 0x488(0x18)()
	int32                                        Temp_int_Variable_15;                              // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_14;                          // 0x4A8(0x18)()
	class FText                                  Temp_text_Variable_30;                             // 0x4C0(0x18)()
	class FText                                  Temp_text_Variable_31;                             // 0x4D8(0x18)()
	int32                                        Temp_int_Variable_16;                              // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_15;                          // 0x4F8(0x18)()
	class FText                                  Temp_text_Variable_32;                             // 0x510(0x18)()
	class FText                                  Temp_text_Variable_33;                             // 0x528(0x18)()
	int32                                        Temp_int_Variable_17;                              // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D60[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_16;                          // 0x548(0x18)()
	class FText                                  Temp_text_Variable_34;                             // 0x560(0x18)()
	class FText                                  Temp_text_Variable_35;                             // 0x578(0x18)()
	int32                                        Temp_int_Variable_18;                              // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_17;                          // 0x598(0x18)()
	class FText                                  Temp_text_Variable_36;                             // 0x5B0(0x18)()
	class FText                                  Temp_text_Variable_37;                             // 0x5C8(0x18)()
	int32                                        Temp_int_Variable_19;                              // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_18;                          // 0x5E8(0x18)()
	class FText                                  Temp_text_Variable_38;                             // 0x600(0x18)()
	class FText                                  Temp_text_Variable_39;                             // 0x618(0x18)()
	int32                                        Temp_int_Variable_20;                              // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_19;                          // 0x638(0x18)()
	class FText                                  Temp_text_Variable_40;                             // 0x650(0x18)()
	class FText                                  Temp_text_Variable_41;                             // 0x668(0x18)()
	int32                                        Temp_int_Variable_21;                              // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_20;                          // 0x688(0x18)()
	class FText                                  Temp_text_Variable_42;                             // 0x6A0(0x18)()
	class FText                                  Temp_text_Variable_43;                             // 0x6B8(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue; // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_21;                          // 0x6D8(0x18)()
	class FText                                  CallFunc_GetAbility2Label_ReturnValue;             // 0x6F0(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_1; // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_2; // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetAbility1Label_ReturnValue;             // 0x718(0x18)()
	class FText                                  CallFunc_GetAbility3Label_ReturnValue;             // 0x730(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x748(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x760(0x18)()
	class FText                                  Temp_text_Variable_44;                             // 0x778(0x18)()
	class UFortInputData*                        CallFunc_GetFortInputDataForBlueprint_ReturnValue_3; // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_45;                             // 0x798(0x18)()
	class FText                                  CallFunc_GetDeployHoverboardLabel_ReturnValue;     // 0x7B0(0x18)()
	int32                                        Temp_int_Variable_22;                              // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_22;                          // 0x7D0(0x18)()
};

// 0x7D8 (0x7D8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
struct UGamepadMappingInfo_v3_C_Handle_Config_Changed_STW_Build_Mode_Params
{
public:
	int32                                        Config;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)()
	int32                                        Temp_int_Variable_1;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x60(0x18)()
	class FText                                  Temp_text_Variable_3;                              // 0x78(0x18)()
	int32                                        Temp_int_Variable_2;                               // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x98(0x18)()
	class FText                                  Temp_text_Variable_4;                              // 0xB0(0x18)()
	class FText                                  Temp_text_Variable_5;                              // 0xC8(0x18)()
	int32                                        Temp_int_Variable_3;                               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0xE8(0x18)()
	class FText                                  Temp_text_Variable_6;                              // 0x100(0x18)()
	class FText                                  Temp_text_Variable_7;                              // 0x118(0x18)()
	int32                                        Temp_int_Variable_4;                               // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_3;                           // 0x138(0x18)()
	class FText                                  Temp_text_Variable_8;                              // 0x150(0x18)()
	class FText                                  Temp_text_Variable_9;                              // 0x168(0x18)()
	int32                                        Temp_int_Variable_5;                               // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_4;                           // 0x188(0x18)()
	class FText                                  Temp_text_Variable_10;                             // 0x1A0(0x18)()
	class FText                                  Temp_text_Variable_11;                             // 0x1B8(0x18)()
	int32                                        Temp_int_Variable_6;                               // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_5;                           // 0x1D8(0x18)()
	class FText                                  Temp_text_Variable_12;                             // 0x1F0(0x18)()
	class FText                                  Temp_text_Variable_13;                             // 0x208(0x18)()
	int32                                        Temp_int_Variable_7;                               // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_6;                           // 0x228(0x18)()
	class FText                                  Temp_text_Variable_14;                             // 0x240(0x18)()
	class FText                                  Temp_text_Variable_15;                             // 0x258(0x18)()
	int32                                        Temp_int_Variable_8;                               // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_7;                           // 0x278(0x18)()
	class FText                                  Temp_text_Variable_16;                             // 0x290(0x18)()
	class FText                                  Temp_text_Variable_17;                             // 0x2A8(0x18)()
	int32                                        Temp_int_Variable_9;                               // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_8;                           // 0x2C8(0x18)()
	class FText                                  Temp_text_Variable_18;                             // 0x2E0(0x18)()
	class FText                                  Temp_text_Variable_19;                             // 0x2F8(0x18)()
	int32                                        Temp_int_Variable_10;                              // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_9;                           // 0x318(0x18)()
	class FText                                  Temp_text_Variable_20;                             // 0x330(0x18)()
	class FText                                  Temp_text_Variable_21;                             // 0x348(0x18)()
	int32                                        Temp_int_Variable_11;                              // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_10;                          // 0x368(0x18)()
	class FText                                  Temp_text_Variable_22;                             // 0x380(0x18)()
	class FText                                  Temp_text_Variable_23;                             // 0x398(0x18)()
	int32                                        Temp_int_Variable_12;                              // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_11;                          // 0x3B8(0x18)()
	class FText                                  Temp_text_Variable_24;                             // 0x3D0(0x18)()
	class FText                                  Temp_text_Variable_25;                             // 0x3E8(0x18)()
	int32                                        Temp_int_Variable_13;                              // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_12;                          // 0x408(0x18)()
	class FText                                  Temp_text_Variable_26;                             // 0x420(0x18)()
	class FText                                  Temp_text_Variable_27;                             // 0x438(0x18)()
	int32                                        Temp_int_Variable_14;                              // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_13;                          // 0x458(0x18)()
	class FText                                  Temp_text_Variable_28;                             // 0x470(0x18)()
	class FText                                  Temp_text_Variable_29;                             // 0x488(0x18)()
	int32                                        Temp_int_Variable_15;                              // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_14;                          // 0x4A8(0x18)()
	class FText                                  Temp_text_Variable_30;                             // 0x4C0(0x18)()
	class FText                                  Temp_text_Variable_31;                             // 0x4D8(0x18)()
	int32                                        Temp_int_Variable_16;                              // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_15;                          // 0x4F8(0x18)()
	class FText                                  Temp_text_Variable_32;                             // 0x510(0x18)()
	class FText                                  Temp_text_Variable_33;                             // 0x528(0x18)()
	int32                                        Temp_int_Variable_17;                              // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D77[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_16;                          // 0x548(0x18)()
	class FText                                  Temp_text_Variable_34;                             // 0x560(0x18)()
	class FText                                  Temp_text_Variable_35;                             // 0x578(0x18)()
	int32                                        Temp_int_Variable_18;                              // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_17;                          // 0x598(0x18)()
	class FText                                  Temp_text_Variable_36;                             // 0x5B0(0x18)()
	class FText                                  Temp_text_Variable_37;                             // 0x5C8(0x18)()
	int32                                        Temp_int_Variable_19;                              // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_18;                          // 0x5E8(0x18)()
	class FText                                  Temp_text_Variable_38;                             // 0x600(0x18)()
	class FText                                  Temp_text_Variable_39;                             // 0x618(0x18)()
	int32                                        Temp_int_Variable_20;                              // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_19;                          // 0x638(0x18)()
	class FText                                  Temp_text_Variable_40;                             // 0x650(0x18)()
	class FText                                  Temp_text_Variable_41;                             // 0x668(0x18)()
	int32                                        Temp_int_Variable_21;                              // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_20;                          // 0x688(0x18)()
	class FText                                  Temp_text_Variable_42;                             // 0x6A0(0x18)()
	class FText                                  Temp_text_Variable_43;                             // 0x6B8(0x18)()
	int32                                        Temp_int_Variable_22;                              // 0x6D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_21;                          // 0x6D8(0x18)()
	class FText                                  Temp_text_Variable_44;                             // 0x6F0(0x18)()
	class FText                                  Temp_text_Variable_45;                             // 0x708(0x18)()
	int32                                        Temp_int_Variable_23;                              // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_22;                          // 0x728(0x18)()
	class FText                                  Temp_text_Variable_46;                             // 0x740(0x18)()
	class FText                                  Temp_text_Variable_47;                             // 0x758(0x18)()
	class FText                                  Temp_text_Variable_48;                             // 0x770(0x18)()
	class FText                                  K2Node_Select_Default_23;                          // 0x788(0x18)()
	class FText                                  Temp_text_Variable_49;                             // 0x7A0(0x18)()
	int32                                        Temp_int_Variable_24;                              // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_24;                          // 0x7C0(0x18)()
};

// 0x9 (0x9 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1DC0 (0x1DC0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_v3_C_HandleConfigChanged_Athena_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)()
	int32                                        Temp_int_Variable;                                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_3;                              // 0x60(0x18)()
	class FText                                  Temp_text_Variable_4;                              // 0x78(0x18)()
	class FText                                  Temp_text_Variable_5;                              // 0x90(0x18)()
	class FText                                  Temp_text_Variable_6;                              // 0xA8(0x18)()
	class FText                                  Temp_text_Variable_7;                              // 0xC0(0x18)()
	int32                                        Temp_int_Variable_1;                               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xE0(0x18)()
	class FText                                  Temp_text_Variable_8;                              // 0xF8(0x18)()
	class FText                                  Temp_text_Variable_9;                              // 0x110(0x18)()
	class FText                                  Temp_text_Variable_10;                             // 0x128(0x18)()
	class FText                                  Temp_text_Variable_11;                             // 0x140(0x18)()
	int32                                        Temp_int_Variable_2;                               // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x160(0x18)()
	class FText                                  Temp_text_Variable_12;                             // 0x178(0x18)()
	class FText                                  Temp_text_Variable_13;                             // 0x190(0x18)()
	class FText                                  Temp_text_Variable_14;                             // 0x1A8(0x18)()
	class FText                                  Temp_text_Variable_15;                             // 0x1C0(0x18)()
	class FText                                  Temp_text_Variable_16;                             // 0x1D8(0x18)()
	int32                                        Temp_int_Variable_3;                               // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x1F8(0x18)()
	class FText                                  Temp_text_Variable_17;                             // 0x210(0x18)()
	class FText                                  Temp_text_Variable_18;                             // 0x228(0x18)()
	class FText                                  Temp_text_Variable_19;                             // 0x240(0x18)()
	class FText                                  Temp_text_Variable_20;                             // 0x258(0x18)()
	class FText                                  Temp_text_Variable_21;                             // 0x270(0x18)()
	int32                                        Temp_int_Variable_4;                               // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_3;                           // 0x290(0x18)()
	class FText                                  Temp_text_Variable_22;                             // 0x2A8(0x18)()
	class FText                                  Temp_text_Variable_23;                             // 0x2C0(0x18)()
	class FText                                  Temp_text_Variable_24;                             // 0x2D8(0x18)()
	class FText                                  Temp_text_Variable_25;                             // 0x2F0(0x18)()
	int32                                        Temp_int_Variable_5;                               // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_4;                           // 0x310(0x18)()
	class FText                                  Temp_text_Variable_26;                             // 0x328(0x18)()
	class FText                                  Temp_text_Variable_27;                             // 0x340(0x18)()
	class FText                                  Temp_text_Variable_28;                             // 0x358(0x18)()
	class FText                                  Temp_text_Variable_29;                             // 0x370(0x18)()
	class FText                                  Temp_text_Variable_30;                             // 0x388(0x18)()
	int32                                        Temp_int_Variable_6;                               // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D88[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_5;                           // 0x3A8(0x18)()
	class FText                                  Temp_text_Variable_31;                             // 0x3C0(0x18)()
	class FText                                  Temp_text_Variable_32;                             // 0x3D8(0x18)()
	class FText                                  Temp_text_Variable_33;                             // 0x3F0(0x18)()
	class FText                                  Temp_text_Variable_34;                             // 0x408(0x18)()
	class FText                                  Temp_text_Variable_35;                             // 0x420(0x18)()
	int32                                        Temp_int_Variable_7;                               // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_6;                           // 0x440(0x18)()
	class FText                                  Temp_text_Variable_36;                             // 0x458(0x18)()
	class FText                                  Temp_text_Variable_37;                             // 0x470(0x18)()
	class FText                                  Temp_text_Variable_38;                             // 0x488(0x18)()
	class FText                                  Temp_text_Variable_39;                             // 0x4A0(0x18)()
	class FText                                  Temp_text_Variable_40;                             // 0x4B8(0x18)()
	int32                                        Temp_int_Variable_8;                               // 0x4D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_7;                           // 0x4D8(0x18)()
	class FText                                  Temp_text_Variable_41;                             // 0x4F0(0x18)()
	class FText                                  Temp_text_Variable_42;                             // 0x508(0x18)()
	class FText                                  Temp_text_Variable_43;                             // 0x520(0x18)()
	class FText                                  Temp_text_Variable_44;                             // 0x538(0x18)()
	class FText                                  Temp_text_Variable_45;                             // 0x550(0x18)()
	int32                                        Temp_int_Variable_9;                               // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_8;                           // 0x570(0x18)()
	class FText                                  Temp_text_Variable_46;                             // 0x588(0x18)()
	class FText                                  Temp_text_Variable_47;                             // 0x5A0(0x18)()
	class FText                                  Temp_text_Variable_48;                             // 0x5B8(0x18)()
	class FText                                  Temp_text_Variable_49;                             // 0x5D0(0x18)()
	class FText                                  Temp_text_Variable_50;                             // 0x5E8(0x18)()
	int32                                        Temp_int_Variable_10;                              // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_9;                           // 0x608(0x18)()
	class FText                                  Temp_text_Variable_51;                             // 0x620(0x18)()
	class FText                                  Temp_text_Variable_52;                             // 0x638(0x18)()
	class FText                                  Temp_text_Variable_53;                             // 0x650(0x18)()
	class FText                                  Temp_text_Variable_54;                             // 0x668(0x18)()
	class FText                                  Temp_text_Variable_55;                             // 0x680(0x18)()
	int32                                        Temp_int_Variable_11;                              // 0x698(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_10;                          // 0x6A0(0x18)()
	class FText                                  Temp_text_Variable_56;                             // 0x6B8(0x18)()
	class FText                                  Temp_text_Variable_57;                             // 0x6D0(0x18)()
	class FText                                  Temp_text_Variable_58;                             // 0x6E8(0x18)()
	class FText                                  Temp_text_Variable_59;                             // 0x700(0x18)()
	class FText                                  Temp_text_Variable_60;                             // 0x718(0x18)()
	int32                                        Temp_int_Variable_12;                              // 0x730(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_11;                          // 0x738(0x18)()
	class FText                                  Temp_text_Variable_61;                             // 0x750(0x18)()
	class FText                                  Temp_text_Variable_62;                             // 0x768(0x18)()
	class FText                                  Temp_text_Variable_63;                             // 0x780(0x18)()
	class FText                                  Temp_text_Variable_64;                             // 0x798(0x18)()
	class FText                                  Temp_text_Variable_65;                             // 0x7B0(0x18)()
	int32                                        Temp_int_Variable_13;                              // 0x7C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_12;                          // 0x7D0(0x18)()
	class FText                                  Temp_text_Variable_66;                             // 0x7E8(0x18)()
	class FText                                  Temp_text_Variable_67;                             // 0x800(0x18)()
	class FText                                  Temp_text_Variable_68;                             // 0x818(0x18)()
	class FText                                  Temp_text_Variable_69;                             // 0x830(0x18)()
	class FText                                  Temp_text_Variable_70;                             // 0x848(0x18)()
	int32                                        Temp_int_Variable_14;                              // 0x860(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_13;                          // 0x868(0x18)()
	class FText                                  Temp_text_Variable_71;                             // 0x880(0x18)()
	class FText                                  Temp_text_Variable_72;                             // 0x898(0x18)()
	class FText                                  Temp_text_Variable_73;                             // 0x8B0(0x18)()
	class FText                                  Temp_text_Variable_74;                             // 0x8C8(0x18)()
	class FText                                  Temp_text_Variable_75;                             // 0x8E0(0x18)()
	int32                                        Temp_int_Variable_15;                              // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D91[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_14;                          // 0x900(0x18)()
	class FText                                  Temp_text_Variable_76;                             // 0x918(0x18)()
	class FText                                  Temp_text_Variable_77;                             // 0x930(0x18)()
	class FText                                  Temp_text_Variable_78;                             // 0x948(0x18)()
	class FText                                  Temp_text_Variable_79;                             // 0x960(0x18)()
	class FText                                  Temp_text_Variable_80;                             // 0x978(0x18)()
	int32                                        Temp_int_Variable_16;                              // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_15;                          // 0x998(0x18)()
	class FText                                  Temp_text_Variable_81;                             // 0x9B0(0x18)()
	class FText                                  Temp_text_Variable_82;                             // 0x9C8(0x18)()
	class FText                                  Temp_text_Variable_83;                             // 0x9E0(0x18)()
	class FText                                  Temp_text_Variable_84;                             // 0x9F8(0x18)()
	class FText                                  Temp_text_Variable_85;                             // 0xA10(0x18)()
	int32                                        Temp_int_Variable_17;                              // 0xA28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_16;                          // 0xA30(0x18)()
	class FText                                  Temp_text_Variable_86;                             // 0xA48(0x18)()
	class FText                                  Temp_text_Variable_87;                             // 0xA60(0x18)()
	class FText                                  Temp_text_Variable_88;                             // 0xA78(0x18)()
	class FText                                  Temp_text_Variable_89;                             // 0xA90(0x18)()
	class FText                                  Temp_text_Variable_90;                             // 0xAA8(0x18)()
	int32                                        Temp_int_Variable_18;                              // 0xAC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_17;                          // 0xAC8(0x18)()
	class FText                                  Temp_text_Variable_91;                             // 0xAE0(0x18)()
	class FText                                  Temp_text_Variable_92;                             // 0xAF8(0x18)()
	class FText                                  Temp_text_Variable_93;                             // 0xB10(0x18)()
	class FText                                  Temp_text_Variable_94;                             // 0xB28(0x18)()
	class FText                                  Temp_text_Variable_95;                             // 0xB40(0x18)()
	int32                                        Temp_int_Variable_19;                              // 0xB58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D95[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_18;                          // 0xB60(0x18)()
	class FText                                  Temp_text_Variable_96;                             // 0xB78(0x18)()
	class FText                                  Temp_text_Variable_97;                             // 0xB90(0x18)()
	class FText                                  Temp_text_Variable_98;                             // 0xBA8(0x18)()
	class FText                                  Temp_text_Variable_99;                             // 0xBC0(0x18)()
	class FText                                  Temp_text_Variable_100;                            // 0xBD8(0x18)()
	int32                                        Temp_int_Variable_20;                              // 0xBF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_19;                          // 0xBF8(0x18)()
	class FText                                  Temp_text_Variable_101;                            // 0xC10(0x18)()
	class FText                                  Temp_text_Variable_102;                            // 0xC28(0x18)()
	class FText                                  Temp_text_Variable_103;                            // 0xC40(0x18)()
	class FText                                  Temp_text_Variable_104;                            // 0xC58(0x18)()
	class FText                                  Temp_text_Variable_105;                            // 0xC70(0x18)()
	int32                                        Temp_int_Variable_21;                              // 0xC88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_20;                          // 0xC90(0x18)()
	class FText                                  Temp_text_Variable_106;                            // 0xCA8(0x18)()
	class FText                                  Temp_text_Variable_107;                            // 0xCC0(0x18)()
	class FText                                  Temp_text_Variable_108;                            // 0xCD8(0x18)()
	class FText                                  Temp_text_Variable_109;                            // 0xCF0(0x18)()
	class FText                                  Temp_text_Variable_110;                            // 0xD08(0x18)()
	int32                                        Temp_int_Variable_22;                              // 0xD20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_21;                          // 0xD28(0x18)()
	class FText                                  Temp_text_Variable_111;                            // 0xD40(0x18)()
	class FText                                  Temp_text_Variable_112;                            // 0xD58(0x18)()
	class FText                                  Temp_text_Variable_113;                            // 0xD70(0x18)()
	class FText                                  Temp_text_Variable_114;                            // 0xD88(0x18)()
	class FText                                  Temp_text_Variable_115;                            // 0xDA0(0x18)()
	int32                                        Temp_int_Variable_23;                              // 0xDB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_22;                          // 0xDC0(0x18)()
	class FText                                  Temp_text_Variable_116;                            // 0xDD8(0x18)()
	class FText                                  Temp_text_Variable_117;                            // 0xDF0(0x18)()
	class FText                                  Temp_text_Variable_118;                            // 0xE08(0x18)()
	class FText                                  Temp_text_Variable_119;                            // 0xE20(0x18)()
	class FText                                  Temp_text_Variable_120;                            // 0xE38(0x18)()
	int32                                        Temp_int_Variable_24;                              // 0xE50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_23;                          // 0xE58(0x18)()
	class FText                                  Temp_text_Variable_121;                            // 0xE70(0x18)()
	class FText                                  Temp_text_Variable_122;                            // 0xE88(0x18)()
	class FText                                  Temp_text_Variable_123;                            // 0xEA0(0x18)()
	class FText                                  Temp_text_Variable_124;                            // 0xEB8(0x18)()
	class FText                                  Temp_text_Variable_125;                            // 0xED0(0x18)()
	int32                                        Temp_int_Variable_25;                              // 0xEE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_24;                          // 0xEF0(0x18)()
	class FText                                  Temp_text_Variable_126;                            // 0xF08(0x18)()
	class FText                                  Temp_text_Variable_127;                            // 0xF20(0x18)()
	class FText                                  Temp_text_Variable_128;                            // 0xF38(0x18)()
	class FText                                  Temp_text_Variable_129;                            // 0xF50(0x18)()
	class FText                                  Temp_text_Variable_130;                            // 0xF68(0x18)()
	int32                                        Temp_int_Variable_26;                              // 0xF80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_25;                          // 0xF88(0x18)()
	class FText                                  Temp_text_Variable_131;                            // 0xFA0(0x18)()
	class FText                                  Temp_text_Variable_132;                            // 0xFB8(0x18)()
	class FText                                  Temp_text_Variable_133;                            // 0xFD0(0x18)()
	class FText                                  Temp_text_Variable_134;                            // 0xFE8(0x18)()
	class FText                                  Temp_text_Variable_135;                            // 0x1000(0x18)()
	int32                                        Temp_int_Variable_27;                              // 0x1018(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_26;                          // 0x1020(0x18)()
	class FText                                  Temp_text_Variable_136;                            // 0x1038(0x18)()
	class FText                                  Temp_text_Variable_137;                            // 0x1050(0x18)()
	class FText                                  Temp_text_Variable_138;                            // 0x1068(0x18)()
	class FText                                  Temp_text_Variable_139;                            // 0x1080(0x18)()
	class FText                                  Temp_text_Variable_140;                            // 0x1098(0x18)()
	int32                                        Temp_int_Variable_28;                              // 0x10B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_27;                          // 0x10B8(0x18)()
	class FText                                  Temp_text_Variable_141;                            // 0x10D0(0x18)()
	class FText                                  Temp_text_Variable_142;                            // 0x10E8(0x18)()
	class FText                                  Temp_text_Variable_143;                            // 0x1100(0x18)()
	class FText                                  Temp_text_Variable_144;                            // 0x1118(0x18)()
	class FText                                  Temp_text_Variable_145;                            // 0x1130(0x18)()
	int32                                        Temp_int_Variable_29;                              // 0x1148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_28;                          // 0x1150(0x18)()
	class FText                                  Temp_text_Variable_146;                            // 0x1168(0x18)()
	class FText                                  Temp_text_Variable_147;                            // 0x1180(0x18)()
	class FText                                  Temp_text_Variable_148;                            // 0x1198(0x18)()
	class FText                                  Temp_text_Variable_149;                            // 0x11B0(0x18)()
	class FText                                  Temp_text_Variable_150;                            // 0x11C8(0x18)()
	int32                                        Temp_int_Variable_30;                              // 0x11E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_29;                          // 0x11E8(0x18)()
	class FText                                  Temp_text_Variable_151;                            // 0x1200(0x18)()
	class FText                                  Temp_text_Variable_152;                            // 0x1218(0x18)()
	class FText                                  Temp_text_Variable_153;                            // 0x1230(0x18)()
	class FText                                  Temp_text_Variable_154;                            // 0x1248(0x18)()
	class FText                                  Temp_text_Variable_155;                            // 0x1260(0x18)()
	int32                                        Temp_int_Variable_31;                              // 0x1278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_30;                          // 0x1280(0x18)()
	class FText                                  Temp_text_Variable_156;                            // 0x1298(0x18)()
	class FText                                  Temp_text_Variable_157;                            // 0x12B0(0x18)()
	class FText                                  Temp_text_Variable_158;                            // 0x12C8(0x18)()
	class FText                                  Temp_text_Variable_159;                            // 0x12E0(0x18)()
	class FText                                  Temp_text_Variable_160;                            // 0x12F8(0x18)()
	int32                                        Temp_int_Variable_32;                              // 0x1310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_31;                          // 0x1318(0x18)()
	class FText                                  Temp_text_Variable_161;                            // 0x1330(0x18)()
	class FText                                  Temp_text_Variable_162;                            // 0x1348(0x18)()
	class FText                                  Temp_text_Variable_163;                            // 0x1360(0x18)()
	class FText                                  Temp_text_Variable_164;                            // 0x1378(0x18)()
	class FText                                  Temp_text_Variable_165;                            // 0x1390(0x18)()
	int32                                        Temp_int_Variable_33;                              // 0x13A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_32;                          // 0x13B0(0x18)()
	class FText                                  Temp_text_Variable_166;                            // 0x13C8(0x18)()
	class FText                                  Temp_text_Variable_167;                            // 0x13E0(0x18)()
	class FText                                  Temp_text_Variable_168;                            // 0x13F8(0x18)()
	class FText                                  Temp_text_Variable_169;                            // 0x1410(0x18)()
	class FText                                  Temp_text_Variable_170;                            // 0x1428(0x18)()
	int32                                        Temp_int_Variable_34;                              // 0x1440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_33;                          // 0x1448(0x18)()
	class FText                                  Temp_text_Variable_171;                            // 0x1460(0x18)()
	class FText                                  Temp_text_Variable_172;                            // 0x1478(0x18)()
	class FText                                  Temp_text_Variable_173;                            // 0x1490(0x18)()
	class FText                                  Temp_text_Variable_174;                            // 0x14A8(0x18)()
	class FText                                  Temp_text_Variable_175;                            // 0x14C0(0x18)()
	int32                                        Temp_int_Variable_35;                              // 0x14D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_34;                          // 0x14E0(0x18)()
	class FText                                  Temp_text_Variable_176;                            // 0x14F8(0x18)()
	class FText                                  Temp_text_Variable_177;                            // 0x1510(0x18)()
	class FText                                  Temp_text_Variable_178;                            // 0x1528(0x18)()
	class FText                                  Temp_text_Variable_179;                            // 0x1540(0x18)()
	class FText                                  Temp_text_Variable_180;                            // 0x1558(0x18)()
	int32                                        Temp_int_Variable_36;                              // 0x1570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_35;                          // 0x1578(0x18)()
	class FText                                  Temp_text_Variable_181;                            // 0x1590(0x18)()
	class FText                                  Temp_text_Variable_182;                            // 0x15A8(0x18)()
	class FText                                  Temp_text_Variable_183;                            // 0x15C0(0x18)()
	class FText                                  Temp_text_Variable_184;                            // 0x15D8(0x18)()
	class FText                                  Temp_text_Variable_185;                            // 0x15F0(0x18)()
	int32                                        Temp_int_Variable_37;                              // 0x1608(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_36;                          // 0x1610(0x18)()
	class FText                                  Temp_text_Variable_186;                            // 0x1628(0x18)()
	class FText                                  Temp_text_Variable_187;                            // 0x1640(0x18)()
	class FText                                  Temp_text_Variable_188;                            // 0x1658(0x18)()
	class FText                                  Temp_text_Variable_189;                            // 0x1670(0x18)()
	class FText                                  Temp_text_Variable_190;                            // 0x1688(0x18)()
	int32                                        Temp_int_Variable_38;                              // 0x16A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_37;                          // 0x16A8(0x18)()
	class FText                                  Temp_text_Variable_191;                            // 0x16C0(0x18)()
	class FText                                  Temp_text_Variable_192;                            // 0x16D8(0x18)()
	class FText                                  Temp_text_Variable_193;                            // 0x16F0(0x18)()
	class FText                                  Temp_text_Variable_194;                            // 0x1708(0x18)()
	class FText                                  Temp_text_Variable_195;                            // 0x1720(0x18)()
	int32                                        Temp_int_Variable_39;                              // 0x1738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_38;                          // 0x1740(0x18)()
	class FText                                  Temp_text_Variable_196;                            // 0x1758(0x18)()
	class FText                                  Temp_text_Variable_197;                            // 0x1770(0x18)()
	class FText                                  Temp_text_Variable_198;                            // 0x1788(0x18)()
	class FText                                  Temp_text_Variable_199;                            // 0x17A0(0x18)()
	class FText                                  Temp_text_Variable_200;                            // 0x17B8(0x18)()
	int32                                        Temp_int_Variable_40;                              // 0x17D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_39;                          // 0x17D8(0x18)()
	class FText                                  Temp_text_Variable_201;                            // 0x17F0(0x18)()
	class FText                                  Temp_text_Variable_202;                            // 0x1808(0x18)()
	class FText                                  Temp_text_Variable_203;                            // 0x1820(0x18)()
	class FText                                  Temp_text_Variable_204;                            // 0x1838(0x18)()
	class FText                                  Temp_text_Variable_205;                            // 0x1850(0x18)()
	int32                                        Temp_int_Variable_41;                              // 0x1868(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_40;                          // 0x1870(0x18)()
	class FText                                  Temp_text_Variable_206;                            // 0x1888(0x18)()
	class FText                                  Temp_text_Variable_207;                            // 0x18A0(0x18)()
	class FText                                  Temp_text_Variable_208;                            // 0x18B8(0x18)()
	class FText                                  Temp_text_Variable_209;                            // 0x18D0(0x18)()
	class FText                                  Temp_text_Variable_210;                            // 0x18E8(0x18)()
	int32                                        Temp_int_Variable_42;                              // 0x1900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_41;                          // 0x1908(0x18)()
	class FText                                  Temp_text_Variable_211;                            // 0x1920(0x18)()
	class FText                                  Temp_text_Variable_212;                            // 0x1938(0x18)()
	class FText                                  Temp_text_Variable_213;                            // 0x1950(0x18)()
	class FText                                  Temp_text_Variable_214;                            // 0x1968(0x18)()
	class FText                                  Temp_text_Variable_215;                            // 0x1980(0x18)()
	int32                                        Temp_int_Variable_43;                              // 0x1998(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_42;                          // 0x19A0(0x18)()
	class FText                                  Temp_text_Variable_216;                            // 0x19B8(0x18)()
	class FText                                  Temp_text_Variable_217;                            // 0x19D0(0x18)()
	class FText                                  Temp_text_Variable_218;                            // 0x19E8(0x18)()
	class FText                                  Temp_text_Variable_219;                            // 0x1A00(0x18)()
	class FText                                  Temp_text_Variable_220;                            // 0x1A18(0x18)()
	int32                                        Temp_int_Variable_44;                              // 0x1A30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_43;                          // 0x1A38(0x18)()
	class FText                                  Temp_text_Variable_221;                            // 0x1A50(0x18)()
	class FText                                  Temp_text_Variable_222;                            // 0x1A68(0x18)()
	class FText                                  Temp_text_Variable_223;                            // 0x1A80(0x18)()
	class FText                                  Temp_text_Variable_224;                            // 0x1A98(0x18)()
	class FText                                  Temp_text_Variable_225;                            // 0x1AB0(0x18)()
	int32                                        Temp_int_Variable_45;                              // 0x1AC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_44;                          // 0x1AD0(0x18)()
	class FText                                  Temp_text_Variable_226;                            // 0x1AE8(0x18)()
	class FText                                  Temp_text_Variable_227;                            // 0x1B00(0x18)()
	class FText                                  Temp_text_Variable_228;                            // 0x1B18(0x18)()
	class FText                                  Temp_text_Variable_229;                            // 0x1B30(0x18)()
	class FText                                  Temp_text_Variable_230;                            // 0x1B48(0x18)()
	int32                                        Temp_int_Variable_46;                              // 0x1B60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_45;                          // 0x1B68(0x18)()
	class FText                                  Temp_text_Variable_231;                            // 0x1B80(0x18)()
	class FText                                  Temp_text_Variable_232;                            // 0x1B98(0x18)()
	class FText                                  Temp_text_Variable_233;                            // 0x1BB0(0x18)()
	class FText                                  Temp_text_Variable_234;                            // 0x1BC8(0x18)()
	class FText                                  Temp_text_Variable_235;                            // 0x1BE0(0x18)()
	int32                                        Temp_int_Variable_47;                              // 0x1BF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_46;                          // 0x1C00(0x18)()
	class FText                                  Temp_text_Variable_236;                            // 0x1C18(0x18)()
	class FText                                  Temp_text_Variable_237;                            // 0x1C30(0x18)()
	class FText                                  Temp_text_Variable_238;                            // 0x1C48(0x18)()
	class FText                                  Temp_text_Variable_239;                            // 0x1C60(0x18)()
	class FText                                  Temp_text_Variable_240;                            // 0x1C78(0x18)()
	int32                                        Temp_int_Variable_48;                              // 0x1C90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_47;                          // 0x1C98(0x18)()
	class FText                                  Temp_text_Variable_241;                            // 0x1CB0(0x18)()
	class FText                                  Temp_text_Variable_242;                            // 0x1CC8(0x18)()
	class FText                                  Temp_text_Variable_243;                            // 0x1CE0(0x18)()
	class FText                                  Temp_text_Variable_244;                            // 0x1CF8(0x18)()
	class FText                                  Temp_text_Variable_245;                            // 0x1D10(0x18)()
	class FText                                  K2Node_Select_Default_48;                          // 0x1D28(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x1D40(0x18)()
	class FText                                  Temp_text_Variable_246;                            // 0x1D58(0x18)()
	class FText                                  Temp_text_Variable_247;                            // 0x1D70(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x1D88(0x18)()
	int32                                        Temp_int_Variable_49;                              // 0x1DA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_49;                          // 0x1DA8(0x18)()
};

// 0x21 (0x21 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
struct UGamepadMappingInfo_v3_C_OnConfigChanged_Params
{
public:
	enum class EFortInputActionGroup             Mode;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Config;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCustomGamepadConfig_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
struct UGamepadMappingInfo_v3_C_Update_Displayed_Mapping_Params
{
public:
	int32                                        Platform;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             Mode;                                              // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Configuration;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_2;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>     K2Node_Select_Default_2;                           // 0x28(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
struct UGamepadMappingInfo_v3_C_OnLoaded_CDBC1B27496027B96D10BC9A64224F3D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
struct UGamepadMappingInfo_v3_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
struct UGamepadMappingInfo_v3_C_Update_Controller_Images_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_OnButtonClicked_Bind_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
struct UGamepadMappingInfo_v3_C_UpdateCustomButtons_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected
struct UGamepadMappingInfo_v3_C_DeadZoneTabSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected
struct UGamepadMappingInfo_v3_C_DeadZoneTabDeselected_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_DeadzoneMoveResetButtonClicked_Bind_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind
struct UGamepadMappingInfo_v3_C_DeadzoneLookResetButtonClicked_Bind_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19D (0x19D - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
struct UGamepadMappingInfo_v3_C_ExecuteUbergraph_GamepadMappingInfo_v3_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DB9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetControllerImage_Texture;               // 0x20(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button_2;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	class UGamepadKeyTextButton_C*               K2Node_DynamicCast_AsGamepad_Key_Text_Button;      // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x74(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGamepadKeyTextButton_C*>       K2Node_MakeArray_Array;                            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue;              // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue_1;            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue_2;            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue_3;            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTabCount_ReturnValue;                  // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGamepadKeyTextButton_C*               CallFunc_Array_Get_Item;                           // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName;     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText;       // 0xD8(0x18)()
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName_1;   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText_1;     // 0xF8(0x18)()
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button_1;                       // 0x120(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x130(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x140(0x10)(ZeroConstructor, NoDestructor)
	class UFortSettingsContext*                  CallFunc_GetContext_ReturnValue;                   // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSettingsContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValue_ReturnValue_1;                   // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCustomButtonDataForKey_ActionName_2;   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCustomButtonDataForKey_DescText_2;     // 0x178(0x18)()
	class UGamepadKeyTextButton_C*               CallFunc_Array_Get_Item_1;                         // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomButtonNavLeft__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
struct UGamepadMappingInfo_v3_C_Image_LightboxClicked__DelegateSignature_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
struct UGamepadMappingInfo_v3_C_CustomKeySelected__DelegateSignature_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
