#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCancelled_878A944E4E232FA54BF973ACBC126DA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_NoMontage_C::OnCancelled_878A944E4E232FA54BF973ACBC126DA3()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_NoMontage_C", "OnCancelled_878A944E4E232FA54BF973ACBC126DA3");

	Params::UGAB_GenericDeath_NoMontage_C_OnCancelled_878A944E4E232FA54BF973ACBC126DA3_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnInterrupted_878A944E4E232FA54BF973ACBC126DA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_NoMontage_C::OnInterrupted_878A944E4E232FA54BF973ACBC126DA3()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_NoMontage_C", "OnInterrupted_878A944E4E232FA54BF973ACBC126DA3");

	Params::UGAB_GenericDeath_NoMontage_C_OnInterrupted_878A944E4E232FA54BF973ACBC126DA3_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnBlendOut_878A944E4E232FA54BF973ACBC126DA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_NoMontage_C::OnBlendOut_878A944E4E232FA54BF973ACBC126DA3()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_NoMontage_C", "OnBlendOut_878A944E4E232FA54BF973ACBC126DA3");

	Params::UGAB_GenericDeath_NoMontage_C_OnBlendOut_878A944E4E232FA54BF973ACBC126DA3_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.OnCompleted_878A944E4E232FA54BF973ACBC126DA3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericDeath_NoMontage_C::OnCompleted_878A944E4E232FA54BF973ACBC126DA3()
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_NoMontage_C", "OnCompleted_878A944E4E232FA54BF973ACBC126DA3");

	Params::UGAB_GenericDeath_NoMontage_C_OnCompleted_878A944E4E232FA54BF973ACBC126DA3_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_GenericDeath_NoMontage_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_NoMontage_C", "K2_OnEndAbility");

	Params::UGAB_GenericDeath_NoMontage_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_GenericDeath_NoMontage_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_NoMontage_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_GenericDeath_NoMontage_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericDeath_NoMontage.GAB_GenericDeath_NoMontage_C.ExecuteUbergraph_GAB_GenericDeath_NoMontage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilityTask_PlayAnimAndWait*CallFunc_CreatePlayAnimAndWaitProxy_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGAB_GenericDeath_NoMontage_C::ExecuteUbergraph_GAB_GenericDeath_NoMontage(int32 EntryPoint, class UFortAbilityTask_PlayAnimAndWait* CallFunc_CreatePlayAnimAndWaitProxy_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static auto Func = Class->GetFunction("GAB_GenericDeath_NoMontage_C", "ExecuteUbergraph_GAB_GenericDeath_NoMontage");

	Params::UGAB_GenericDeath_NoMontage_C_ExecuteUbergraph_GAB_GenericDeath_NoMontage_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreatePlayAnimAndWaitProxy_ReturnValue = CallFunc_CreatePlayAnimAndWaitProxy_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
