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


// Function B_Athena_Booty_Item.B_Athena_Booty_Item_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Athena_Booty_Item_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_Athena_Booty_Item_C", "OnWeaponAttached");

	Params::AB_Athena_Booty_Item_C_OnWeaponAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Booty_Item.B_Athena_Booty_Item_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Athena_Booty_Item_C::K2_OnUnEquip()
{
	static auto Func = Class->GetFunction("B_Athena_Booty_Item_C", "K2_OnUnEquip");

	Params::AB_Athena_Booty_Item_C_K2_OnUnEquip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Booty_Item.B_Athena_Booty_Item_C.ExecuteUbergraph_B_Athena_Booty_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Athena_Booty_Item_C::ExecuteUbergraph_B_Athena_Booty_Item(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Booty_Item_C", "ExecuteUbergraph_B_Athena_Booty_Item");

	Params::AB_Athena_Booty_Item_C_ExecuteUbergraph_B_Athena_Booty_Item_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
