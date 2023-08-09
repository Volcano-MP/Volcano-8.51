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
// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCancelled_878A944E4E232FA54BF973ACBC126DA3
struct UGAB_GenericDeath_NoMontage_C_OnCancelled_878A944E4E232FA54BF973ACBC126DA3_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnInterrupted_878A944E4E232FA54BF973ACBC126DA3
struct UGAB_GenericDeath_NoMontage_C_OnInterrupted_878A944E4E232FA54BF973ACBC126DA3_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnBlendOut_878A944E4E232FA54BF973ACBC126DA3
struct UGAB_GenericDeath_NoMontage_C_OnBlendOut_878A944E4E232FA54BF973ACBC126DA3_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCompleted_878A944E4E232FA54BF973ACBC126DA3
struct UGAB_GenericDeath_NoMontage_C_OnCompleted_878A944E4E232FA54BF973ACBC126DA3_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_OnEndAbility
struct UGAB_GenericDeath_NoMontage_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_ActivateAbilityFromEvent
struct UGAB_GenericDeath_NoMontage_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x118 (0x118 - 0x0)
// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.ExecuteUbergraph_GAB_GenericDeath_NoMontage
struct UGAB_GenericDeath_NoMontage_C_ExecuteUbergraph_GAB_GenericDeath_NoMontage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_PlayAnimAndWait*      CallFunc_CreatePlayAnimAndWaitProxy_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x44(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3F36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x68(0xB0)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
