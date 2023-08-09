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


// Function B_TimeLineDecal.B_TimeLineDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TimeLineDecal_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("B_TimeLineDecal_C", "UserConstructionScript");

	Params::AB_TimeLineDecal_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_TimeLineDecal_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_TimeLineDecal_C", "Timeline_0__FinishedFunc");

	Params::AB_TimeLineDecal_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_TimeLineDecal_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_TimeLineDecal_C", "Timeline_0__UpdateFunc");

	Params::AB_TimeLineDecal_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_TimeLineDecal_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_TimeLineDecal_C", "ReceiveBeginPlay");

	Params::AB_TimeLineDecal_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TimeLineDecal.B_TimeLineDecal_C.ExecuteUbergraph_B_TimeLineDecal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TimeLineDecal_C::ExecuteUbergraph_B_TimeLineDecal(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_TimeLineDecal_C", "ExecuteUbergraph_B_TimeLineDecal");

	Params::AB_TimeLineDecal_C_ExecuteUbergraph_B_TimeLineDecal_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
