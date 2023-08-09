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


// Function MainTabsScreen.MainTabsScreen_C.Determine If Any non-MTX offers are purchasable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowBang                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bShowBang                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCardPackOffer>      CallFunc_Get_Valid_Offers_Offers                                 (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCardPackOffer              CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetTotalItemQuantityByDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Determine_If_Any_non_MTX_offers_are_purchasable(bool* ShowBang, bool bShowBang, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<struct FCardPackOffer>& CallFunc_Get_Valid_Offers_Offers, int32 CallFunc_Array_Length_ReturnValue, const struct FCardPackOffer& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetTotalItemQuantityByDefinition_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Determine If Any non-MTX offers are purchasable");

	Params::UMainTabsScreen_C_Determine_If_Any_non_MTX_offers_are_purchasable_Params Parms;

	Parms.bShowBang = bShowBang;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Get_Valid_Offers_Offers = CallFunc_Get_Valid_Offers_Offers;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetTotalItemQuantityByDefinition_ReturnValue = CallFunc_GetTotalItemQuantityByDefinition_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowBang != nullptr)
		*ShowBang = Parms.ShowBang;

}


// Function MainTabsScreen.MainTabsScreen_C.CheckDisplayCriteria
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EStoreOfferCosts        InCustomStoreOfferCost                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCardPackOffer              InCardPackOffer                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bPassedDisplayCriteria                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrencyBalance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPrivateAccountInfo     CallFunc_GetLocalAccountInfo_Result                              (NoDestructor)
// class UFortAccountItem*            CallFunc_GetAccountItemWithDefinition_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::CheckDisplayCriteria(enum class EStoreOfferCosts InCustomStoreOfferCost, const struct FCardPackOffer& InCardPackOffer, bool* bPassedDisplayCriteria, int32 CurrencyBalance, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, const struct FFortPrivateAccountInfo& CallFunc_GetLocalAccountInfo_Result, class UFortAccountItem* CallFunc_GetAccountItemWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNumInStack_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "CheckDisplayCriteria");

	Params::UMainTabsScreen_C_CheckDisplayCriteria_Params Parms;

	Parms.InCustomStoreOfferCost = InCustomStoreOfferCost;
	Parms.InCardPackOffer = InCardPackOffer;
	Parms.CurrencyBalance = CurrencyBalance;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetLocalAccountInfo_Result = CallFunc_GetLocalAccountInfo_Result;
	Parms.CallFunc_GetAccountItemWithDefinition_ReturnValue = CallFunc_GetAccountItemWithDefinition_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassedDisplayCriteria != nullptr)
		*bPassedDisplayCriteria = Parms.bPassedDisplayCriteria;

}


// Function MainTabsScreen.MainTabsScreen_C.GetCustomStoreOfferCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCardPackOffer              InCardPackOffer                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EStoreOfferCosts        OutCustomStoreOfferCost                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStoreOfferCosts        CustomStoreOfferCost                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::GetCustomStoreOfferCost(const struct FCardPackOffer& InCardPackOffer, enum class EStoreOfferCosts* OutCustomStoreOfferCost, enum class EStoreOfferCosts CustomStoreOfferCost, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "GetCustomStoreOfferCost");

	Params::UMainTabsScreen_C_GetCustomStoreOfferCost_Params Parms;

	Parms.InCardPackOffer = InCardPackOffer;
	Parms.CustomStoreOfferCost = CustomStoreOfferCost;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCustomStoreOfferCost != nullptr)
		*OutCustomStoreOfferCost = Parms.OutCustomStoreOfferCost;

}


