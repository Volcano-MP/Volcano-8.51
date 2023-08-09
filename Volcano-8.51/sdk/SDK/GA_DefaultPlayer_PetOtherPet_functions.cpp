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


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	Params::UGA_DefaultPlayer_PetOtherPet_C_OnCancelled_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	Params::UGA_DefaultPlayer_PetOtherPet_C_OnInterrupted_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	Params::UGA_DefaultPlayer_PetOtherPet_C_OnBlendOut_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330");

	Params::UGA_DefaultPlayer_PetOtherPet_C_OnCompleted_FB7AFE5D4FF547CAEB1ECA8264EE1330_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DefaultPlayer_PetOtherPet_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "K2_ActivateAbility");

	Params::UGA_DefaultPlayer_PetOtherPet_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C.ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DefaultPlayer_PetOtherPet_C::ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_DefaultPlayer_PetOtherPet_C", "ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet");

	Params::UGA_DefaultPlayer_PetOtherPet_C_ExecuteUbergraph_GA_DefaultPlayer_PetOtherPet_Params Parms;

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
