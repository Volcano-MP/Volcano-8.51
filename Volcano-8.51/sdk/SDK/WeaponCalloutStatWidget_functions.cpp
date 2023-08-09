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


// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaWeaponStatView*       K2Node_DynamicCast_AsAthena_Weapon_Stat_View                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWeaponItemDefinition*   CallFunc_GetWeaponDefinition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               ()

void UWeaponCalloutStatWidget_C::Update(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, float CallFunc_GetStat_ReturnValue, class UAthenaWeaponStatView* K2Node_DynamicCast_AsAthena_Weapon_Stat_View, bool K2Node_DynamicCast_bSuccess, class UFortWeaponItemDefinition* CallFunc_GetWeaponDefinition_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static auto Func = Class->GetFunction("WeaponCalloutStatWidget_C", "Update");

	Params::UWeaponCalloutStatWidget_C_Update_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Weapon_Stat_View = K2Node_DynamicCast_AsAthena_Weapon_Stat_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponDefinition_ReturnValue = CallFunc_GetWeaponDefinition_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWeaponCalloutStatWidget_C::OnStatChanged()
{
	static auto Func = Class->GetFunction("WeaponCalloutStatWidget_C", "OnStatChanged");

	Params::UWeaponCalloutStatWidget_C_OnStatChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WeaponCalloutStatWidget.WeaponCalloutStatWidget_C.ExecuteUbergraph_WeaponCalloutStatWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchStatView*        K2Node_DynamicCast_AsAthena_Match_Stat_View                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaWeaponStatView*       CallFunc_GetWeaponViewHighestStat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCalloutStatWidget_C::ExecuteUbergraph_WeaponCalloutStatWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View, bool K2Node_DynamicCast_bSuccess, class UAthenaWeaponStatView* CallFunc_GetWeaponViewHighestStat_ReturnValue)
{
	static auto Func = Class->GetFunction("WeaponCalloutStatWidget_C", "ExecuteUbergraph_WeaponCalloutStatWidget");

	Params::UWeaponCalloutStatWidget_C_ExecuteUbergraph_WeaponCalloutStatWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Match_Stat_View = K2Node_DynamicCast_AsAthena_Match_Stat_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponViewHighestStat_ReturnValue = CallFunc_GetWeaponViewHighestStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
