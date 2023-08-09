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


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPerksWidgetState   InState                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHero*                   InEvolutionOption                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPerksListDetailWidget_C::SetState(enum class EFortPerksWidgetState InState, class UFortHero* InEvolutionOption)
{
	static auto Func = Class->GetFunction("ItemPerksListDetailWidget_C", "SetState");

	Params::UItemPerksListDetailWidget_C_SetState_Params Parms;

	Parms.InState = InState;
	Parms.InEvolutionOption = InEvolutionOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPerksListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemPerksListDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemPerksListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemPerksListDetailWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ItemPerksListDetailWidget_C", "Construct");

	Params::UItemPerksListDetailWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHero*                   K2Node_DynamicCast_AsFort_Hero                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPerksListDetailWidget_C::ExecuteUbergraph_ItemPerksListDetailWidget(int32 EntryPoint, class UFortHero* K2Node_DynamicCast_AsFort_Hero, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemPerksListDetailWidget_C", "ExecuteUbergraph_ItemPerksListDetailWidget");

	Params::UItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsFort_Hero = K2Node_DynamicCast_AsFort_Hero;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
