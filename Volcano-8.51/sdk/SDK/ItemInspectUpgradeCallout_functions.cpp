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


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetButtonsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeCallout_C::SetButtonsEnabled(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "SetButtonsEnabled");

	Params::UItemInspectUpgradeCallout_C_SetButtonsEnabled_Params Parms;

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               EvolutionReady                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemEvolutionRestrictionReason>CallFunc_CanEvolve_OutRestrictionReasons                         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanEvolve_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeCallout_C::IsEvolutionReady(bool* EvolutionReady, TArray<enum class EItemEvolutionRestrictionReason>& CallFunc_CanEvolve_OutRestrictionReasons, bool CallFunc_CanEvolve_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "IsEvolutionReady");

	Params::UItemInspectUpgradeCallout_C_IsEvolutionReady_Params Parms;

	Parms.CallFunc_CanEvolve_OutRestrictionReasons = CallFunc_CanEvolve_OutRestrictionReasons;
	Parms.CallFunc_CanEvolve_ReturnValue = CallFunc_CanEvolve_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EvolutionReady != nullptr)
		*EvolutionReady = Parms.EvolutionReady;

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEvolutionReady_EvolutionReady                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRecipe>             CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue       (ZeroConstructor, ReferenceParm)
// struct FRecipe                     CallFunc_Array_Get_Item                                          ()
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item_1                                        ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::ShowEvolutionInfo(bool CallFunc_IsEvolutionReady_EvolutionReady, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<struct FRecipe>& CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue, const struct FRecipe& CallFunc_Array_Get_Item, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "ShowEvolutionInfo");

	Params::UItemInspectUpgradeCallout_C_ShowEvolutionInfo_Params Parms;

	Parms.CallFunc_IsEvolutionReady_EvolutionReady = CallFunc_IsEvolutionReady_EvolutionReady;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue = CallFunc_GetConversionRecipesFromItemDefintion_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsUpgradeReady_UpgradeReady                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPersistentResourceItemDefinition*CallFunc_GetUpgradeResourceItemDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUpgradeCost_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::ShowUpgradeInfo(bool CallFunc_IsUpgradeReady_UpgradeReady, class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue, int32 CallFunc_GetUpgradeCost_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "ShowUpgradeInfo");

	Params::UItemInspectUpgradeCallout_C_ShowUpgradeInfo_Params Parms;

	Parms.CallFunc_IsUpgradeReady_UpgradeReady = CallFunc_IsUpgradeReady_UpgradeReady;
	Parms.CallFunc_GetUpgradeResourceItemDefinition_ReturnValue = CallFunc_GetUpgradeResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetUpgradeCost_ReturnValue = CallFunc_GetUpgradeCost_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               UpgradeReady                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EItemUpgradeRestrictionReason>CallFunc_CanBeUpgraded_OutRestrictionReasons                     (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanBeUpgraded_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPersistentResourceItemDefinition*CallFunc_GetUpgradeResourceItemDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumInInventory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeCallout_C::IsUpgradeReady(bool* UpgradeReady, TArray<enum class EItemUpgradeRestrictionReason>& CallFunc_CanBeUpgraded_OutRestrictionReasons, bool CallFunc_CanBeUpgraded_ReturnValue, class UFortPersistentResourceItemDefinition* CallFunc_GetUpgradeResourceItemDefinition_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetNumInInventory_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "IsUpgradeReady");

	Params::UItemInspectUpgradeCallout_C_IsUpgradeReady_Params Parms;

	Parms.CallFunc_CanBeUpgraded_OutRestrictionReasons = CallFunc_CanBeUpgraded_OutRestrictionReasons;
	Parms.CallFunc_CanBeUpgraded_ReturnValue = CallFunc_CanBeUpgraded_ReturnValue;
	Parms.CallFunc_GetUpgradeResourceItemDefinition_ReturnValue = CallFunc_GetUpgradeResourceItemDefinition_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNumInInventory_ReturnValue = CallFunc_GetNumInInventory_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeReady != nullptr)
		*UpgradeReady = Parms.UpgradeReady;

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectUpgradeCallout_C::RefreshOnUpgrade()
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "RefreshOnUpgrade");

	Params::UItemInspectUpgradeCallout_C_RefreshOnUpgrade_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectUpgradeCallout_C::EnableUpgrade()
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "EnableUpgrade");

	Params::UItemInspectUpgradeCallout_C_EnableUpgrade_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectUpgradeCallout_C::DisableUpgrade()
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "DisableUpgrade");

	Params::UItemInspectUpgradeCallout_C_DisableUpgrade_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::OnShow(bool CallFunc_IsVisible_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "OnShow");

	Params::UItemInspectUpgradeCallout_C_OnShow_Params Parms;

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "SetItemToRepresent");

	Params::UItemInspectUpgradeCallout_C_SetItemToRepresent_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasEvolutions_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxLevel_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectUpgradeCallout_C::Refresh(bool CallFunc_HasEvolutions_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_GetMaxLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "Refresh");

	Params::UItemInspectUpgradeCallout_C_Refresh_Params Parms;

	Parms.CallFunc_HasEvolutions_ReturnValue = CallFunc_HasEvolutions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetMaxLevel_ReturnValue = CallFunc_GetMaxLevel_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectUpgradeCallout_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_257_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectUpgradeCallout_C_BndEvt__EvolveButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectUpgradeCallout_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "Construct");

	Params::UItemInspectUpgradeCallout_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectUpgradeCallout_C::ExecuteUbergraph_ItemInspectUpgradeCallout(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "ExecuteUbergraph_ItemInspectUpgradeCallout");

	Params::UItemInspectUpgradeCallout_C_ExecuteUbergraph_ItemInspectUpgradeCallout_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnRequestUpgrade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectUpgradeCallout_C::OnRequestUpgrade__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectUpgradeCallout_C", "OnRequestUpgrade__DelegateSignature");

	Params::UItemInspectUpgradeCallout_C_OnRequestUpgrade__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
