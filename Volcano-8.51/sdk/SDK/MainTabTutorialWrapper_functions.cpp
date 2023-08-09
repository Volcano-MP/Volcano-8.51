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


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.TutorialWrapperFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabTutorialWrapper_C::TutorialWrapperFinished()
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "TutorialWrapperFinished");

	Params::UMainTabTutorialWrapper_C_TutorialWrapperFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               ParentButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialWrapper_C::SetParentButton(class UCommonButton* ParentButton)
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "SetParentButton");

	Params::UMainTabTutorialWrapper_C_SetParentButton_Params Parms;

	Parms.ParentButton = ParentButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUITutorialData         TutorialData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortToastDisplayInfo       FortToastDisplayInfo                                             (Parm, OutParm)
// class FText                        CallFunc_Array_Get_Item                                          ()
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// struct FFortToastDisplayInfo       K2Node_MakeStruct_FortToastDisplayInfo                           ()

void UMainTabTutorialWrapper_C::GetTutorialCalloutData(const struct FFortUITutorialData& TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo, class FText CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item_1, const struct FFortToastDisplayInfo& K2Node_MakeStruct_FortToastDisplayInfo)
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "GetTutorialCalloutData");

	Params::UMainTabTutorialWrapper_C_GetTutorialCalloutData_Params Parms;

	Parms.TutorialData = TutorialData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_FortToastDisplayInfo = K2Node_MakeStruct_FortToastDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (FortToastDisplayInfo != nullptr)
		*FortToastDisplayInfo = Parms.FortToastDisplayInfo;

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUITutorialData         FortUITutorialData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabTutorialWrapper_C::HasValidData(struct FFortUITutorialData& FortUITutorialData, bool* Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "HasValidData");

	Params::UMainTabTutorialWrapper_C_HasValidData_Params Parms;

	Parms.FortUITutorialData = FortUITutorialData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TutorialObjectiveName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUITutorialData         TutorialData                                                     (Edit, BlueprintVisible)
// class UFortTutorialContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUITutorialData         CallFunc_GetTutorialData_OutTutorialData                         ()
// bool                               CallFunc_GetTutorialData_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidData_Result                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortToastDisplayInfo       CallFunc_GetTutorialCalloutData_FortToastDisplayInfo             ()

void UMainTabTutorialWrapper_C::HandleTutorialCallout(class FName& TutorialObjectiveName, enum class ETutorialType TutorialType, const struct FFortUITutorialData& TutorialData, class UFortTutorialContext* CallFunc_GetContext_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortUITutorialData& CallFunc_GetTutorialData_OutTutorialData, bool CallFunc_GetTutorialData_ReturnValue, bool CallFunc_HasValidData_Result, const struct FFortToastDisplayInfo& CallFunc_GetTutorialCalloutData_FortToastDisplayInfo)
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "HandleTutorialCallout");

	Params::UMainTabTutorialWrapper_C_HandleTutorialCallout_Params Parms;

	Parms.TutorialObjectiveName = TutorialObjectiveName;
	Parms.TutorialType = TutorialType;
	Parms.TutorialData = TutorialData;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTutorialData_OutTutorialData = CallFunc_GetTutorialData_OutTutorialData;
	Parms.CallFunc_GetTutorialData_ReturnValue = CallFunc_GetTutorialData_ReturnValue;
	Parms.CallFunc_HasValidData_Result = CallFunc_HasValidData_Result;
	Parms.CallFunc_GetTutorialCalloutData_FortToastDisplayInfo = CallFunc_GetTutorialCalloutData_FortToastDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTutorialContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTutorialCalloutVisible_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabTutorialWrapper_C::CheckFinishTutorialWrapper(class UFortTutorialContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsTutorialCalloutVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "CheckFinishTutorialWrapper");

	Params::UMainTabTutorialWrapper_C_CheckFinishTutorialWrapper_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsTutorialCalloutVisible_ReturnValue = CallFunc_IsTutorialCalloutVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabTutorialWrapper_C::OnStopCallout()
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "OnStopCallout");

	Params::UMainTabTutorialWrapper_C_OnStopCallout_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TutorialObjectiveName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           TutorialType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialWrapper_C::OnStartCallout(class FName TutorialObjectiveName, enum class ETutorialType TutorialType)
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "OnStartCallout");

	Params::UMainTabTutorialWrapper_C_OnStartCallout_Params Parms;

	Parms.TutorialObjectiveName = TutorialObjectiveName;
	Parms.TutorialType = TutorialType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainTabTutorialWrapper_C::Construct()
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "Construct");

	Params::UMainTabTutorialWrapper_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainTabTutorialWrapper_C::Destruct()
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "Destruct");

	Params::UMainTabTutorialWrapper_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnFinishedToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabTutorialWrapper_C::OnFinishedToast()
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "OnFinishedToast");

	Params::UMainTabTutorialWrapper_C_OnFinishedToast_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_Event_TutorialObjectiveName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETutorialType           K2Node_Event_TutorialType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialWrapper_C::ExecuteUbergraph_MainTabTutorialWrapper(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_Event_TutorialObjectiveName, enum class ETutorialType K2Node_Event_TutorialType)
{
	static auto Func = Class->GetFunction("MainTabTutorialWrapper_C", "ExecuteUbergraph_MainTabTutorialWrapper");

	Params::UMainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_TutorialObjectiveName = K2Node_Event_TutorialObjectiveName;
	Parms.K2Node_Event_TutorialType = K2Node_Event_TutorialType;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
