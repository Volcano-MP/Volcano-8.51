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


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventTeamMatchHistoryEntry_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "BP_OnHovered");

	Params::UEventTeamMatchHistoryEntry_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventTeamMatchHistoryEntry_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "BP_OnUnhovered");

	Params::UEventTeamMatchHistoryEntry_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "OnListItemObjectSet");

	Params::UEventTeamMatchHistoryEntry_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.ExecuteUbergraph_EventTeamMatchHistoryEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventTeamMatchHistoryEntryData*K2Node_DynamicCast_AsFort_Event_Team_Match_History_Entry_Data    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryEntry_C::ExecuteUbergraph_EventTeamMatchHistoryEntry(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UObject* K2Node_Event_ListItemObject, class UFortEventTeamMatchHistoryEntryData* K2Node_DynamicCast_AsFort_Event_Team_Match_History_Entry_Data, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "ExecuteUbergraph_EventTeamMatchHistoryEntry");

	Params::UEventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsFort_Event_Team_Match_History_Entry_Data = K2Node_DynamicCast_AsFort_Event_Team_Match_History_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventTeamMatchHistoryEntry_C::Unhovered__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "Unhovered__DelegateSignature");

	Params::UEventTeamMatchHistoryEntry_C_Unhovered__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventTeamMatchHistoryEntry_C::Hovered__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "Hovered__DelegateSignature");

	Params::UEventTeamMatchHistoryEntry_C_Hovered__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
