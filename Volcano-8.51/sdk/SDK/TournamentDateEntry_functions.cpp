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


// Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentDateEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "PreConstruct");

	Params::UTournamentDateEntry_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentDateEntry.TournamentDateEntry_C.EventColor
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  ShowdownData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTournamentDateEntry_C::EventColor(struct FFortTournamentDisplayInfo& ShowdownData)
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "EventColor");

	Params::UTournamentDateEntry_C_EventColor_Params Parms;

	Parms.ShowdownData = ShowdownData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentDateEntry.TournamentDateEntry_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTournamentDateEntry_C::RefreshDataBP()
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "RefreshDataBP");

	Params::UTournamentDateEntry_C_RefreshDataBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_showdownData                                  (ConstParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   ()
// struct FSlateColor                 K2Node_Select_Default_1                                          ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue                          ()
// struct FDateTime                   CallFunc_GetEventEndTime_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue_1                        ()
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventTimeAsText_ReturnValue                          ()
// struct FDateTime                   CallFunc_GetEventEndTime_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetEventTimeAsText_ReturnValue_1                        ()
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue_2                        ()
// struct FDateTime                   CallFunc_GetEventEndTime_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue_3                        ()
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        K2Node_Select_Default_4                                          ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    ()

void UTournamentDateEntry_C::ExecuteUbergraph_TournamentDateEntry(int32 EntryPoint, enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_showdownData, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 Temp_int_Variable_1, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, class FText CallFunc_GetEventDateAsText_ReturnValue, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, class FText CallFunc_GetEventDateAsText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue_1, class FText CallFunc_GetEventTimeAsText_ReturnValue, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEventTimeAsText_ReturnValue_1, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_GetEventDateAsText_ReturnValue_2, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_GetEventDateAsText_ReturnValue_3, bool Temp_bool_Variable_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 K2Node_Select_Default_3, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "ExecuteUbergraph_TournamentDateEntry");

	Params::UTournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEventTimeState_ReturnValue = CallFunc_GetEventTimeState_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_showdownData = K2Node_CustomEvent_showdownData;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetEventBeginTime_ReturnValue = CallFunc_GetEventBeginTime_ReturnValue;
	Parms.CallFunc_GetEventDateAsText_ReturnValue = CallFunc_GetEventDateAsText_ReturnValue;
	Parms.CallFunc_GetEventEndTime_ReturnValue = CallFunc_GetEventEndTime_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetEventDateAsText_ReturnValue_1 = CallFunc_GetEventDateAsText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_GetEventBeginTime_ReturnValue_1 = CallFunc_GetEventBeginTime_ReturnValue_1;
	Parms.CallFunc_GetEventTimeAsText_ReturnValue = CallFunc_GetEventTimeAsText_ReturnValue;
	Parms.CallFunc_GetEventEndTime_ReturnValue_1 = CallFunc_GetEventEndTime_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetEventTimeAsText_ReturnValue_1 = CallFunc_GetEventTimeAsText_ReturnValue_1;
	Parms.CallFunc_GetEventBeginTime_ReturnValue_2 = CallFunc_GetEventBeginTime_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetEventDateAsText_ReturnValue_2 = CallFunc_GetEventDateAsText_ReturnValue_2;
	Parms.CallFunc_GetEventEndTime_ReturnValue_2 = CallFunc_GetEventEndTime_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetEventDateAsText_ReturnValue_3 = CallFunc_GetEventDateAsText_ReturnValue_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
