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


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.ResetAdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpEntryBodyWidget_C::ResetAdditionalContent()
{
	static auto Func = Class->GetFunction("HelpEntryBodyWidget_C", "ResetAdditionalContent");

	Params::UHelpEntryBodyWidget_C_ResetAdditionalContent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      ImageComponent                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHelpContentLocationTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpEntryBodyWidget_C::UpdateAdditionalImage(class UImage* ImageComponent, enum class EFortHelpContentLocation Temp_byte_Variable, class UImage* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("HelpEntryBodyWidget_C", "UpdateAdditionalImage");

	Params::UHelpEntryBodyWidget_C_UpdateAdditionalImage_Params Parms;

	Parms.ImageComponent = ImageComponent;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateAdditionalWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                ContentContainer                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortHelpContentLocationTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpEntryBodyWidget_C::UpdateAdditionalWidget(class UPanelWidget* ContentContainer, enum class EFortHelpContentLocation Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UPanelWidget* K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static auto Func = Class->GetFunction("HelpEntryBodyWidget_C", "UpdateAdditionalWidget");

	Params::UHelpEntryBodyWidget_C_UpdateAdditionalWidget_Params Parms;

	Parms.ContentContainer = ContentContainer;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.UpdateBodyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpEntryBodyWidget_C::UpdateBodyText()
{
	static auto Func = Class->GetFunction("HelpEntryBodyWidget_C", "UpdateBodyText");

	Params::UHelpEntryBodyWidget_C_UpdateBodyText_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpEntryBodyWidget.HelpEntryBodyWidget_C.SetActiveEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHelpItem*               InHelpItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpEntryBodyWidget_C::SetActiveEntry(class UFortHelpItem* InHelpItem, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("HelpEntryBodyWidget_C", "SetActiveEntry");

	Params::UHelpEntryBodyWidget_C_SetActiveEntry_Params Parms;

	Parms.InHelpItem = InHelpItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
