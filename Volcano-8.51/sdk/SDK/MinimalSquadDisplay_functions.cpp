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


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadDisplay_C::OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("MinimalSquadDisplay_C", "OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB");

	Params::UMinimalSquadDisplay_C_OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded_86B795124D19C878C8559FA7E78726E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMinimalSquadDisplay_C::OnLoaded_86B795124D19C878C8559FA7E78726E0(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("MinimalSquadDisplay_C", "OnLoaded_86B795124D19C878C8559FA7E78726E0");

	Params::UMinimalSquadDisplay_C_OnLoaded_86B795124D19C878C8559FA7E78726E0_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAthenaTeamDisplayInfo      SquadStyle                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMinimalSquadDisplay_C::OnSquadAssigned(struct FAthenaTeamDisplayInfo& SquadStyle)
{
	static auto Func = Class->GetFunction("MinimalSquadDisplay_C", "OnSquadAssigned");

	Params::UMinimalSquadDisplay_C_OnSquadAssigned_Params Parms;

	Parms.SquadStyle = SquadStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MinimalSquadDisplay.MinimalSquadDisplay_C.ExecuteUbergraph_MinimalSquadDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAthenaTeamDisplayInfo      K2Node_Event_SquadStyle                                          (ConstParm)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void UMinimalSquadDisplay_C::ExecuteUbergraph_MinimalSquadDisplay(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, const struct FAthenaTeamDisplayInfo& K2Node_Event_SquadStyle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static auto Func = Class->GetFunction("MinimalSquadDisplay_C", "ExecuteUbergraph_MinimalSquadDisplay");

	Params::UMinimalSquadDisplay_C_ExecuteUbergraph_MinimalSquadDisplay_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_SquadStyle = K2Node_Event_SquadStyle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
