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


// Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDivisionIconButton_C::OnRankButtonSelected(bool bIsSelected)
{
	static auto Func = Class->GetFunction("DivisionIconButton_C", "OnRankButtonSelected");

	Params::UDivisionIconButton_C_OnRankButtonSelected_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDivisionIconButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("DivisionIconButton_C", "BP_OnHovered");

	Params::UDivisionIconButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDivisionIconButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("DivisionIconButton_C", "BP_OnUnhovered");

	Params::UDivisionIconButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDivisionIconButton_C::ExecuteUbergraph_DivisionIconButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bIsSelected)
{
	static auto Func = Class->GetFunction("DivisionIconButton_C", "ExecuteUbergraph_DivisionIconButton");

	Params::UDivisionIconButton_C_ExecuteUbergraph_DivisionIconButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
