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

// 0x48 (0x48 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdateStatSet
struct URootProfileStatsScreen_C_UpdateStatSet_Params
{
public:
	class UAthenaSeasonStats*                    CallFunc_GetCurrentStatSet_ReturnValue;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonItemDefinition*           CallFunc_GetSeasonDefintion_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x30(0x18)()
};

// 0x30 (0x30 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdatePlaylist
struct URootProfileStatsScreen_C_UpdatePlaylist_Params
{
public:
	class FText                                  CallFunc_GetCurrentPlaylistName_ReturnValue;       // 0x0(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x18(0x18)()
};

// 0x10 (0x10 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.HandleBack
struct URootProfileStatsScreen_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.Construct
struct URootProfileStatsScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDeactivated
struct URootProfileStatsScreen_C_OnDeactivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStatSetChanged
struct URootProfileStatsScreen_C_OnStatSetChanged_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnActivated
struct URootProfileStatsScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStartFetchingData
struct URootProfileStatsScreen_C_OnStartFetchingData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnNoData
struct URootProfileStatsScreen_C_OnNoData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDataRecieved
struct URootProfileStatsScreen_C_OnDataRecieved_Params
{
public:
};

// 0x49 (0x49 - 0x0)
// Function RootProfileStatsScreen.RootProfileStatsScreen_C.ExecuteUbergraph_RootProfileStatsScreen
struct URootProfileStatsScreen_C_ExecuteUbergraph_RootProfileStatsScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3BFE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                      K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