// Function MainTabsScreen.MainTabsScreen_C.CheckHighestPriorityOffer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCardPackOffer>      InOfferArray                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FCardPackOffer              OutPriorityOffer                                                 (Parm, OutParm)
// bool                               FoundOffer                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OfferFound                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCardPackOffer              PriorityOffer                                                    (Edit, BlueprintVisible)
// int32                              HighestDisplayPriority                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCardPackOffer              CallFunc_Array_Get_Item                                          ()
// enum class EStoreOfferCosts        CallFunc_GetCustomStoreOfferCost_OutCustomStoreOfferCost         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckDisplayCriteria_bPassedDisplayCriteria             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMetaIntOnOffer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::CheckHighestPriorityOffer(TArray<struct FCardPackOffer>& InOfferArray, struct FCardPackOffer* OutPriorityOffer, bool* FoundOffer, bool OfferFound, const struct FCardPackOffer& PriorityOffer, int32 HighestDisplayPriority, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCardPackOffer& CallFunc_Array_Get_Item, enum class EStoreOfferCosts CallFunc_GetCustomStoreOfferCost_OutCustomStoreOfferCost, bool CallFunc_CheckDisplayCriteria_bPassedDisplayCriteria, int32 CallFunc_GetMetaIntOnOffer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "CheckHighestPriorityOffer");

	Params::UMainTabsScreen_C_CheckHighestPriorityOffer_Params Parms;

	Parms.InOfferArray = InOfferArray;
	Parms.OfferFound = OfferFound;
	Parms.PriorityOffer = PriorityOffer;
	Parms.HighestDisplayPriority = HighestDisplayPriority;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCustomStoreOfferCost_OutCustomStoreOfferCost = CallFunc_GetCustomStoreOfferCost_OutCustomStoreOfferCost;
	Parms.CallFunc_CheckDisplayCriteria_bPassedDisplayCriteria = CallFunc_CheckDisplayCriteria_bPassedDisplayCriteria;
	Parms.CallFunc_GetMetaIntOnOffer_ReturnValue = CallFunc_GetMetaIntOnOffer_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPriorityOffer != nullptr)
		*OutPriorityOffer = Parms.OutPriorityOffer;

	if (FoundOffer != nullptr)
		*FoundOffer = Parms.FoundOffer;

}


// Function MainTabsScreen.MainTabsScreen_C.Get Valid Offers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCardPackOffer>      Offers                                                           (Parm, OutParm, ZeroConstructor)
// struct FCardPackOffer              TempOffer                                                        (Edit, BlueprintVisible)
// TArray<struct FCardPackOffer>      UpgradeOffers                                                    (Edit, BlueprintVisible, ZeroConstructor)
// TArray<struct FCardPackOffer>      SharedDisplayOffers                                              (Edit, BlueprintVisible, ZeroConstructor)
// TArray<struct FCardPackOffer>      StandardOffers                                                   (Edit, BlueprintVisible, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCardPackOffer              CallFunc_CheckHighestPriorityOffer_outPriorityOffer              ()
// bool                               CallFunc_CheckHighestPriorityOffer_FoundOffer                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCardPackOffer              CallFunc_CheckHighestPriorityOffer_outPriorityOffer_1            ()
// bool                               CallFunc_CheckHighestPriorityOffer_FoundOffer_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMetaBoolOnOffer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMetaBoolOnOffer_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCardPackOffer              CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Get_Valid_Offers(TArray<struct FCardPackOffer>* Offers, const struct FCardPackOffer& TempOffer, const TArray<struct FCardPackOffer>& UpgradeOffers, const TArray<struct FCardPackOffer>& SharedDisplayOffers, const TArray<struct FCardPackOffer>& StandardOffers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCardPackOffer& CallFunc_CheckHighestPriorityOffer_outPriorityOffer, bool CallFunc_CheckHighestPriorityOffer_FoundOffer, const struct FCardPackOffer& CallFunc_CheckHighestPriorityOffer_outPriorityOffer_1, bool CallFunc_CheckHighestPriorityOffer_FoundOffer_1, bool CallFunc_GetMetaBoolOnOffer_ReturnValue, bool CallFunc_GetMetaBoolOnOffer_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FCardPackOffer& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Get Valid Offers");

	Params::UMainTabsScreen_C_Get_Valid_Offers_Params Parms;

	Parms.TempOffer = TempOffer;
	Parms.UpgradeOffers = UpgradeOffers;
	Parms.SharedDisplayOffers = SharedDisplayOffers;
	Parms.StandardOffers = StandardOffers;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CheckHighestPriorityOffer_outPriorityOffer = CallFunc_CheckHighestPriorityOffer_outPriorityOffer;
	Parms.CallFunc_CheckHighestPriorityOffer_FoundOffer = CallFunc_CheckHighestPriorityOffer_FoundOffer;
	Parms.CallFunc_CheckHighestPriorityOffer_outPriorityOffer_1 = CallFunc_CheckHighestPriorityOffer_outPriorityOffer_1;
	Parms.CallFunc_CheckHighestPriorityOffer_FoundOffer_1 = CallFunc_CheckHighestPriorityOffer_FoundOffer_1;
	Parms.CallFunc_GetMetaBoolOnOffer_ReturnValue = CallFunc_GetMetaBoolOnOffer_ReturnValue;
	Parms.CallFunc_GetMetaBoolOnOffer_ReturnValue_1 = CallFunc_GetMetaBoolOnOffer_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Offers != nullptr)
		*Offers = Parms.Offers;

}


