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


// Function PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsContributingToTeamPowerRating                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTeamMembers_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   ()
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   ()

void UPowerRatingWidget_C::UpdateWidgetState(bool IsContributingToTeamPowerRating, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_HasTeamMembers_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3)
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "UpdateWidgetState");

	Params::UPowerRatingWidget_C_UpdateWidgetState_Params Parms;

	Parms.IsContributingToTeamPowerRating = IsContributingToTeamPowerRating;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasTeamMembers_ReturnValue = CallFunc_HasTeamMembers_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingWidget.PowerRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPowerRatingWidget_C::Construct()
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "Construct");

	Params::UPowerRatingWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              BasePowerRating                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRatingWidget_C::OnBasePowerRatingUpdated(int32 BasePowerRating)
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "OnBasePowerRatingUpdated");

	Params::UPowerRatingWidget_C_OnBasePowerRatingUpdated_Params Parms;

	Parms.BasePowerRating = BasePowerRating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TeamPowerRating                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRatingWidget_C::OnTeamPowerRatingUpdated(int32 TeamPowerRating)
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "OnTeamPowerRatingUpdated");

	Params::UPowerRatingWidget_C_OnTeamPowerRatingUpdated_Params Parms;

	Parms.TeamPowerRating = TeamPowerRating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              BaseRatingProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TeamRatingProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRatingWidget_C::OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress)
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "OnPowerRatingProgressUpdated");

	Params::UPowerRatingWidget_C_OnPowerRatingProgressUpdated_Params Parms;

	Parms.BaseRatingProgress = BaseRatingProgress;
	Parms.TeamRatingProgress = TeamRatingProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingWidget.PowerRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPowerRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "PreConstruct");

	Params::UPowerRatingWidget_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPowerRatingWidget_C::OnTeamMembershipChanged()
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "OnTeamMembershipChanged");

	Params::UPowerRatingWidget_C_OnTeamMembershipChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTeamMembers_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_BasePowerRating                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TeamPowerRating                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// float                              K2Node_Event_BaseRatingProgress                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TeamRatingProgress                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBasePowerRating_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamPowerRating_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRatingWidget_C::ExecuteUbergraph_PowerRatingWidget(int32 EntryPoint, bool CallFunc_HasTeamMembers_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 K2Node_Event_BasePowerRating, int32 K2Node_Event_TeamPowerRating, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float K2Node_Event_BaseRatingProgress, float K2Node_Event_TeamRatingProgress, class FText CallFunc_Format_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_GetBasePowerRating_ReturnValue, int32 CallFunc_GetTeamPowerRating_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("PowerRatingWidget_C", "ExecuteUbergraph_PowerRatingWidget");

	Params::UPowerRatingWidget_C_ExecuteUbergraph_PowerRatingWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasTeamMembers_ReturnValue = CallFunc_HasTeamMembers_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_BasePowerRating = K2Node_Event_BasePowerRating;
	Parms.K2Node_Event_TeamPowerRating = K2Node_Event_TeamPowerRating;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Event_BaseRatingProgress = K2Node_Event_BaseRatingProgress;
	Parms.K2Node_Event_TeamRatingProgress = K2Node_Event_TeamRatingProgress;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetBasePowerRating_ReturnValue = CallFunc_GetBasePowerRating_ReturnValue;
	Parms.CallFunc_GetTeamPowerRating_ReturnValue = CallFunc_GetTeamPowerRating_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
