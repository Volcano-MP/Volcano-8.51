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

// 0x1 (0x1 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.EmptyFunction
struct UTournamentPayoutModal_C_EmptyFunction_Params
{
public:
	bool                                         Handled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.NotifyNoPayouts
struct UTournamentPayoutModal_C_NotifyNoPayouts_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UTournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.Init
struct UTournamentPayoutModal_C_Init_Params
{
public:
	class FString                                EventId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.EventIntro
struct UTournamentPayoutModal_C_EventIntro_Params
{
public:
};

// 0x170 (0x170 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.EventColorize
struct UTournamentPayoutModal_C_EventColorize_Params
{
public:
	struct FFortTournamentDisplayInfo            TournamentDisplayInfo;                             // 0x0(0x170)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1A0 (0x1A0 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.ExecuteUbergraph_TournamentPayoutModal
struct UTournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_EventId;                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTournamentDisplayInfo            K2Node_CustomEvent_TournamentDisplayInfo;          // 0x20(0x170)()
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.NoPayout__DelegateSignature
struct UTournamentPayoutModal_C_NoPayout__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TournamentPayoutModal.TournamentPayoutModal_C.CallEventBack__DelegateSignature
struct UTournamentPayoutModal_C_CallEventBack__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
