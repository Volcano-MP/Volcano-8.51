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


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.GetListItemObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UBundleItemMiniCardWidget_C::GetListItemObject()
{
	static auto Func = Class->GetFunction("BundleItemMiniCardWidget_C", "GetListItemObject");

	Params::UBundleItemMiniCardWidget_C_GetListItemObject_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Play Anim - Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBundleItemMiniCardWidget_C::Play_Anim___Show()
{
	static auto Func = Class->GetFunction("BundleItemMiniCardWidget_C", "Play Anim - Show");

	Params::UBundleItemMiniCardWidget_C_Play_Anim___Show_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBundleItemMiniCardWidget_C::Construct()
{
	static auto Func = Class->GetFunction("BundleItemMiniCardWidget_C", "Construct");

	Params::UBundleItemMiniCardWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.ExecuteUbergraph_BundleItemMiniCardWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBundleItemMiniCardWidget_C::ExecuteUbergraph_BundleItemMiniCardWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BundleItemMiniCardWidget_C", "ExecuteUbergraph_BundleItemMiniCardWidget");

	Params::UBundleItemMiniCardWidget_C_ExecuteUbergraph_BundleItemMiniCardWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