// Function MainTabsScreen.MainTabsScreen_C.Is Transform Feature Unlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGameplayTagContainer_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UMainTabsScreen_C::Is_Transform_Feature_Unlocked(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasGameplayTagContainer_ReturnValue, bool CallFunc_HasGameplayTagContainer_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Is Transform Feature Unlocked");

	Params::UMainTabsScreen_C_Is_Transform_Feature_Unlocked_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_HasGameplayTagContainer_ReturnValue = CallFunc_HasGameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasGameplayTagContainer_ReturnValue_1 = CallFunc_HasGameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainTabsScreen.MainTabsScreen_C.HandleCardPackStore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::HandleCardPackStore(class FName TabId, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "HandleCardPackStore");

	Params::UMainTabsScreen_C_HandleCardPackStore_Params Parms;

	Parms.TabId = TabId;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.HandleMtxStore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tab_Id                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::HandleMtxStore(class FName Tab_Id)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "HandleMtxStore");

	Params::UMainTabsScreen_C_HandleMtxStore_Params Parms;

	Parms.Tab_Id = Tab_Id;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Handle Unclaimed Resources Updated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Determine_Unclaimed_Resources_at_Threshold_Result       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Handle_Unclaimed_Resources_Updated(bool CallFunc_Determine_Unclaimed_Resources_at_Threshold_Result)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Handle Unclaimed Resources Updated");

	Params::UMainTabsScreen_C_Handle_Unclaimed_Resources_Updated_Params Parms;

	Parms.CallFunc_Determine_Unclaimed_Resources_at_Threshold_Result = CallFunc_Determine_Unclaimed_Resources_at_Threshold_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Toggle Unclaimed Research Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::Toggle_Unclaimed_Research_Timer(bool Enable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Toggle Unclaimed Research Timer");

	Params::UMainTabsScreen_C_Toggle_Unclaimed_Research_Timer_Params Parms;

	Parms.Enable = Enable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Determine Unclaimed Resources at Threshold
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              UnclaimedResearchMax                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              UnclaimedResearch                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectedResourceItem*  LocalResource                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetResourceCollectorRateInfo_RatePerSecond              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceCollectorRateInfo_MaxCapacity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_GetResourceCollectorRewardsEstimate_OutEstimate         ()
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortCollectedResourceItem*>CallFunc_GetAllResourceCollectors_ResourceCollectorsOwned        (ZeroConstructor, ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCollectedResourceItem*  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Determine_Unclaimed_Resources_at_Threshold(bool* Result, float UnclaimedResearchMax, float UnclaimedResearch, class UFortCollectedResourceItem* LocalResource, float CallFunc_Divide_FloatFloat_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetResourceCollectorRateInfo_RatePerSecond, int32 CallFunc_GetResourceCollectorRateInfo_MaxCapacity, float CallFunc_Conv_IntToFloat_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue_1, const struct FFortItemQuantityPair& CallFunc_GetResourceCollectorRewardsEstimate_OutEstimate, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, TArray<class UFortCollectedResourceItem*>& CallFunc_GetAllResourceCollectors_ResourceCollectorsOwned, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UFortCollectedResourceItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Determine Unclaimed Resources at Threshold");

	Params::UMainTabsScreen_C_Determine_Unclaimed_Resources_at_Threshold_Params Parms;

	Parms.UnclaimedResearchMax = UnclaimedResearchMax;
	Parms.UnclaimedResearch = UnclaimedResearch;
	Parms.LocalResource = LocalResource;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetResourceCollectorRateInfo_RatePerSecond = CallFunc_GetResourceCollectorRateInfo_RatePerSecond;
	Parms.CallFunc_GetResourceCollectorRateInfo_MaxCapacity = CallFunc_GetResourceCollectorRateInfo_MaxCapacity;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetResourceCollectorRewardsEstimate_OutEstimate = CallFunc_GetResourceCollectorRewardsEstimate_OutEstimate;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetAllResourceCollectors_ResourceCollectorsOwned = CallFunc_GetAllResourceCollectors_ResourceCollectorsOwned;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MainTabsScreen.MainTabsScreen_C.Update Store Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentTabId                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowBang                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Determine_If_Any_non_MTX_offers_are_purchasable_ShowBang(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetAccountItemsByType_Items                             (ZeroConstructor, ReferenceParm)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCardPackItem*           K2Node_DynamicCast_AsFort_Card_Pack_Item                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanStoreOpen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               CallFunc_Get_Tab_From_Id_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabIconButton_C*        K2Node_DynamicCast_AsMain_Tab_Icon_Button                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Update_Store_Tab_Button_Bang(class FName Tab, class FName CurrentTabId, bool ShowBang, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Determine_If_Any_non_MTX_offers_are_purchasable_ShowBang, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetAccountItemsByType_Items, class UFortAccountItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortCardPackItem* K2Node_DynamicCast_AsFort_Card_Pack_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CanStoreOpen_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess_1, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Update Store Tab Button Bang");

	Params::UMainTabsScreen_C_Update_Store_Tab_Button_Bang_Params Parms;

	Parms.Tab = Tab;
	Parms.CurrentTabId = CurrentTabId;
	Parms.ShowBang = ShowBang;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Determine_If_Any_non_MTX_offers_are_purchasable_ShowBang = CallFunc_Determine_If_Any_non_MTX_offers_are_purchasable_ShowBang;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAccountItemsByType_Items = CallFunc_GetAccountItemsByType_Items;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Card_Pack_Item = K2Node_DynamicCast_AsFort_Card_Pack_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CanStoreOpen_ReturnValue = CallFunc_CanStoreOpen_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List = K2Node_DynamicCast_AsHorizontal_Tab_List;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Tab_From_Id_ReturnValue = CallFunc_Get_Tab_From_Id_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Tab_Icon_Button = K2Node_DynamicCast_AsMain_Tab_Icon_Button;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Are Any Inventory Items Unseen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unseen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFrontendStorageEnabled_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWIFEEnabled_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_2       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_3       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_4       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_5       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_6       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Are_Any_Inventory_Items_Unseen(bool* Unseen, bool CallFunc_IsFrontendStorageEnabled_ReturnValue, bool CallFunc_IsWIFEEnabled_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_2, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_4, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_5, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_4, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_5, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_6, bool CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_6)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Are Any Inventory Items Unseen");

	Params::UMainTabsScreen_C_Are_Any_Inventory_Items_Unseen_Params Parms;

	Parms.CallFunc_IsFrontendStorageEnabled_ReturnValue = CallFunc_IsFrontendStorageEnabled_ReturnValue;
	Parms.CallFunc_IsWIFEEnabled_ReturnValue = CallFunc_IsWIFEEnabled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue = CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_1 = CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_2 = CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_2;
	Parms.CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_3 = CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_3;
	Parms.CallFunc_GetContext_ReturnValue_4 = CallFunc_GetContext_ReturnValue_4;
	Parms.CallFunc_GetContext_ReturnValue_5 = CallFunc_GetContext_ReturnValue_5;
	Parms.CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_4 = CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_4;
	Parms.CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_5 = CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_5;
	Parms.CallFunc_GetContext_ReturnValue_6 = CallFunc_GetContext_ReturnValue_6;
	Parms.CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_6 = CallFunc_AreAnyItemsUnseenForInventoryFilter_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (Unseen != nullptr)
		*Unseen = Parms.Unseen;

}


// Function MainTabsScreen.MainTabsScreen_C.Are Any Transform Keys Unseen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unseen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalUnseen                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Transform_Feature_Unlocked_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAccountItem*>    CallFunc_GetTransformKeys_TransformKeys                          (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItem*            CallFunc_Get_Item_from_Transform_Seen_State_OutItem              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBeenSeenLocally_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Are_Any_Transform_Keys_Unseen(bool* Unseen, bool LocalUnseen, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Is_Transform_Feature_Unlocked_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, TArray<class UFortAccountItem*>& CallFunc_GetTransformKeys_TransformKeys, int32 CallFunc_Array_Length_ReturnValue, class UFortAccountItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortAccountItem* CallFunc_Get_Item_from_Transform_Seen_State_OutItem, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasBeenSeenLocally_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Are Any Transform Keys Unseen");

	Params::UMainTabsScreen_C_Are_Any_Transform_Keys_Unseen_Params Parms;

	Parms.LocalUnseen = LocalUnseen;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Is_Transform_Feature_Unlocked_ReturnValue = CallFunc_Is_Transform_Feature_Unlocked_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTransformKeys_TransformKeys = CallFunc_GetTransformKeys_TransformKeys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Get_Item_from_Transform_Seen_State_OutItem = CallFunc_Get_Item_from_Transform_Seen_State_OutItem;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasBeenSeenLocally_ReturnValue = CallFunc_HasBeenSeenLocally_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Unseen != nullptr)
		*Unseen = Parms.Unseen;

}


// Function MainTabsScreen.MainTabsScreen_C.Get FortPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*       FortPC                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Get_FortPC(class AFortPlayerController** FortPC, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Get FortPC");

	Params::UMainTabsScreen_C_Get_FortPC_Params Parms;

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FortPC != nullptr)
		*FortPC = Parms.FortPC;

}


