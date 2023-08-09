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


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "SetScrollWidget");

	Params::UItemInspectAlterationModOptInScreen_C_SetScrollWidget_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void UItemInspectAlterationModOptInScreen_C::BindDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "BindDelegates");

	Params::UItemInspectAlterationModOptInScreen_C_BindDelegates_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Reset To Show Confirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::Reset_To_Show_Confirmation()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Reset To Show Confirmation");

	Params::UItemInspectAlterationModOptInScreen_C_Reset_To_Show_Confirmation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Reset To Show Help
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::Reset_To_Show_Help(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Reset To Show Help");

	Params::UItemInspectAlterationModOptInScreen_C_Reset_To_Show_Help_Params Parms;

	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Update Colors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UItemInspectAlterationModOptInScreen_C::Update_Colors(enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Update Colors");

	Params::UItemInspectAlterationModOptInScreen_C_Update_Colors_Params Parms;

	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetupTriangles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData         RarityData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::SetupTriangles(const struct FFortRarityItemData& RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "SetupTriangles");

	Params::UItemInspectAlterationModOptInScreen_C_SetupTriangles_Params Parms;

	Parms.RarityData = RarityData;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Set Up Header Colors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData         RarityData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::Set_Up_Header_Colors(const struct FFortRarityItemData& RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Set Up Header Colors");

	Params::UItemInspectAlterationModOptInScreen_C_Set_Up_Header_Colors_Params Parms;

	Parms.RarityData = RarityData;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetupScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::SetupScreen()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "SetupScreen");

	Params::UItemInspectAlterationModOptInScreen_C_SetupScreen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.OnSetupItem
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::OnSetupItem()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "OnSetupItem");

	Params::UItemInspectAlterationModOptInScreen_C_OnSetupItem_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Construct");

	Params::UItemInspectAlterationModOptInScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Continue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::Handle_Continue(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Handle Continue");

	Params::UItemInspectAlterationModOptInScreen_C_Handle_Continue_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "OnActivated");

	Params::UItemInspectAlterationModOptInScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::Handle_Cancel()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Handle Cancel");

	Params::UItemInspectAlterationModOptInScreen_C_Handle_Cancel_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::Handle_Accept()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Handle Accept");

	Params::UItemInspectAlterationModOptInScreen_C_Handle_Accept_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle OptIn Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::Handle_OptIn_Accept(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Handle OptIn Accept");

	Params::UItemInspectAlterationModOptInScreen_C_Handle_OptIn_Accept_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle OptIn Cancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::Handle_OptIn_Cancel(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Handle OptIn Cancel");

	Params::UItemInspectAlterationModOptInScreen_C_Handle_OptIn_Cancel_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Help Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::Handle_Help_Button(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Handle Help Button");

	Params::UItemInspectAlterationModOptInScreen_C_Handle_Help_Button_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Cancel Preview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModOptInScreen_C::Handle_Cancel_Preview(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Handle Cancel Preview");

	Params::UItemInspectAlterationModOptInScreen_C_Handle_Cancel_Preview_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModOptInScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "Destruct");

	Params::UItemInspectAlterationModOptInScreen_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.ExecuteUbergraph_ItemInspectAlterationModOptInScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button_4                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button_3                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHidePerkRecombobulatorHelp_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectAlterationModOptInScreen_C::ExecuteUbergraph_ItemInspectAlterationModOptInScreen(int32 EntryPoint, class UCommonButton* K2Node_CustomEvent_Button_4, class UCommonButton* K2Node_CustomEvent_Button_3, class UCommonButton* K2Node_CustomEvent_Button_2, float CallFunc_PauseAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue_1, class UCommonButton* K2Node_CustomEvent_Button_1, class UCommonButton* K2Node_CustomEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetHidePerkRecombobulatorHelp_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModOptInScreen_C", "ExecuteUbergraph_ItemInspectAlterationModOptInScreen");

	Params::UItemInspectAlterationModOptInScreen_C_ExecuteUbergraph_ItemInspectAlterationModOptInScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Button_4 = K2Node_CustomEvent_Button_4;
	Parms.K2Node_CustomEvent_Button_3 = K2Node_CustomEvent_Button_3;
	Parms.K2Node_CustomEvent_Button_2 = K2Node_CustomEvent_Button_2;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue_1 = CallFunc_PlayAnimationTimeRange_ReturnValue_1;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHidePerkRecombobulatorHelp_ReturnValue = CallFunc_GetHidePerkRecombobulatorHelp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
