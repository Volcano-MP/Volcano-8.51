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


// Function LobbyGadgetButton.LobbyGadgetButton_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "Focus");

	Params::ULobbyGadgetButton_C_Focus_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bLocked                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyGadgetButton_C::GetLocked(bool* bLocked)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "GetLocked");

	Params::ULobbyGadgetButton_C_GetLocked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bLocked != nullptr)
		*bLocked = Parms.bLocked;

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLocked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyGadgetButton_C::SetLocked(bool bLocked, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "SetLocked");

	Params::ULobbyGadgetButton_C_SetLocked_Params Parms;

	Parms.bLocked = bLocked;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortWorldItem*              GadgetItem                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::GetGadgetItem(class UFortWorldItem** GadgetItem)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "GetGadgetItem");

	Params::ULobbyGadgetButton_C_GetGadgetItem_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (GadgetItem != nullptr)
		*GadgetItem = Parms.GadgetItem;

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              WorldItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyGadgetButton_C::Refresh(class UFortWorldItem* WorldItem, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "Refresh");

	Params::ULobbyGadgetButton_C_Refresh_Params Parms;

	Parms.WorldItem = WorldItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyGadgetButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "PreConstruct");

	Params::ULobbyGadgetButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	Params::ULobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature");

	Params::ULobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::ExecuteUbergraph_LobbyGadgetButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, int32 CallFunc_Array_Length_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_RandomInteger_ReturnValue, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "ExecuteUbergraph_LobbyGadgetButton");

	Params::ULobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobbyGadgetButton_C*        GadgetButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "OnButtonHovered__DelegateSignature");

	Params::ULobbyGadgetButton_C_OnButtonHovered__DelegateSignature_Params Parms;

	Parms.GadgetButton = GadgetButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULobbyGadgetButton_C*        GadgetButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton)
{
	static auto Func = Class->GetFunction("LobbyGadgetButton_C", "OnButtonClicked__DelegateSignature");

	Params::ULobbyGadgetButton_C_OnButtonClicked__DelegateSignature_Params Parms;

	Parms.GadgetButton = GadgetButton;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
