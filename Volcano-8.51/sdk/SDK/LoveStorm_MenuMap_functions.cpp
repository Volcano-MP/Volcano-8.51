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


// Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALoveStorm_MenuMap_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("LoveStorm_MenuMap_C", "ReceiveBeginPlay");

	Params::ALoveStorm_MenuMap_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LoveStorm_MenuMap.LoveStorm_MenuMap_C.ExecuteUbergraph_LoveStorm_MenuMap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALoveStorm_MenuMap_C::ExecuteUbergraph_LoveStorm_MenuMap(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1)
{
	static auto Func = Class->GetFunction("LoveStorm_MenuMap_C", "ExecuteUbergraph_LoveStorm_MenuMap");

	Params::ALoveStorm_MenuMap_C_ExecuteUbergraph_LoveStorm_MenuMap_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1 = CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
