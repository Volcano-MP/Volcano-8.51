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


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCN_QuestSpawn_MiniMapIcon_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "OnRemove");

	Params::AGCN_QuestSpawn_MiniMapIcon_C_OnRemove_Params Parms;

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.HideMiniBossGCN
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AGCN_QuestSpawn_MiniMapIcon_C::HideMiniBossGCN()
{
	static auto Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "HideMiniBossGCN");

	Params::AGCN_QuestSpawn_MiniMapIcon_C_HideMiniBossGCN_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGCN_QuestSpawn_MiniMapIcon_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "ReceiveBeginPlay");

	Params::AGCN_QuestSpawn_MiniMapIcon_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_QuestSpawn_MiniMapIcon_C::ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GCN_QuestSpawn_MiniMapIcon_C", "ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon");

	Params::AGCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
