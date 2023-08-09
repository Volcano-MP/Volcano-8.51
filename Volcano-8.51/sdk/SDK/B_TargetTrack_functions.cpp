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


// Function B_TargetTrack.B_TargetTrack_C.GetCollisionStaticMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMesh*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStaticMesh* AB_TargetTrack_C::GetCollisionStaticMesh()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "GetCollisionStaticMesh");

	Params::AB_TargetTrack_C_GetCollisionStaticMesh_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_TargetTrack.B_TargetTrack_C.Set Audio Speed Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Target_Speed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_TargetTrack_C::Set_Audio_Speed_Sound(float Target_Speed, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "Set Audio Speed Sound");

	Params::AB_TargetTrack_C_Set_Audio_Speed_Sound_Params Parms;

	Parms.Target_Speed = Target_Speed;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentMovementState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_TargetTrack_C::OnRep_CurrentMovementState(int32 CallFunc_Conv_ByteToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnRep_CurrentMovementState");

	Params::AB_TargetTrack_C_OnRep_CurrentMovementState_Params Parms;

	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.SetMovementState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_TargetTrack_C::SetMovementState(uint8 State, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "SetMovementState");

	Params::AB_TargetTrack_C_SetMovementState_Params Parms;

	Parms.State = State;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.UpdateLerpedPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetFinalDestinationOfTarget_Destination                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_TargetTrack_C::UpdateLerpedPosition(float Alpha, const struct FVector& CallFunc_GetFinalDestinationOfTarget_Destination, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "UpdateLerpedPosition");

	Params::AB_TargetTrack_C_UpdateLerpedPosition_Params Parms;

	Parms.Alpha = Alpha;
	Parms.CallFunc_GetFinalDestinationOfTarget_Destination = CallFunc_GetFinalDestinationOfTarget_Destination;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentLerpValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::OnRep_CurrentLerpValue()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnRep_CurrentLerpValue");

	Params::AB_TargetTrack_C_OnRep_CurrentLerpValue_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.UpdateForRepNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::UpdateForRepNotify()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "UpdateForRepNotify");

	Params::AB_TargetTrack_C_UpdateForRepNotify_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_IsCurrentlyMoving
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::OnRep_IsCurrentlyMoving()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnRep_IsCurrentlyMoving");

	Params::AB_TargetTrack_C_OnRep_IsCurrentlyMoving_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::OnRep_CurrentDirection()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnRep_CurrentDirection");

	Params::AB_TargetTrack_C_OnRep_CurrentDirection_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_IsTargetUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::OnRep_IsTargetUp()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnRep_IsTargetUp");

	Params::AB_TargetTrack_C_OnRep_IsTargetUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_ServerMoveStartTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::OnRep_ServerMoveStartTime()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnRep_ServerMoveStartTime");

	Params::AB_TargetTrack_C_OnRep_ServerMoveStartTime_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.SetTrackLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TargetTrack_C::SetTrackLength(const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "SetTrackLength");

	Params::AB_TargetTrack_C_SetTrackLength_Params Parms;

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.SetTargetRotationAndBaseMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_TargetTrack_C::SetTargetRotationAndBaseMesh(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "SetTargetRotationAndBaseMesh");

	Params::AB_TargetTrack_C_SetTargetRotationAndBaseMesh_Params Parms;

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeRotation_SweepHitResult_3;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.CalculatePlayRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AB_TargetTrack_C::CalculatePlayRate(float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "CalculatePlayRate");

	Params::AB_TargetTrack_C_CalculatePlayRate_Params Parms;

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_TargetTrack.B_TargetTrack_C.GetFinalDestinationOfTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Destination                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TargetTrack_C::GetFinalDestinationOfTarget(struct FVector* Destination, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "GetFinalDestinationOfTarget");

	Params::AB_TargetTrack_C_GetFinalDestinationOfTarget_Params Parms;

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Destination != nullptr)
		*Destination = Parms.Destination;

}


