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


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetViewDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creative_Billboard_C::SetViewDistance(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "SetViewDistance");

	Params::ABP_Creative_Billboard_C_SetViewDistance_Params Parms;

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreative_Background_Widget_C*K2Node_DynamicCast_AsCreative_Background_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Creative_Billboard_C::SetTextColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "SetTextColor");

	Params::ABP_Creative_Billboard_C_SetTextColor_Params Parms;

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreative_Background_Widget = K2Node_DynamicCast_AsCreative_Background_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.UpdateProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Creative_Billboard_C::UpdateProperties(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "UpdateProperties");

	Params::ABP_Creative_Billboard_C_UpdateProperties_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreative_Background_Widget_C*K2Node_DynamicCast_AsCreative_Background_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Creative_Billboard_C::SetTextAlignment(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "SetTextAlignment");

	Params::ABP_Creative_Billboard_C_SetTextAlignment_Params Parms;

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreative_Background_Widget = K2Node_DynamicCast_AsCreative_Background_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ShowBorder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECollisionEnabled       CollisionSetting                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Creative_Billboard_C::ShowBorder(enum class ECollisionEnabled CollisionSetting, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "ShowBorder");

	Params::ABP_Creative_Billboard_C_ShowBorder_Params Parms;

	Parms.CollisionSetting = CollisionSetting;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreative_Background_Widget_C*K2Node_DynamicCast_AsCreative_Background_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Creative_Billboard_C::SetTextSize(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "SetTextSize");

	Params::ABP_Creative_Billboard_C_SetTextSize_Params Parms;

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreative_Background_Widget = K2Node_DynamicCast_AsCreative_Background_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreative_Background_Widget_C*K2Node_DynamicCast_AsCreative_Background_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Creative_Billboard_C::SetDisplayText(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "SetDisplayText");

	Params::ABP_Creative_Billboard_C_SetDisplayText_Params Parms;

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreative_Background_Widget = K2Node_DynamicCast_AsCreative_Background_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreative_Background_Widget_C*K2Node_DynamicCast_AsCreative_Background_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCreative_Background_Widget_C*K2Node_DynamicCast_AsCreative_Background_Widget_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Creative_Billboard_C::SetBackgroundColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "SetBackgroundColor");

	Params::ABP_Creative_Billboard_C_SetBackgroundColor_Params Parms;

	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreative_Background_Widget = K2Node_DynamicCast_AsCreative_Background_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCreative_Background_Widget_1 = K2Node_DynamicCast_AsCreative_Background_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Creative_Billboard_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "ReceiveBeginPlay");

	Params::ABP_Creative_Billboard_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.PostUpdateProperties
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creative_Billboard_C::PostUpdateProperties()
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "PostUpdateProperties");

	Params::ABP_Creative_Billboard_C_PostUpdateProperties_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_Creative_Billboard_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature");

	Params::ABP_Creative_Billboard_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_Creative_Billboard_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	Params::ABP_Creative_Billboard_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.PostFinishSpawning
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Creative_Billboard_C::PostFinishSpawning()
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "PostFinishSpawning");

	Params::ABP_Creative_Billboard_C_PostFinishSpawning_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creative_Billboard.BP_Creative_Billboard_C.ExecuteUbergraph_BP_Creative_Billboard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creative_Billboard_C::ExecuteUbergraph_BP_Creative_Billboard(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_Creative_Billboard_C", "ExecuteUbergraph_BP_Creative_Billboard");

	Params::ABP_Creative_Billboard_C_ExecuteUbergraph_BP_Creative_Billboard_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
