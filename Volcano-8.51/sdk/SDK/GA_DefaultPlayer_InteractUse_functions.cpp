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


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnCancelled_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnCancelled_A513E1E044E129CC612DF5A23589BC9C()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnCancelled_A513E1E044E129CC612DF5A23589BC9C");

	Params::UGA_DefaultPlayer_InteractUse_C_OnCancelled_A513E1E044E129CC612DF5A23589BC9C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnInterrupted_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnInterrupted_A513E1E044E129CC612DF5A23589BC9C()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnInterrupted_A513E1E044E129CC612DF5A23589BC9C");

	Params::UGA_DefaultPlayer_InteractUse_C_OnInterrupted_A513E1E044E129CC612DF5A23589BC9C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnBlendOut_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnBlendOut_A513E1E044E129CC612DF5A23589BC9C()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnBlendOut_A513E1E044E129CC612DF5A23589BC9C");

	Params::UGA_DefaultPlayer_InteractUse_C_OnBlendOut_A513E1E044E129CC612DF5A23589BC9C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnCompleted_A513E1E044E129CC612DF5A23589BC9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::OnCompleted_A513E1E044E129CC612DF5A23589BC9C()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "OnCompleted_A513E1E044E129CC612DF5A23589BC9C");

	Params::UGA_DefaultPlayer_InteractUse_C_OnCompleted_A513E1E044E129CC612DF5A23589BC9C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_InteractUse_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "K2_ActivateAbility");

	Params::UGA_DefaultPlayer_InteractUse_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.ExecuteUbergraph_GA_DefaultPlayer_InteractUse
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DefaultPlayer_InteractUse_C::ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_InteractUse_C", "ExecuteUbergraph_GA_DefaultPlayer_InteractUse");

	Params::UGA_DefaultPlayer_InteractUse_C_ExecuteUbergraph_GA_DefaultPlayer_InteractUse_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
