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
// Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__FinishedFunc
struct AFrontend_Manage_C_CameraReturnTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__UpdateFunc
struct AFrontend_Manage_C_CameraReturnTimeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__FinishedFunc
struct AFrontend_Manage_C_CameraLerpTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__UpdateFunc
struct AFrontend_Manage_C_CameraLerpTimeline__UpdateFunc_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.ManageCameraSelected
struct AFrontend_Manage_C_ManageCameraSelected_Params
{
public:
	bool                                         IsSensei;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.CameraReturn
struct AFrontend_Manage_C_CameraReturn_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.LerpCamera
struct AFrontend_Manage_C_LerpCamera_Params
{
public:
	bool                                         IsSensei;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.CameraDeselected
struct AFrontend_Manage_C_CameraDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.ReceiveBeginPlay
struct AFrontend_Manage_C_ReceiveBeginPlay_Params
{
public:
};

// 0x2D9 (0x2D9 - 0x0)
// Function Frontend_Manage.Frontend_Manage_C.ExecuteUbergraph_Frontend_Manage
struct AFrontend_Manage_C_ExecuteUbergraph_Frontend_Manage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsSensei_1;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E2E[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(IsPlainOldData, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E2F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E30[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_1;               // 0x70(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue;                        // 0xA0(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0xD0(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue_2;               // 0x160(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue_3;               // 0x190(0x30)(IsPlainOldData, NoDestructor)
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors;            // 0x1C0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         K2Node_CustomEvent_IsSensei;                       // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFrontend_Manage_Camera_C*             K2Node_DynamicCast_AsFrontend_Manage_Camera;       // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_Select_Default;                             // 0x1F0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_TLerp_ReturnValue_1;                      // 0x220(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult_1;    // 0x250(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue_1;       // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
