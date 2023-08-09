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


// Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                ()

struct FEventReply UItemCardWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "OnFocusReceived");

	Params::UItemCardWidget_C_OnFocusReceived_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemCardWidget.ItemCardWidget_C.OnCentered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemCardWidget_C::OnCentered()
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "OnCentered");

	Params::UItemCardWidget_C_OnCentered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCardWidget.ItemCardWidget_C.PlayShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCardWidget_C::PlayShow(int32 Idx)
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "PlayShow");

	Params::UItemCardWidget_C_PlayShow_Params Parms;

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCardWidget.ItemCardWidget_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UItemCardWidget_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "OnFocusLost");

	Params::UItemCardWidget_C_OnFocusLost_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCardWidget.ItemCardWidget_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemCardWidget_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "BP_OnHovered");

	Params::UItemCardWidget_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCardWidget.ItemCardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemCardWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "Construct");

	Params::UItemCardWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Idx                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)

void UItemCardWidget_C::ExecuteUbergraph_ItemCardWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_CustomEvent_Idx, bool CallFunc_Less_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "ExecuteUbergraph_ItemCardWidget");

	Params::UItemCardWidget_C_ExecuteUbergraph_ItemCardWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Idx = K2Node_CustomEvent_Idx;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemCardWidget_C::OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam)
{
	static auto Func = Class->GetFunction("ItemCardWidget_C", "OnHoveredEvent__DelegateSignature");

	Params::UItemCardWidget_C_OnHoveredEvent__DelegateSignature_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
