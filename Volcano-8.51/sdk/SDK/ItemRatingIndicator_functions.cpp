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


// Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemRatingIndicator_C::HandleViewModelChanged()
{
	static auto Func = Class->GetFunction("ItemRatingIndicator_C", "HandleViewModelChanged");

	Params::UItemRatingIndicator_C_HandleViewModelChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue            (ConstParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemRatingIndicator_C::ExecuteUbergraph_ItemRatingIndicator(int32 EntryPoint, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemRatingIndicator_C", "ExecuteUbergraph_ItemRatingIndicator");

	Params::UItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue = CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
