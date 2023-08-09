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


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayedBeforeSelect_C::OnActivated()
{
	static auto Func = Class->GetFunction("PlayedBeforeSelect_C", "OnActivated");

	Params::UPlayedBeforeSelect_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayedBeforeSelect_C::ExecuteUbergraph_PlayedBeforeSelect(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayedBeforeSelect_C", "ExecuteUbergraph_PlayedBeforeSelect");

	Params::UPlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
