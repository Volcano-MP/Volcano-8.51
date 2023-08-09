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

// 0x3B0 (0x3B0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonUp
struct UTutorialToastWidget_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)()
	int32                                        CallFunc_PointerEvent_GetPointerIndex_ReturnValue; // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PointerEvent_GetUserIndex_ReturnValue;    // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x220(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HasMouseCaptureByUser_ReturnValue;        // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4023[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x240(0xB8)()
	struct FEventReply                           CallFunc_ReleaseMouseCapture_ReturnValue;          // 0x2F8(0xB8)()
};

// 0x3A8 (0x3A8 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.OnMouseButtonDown
struct UTutorialToastWidget_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)()
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x218(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4024[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x238(0xB8)()
	struct FEventReply                           CallFunc_CaptureMouse_ReturnValue;                 // 0x2F0(0xB8)()
};

// 0x60 (0x60 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.SetAndShowText
struct UTutorialToastWidget_C_SetAndShowText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                      TextBlock;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocalTextBlock;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalText;                                         // 0x28(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4025[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x48(0x18)()
};

// 0x60 (0x60 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.ShowToast
struct UTutorialToastWidget_C_ShowToast_Params
{
public:
	struct FFortToastDisplayInfo                 DisplayInfo;                                       // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.OnLoaded_3011ADA2432D60D311EC38ADECCDDF44
struct UTutorialToastWidget_C_OnLoaded_3011ADA2432D60D311EC38ADECCDDF44_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.OnShowToast
struct UTutorialToastWidget_C_OnShowToast_Params
{
public:
	struct FFortToastDisplayInfo                 DispalyInfo;                                       // 0x0(0x60)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.Start Toast Animation
struct UTutorialToastWidget_C_Start_Toast_Animation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.On Idle Finished
struct UTutorialToastWidget_C_On_Idle_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.SimulateAthenaStoreToast
struct UTutorialToastWidget_C_SimulateAthenaStoreToast_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.Clicked
struct UTutorialToastWidget_C_Clicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.RemoveWidget
struct UTutorialToastWidget_C_RemoveWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0
struct UTutorialToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2
struct UTutorialToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2_Params
{
public:
};

// 0x130 (0x130 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.ExecuteUbergraph_TutorialToastWidget
struct UTutorialToastWidget_C_ExecuteUbergraph_TutorialToastWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4026[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4027[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortToastDisplayInfo                 K2Node_CustomEvent_DispalyInfo;                    // 0x28(0x60)()
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4028[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xB8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FFortToastDisplayInfo                 K2Node_MakeStruct_FortToastDisplayInfo;            // 0xC0(0x60)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x120(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.OnToastClicked__DelegateSignature
struct UTutorialToastWidget_C_OnToastClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TutorialToastWidget.TutorialToastWidget_C.OnFinishedToast__DelegateSignature
struct UTutorialToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
