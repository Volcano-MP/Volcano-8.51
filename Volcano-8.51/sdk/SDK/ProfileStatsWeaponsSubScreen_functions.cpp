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


// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProfileStatsWeaponsSubScreen_C::HandleBack(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ProfileStatsWeaponsSubScreen_C", "HandleBack");

	Params::UProfileStatsWeaponsSubScreen_C_HandleBack_Params Parms;

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProfileStatsWeaponsSubScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ProfileStatsWeaponsSubScreen_C", "Construct");

	Params::UProfileStatsWeaponsSubScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleStatViewChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaBaseStatView*         StatView                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProfileStatsWeaponsSubScreen_C::HandleStatViewChanged(class UAthenaBaseStatView* StatView)
{
	static auto Func = Class->GetFunction("ProfileStatsWeaponsSubScreen_C", "HandleStatViewChanged");

	Params::UProfileStatsWeaponsSubScreen_C_HandleStatViewChanged_Params Parms;

	Parms.StatView = StatView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.ExecuteUbergraph_ProfileStatsWeaponsSubScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAthenaBaseStatView*         K2Node_CustomEvent_StatView                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchStatView*        K2Node_DynamicCast_AsAthena_Match_Stat_View                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UAthenaWeaponStatView*>CallFunc_GetWeaponViews_ReturnValue                              (ZeroConstructor, ReferenceParm)

void UProfileStatsWeaponsSubScreen_C::ExecuteUbergraph_ProfileStatsWeaponsSubScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAthenaBaseStatView* K2Node_CustomEvent_StatView, class UAthenaMatchStatView* K2Node_DynamicCast_AsAthena_Match_Stat_View, bool K2Node_DynamicCast_bSuccess, TArray<class UAthenaWeaponStatView*>& CallFunc_GetWeaponViews_ReturnValue)
{
	static auto Func = Class->GetFunction("ProfileStatsWeaponsSubScreen_C", "ExecuteUbergraph_ProfileStatsWeaponsSubScreen");

	Params::UProfileStatsWeaponsSubScreen_C_ExecuteUbergraph_ProfileStatsWeaponsSubScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_StatView = K2Node_CustomEvent_StatView;
	Parms.K2Node_DynamicCast_AsAthena_Match_Stat_View = K2Node_DynamicCast_AsAthena_Match_Stat_View;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponViews_ReturnValue = CallFunc_GetWeaponViews_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
