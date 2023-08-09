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


// Function ShowdownEventTile.ShowdownEventTile_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TournamentInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShowdownEventTile_C::SetData(const class FString& TournamentInfo, const class FString& EventInfo)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "SetData");

	Params::UShowdownEventTile_C_SetData_Params Parms;

	Parms.TournamentInfo = TournamentInfo;
	Parms.EventInfo = EventInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::Construct()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "Construct");

	Params::UShowdownEventTile_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnClicked");

	Params::UShowdownEventTile_C_BP_OnClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTile_C::EventIntro(int32 Index)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "EventIntro");

	Params::UShowdownEventTile_C_EventIntro_Params Parms;

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventResize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Out                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownEventTile_C::EventResize(bool Out)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "EventResize");

	Params::UShowdownEventTile_C_EventResize_Params Parms;

	Parms.Out = Out;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnHovered");

	Params::UShowdownEventTile_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnUnhovered");

	Params::UShowdownEventTile_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnSelected");

	Params::UShowdownEventTile_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "BP_OnDeselected");

	Params::UShowdownEventTile_C_BP_OnDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UShowdownEventTile_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "OnAddedToFocusPath");

	Params::UShowdownEventTile_C_OnAddedToFocusPath_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UShowdownEventTile_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "OnRemovedFromFocusPath");

	Params::UShowdownEventTile_C_OnRemovedFromFocusPath_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventSetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortShowdownEventState EventState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTile_C::EventSetState(enum class EFortShowdownEventState EventState)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "EventSetState");

	Params::UShowdownEventTile_C_EventSetState_Params Parms;

	Parms.EventState = EventState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::EventColorize(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "EventColorize");

	Params::UShowdownEventTile_C_EventColorize_Params Parms;

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UShowdownEventTile_C::EventColorizeDispatch(const struct FFortTournamentDisplayInfo& DisplayInfo)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "EventColorizeDispatch");

	Params::UShowdownEventTile_C_EventColorizeDispatch_Params Parms;

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::EventMultiRoundStyle()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "EventMultiRoundStyle");

	Params::UShowdownEventTile_C_EventMultiRoundStyle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Out                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// float                              CallFunc_PauseAnimation_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// enum class EFortShowdownEventState K2Node_CustomEvent_EventState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_DisplayInfo_1                                 ()
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_DisplayInfo                                   ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_16                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartTime_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_8                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_17                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_18                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_19                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTile_C::ExecuteUbergraph_ShowdownEventTile(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_3, bool Temp_bool_Variable_3, int32 K2Node_CustomEvent_Index, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_Out, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_2, float CallFunc_GetStartTime_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, float CallFunc_PauseAnimation_ReturnValue_6, float CallFunc_GetStartTime_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_8, float CallFunc_GetStartTime_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_GetEndTime_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, float CallFunc_Subtract_FloatFloat_ReturnValue_4, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class EFortShowdownEventState K2Node_CustomEvent_EventState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float CallFunc_PauseAnimation_ReturnValue_10, float CallFunc_GetStartTime_ReturnValue_5, float CallFunc_PauseAnimation_ReturnValue_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_9, float CallFunc_GetEndTime_ReturnValue_6, bool Temp_bool_Variable_4, float CallFunc_Subtract_FloatFloat_ReturnValue_5, float K2Node_Select_Default_2, float K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_float_Variable_6, float CallFunc_PauseAnimation_ReturnValue_12, float CallFunc_GetStartTime_ReturnValue_6, float CallFunc_PauseAnimation_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_GetEndTime_ReturnValue_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_11, float CallFunc_Subtract_FloatFloat_ReturnValue_6, float CallFunc_PauseAnimation_ReturnValue_14, float CallFunc_GetStartTime_ReturnValue_7, float CallFunc_PauseAnimation_ReturnValue_15, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_GetEndTime_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_12, float CallFunc_Subtract_FloatFloat_ReturnValue_7, bool Temp_bool_Variable_5, float K2Node_Select_Default_4, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_13, float Temp_float_Variable_7, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable_6, float Temp_float_Variable_8, float K2Node_Select_Default_5, bool Temp_bool_Variable_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_14, float Temp_float_Variable_9, float K2Node_Select_Default_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_15, bool Temp_bool_Variable_8, float K2Node_Select_Default_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_16, float CallFunc_PauseAnimation_ReturnValue_16, float CallFunc_GetStartTime_ReturnValue_8, float CallFunc_PauseAnimation_ReturnValue_17, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_17, float CallFunc_GetEndTime_ReturnValue_9, float Temp_float_Variable_10, float CallFunc_Subtract_FloatFloat_ReturnValue_8, float K2Node_Select_Default_8, bool Temp_bool_Variable_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_18, float K2Node_Select_Default_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_19)
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "ExecuteUbergraph_ShowdownEventTile");

	Params::UShowdownEventTile_C_ExecuteUbergraph_ShowdownEventTile_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Out = K2Node_CustomEvent_Out;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue = CallFunc_GetStartTime_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue_1 = CallFunc_PauseAnimation_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetStartTime_ReturnValue_1 = CallFunc_GetStartTime_ReturnValue_1;
	Parms.CallFunc_PauseAnimation_ReturnValue_2 = CallFunc_PauseAnimation_ReturnValue_2;
	Parms.CallFunc_PauseAnimation_ReturnValue_3 = CallFunc_PauseAnimation_ReturnValue_3;
	Parms.CallFunc_PauseAnimation_ReturnValue_4 = CallFunc_PauseAnimation_ReturnValue_4;
	Parms.CallFunc_PauseAnimation_ReturnValue_5 = CallFunc_PauseAnimation_ReturnValue_5;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetEndTime_ReturnValue_2 = CallFunc_GetEndTime_ReturnValue_2;
	Parms.CallFunc_GetStartTime_ReturnValue_2 = CallFunc_GetStartTime_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetEndTime_ReturnValue_3 = CallFunc_GetEndTime_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_6 = CallFunc_PlayAnimation_ReturnValue_6;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_PauseAnimation_ReturnValue_6 = CallFunc_PauseAnimation_ReturnValue_6;
	Parms.CallFunc_GetStartTime_ReturnValue_3 = CallFunc_GetStartTime_ReturnValue_3;
	Parms.CallFunc_PauseAnimation_ReturnValue_7 = CallFunc_PauseAnimation_ReturnValue_7;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_3 = CallFunc_LessEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetEndTime_ReturnValue_4 = CallFunc_GetEndTime_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_7 = CallFunc_PlayAnimation_ReturnValue_7;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_PauseAnimation_ReturnValue_8 = CallFunc_PauseAnimation_ReturnValue_8;
	Parms.CallFunc_GetStartTime_ReturnValue_4 = CallFunc_GetStartTime_ReturnValue_4;
	Parms.CallFunc_PauseAnimation_ReturnValue_9 = CallFunc_PauseAnimation_ReturnValue_9;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_4 = CallFunc_LessEqual_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetEndTime_ReturnValue_5 = CallFunc_GetEndTime_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_8 = CallFunc_PlayAnimation_ReturnValue_8;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_4 = CallFunc_Subtract_FloatFloat_ReturnValue_4;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_CustomEvent_EventState = K2Node_CustomEvent_EventState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.CallFunc_PauseAnimation_ReturnValue_10 = CallFunc_PauseAnimation_ReturnValue_10;
	Parms.CallFunc_GetStartTime_ReturnValue_5 = CallFunc_GetStartTime_ReturnValue_5;
	Parms.CallFunc_PauseAnimation_ReturnValue_11 = CallFunc_PauseAnimation_ReturnValue_11;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_5 = CallFunc_LessEqual_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_9 = CallFunc_PlayAnimation_ReturnValue_9;
	Parms.CallFunc_GetEndTime_ReturnValue_6 = CallFunc_GetEndTime_ReturnValue_6;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_5 = CallFunc_Subtract_FloatFloat_ReturnValue_5;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_10 = CallFunc_PlayAnimation_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.CallFunc_PauseAnimation_ReturnValue_12 = CallFunc_PauseAnimation_ReturnValue_12;
	Parms.CallFunc_GetStartTime_ReturnValue_6 = CallFunc_GetStartTime_ReturnValue_6;
	Parms.CallFunc_PauseAnimation_ReturnValue_13 = CallFunc_PauseAnimation_ReturnValue_13;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_6 = CallFunc_LessEqual_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_6 = CallFunc_Add_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetEndTime_ReturnValue_7 = CallFunc_GetEndTime_ReturnValue_7;
	Parms.CallFunc_PlayAnimation_ReturnValue_11 = CallFunc_PlayAnimation_ReturnValue_11;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_6 = CallFunc_Subtract_FloatFloat_ReturnValue_6;
	Parms.CallFunc_PauseAnimation_ReturnValue_14 = CallFunc_PauseAnimation_ReturnValue_14;
	Parms.CallFunc_GetStartTime_ReturnValue_7 = CallFunc_GetStartTime_ReturnValue_7;
	Parms.CallFunc_PauseAnimation_ReturnValue_15 = CallFunc_PauseAnimation_ReturnValue_15;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_7 = CallFunc_LessEqual_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_7 = CallFunc_Add_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetEndTime_ReturnValue_8 = CallFunc_GetEndTime_ReturnValue_8;
	Parms.CallFunc_PlayAnimation_ReturnValue_12 = CallFunc_PlayAnimation_ReturnValue_12;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_7 = CallFunc_Subtract_FloatFloat_ReturnValue_7;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_CustomEvent_DisplayInfo_1 = K2Node_CustomEvent_DisplayInfo_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_13 = CallFunc_PlayAnimation_ReturnValue_13;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.K2Node_CustomEvent_DisplayInfo = K2Node_CustomEvent_DisplayInfo;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_PlayAnimation_ReturnValue_14 = CallFunc_PlayAnimation_ReturnValue_14;
	Parms.Temp_float_Variable_9 = Temp_float_Variable_9;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_15 = CallFunc_PlayAnimation_ReturnValue_15;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_PlayAnimation_ReturnValue_16 = CallFunc_PlayAnimation_ReturnValue_16;
	Parms.CallFunc_PauseAnimation_ReturnValue_16 = CallFunc_PauseAnimation_ReturnValue_16;
	Parms.CallFunc_GetStartTime_ReturnValue_8 = CallFunc_GetStartTime_ReturnValue_8;
	Parms.CallFunc_PauseAnimation_ReturnValue_17 = CallFunc_PauseAnimation_ReturnValue_17;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_8 = CallFunc_LessEqual_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_8 = CallFunc_Add_FloatFloat_ReturnValue_8;
	Parms.CallFunc_PlayAnimation_ReturnValue_17 = CallFunc_PlayAnimation_ReturnValue_17;
	Parms.CallFunc_GetEndTime_ReturnValue_9 = CallFunc_GetEndTime_ReturnValue_9;
	Parms.Temp_float_Variable_10 = Temp_float_Variable_10;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_8 = CallFunc_Subtract_FloatFloat_ReturnValue_8;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.CallFunc_PlayAnimation_ReturnValue_18 = CallFunc_PlayAnimation_ReturnValue_18;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_PlayAnimation_ReturnValue_19 = CallFunc_PlayAnimation_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownEventTile_C::OnWindowSelected__DelegateSignature()
{
	static auto Func = Class->GetFunction("ShowdownEventTile_C", "OnWindowSelected__DelegateSignature");

	Params::UShowdownEventTile_C_OnWindowSelected__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
