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


// Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Manage_C::CameraReturnTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "CameraReturnTimeline__FinishedFunc");

	Params::AFrontend_Manage_C_CameraReturnTimeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.CameraReturnTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Manage_C::CameraReturnTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "CameraReturnTimeline__UpdateFunc");

	Params::AFrontend_Manage_C_CameraReturnTimeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Manage_C::CameraLerpTimeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "CameraLerpTimeline__FinishedFunc");

	Params::AFrontend_Manage_C_CameraLerpTimeline__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.CameraLerpTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFrontend_Manage_C::CameraLerpTimeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "CameraLerpTimeline__UpdateFunc");

	Params::AFrontend_Manage_C_CameraLerpTimeline__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.ManageCameraSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSensei                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Manage_C::ManageCameraSelected(bool IsSensei)
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "ManageCameraSelected");

	Params::AFrontend_Manage_C_ManageCameraSelected_Params Parms;

	Parms.IsSensei = IsSensei;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.CameraReturn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Manage_C::CameraReturn()
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "CameraReturn");

	Params::AFrontend_Manage_C_CameraReturn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.LerpCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSensei                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Manage_C::LerpCamera(bool IsSensei)
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "LerpCamera");

	Params::AFrontend_Manage_C_LerpCamera_Params Parms;

	Parms.IsSensei = IsSensei;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.CameraDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFrontend_Manage_C::CameraDeselected()
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "CameraDeselected");

	Params::AFrontend_Manage_C_CameraDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_Manage_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "ReceiveBeginPlay");

	Params::AFrontend_Manage_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Frontend_Manage.Frontend_Manage_C.ExecuteUbergraph_Frontend_Manage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSensei_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_2                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_3                              (IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               K2Node_CustomEvent_IsSensei                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontend_Manage_Camera_C*   K2Node_DynamicCast_AsFrontend_Manage_Camera                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Select_Default                                            (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_TLerp_ReturnValue_1                                     (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontend_Manage_C::ExecuteUbergraph_Frontend_Manage(int32 EntryPoint, bool K2Node_CustomEvent_IsSensei_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_3, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool K2Node_CustomEvent_IsSensei, class AActor* CallFunc_Array_Get_Item, class AFrontend_Manage_Camera_C* K2Node_DynamicCast_AsFrontend_Manage_Camera, bool K2Node_DynamicCast_bSuccess, const struct FTransform& K2Node_Select_Default, const struct FTransform& CallFunc_TLerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Frontend_Manage_C", "ExecuteUbergraph_Frontend_Manage");

	Params::AFrontend_Manage_C_ExecuteUbergraph_Frontend_Manage_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_IsSensei_1 = K2Node_CustomEvent_IsSensei_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_2 = CallFunc_GetTransform_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue_3 = CallFunc_GetTransform_ReturnValue_3;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.K2Node_CustomEvent_IsSensei = K2Node_CustomEvent_IsSensei;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFrontend_Manage_Camera = K2Node_DynamicCast_AsFrontend_Manage_Camera;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TLerp_ReturnValue_1 = CallFunc_TLerp_ReturnValue_1;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult_1 = CallFunc_K2_SetActorTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue_1 = CallFunc_K2_SetActorTransform_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
