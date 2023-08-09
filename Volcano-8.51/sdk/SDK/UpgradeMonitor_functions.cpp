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


// Function UpgradeMonitor.UpgradeMonitor_C.SetMonitorDistort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::SetMonitorDistort()
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "SetMonitorDistort");

	Params::AUpgradeMonitor_C_SetMonitorDistort_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.SetUtilities-Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Active_Icon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeMonitor_C::SetUtilities_Icon(class UTexture2D* Active_Icon)
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "SetUtilities-Icon");

	Params::AUpgradeMonitor_C_SetUtilities_Icon_Params Parms;

	Parms.Active_Icon = Active_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeMonitor_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "UserConstructionScript");

	Params::AUpgradeMonitor_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::IconTransition__FinishedFunc()
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "IconTransition__FinishedFunc");

	Params::AUpgradeMonitor_C_IconTransition__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.IconTransition__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::IconTransition__UpdateFunc()
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "IconTransition__UpdateFunc");

	Params::AUpgradeMonitor_C_IconTransition__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Utilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::Activate_Utilities()
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "Activate-Utilities");

	Params::AUpgradeMonitor_C_Activate_Utilities_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.Activate-Gadgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::Activate_Gadgets()
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "Activate-Gadgets");

	Params::AUpgradeMonitor_C_Activate_Gadgets_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.Activation-Distortion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeMonitor_C::Activation_Distortion()
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "Activation-Distortion");

	Params::AUpgradeMonitor_C_Activation_Distortion_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeMonitor.UpgradeMonitor_C.ExecuteUbergraph_UpgradeMonitor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeMonitor_C::ExecuteUbergraph_UpgradeMonitor(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("UpgradeMonitor_C", "ExecuteUbergraph_UpgradeMonitor");

	Params::AUpgradeMonitor_C_ExecuteUbergraph_UpgradeMonitor_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
