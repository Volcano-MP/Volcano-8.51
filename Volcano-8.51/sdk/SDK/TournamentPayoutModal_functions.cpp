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


// Function TournamentPayoutModal.TournamentPayoutModal_C.EmptyFunction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Handled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentPayoutModal_C::EmptyFunction(bool* Handled)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "EmptyFunction");

	Params::UTournamentPayoutModal_C_EmptyFunction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = Parms.Handled;

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.NotifyNoPayouts
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::NotifyNoPayouts()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "NotifyNoPayouts");

	Params::UTournamentPayoutModal_C_NotifyNoPayouts_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UTournamentPayoutModal_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::Init(const class FString& EventId)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "Init");

	Params::UTournamentPayoutModal_C_Init_Params Parms;

	Parms.EventId = EventId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::EventIntro()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "EventIntro");

	Params::UTournamentPayoutModal_C_EventIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UTournamentPayoutModal_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "EventColorize");

	Params::UTournamentPayoutModal_C_EventColorize_Params Parms;

	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.ExecuteUbergraph_TournamentPayoutModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventId                                       (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         ()
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTournamentPayoutModal_C::ExecuteUbergraph_TournamentPayoutModal(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventId, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "ExecuteUbergraph_TournamentPayoutModal");

	Params::UTournamentPayoutModal_C_ExecuteUbergraph_TournamentPayoutModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventId = K2Node_CustomEvent_EventId;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.NoPayout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::NoPayout__DelegateSignature()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "NoPayout__DelegateSignature");

	Params::UTournamentPayoutModal_C_NoPayout__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentPayoutModal.TournamentPayoutModal_C.CallEventBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTournamentPayoutModal_C::CallEventBack__DelegateSignature()
{
	static auto Func = Class->GetFunction("TournamentPayoutModal_C", "CallEventBack__DelegateSignature");

	Params::UTournamentPayoutModal_C_CallEventBack__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
