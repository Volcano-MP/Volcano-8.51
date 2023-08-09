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


// Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              MediaURLs                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCMSImageSlideShow_C::SetMediaURLs(TArray<class FString>& MediaURLs)
{
	static auto Func = Class->GetFunction("CMSImageSlideShow_C", "SetMediaURLs");

	Params::UCMSImageSlideShow_C_SetMediaURLs_Params Parms;

	Parms.MediaURLs = MediaURLs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonWidgetCarousel*       CarouselWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentPageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCMSImageSlideShow_C::BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex)
{
	static auto Func = Class->GetFunction("CMSImageSlideShow_C", "BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature");

	Params::UCMSImageSlideShow_C_BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature_Params Parms;

	Parms.CarouselWidget = CarouselWidget;
	Parms.CurrentPageIndex = CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonWidgetCarousel*       K2Node_ComponentBoundEvent_CarouselWidget                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_CurrentPageIndex                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCMSImage_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_CustomEvent_MediaUrls                                     (ConstParm, ZeroConstructor, ReferenceParm)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCMSImageSlideShow_C::ExecuteUbergraph_CMSImageSlideShow(int32 EntryPoint, class UCommonWidgetCarousel* K2Node_ComponentBoundEvent_CarouselWidget, int32 K2Node_ComponentBoundEvent_CurrentPageIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCMSImage_C* CallFunc_Create_ReturnValue, TArray<class FString>& K2Node_CustomEvent_MediaUrls, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("CMSImageSlideShow_C", "ExecuteUbergraph_CMSImageSlideShow");

	Params::UCMSImageSlideShow_C_ExecuteUbergraph_CMSImageSlideShow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_CarouselWidget = K2Node_ComponentBoundEvent_CarouselWidget;
	Parms.K2Node_ComponentBoundEvent_CurrentPageIndex = K2Node_ComponentBoundEvent_CurrentPageIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_MediaUrls = K2Node_CustomEvent_MediaUrls;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentPageIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCMSImageSlideShow_C::CarouselIndexChanged__DelegateSignature(int32 CurrentPageIndex)
{
	static auto Func = Class->GetFunction("CMSImageSlideShow_C", "CarouselIndexChanged__DelegateSignature");

	Params::UCMSImageSlideShow_C_CarouselIndexChanged__DelegateSignature_Params Parms;

	Parms.CurrentPageIndex = CurrentPageIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
