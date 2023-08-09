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
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Reset Intro
struct UFeatureUnlockScreen_C_Reset_Intro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.HandleBack
struct UFeatureUnlockScreen_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnBeginIntro
struct UFeatureUnlockScreen_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.RefreshDataBP
struct UFeatureUnlockScreen_C_RefreshDataBP_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFeatureUnlockScreen_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Construct
struct UFeatureUnlockScreen_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.Destruct
struct UFeatureUnlockScreen_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnActivated
struct UFeatureUnlockScreen_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnRemovedFromActivationStack
struct UFeatureUnlockScreen_C_OnRemovedFromActivationStack_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.AnimationFinished
struct UFeatureUnlockScreen_C_AnimationFinished_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.ExecuteUbergraph_FeatureUnlockScreen
struct UFeatureUnlockScreen_C_ExecuteUbergraph_FeatureUnlockScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HandleBack_Passthrough;                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetTitle_ReturnValue;                     // 0x20(0x18)()
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x38(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue_1;            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPendingFeatureUnlockNotification_ReturnValue; // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue_2;            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_PopNextPendingFeatureUnlock_ReturnValue;  // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA8(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function FeatureUnlockScreen.FeatureUnlockScreen_C.OnFeatureUnlockClosed__DelegateSignature
struct UFeatureUnlockScreen_C_OnFeatureUnlockClosed__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
