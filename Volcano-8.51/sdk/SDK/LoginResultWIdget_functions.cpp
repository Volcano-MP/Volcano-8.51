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


// Function LoginResultWIdget.LoginResultWIdget_C.SetForceQuitButtons
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bForceQuit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginResultWIdget_C::SetForceQuitButtons(bool bForceQuit)
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "SetForceQuitButtons");

	Params::ULoginResultWIdget_C_SetForceQuitButtons_Params Parms;

	Parms.bForceQuit = bForceQuit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginResultWIdget.LoginResultWIdget_C.ExecuteUbergraph_LoginResultWIdget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bForceQuit                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginResultWIdget_C::ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, bool K2Node_Event_bForceQuit, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1)
{
	static auto Func = Class->GetFunction("LoginResultWIdget_C", "ExecuteUbergraph_LoginResultWIdget");

	Params::ULoginResultWIdget_C_ExecuteUbergraph_LoginResultWIdget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bForceQuit = K2Node_Event_bForceQuit;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
