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


// Function CowboyPistol_AnimBP.CowboyPistol_AnimBP_C.AnimNotify_ChamberRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCowboyPistol_AnimBP_C::AnimNotify_ChamberRotation()
{
	static auto Func = Class->GetFunction("CowboyPistol_AnimBP_C", "AnimNotify_ChamberRotation");

	Params::UCowboyPistol_AnimBP_C_AnimNotify_ChamberRotation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CowboyPistol_AnimBP.CowboyPistol_AnimBP_C.ExecuteUbergraph_CowboyPistol_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCowboyPistol_AnimBP_C::ExecuteUbergraph_CowboyPistol_AnimBP(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("CowboyPistol_AnimBP_C", "ExecuteUbergraph_CowboyPistol_AnimBP");

	Params::UCowboyPistol_AnimBP_C_ExecuteUbergraph_CowboyPistol_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
