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


// Function PCB_InfoPannel.PCB_InfoPannel_C.CmsDataRead
// (Event, Public, BlueprintEvent)
// Parameters:

void UPCB_InfoPannel_C::CmsDataRead()
{
	static auto Func = Class->GetFunction("PCB_InfoPannel_C", "CmsDataRead");

	Params::UPCB_InfoPannel_C_CmsDataRead_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PCB_InfoPannel.PCB_InfoPannel_C.ExecuteUbergraph_PCB_InfoPannel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPCBHeader_ReturnValue                                ()
// class FText                        CallFunc_GetPCBDescription_ReturnValue                           ()

void UPCB_InfoPannel_C::ExecuteUbergraph_PCB_InfoPannel(int32 EntryPoint, class FText CallFunc_GetPCBHeader_ReturnValue, class FText CallFunc_GetPCBDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("PCB_InfoPannel_C", "ExecuteUbergraph_PCB_InfoPannel");

	Params::UPCB_InfoPannel_C_ExecuteUbergraph_PCB_InfoPannel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPCBHeader_ReturnValue = CallFunc_GetPCBHeader_ReturnValue;
	Parms.CallFunc_GetPCBDescription_ReturnValue = CallFunc_GetPCBDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
