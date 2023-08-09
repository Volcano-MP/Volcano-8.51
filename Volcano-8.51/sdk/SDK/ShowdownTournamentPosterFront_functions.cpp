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


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.GetTournamentDateText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TournamentDate                                                   (Parm, OutParm)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             ()
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_3                                             ()
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        Temp_text_Variable_7                                             ()
// class FText                        Temp_text_Variable_8                                             ()
// class FText                        Temp_text_Variable_9                                             ()
// class FText                        Temp_text_Variable_10                                            ()
// class FText                        Temp_text_Variable_11                                            ()
// class FText                        Temp_text_Variable_12                                            ()
// class FText                        Temp_text_Variable_13                                            ()
// class FText                        Temp_text_Variable_14                                            ()
// class FText                        Temp_text_Variable_15                                            ()
// class FText                        Temp_text_Variable_16                                            ()
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_17                                            ()
// class FText                        Temp_text_Variable_18                                            ()
// class FText                        Temp_text_Variable_19                                            ()
// class FText                        Temp_text_Variable_20                                            ()
// class FText                        Temp_text_Variable_21                                            ()
// class FText                        Temp_text_Variable_22                                            ()
// class FText                        Temp_text_Variable_23                                            ()
// class FText                        Temp_text_Variable_24                                            ()
// class FText                        Temp_text_Variable_25                                            ()
// class FText                        Temp_text_Variable_26                                            ()
// class FText                        Temp_text_Variable_27                                            ()
// class FText                        Temp_text_Variable_28                                            ()
// class FText                        Temp_text_Variable_29                                            ()
// struct FDateTime                   CallFunc_GetTournamentEndTime_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentBeginTime_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakDateTime_Year_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentEndTime_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakDateTime_Year_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        K2Node_Select_Default                                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentBeginTime_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetTournamentEndTime_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            ()
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          ()
// struct FDateTime                   CallFunc_GetTournamentBeginTime_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          ()
// class FText                        K2Node_Select_Default_4                                          ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UShowdownTournamentPosterFront_C::GetTournamentDateText(class FText* TournamentDate, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText Temp_text_Variable_2, bool Temp_bool_Variable_1, class FText Temp_text_Variable_3, int32 Temp_int_Variable, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, int32 Temp_int_Variable_1, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue, bool Temp_bool_Variable_2, int32 CallFunc_BreakDateTime_Year_1, int32 CallFunc_BreakDateTime_Month_1, int32 CallFunc_BreakDateTime_Day_1, int32 CallFunc_BreakDateTime_Hour_1, int32 CallFunc_BreakDateTime_Minute_1, int32 CallFunc_BreakDateTime_Second_1, int32 CallFunc_BreakDateTime_Millisecond_1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_BreakDateTime_Year_2, int32 CallFunc_BreakDateTime_Month_2, int32 CallFunc_BreakDateTime_Day_2, int32 CallFunc_BreakDateTime_Hour_2, int32 CallFunc_BreakDateTime_Minute_2, int32 CallFunc_BreakDateTime_Second_2, int32 CallFunc_BreakDateTime_Millisecond_2, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue_1, const struct FDateTime& CallFunc_GetTournamentEndTime_ReturnValue_2, int32 CallFunc_BreakDateTime_Year_3, int32 CallFunc_BreakDateTime_Month_3, int32 CallFunc_BreakDateTime_Day_3, int32 CallFunc_BreakDateTime_Hour_3, int32 CallFunc_BreakDateTime_Minute_3, int32 CallFunc_BreakDateTime_Second_3, int32 CallFunc_BreakDateTime_Millisecond_3, int32 CallFunc_BreakDateTime_Year_4, int32 CallFunc_BreakDateTime_Month_4, int32 CallFunc_BreakDateTime_Day_4, int32 CallFunc_BreakDateTime_Hour_4, int32 CallFunc_BreakDateTime_Minute_4, int32 CallFunc_BreakDateTime_Second_4, int32 CallFunc_BreakDateTime_Millisecond_4, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText K2Node_Select_Default_2, const struct FDateTime& CallFunc_GetTournamentBeginTime_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_BreakDateTime_Year_5, int32 CallFunc_BreakDateTime_Month_5, int32 CallFunc_BreakDateTime_Day_5, int32 CallFunc_BreakDateTime_Hour_5, int32 CallFunc_BreakDateTime_Minute_5, int32 CallFunc_BreakDateTime_Second_5, int32 CallFunc_BreakDateTime_Millisecond_5, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "GetTournamentDateText");

	Params::UShowdownTournamentPosterFront_C_GetTournamentDateText_Params Parms;

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.CallFunc_GetTournamentEndTime_ReturnValue = CallFunc_GetTournamentEndTime_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_GetTournamentBeginTime_ReturnValue = CallFunc_GetTournamentBeginTime_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_BreakDateTime_Year_1 = CallFunc_BreakDateTime_Year_1;
	Parms.CallFunc_BreakDateTime_Month_1 = CallFunc_BreakDateTime_Month_1;
	Parms.CallFunc_BreakDateTime_Day_1 = CallFunc_BreakDateTime_Day_1;
	Parms.CallFunc_BreakDateTime_Hour_1 = CallFunc_BreakDateTime_Hour_1;
	Parms.CallFunc_BreakDateTime_Minute_1 = CallFunc_BreakDateTime_Minute_1;
	Parms.CallFunc_BreakDateTime_Second_1 = CallFunc_BreakDateTime_Second_1;
	Parms.CallFunc_BreakDateTime_Millisecond_1 = CallFunc_BreakDateTime_Millisecond_1;
	Parms.CallFunc_GetTournamentEndTime_ReturnValue_1 = CallFunc_GetTournamentEndTime_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year_2 = CallFunc_BreakDateTime_Year_2;
	Parms.CallFunc_BreakDateTime_Month_2 = CallFunc_BreakDateTime_Month_2;
	Parms.CallFunc_BreakDateTime_Day_2 = CallFunc_BreakDateTime_Day_2;
	Parms.CallFunc_BreakDateTime_Hour_2 = CallFunc_BreakDateTime_Hour_2;
	Parms.CallFunc_BreakDateTime_Minute_2 = CallFunc_BreakDateTime_Minute_2;
	Parms.CallFunc_BreakDateTime_Second_2 = CallFunc_BreakDateTime_Second_2;
	Parms.CallFunc_BreakDateTime_Millisecond_2 = CallFunc_BreakDateTime_Millisecond_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetTournamentBeginTime_ReturnValue_1 = CallFunc_GetTournamentBeginTime_ReturnValue_1;
	Parms.CallFunc_GetTournamentEndTime_ReturnValue_2 = CallFunc_GetTournamentEndTime_ReturnValue_2;
	Parms.CallFunc_BreakDateTime_Year_3 = CallFunc_BreakDateTime_Year_3;
	Parms.CallFunc_BreakDateTime_Month_3 = CallFunc_BreakDateTime_Month_3;
	Parms.CallFunc_BreakDateTime_Day_3 = CallFunc_BreakDateTime_Day_3;
	Parms.CallFunc_BreakDateTime_Hour_3 = CallFunc_BreakDateTime_Hour_3;
	Parms.CallFunc_BreakDateTime_Minute_3 = CallFunc_BreakDateTime_Minute_3;
	Parms.CallFunc_BreakDateTime_Second_3 = CallFunc_BreakDateTime_Second_3;
	Parms.CallFunc_BreakDateTime_Millisecond_3 = CallFunc_BreakDateTime_Millisecond_3;
	Parms.CallFunc_BreakDateTime_Year_4 = CallFunc_BreakDateTime_Year_4;
	Parms.CallFunc_BreakDateTime_Month_4 = CallFunc_BreakDateTime_Month_4;
	Parms.CallFunc_BreakDateTime_Day_4 = CallFunc_BreakDateTime_Day_4;
	Parms.CallFunc_BreakDateTime_Hour_4 = CallFunc_BreakDateTime_Hour_4;
	Parms.CallFunc_BreakDateTime_Minute_4 = CallFunc_BreakDateTime_Minute_4;
	Parms.CallFunc_BreakDateTime_Second_4 = CallFunc_BreakDateTime_Second_4;
	Parms.CallFunc_BreakDateTime_Millisecond_4 = CallFunc_BreakDateTime_Millisecond_4;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetTournamentBeginTime_ReturnValue_2 = CallFunc_GetTournamentBeginTime_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_BreakDateTime_Year_5 = CallFunc_BreakDateTime_Year_5;
	Parms.CallFunc_BreakDateTime_Month_5 = CallFunc_BreakDateTime_Month_5;
	Parms.CallFunc_BreakDateTime_Day_5 = CallFunc_BreakDateTime_Day_5;
	Parms.CallFunc_BreakDateTime_Hour_5 = CallFunc_BreakDateTime_Hour_5;
	Parms.CallFunc_BreakDateTime_Minute_5 = CallFunc_BreakDateTime_Minute_5;
	Parms.CallFunc_BreakDateTime_Second_5 = CallFunc_BreakDateTime_Second_5;
	Parms.CallFunc_BreakDateTime_Millisecond_5 = CallFunc_BreakDateTime_Millisecond_5;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TournamentDate != nullptr)
		*TournamentDate = Parms.TournamentDate;

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownTournamentPosterFront_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "PreConstruct");

	Params::UShowdownTournamentPosterFront_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterFront_C::RefreshDataBP()
{
	static auto Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "RefreshDataBP");

	Params::UShowdownTournamentPosterFront_C_RefreshDataBP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterFront_C::Construct()
{
	static auto Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "Construct");

	Params::UShowdownTournamentPosterFront_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UShowdownTournamentPosterFront_C::BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature()
{
	static auto Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature");

	Params::UShowdownTournamentPosterFront_C_BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.ExecuteUbergraph_ShowdownTournamentPosterFront
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWorldCupQualifierEvent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortEventWindowEligibilityTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               ()
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortEventWindowEligibilityCallFunc_GetTournamentEligibility_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownTournamentPosterFront_C::ExecuteUbergraph_ShowdownTournamentPosterFront(int32 EntryPoint, bool CallFunc_IsWorldCupQualifierEvent_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortEventWindowEligibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, enum class EFortEventWindowEligibility CallFunc_GetTournamentEligibility_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("ShowdownTournamentPosterFront_C", "ExecuteUbergraph_ShowdownTournamentPosterFront");

	Params::UShowdownTournamentPosterFront_C_ExecuteUbergraph_ShowdownTournamentPosterFront_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsWorldCupQualifierEvent_ReturnValue = CallFunc_IsWorldCupQualifierEvent_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTournamentEligibility_ReturnValue = CallFunc_GetTournamentEligibility_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
