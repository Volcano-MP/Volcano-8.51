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


// Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadMember_C::SetEmptyVisuals(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("MinimalSquadMember_C", "SetEmptyVisuals");

	Params::UMinimalSquadMember_C_SetEmptyVisuals_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadMember_C::SetSitOutVisuals(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("MinimalSquadMember_C", "SetSitOutVisuals");

	Params::UMinimalSquadMember_C_SetSitOutVisuals_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadMember_C::SetNotReadyVisuals(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("MinimalSquadMember_C", "SetNotReadyVisuals");

	Params::UMinimalSquadMember_C_SetNotReadyVisuals_Params Parms;

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMinimalSquadMember_C::SetReadyVisuals()
{
	static auto Func = Class->GetFunction("MinimalSquadMember_C", "SetReadyVisuals");

	Params::UMinimalSquadMember_C_SetReadyVisuals_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGameReadiness          ReadyStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadMember_C::OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus)
{
	static auto Func = Class->GetFunction("MinimalSquadMember_C", "OnMemberGameReadinessChanged");

	Params::UMinimalSquadMember_C_OnMemberGameReadinessChanged_Params Parms;

	Parms.ReadyStatus = ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadMember.MinimalSquadMember_C.OnTeamMemberEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bHasValidMember                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMinimalSquadMember_C::OnTeamMemberEstablished(bool bHasValidMember)
{
	static auto Func = Class->GetFunction("MinimalSquadMember_C", "OnTeamMemberEstablished");

	Params::UMinimalSquadMember_C_OnTeamMemberEstablished_Params Parms;

	Parms.bHasValidMember = bHasValidMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameReadiness          K2Node_Event_ReadyStatus                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHasValidMember                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentMemberLocal_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGameReadiness          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadMember_C::ExecuteUbergraph_MinimalSquadMember(int32 EntryPoint, enum class EGameReadiness K2Node_Event_ReadyStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_Event_bHasValidMember, bool CallFunc_IsCurrentMemberLocal_ReturnValue, enum class EGameReadiness Temp_byte_Variable, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("MinimalSquadMember_C", "ExecuteUbergraph_MinimalSquadMember");

	Params::UMinimalSquadMember_C_ExecuteUbergraph_MinimalSquadMember_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ReadyStatus = K2Node_Event_ReadyStatus;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_Event_bHasValidMember = K2Node_Event_bHasValidMember;
	Parms.CallFunc_IsCurrentMemberLocal_ReturnValue = CallFunc_IsCurrentMemberLocal_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