// Function B_TargetTrack.B_TargetTrack_C.TargetMovement__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::TargetMovement__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "TargetMovement__FinishedFunc");

	Params::AB_TargetTrack_C_TargetMovement__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.TargetMovement__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::TargetMovement__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "TargetMovement__UpdateFunc");

	Params::AB_TargetTrack_C_TargetMovement__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TargetTrack_C::OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8");

	Params::AB_TargetTrack_C_OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.OnLoaded_3C01053C48BCC07B689033B6DB9706E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TargetTrack_C::OnLoaded_3C01053C48BCC07B689033B6DB9706E0(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "OnLoaded_3C01053C48BCC07B689033B6DB9706E0");

	Params::AB_TargetTrack_C_OnLoaded_3C01053C48BCC07B689033B6DB9706E0_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "ReceiveBeginPlay");

	Params::AB_TargetTrack_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.MoveTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::MoveTarget()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "MoveTarget");

	Params::AB_TargetTrack_C_MoveTarget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	Params::AB_TargetTrack_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature");

	Params::AB_TargetTrack_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.AttachedTargetKnockedDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::AttachedTargetKnockedDown()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "AttachedTargetKnockedDown");

	Params::AB_TargetTrack_C_AttachedTargetKnockedDown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.StopTargetMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::StopTargetMovement()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "StopTargetMovement");

	Params::AB_TargetTrack_C_StopTargetMovement_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.AttachedTargetPoppedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::AttachedTargetPoppedUp()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "AttachedTargetPoppedUp");

	Params::AB_TargetTrack_C_AttachedTargetPoppedUp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.ResumeTargetMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::ResumeTargetMovement()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "ResumeTargetMovement");

	Params::AB_TargetTrack_C_ResumeTargetMovement_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.ReverseTargetMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::ReverseTargetMovement()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "ReverseTargetMovement");

	Params::AB_TargetTrack_C_ReverseTargetMovement_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.AsyncLoadTargetBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::AsyncLoadTargetBase()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "AsyncLoadTargetBase");

	Params::AB_TargetTrack_C_AsyncLoadTargetBase_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_TargetTrack_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AB_TargetTrack_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.InitializeSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::InitializeSettings()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "InitializeSettings");

	Params::AB_TargetTrack_C_InitializeSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_TargetTrack_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "ReceiveEndPlay");

	Params::AB_TargetTrack_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.Move Target Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::Move_Target_Audio()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "Move Target Audio");

	Params::AB_TargetTrack_C_Move_Target_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.Stop Move Target Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::Stop_Move_Target_Audio()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "Stop Move Target Audio");

	Params::AB_TargetTrack_C_Stop_Move_Target_Audio_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_TargetTrack_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "ReceiveDestroyed");

	Params::AB_TargetTrack_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_TargetTrack.B_TargetTrack_C.ExecuteUbergraph_B_TargetTrack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_CalculatePlayRate_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_ShootingTarget_Master_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FString, class FString> CallFunc_GetPropertyOverrides_CurrentOptions                     (ZeroConstructor)
// bool                               CallFunc_GetPropertyOverrides_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetPropertyOverrides_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_TargetTrack_C::ExecuteUbergraph_B_TargetTrack(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_CalculatePlayRate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_ShootingTarget_Master_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UObject* Temp_object_Variable, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_SetStaticMesh_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_BoolBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_4, bool CallFunc_EqualEqual_BoolBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UObject* Temp_object_Variable_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_3, bool K2Node_DynamicCast_bSuccess_3, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_SetStaticMesh_ReturnValue_3, TMap<class FString, class FString> CallFunc_GetPropertyOverrides_CurrentOptions, bool CallFunc_GetPropertyOverrides_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetPropertyOverrides_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4)
{
	static auto Func = Class->GetFunction("B_TargetTrack_C", "ExecuteUbergraph_B_TargetTrack");

	Params::AB_TargetTrack_C_ExecuteUbergraph_B_TargetTrack_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CalculatePlayRate_ReturnValue = CallFunc_CalculatePlayRate_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_1 = K2Node_DynamicCast_AsStatic_Mesh_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_2 = K2Node_DynamicCast_AsStatic_Mesh_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_2 = CallFunc_SetStaticMesh_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_1 = CallFunc_EqualEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_2 = CallFunc_EqualEqual_BoolBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_3 = CallFunc_EqualEqual_BoolBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_4 = CallFunc_EqualEqual_BoolBool_ReturnValue_4;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_5 = CallFunc_EqualEqual_BoolBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_3 = K2Node_DynamicCast_AsStatic_Mesh_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_3 = CallFunc_SetStaticMesh_ReturnValue_3;
	Parms.CallFunc_GetPropertyOverrides_CurrentOptions = CallFunc_GetPropertyOverrides_CurrentOptions;
	Parms.CallFunc_GetPropertyOverrides_ReturnValue = CallFunc_GetPropertyOverrides_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SetPropertyOverrides_ReturnValue = CallFunc_SetPropertyOverrides_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
