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


// Function Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_SurvivorSquadBuildings_Camera_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("Frontend_SurvivorSquadBuildings_Camera_C", "OnDeactivated");

	Params::AFrontend_SurvivorSquadBuildings_Camera_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontend_SurvivorSquadBuildings_Camera_C::OnActivated()
{
	static auto Func = Class->GetFunction("Frontend_SurvivorSquadBuildings_Camera_C", "OnActivated");

	Params::AFrontend_SurvivorSquadBuildings_Camera_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_SurvivorSquadBuildings_Camera.Frontend_SurvivorSquadBuildings_Camera_C.ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_SurvivorSquadBuildings_Camera_C::ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera(int32 EntryPoint, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("Frontend_SurvivorSquadBuildings_Camera_C", "ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera");

	Params::AFrontend_SurvivorSquadBuildings_Camera_C_ExecuteUbergraph_Frontend_SurvivorSquadBuildings_Camera_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
