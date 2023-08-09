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


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "BP_OnHovered");

	Params::UEventPlayerStatProfileSelectorEntry_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "BP_OnUnhovered");

	Params::UEventPlayerStatProfileSelectorEntry_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPlayerStatProfileSelectorEntry_C::ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "ExecuteUbergraph_EventPlayerStatProfileSelectorEntry");

	Params::UEventPlayerStatProfileSelectorEntry_C_ExecuteUbergraph_EventPlayerStatProfileSelectorEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::Unhovered__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "Unhovered__DelegateSignature");

	Params::UEventPlayerStatProfileSelectorEntry_C_Unhovered__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelectorEntry_C::Hovered__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelectorEntry_C", "Hovered__DelegateSignature");

	Params::UEventPlayerStatProfileSelectorEntry_C_Hovered__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
