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


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdateStatSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaSeasonStats*          CallFunc_GetCurrentStatSet_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonItemDefinition* CallFunc_GetSeasonDefintion_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void URootProfileStatsScreen_C::UpdateStatSet(class UAthenaSeasonStats* CallFunc_GetCurrentStatSet_ReturnValue, class UAthenaSeasonItemDefinition* CallFunc_GetSeasonDefintion_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "UpdateStatSet");

	Params::URootProfileStatsScreen_C_UpdateStatSet_Params Parms;

	Parms.CallFunc_GetCurrentStatSet_ReturnValue = CallFunc_GetCurrentStatSet_ReturnValue;
	Parms.CallFunc_GetSeasonDefintion_ReturnValue = CallFunc_GetSeasonDefintion_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdatePlaylist
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetCurrentPlaylistName_ReturnValue                      ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void URootProfileStatsScreen_C::UpdatePlaylist(class FText CallFunc_GetCurrentPlaylistName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "UpdatePlaylist");

	Params::URootProfileStatsScreen_C_UpdatePlaylist_Params Parms;

	Parms.CallFunc_GetCurrentPlaylistName_ReturnValue = CallFunc_GetCurrentPlaylistName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URootProfileStatsScreen_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "HandleBack");

	Params::URootProfileStatsScreen_C_HandleBack_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URootProfileStatsScreen_C::Construct()
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "Construct");

	Params::URootProfileStatsScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void URootProfileStatsScreen_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "OnDeactivated");

	Params::URootProfileStatsScreen_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URootProfileStatsScreen_C::BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature");

	Params::URootProfileStatsScreen_C_BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URootProfileStatsScreen_C::BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature");

	Params::URootProfileStatsScreen_C_BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URootProfileStatsScreen_C::BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature");

	Params::URootProfileStatsScreen_C_BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStatSetChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void URootProfileStatsScreen_C::OnStatSetChanged()
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "OnStatSetChanged");

	Params::URootProfileStatsScreen_C_OnStatSetChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URootProfileStatsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature");

	Params::URootProfileStatsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void URootProfileStatsScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "OnActivated");

	Params::URootProfileStatsScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStartFetchingData
// (Event, Public, BlueprintEvent)
// Parameters:

void URootProfileStatsScreen_C::OnStartFetchingData()
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "OnStartFetchingData");

	Params::URootProfileStatsScreen_C_OnStartFetchingData_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnNoData
// (Event, Public, BlueprintEvent)
// Parameters:

void URootProfileStatsScreen_C::OnNoData()
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "OnNoData");

	Params::URootProfileStatsScreen_C_OnNoData_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDataRecieved
// (Event, Public, BlueprintEvent)
// Parameters:

void URootProfileStatsScreen_C::OnDataRecieved()
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "OnDataRecieved");

	Params::URootProfileStatsScreen_C_OnDataRecieved_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RootProfileStatsScreen.RootProfileStatsScreen_C.ExecuteUbergraph_RootProfileStatsScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTabButton_C*            K2Node_DynamicCast_AsIcon_Tab_Button                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URootProfileStatsScreen_C::ExecuteUbergraph_RootProfileStatsScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("RootProfileStatsScreen_C", "ExecuteUbergraph_RootProfileStatsScreen");

	Params::URootProfileStatsScreen_C_ExecuteUbergraph_RootProfileStatsScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_DynamicCast_AsIcon_Tab_Button = K2Node_DynamicCast_AsIcon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