// Function MainTabsScreen.MainTabsScreen_C.Get Item from Transform Seen State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*            TransformKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            OutItem                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CatalystTags                                                     (Edit, BlueprintVisible)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortConversionControlItemDefinition*K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetRequiredCatalysts_ReturnValue                        ()
// class AFortPlayerController*       CallFunc_Get_FortPC_FortPC                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHomebaseNodeItem*       CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumGameplayTagsInContainer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Get_Item_from_Transform_Seen_State(class UFortAccountItem* TransformKey, class UFortAccountItem** OutItem, const struct FGameplayTagContainer& CatalystTags, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortConversionControlItemDefinition* K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetRequiredCatalysts_ReturnValue, class AFortPlayerController* CallFunc_Get_FortPC_FortPC, class UFortHomebaseNodeItem* CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Get Item from Transform Seen State");

	Params::UMainTabsScreen_C_Get_Item_from_Transform_Seen_State_Params Parms;

	Parms.TransformKey = TransformKey;
	Parms.CatalystTags = CatalystTags;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition = K2Node_DynamicCast_AsFort_Conversion_Control_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRequiredCatalysts_ReturnValue = CallFunc_GetRequiredCatalysts_ReturnValue;
	Parms.CallFunc_Get_FortPC_FortPC = CallFunc_Get_FortPC_FortPC;
	Parms.CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue = CallFunc_GetHomebaseNodeItemForTagContainer_ReturnValue;
	Parms.CallFunc_GetNumGameplayTagsInContainer_ReturnValue = CallFunc_GetNumGameplayTagsInContainer_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItem != nullptr)
		*OutItem = Parms.OutItem;

}


