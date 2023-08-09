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


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetButtonSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseLargeSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::SetButtonSize(bool UseLargeSize)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "SetButtonSize");

	Params::UAthena_Matchmaking_GameModeButton_C_SetButtonSize_Params Parms;

	Parms.UseLargeSize = UseLargeSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetOwningDisplayWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchmakingOptionsDisplay_v2_C*OwningDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::SetOwningDisplayWidget(class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "SetOwningDisplayWidget");

	Params::UAthena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget_Params Parms;

	Parms.OwningDisplay = OwningDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.UpdateGameModeAvailibilty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsGameModeAvailable_Available                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::UpdateGameModeAvailibilty(bool CallFunc_IsGameModeAvailable_Available)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "UpdateGameModeAvailibilty");

	Params::UAthena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty_Params Parms;

	Parms.CallFunc_IsGameModeAvailable_Available = CallFunc_IsGameModeAvailable_Available;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ShowDisabledMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::ShowDisabledMessage(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "ShowDisabledMessage");

	Params::UAthena_Matchmaking_GameModeButton_C_ShowDisabledMessage_Params Parms;

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.DisableGameModeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_Matchmaking_GameModeButton_C::DisableGameModeButton()
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "DisableGameModeButton");

	Params::UAthena_Matchmaking_GameModeButton_C_DisableGameModeButton_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.IsGameModeAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         InMode                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Available                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<uint8>                      Debug                                                            (Edit, BlueprintVisible, ZeroConstructor)

void UAthena_Matchmaking_GameModeButton_C::IsGameModeAvailable(class UFortPlaylistAthena* InMode, bool* Available, const TArray<uint8>& Debug)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "IsGameModeAvailable");

	Params::UAthena_Matchmaking_GameModeButton_C_IsGameModeAvailable_Params Parms;

	Parms.InMode = InMode;
	Parms.Debug = Debug;

	UObject::ProcessEvent(Func, &Parms);

	if (Available != nullptr)
		*Available = Parms.Available;

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                ()

struct FEventReply UAthena_Matchmaking_GameModeButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "OnFocusReceived");

	Params::UAthena_Matchmaking_GameModeButton_C_OnFocusReceived_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetupGameModeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         PlaylistObj                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::SetupGameModeButton(class UFortPlaylistAthena* PlaylistObj, bool bIsEnabled)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "SetupGameModeButton");

	Params::UAthena_Matchmaking_GameModeButton_C_SetupGameModeButton_Params Parms;

	Parms.PlaylistObj = PlaylistObj;
	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "PreConstruct");

	Params::UAthena_Matchmaking_GameModeButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature");

	Params::UAthena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnModeButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::OnModeButtonHovered(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "OnModeButtonHovered");

	Params::UAthena_Matchmaking_GameModeButton_C_OnModeButtonHovered_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthena_Matchmaking_GameModeButton_C::Construct()
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "Construct");

	Params::UAthena_Matchmaking_GameModeButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ExecuteUbergraph_Athena_Matchmaking_GameModeButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthena_Matchmaking_GameModeButton_C::ExecuteUbergraph_Athena_Matchmaking_GameModeButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select_Default_1, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "ExecuteUbergraph_Athena_Matchmaking_GameModeButton");

	Params::UAthena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C*HoveredButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::ButtonHovered__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* HoveredButton)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "ButtonHovered__DelegateSignature");

	Params::UAthena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature_Params Parms;

	Parms.HoveredButton = HoveredButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.GameModeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C*SelectedGameModeButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_GameModeButton_C::GameModeSelected__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_GameModeButton_C", "GameModeSelected__DelegateSignature");

	Params::UAthena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature_Params Parms;

	Parms.SelectedGameModeButton = SelectedGameModeButton;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
