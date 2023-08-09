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


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedHeaderSubWidgetBase_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedHeaderSubWidgetBase_C_InitFromGiftBoxItem_BP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedHeaderSubWidgetBase_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "Construct");

	Params::UItemReceivedHeaderSubWidgetBase_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedHeaderSubWidgetBase_C::ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase");

	Params::UItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
