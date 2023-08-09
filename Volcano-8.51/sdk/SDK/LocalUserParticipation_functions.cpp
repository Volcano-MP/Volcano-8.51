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


// Function LocalUserParticipation.LocalUserParticipation_C.OnLocalPlayerParticipationChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsParticipating                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULocalUserParticipation_C::OnLocalPlayerParticipationChanged(bool bIsParticipating)
{
	static auto Func = Class->GetFunction("LocalUserParticipation_C", "OnLocalPlayerParticipationChanged");

	Params::ULocalUserParticipation_C_OnLocalPlayerParticipationChanged_Params Parms;

	Parms.bIsParticipating = bIsParticipating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserParticipation.LocalUserParticipation_C.ExecuteUbergraph_LocalUserParticipation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsParticipating                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserParticipation_C::ExecuteUbergraph_LocalUserParticipation(int32 EntryPoint, bool K2Node_Event_bIsParticipating, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LocalUserParticipation_C", "ExecuteUbergraph_LocalUserParticipation");

	Params::ULocalUserParticipation_C_ExecuteUbergraph_LocalUserParticipation_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsParticipating = K2Node_Event_bIsParticipating;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
