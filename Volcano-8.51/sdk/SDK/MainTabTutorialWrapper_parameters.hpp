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
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.TutorialWrapperFinished
struct UMainTabTutorialWrapper_C_TutorialWrapperFinished_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton
struct UMainTabTutorialWrapper_C_SetParentButton_Params
{
public:
	class UCommonButton*                         ParentButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData
struct UMainTabTutorialWrapper_C_GetTutorialCalloutData_Params
{
public:
	struct FFortUITutorialData                   TutorialData;                                      // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortToastDisplayInfo                 FortToastDisplayInfo;                              // 0x58(0x60)(Parm, OutParm)
	class FText                                  CallFunc_Array_Get_Item;                           // 0xB8(0x18)()
	TSoftObjectPtr<class UTexture2D>             CallFunc_Array_Get_Item_1;                         // 0xD0(0x28)(HasGetValueTypeHash)
	struct FFortToastDisplayInfo                 K2Node_MakeStruct_FortToastDisplayInfo;            // 0xF8(0x60)()
};

// 0x67 (0x67 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData
struct UMainTabTutorialWrapper_C_HasValidData_Params
{
public:
	struct FFortUITutorialData                   FortUITutorialData;                                // 0x0(0x58)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Result;                                            // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_561C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x138 (0x138 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout
struct UMainTabTutorialWrapper_C_HandleTutorialCallout_Params
{
public:
	class FName                                  TutorialObjectiveName;                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETutorialType                     TutorialType;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_561D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUITutorialData                   TutorialData;                                      // 0x10(0x58)(Edit, BlueprintVisible)
	class UFortTutorialContext*                  CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_561E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUITutorialData                   CallFunc_GetTutorialData_OutTutorialData;          // 0x78(0x58)()
	bool                                         CallFunc_GetTutorialData_ReturnValue;              // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasValidData_Result;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_561F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortToastDisplayInfo                 CallFunc_GetTutorialCalloutData_FortToastDisplayInfo; // 0xD8(0x60)()
};

// 0x9 (0x9 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper
struct UMainTabTutorialWrapper_C_CheckFinishTutorialWrapper_Params
{
public:
	class UFortTutorialContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialCalloutVisible_ReturnValue;     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStopCallout
struct UMainTabTutorialWrapper_C_OnStopCallout_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout
struct UMainTabTutorialWrapper_C_OnStartCallout_Params
{
public:
	class FName                                  TutorialObjectiveName;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETutorialType                     TutorialType;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Construct
struct UMainTabTutorialWrapper_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Destruct
struct UMainTabTutorialWrapper_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnFinishedToast
struct UMainTabTutorialWrapper_C_OnFinishedToast_Params
{
public:
};

// 0x1D (0x1D - 0x0)
// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper
struct UMainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_Event_TutorialObjectiveName;                // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETutorialType                     K2Node_Event_TutorialType;                         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
