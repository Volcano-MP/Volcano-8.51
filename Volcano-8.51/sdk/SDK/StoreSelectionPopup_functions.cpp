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


// Function StoreSelectionPopup.StoreSelectionPopup_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreSelectionPopup_C::OnActivated()
{
	static auto Func = Class->GetFunction("StoreSelectionPopup_C", "OnActivated");

	Params::UStoreSelectionPopup_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreSelectionPopup_C::ExecuteUbergraph_StoreSelectionPopup(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreSelectionPopup_C", "ExecuteUbergraph_StoreSelectionPopup");

	Params::UStoreSelectionPopup_C_ExecuteUbergraph_StoreSelectionPopup_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