// Function MainTabsScreen.MainTabsScreen_C.Update Quest Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsClaimedVisibleToUsers                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsVisibleToUsers                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasNotBeenSeen                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsMainQuest                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           QuestManager                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentTabId                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       FortPC                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               QuestsUnseen                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUnseenQuestCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               CallFunc_Get_Tab_From_Id_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestsCountIconTabButton_C* K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Update_Quest_Tab_Button_Bang(class FName Tab, int32 Count, bool IsClaimedVisibleToUsers, bool IsVisibleToUsers, bool HasNotBeenSeen, bool IsMainQuest, class UFortQuestManager* QuestManager, class FName CurrentTabId, class AFortPlayerController* FortPC, bool QuestsUnseen, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetUnseenQuestCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UQuestsCountIconTabButton_C* K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Update Quest Tab Button Bang");

	Params::UMainTabsScreen_C_Update_Quest_Tab_Button_Bang_Params Parms;

	Parms.Tab = Tab;
	Parms.Count = Count;
	Parms.IsClaimedVisibleToUsers = IsClaimedVisibleToUsers;
	Parms.IsVisibleToUsers = IsVisibleToUsers;
	Parms.HasNotBeenSeen = HasNotBeenSeen;
	Parms.IsMainQuest = IsMainQuest;
	Parms.QuestManager = QuestManager;
	Parms.CurrentTabId = CurrentTabId;
	Parms.FortPC = FortPC;
	Parms.QuestsUnseen = QuestsUnseen;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetUnseenQuestCount_ReturnValue = CallFunc_GetUnseenQuestCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List = K2Node_DynamicCast_AsHorizontal_Tab_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Tab_From_Id_ReturnValue = CallFunc_Get_Tab_From_Id_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button = K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Update Tab Button Bangs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InTab                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::Update_Tab_Button_Bangs(class FName InTab)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Update Tab Button Bangs");

	Params::UMainTabsScreen_C_Update_Tab_Button_Bangs_Params Parms;

	Parms.InTab = InTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Update Hero Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentTabId                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       FortPC                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CombatSquadUnseen                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               CallFunc_Get_Tab_From_Id_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabIconButton_C*        K2Node_DynamicCast_AsMain_Tab_Icon_Button                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Update_Hero_Tab_Button_Bang(class FName Tab, class FName CurrentTabId, class AFortPlayerController* FortPC, bool CombatSquadUnseen, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess_1, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Update Hero Tab Button Bang");

	Params::UMainTabsScreen_C_Update_Hero_Tab_Button_Bang_Params Parms;

	Parms.Tab = Tab;
	Parms.CurrentTabId = CurrentTabId;
	Parms.FortPC = FortPC;
	Parms.CombatSquadUnseen = CombatSquadUnseen;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue = CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List = K2Node_DynamicCast_AsHorizontal_Tab_List;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Tab_From_Id_ReturnValue = CallFunc_Get_Tab_From_Id_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Tab_Icon_Button = K2Node_DynamicCast_AsMain_Tab_Icon_Button;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Update Squad Tab Button Bang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentTabId                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EmptyTabId                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExpeditionSquadUnseen                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       FortPC                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DefenderSquadUnseen                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AttributeSquadUnseen                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_TotalUnseenExpeditionsForTab_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalTabList_C*        K2Node_DynamicCast_AsHorizontal_Tab_List                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               CallFunc_Get_Tab_From_Id_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabIconButton_C*        K2Node_DynamicCast_AsMain_Tab_Icon_Button                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabsScreen_C::Update_Squad_Tab_Button_Bang(class FName Tab, class FName CurrentTabId, class FName EmptyTabId, bool ExpeditionSquadUnseen, class AFortPlayerController* FortPC, bool DefenderSquadUnseen, bool AttributeSquadUnseen, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_TotalUnseenExpeditionsForTab_ReturnValue, bool CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue_1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanOR_ReturnValue_1, class UHorizontalTabList_C* K2Node_DynamicCast_AsHorizontal_Tab_List, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue_2, class UCommonButton* CallFunc_Get_Tab_From_Id_ReturnValue, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Update Squad Tab Button Bang");

	Params::UMainTabsScreen_C_Update_Squad_Tab_Button_Bang_Params Parms;

	Parms.Tab = Tab;
	Parms.CurrentTabId = CurrentTabId;
	Parms.EmptyTabId = EmptyTabId;
	Parms.ExpeditionSquadUnseen = ExpeditionSquadUnseen;
	Parms.FortPC = FortPC;
	Parms.DefenderSquadUnseen = DefenderSquadUnseen;
	Parms.AttributeSquadUnseen = AttributeSquadUnseen;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_TotalUnseenExpeditionsForTab_ReturnValue = CallFunc_TotalUnseenExpeditionsForTab_ReturnValue;
	Parms.CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue = CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue_1 = CallFunc_AreAnyHomebaseNodeItemsUnseenForSquadType_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsHorizontal_Tab_List = K2Node_DynamicCast_AsHorizontal_Tab_List;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Get_Tab_From_Id_ReturnValue = CallFunc_Get_Tab_From_Id_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Tab_Icon_Button = K2Node_DynamicCast_AsMain_Tab_Icon_Button;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActiveTab_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::HandleTabSelected(class FName TabName, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetActiveTab_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "HandleTabSelected");

	Params::UMainTabsScreen_C_HandleTabSelected_Params Parms;

	Parms.TabName = TabName;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetActiveTab_ReturnValue = CallFunc_GetActiveTab_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.HandleTabCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               LocalTab                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalTabId                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Name_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainTabIconButton_C*        K2Node_DynamicCast_AsMain_Tab_Icon_Button                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainTabIconButton_C*        K2Node_DynamicCast_AsMain_Tab_Icon_Button_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMainTabIconButton_C*        K2Node_DynamicCast_AsMain_Tab_Icon_Button_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestsCountIconTabButton_C* K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UMainTabsScreen_C::HandleTabCreated(class FName TabId, class UCommonButton* TabButton, class UCommonButton* LocalTab, class FName LocalTabId, const class FString& CallFunc_BuildString_Name_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button, bool K2Node_DynamicCast_bSuccess, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button_1, bool K2Node_DynamicCast_bSuccess_1, class UMainTabIconButton_C* K2Node_DynamicCast_AsMain_Tab_Icon_Button_2, bool K2Node_DynamicCast_bSuccess_2, class UQuestsCountIconTabButton_C* K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button, bool K2Node_DynamicCast_bSuccess_3, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "HandleTabCreated");

	Params::UMainTabsScreen_C_HandleTabCreated_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;
	Parms.LocalTab = LocalTab;
	Parms.LocalTabId = LocalTabId;
	Parms.CallFunc_BuildString_Name_ReturnValue = CallFunc_BuildString_Name_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_DynamicCast_AsMain_Tab_Icon_Button = K2Node_DynamicCast_AsMain_Tab_Icon_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMain_Tab_Icon_Button_1 = K2Node_DynamicCast_AsMain_Tab_Icon_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsMain_Tab_Icon_Button_2 = K2Node_DynamicCast_AsMain_Tab_Icon_Button_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button = K2Node_DynamicCast_AsQuests_Count_Icon_Tab_Button;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabsScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "OnActivated");

	Params::UMainTabsScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TabId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::CustomEvent(class FName TabId, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "CustomEvent");

	Params::UMainTabsScreen_C_CustomEvent_Params Parms;

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.OnHomebaseInventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabsScreen_C::OnHomebaseInventoryUpdated()
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "OnHomebaseInventoryUpdated");

	Params::UMainTabsScreen_C_OnHomebaseInventoryUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainTabsScreen_C::Destruct()
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Destruct");

	Params::UMainTabsScreen_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainTabsScreen_C::Construct()
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Construct");

	Params::UMainTabsScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.OnQuestSeen_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::OnQuestSeen_Event_0(class UFortQuestItem* Quest)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "OnQuestSeen_Event_0");

	Params::UMainTabsScreen_C_OnQuestSeen_Event_0_Params Parms;

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.SquadSlotMarkedAsSeen_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabsScreen_C::SquadSlotMarkedAsSeen_Event_0()
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "SquadSlotMarkedAsSeen_Event_0");

	Params::UMainTabsScreen_C_SquadSlotMarkedAsSeen_Event_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.HandleMainTabSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::HandleMainTabSelected(class FName TabNameID)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "HandleMainTabSelected");

	Params::UMainTabsScreen_C_HandleMainTabSelected_Params Parms;

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.HandleMainTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               TabButton                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::HandleMainTabCreated(class FName TabNameID, class UCommonButton* TabButton)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "HandleMainTabCreated");

	Params::UMainTabsScreen_C_HandleMainTabCreated_Params Parms;

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "Tick");

	Params::UMainTabsScreen_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabsScreen.MainTabsScreen_C.ExecuteUbergraph_MainTabsScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_TabId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_TabButton                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_RemoveTab_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItem*              K2Node_CustomEvent_Quest                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_Event_TabNameId_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_TabNameId                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_Event_TabButton                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabsScreen_C::ExecuteUbergraph_MainTabsScreen(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RemoveTab_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* K2Node_CustomEvent_Quest, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_IsMobileApp_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_Event_TabNameId_1, class FName K2Node_Event_TabNameId, class UCommonButton* K2Node_Event_TabButton, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static auto Func = Class->GetFunction("MainTabsScreen_C", "ExecuteUbergraph_MainTabsScreen");

	Params::UMainTabsScreen_C_ExecuteUbergraph_MainTabsScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_TabId = K2Node_ComponentBoundEvent_TabId;
	Parms.K2Node_ComponentBoundEvent_TabButton = K2Node_ComponentBoundEvent_TabButton;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_RemoveTab_ReturnValue = CallFunc_RemoveTab_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_TabNameId_1 = K2Node_Event_TabNameId_1;
	Parms.K2Node_Event_TabNameId = K2Node_Event_TabNameId;
	Parms.K2Node_Event_TabButton = K2Node_Event_TabButton;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
