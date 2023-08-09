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


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortAlterationWidgetStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemAlterationsListDetailWidget_C::SetState(enum class EFortAlterationWidgetState State)
{
	static auto Func = Class->GetFunction("ItemAlterationsListDetailWidget_C", "SetState");

	Params::UItemAlterationsListDetailWidget_C_SetState_Params Parms;

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAlterationsListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemAlterationsListDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAlterationsListDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto Func = Class->GetFunction("ItemAlterationsListDetailWidget_C", "HandlePostDifferentItemToCompareWithSet");

	Params::UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemAlterationsListDetailWidget_C::ExecuteUbergraph_ItemAlterationsListDetailWidget(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemAlterationsListDetailWidget_C", "ExecuteUbergraph_ItemAlterationsListDetailWidget");

	Params::UItemAlterationsListDetailWidget_C_ExecuteUbergraph_ItemAlterationsListDetailWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
