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


// Function CreativeLobbyAdSpace.CreativeLobbyAdSpace_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativeLobbyAdSpace_C::Construct()
{
	static auto Func = Class->GetFunction("CreativeLobbyAdSpace_C", "Construct");

	Params::UCreativeLobbyAdSpace_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeLobbyAdSpace.CreativeLobbyAdSpace_C.ExecuteUbergraph_CreativeLobbyAdSpace
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeLobbyAdSpace_C::ExecuteUbergraph_CreativeLobbyAdSpace(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue)
{
	static auto Func = Class->GetFunction("CreativeLobbyAdSpace_C", "ExecuteUbergraph_CreativeLobbyAdSpace");

	Params::UCreativeLobbyAdSpace_C_ExecuteUbergraph_CreativeLobbyAdSpace_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
