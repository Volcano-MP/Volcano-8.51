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
// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnActivated
struct AFrontend_Manage_Camera_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.OnDeactivated
struct AFrontend_Manage_Camera_C_OnDeactivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraSelected
struct AFrontend_Manage_Camera_C_CameraSelected_Params
{
public:
	bool                                         IsSensei;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraDeselected
struct AFrontend_Manage_Camera_C_CameraDeselected_Params
{
public:
};

// 0x7E (0x7E - 0x0)
// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.ExecuteUbergraph_Frontend_Manage_Camera
struct AFrontend_Manage_Camera_C_ExecuteUbergraph_Frontend_Manage_Camera_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ATVPostProcessBP_C*>            CallFunc_GetAllActorsOfClass_OutActors;            // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	class AFortTimeOfDayManager*                 CallFunc_GetTimeOfDayManagerFromContext_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATVPostProcessBP_C*                    CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FortniteManage_C*>          CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_FortniteManage_C*                  CallFunc_Array_Get_Item_1;                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_FortniteManage_C*>          CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x60(0x10)(ZeroConstructor, ReferenceParm)
	class ABP_FortniteManage_C*                  CallFunc_Array_Get_Item_2;                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsSensei;                       // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenDeselected__DelegateSignature
struct AFrontend_Manage_Camera_C_CameraHasBeenDeselected__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Frontend_Manage_Camera.Frontend_Manage_Camera_C.CameraHasBeenSelected__DelegateSignature
struct AFrontend_Manage_Camera_C_CameraHasBeenSelected__DelegateSignature_Params
{
public:
	bool                                         IsSensei;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
