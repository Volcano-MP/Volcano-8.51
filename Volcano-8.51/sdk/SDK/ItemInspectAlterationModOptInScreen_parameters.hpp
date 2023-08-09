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

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetScrollWidget
struct UItemInspectAlterationModOptInScreen_C_SetScrollWidget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.BindDelegates
struct UItemInspectAlterationModOptInScreen_C_BindDelegates_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x40(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Reset To Show Confirmation
struct UItemInspectAlterationModOptInScreen_C_Reset_To_Show_Confirmation_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Reset To Show Help
struct UItemInspectAlterationModOptInScreen_C_Reset_To_Show_Help_Params
{
public:
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4624[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Update Colors
struct UItemInspectAlterationModOptInScreen_C_Update_Colors_Params
{
public:
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4625[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x8(0x80)()
};

// 0x88 (0x88 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetupTriangles
struct UItemInspectAlterationModOptInScreen_C_SetupTriangles_Params
{
public:
	struct FFortRarityItemData                   RarityData;                                        // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Set Up Header Colors
struct UItemInspectAlterationModOptInScreen_C_Set_Up_Header_Colors_Params
{
public:
	struct FFortRarityItemData                   RarityData;                                        // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetupScreen
struct UItemInspectAlterationModOptInScreen_C_SetupScreen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.OnSetupItem
struct UItemInspectAlterationModOptInScreen_C_OnSetupItem_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Construct
struct UItemInspectAlterationModOptInScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Continue
struct UItemInspectAlterationModOptInScreen_C_Handle_Continue_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.OnActivated
struct UItemInspectAlterationModOptInScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Cancel
struct UItemInspectAlterationModOptInScreen_C_Handle_Cancel_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Accept
struct UItemInspectAlterationModOptInScreen_C_Handle_Accept_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle OptIn Accept
struct UItemInspectAlterationModOptInScreen_C_Handle_OptIn_Accept_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle OptIn Cancel
struct UItemInspectAlterationModOptInScreen_C_Handle_OptIn_Cancel_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Help Button
struct UItemInspectAlterationModOptInScreen_C_Handle_Help_Button_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Cancel Preview
struct UItemInspectAlterationModOptInScreen_C_Handle_Cancel_Preview_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Destruct
struct UItemInspectAlterationModOptInScreen_C_Destruct_Params
{
public:
};

// 0x59 (0x59 - 0x0)
// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.ExecuteUbergraph_ItemInspectAlterationModOptInScreen
struct UItemInspectAlterationModOptInScreen_C_ExecuteUbergraph_ItemInspectAlterationModOptInScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4626[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_CustomEvent_Button_4;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button_3;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button_2;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PauseAnimation_ReturnValue;               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4627[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationTimeRange_ReturnValue_1;     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button_1;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetHidePerkRecombobulatorHelp_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
