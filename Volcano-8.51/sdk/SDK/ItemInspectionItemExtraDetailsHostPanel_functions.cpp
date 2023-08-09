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


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.Update Border Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectionItemExtraDetailsHostPanel_C::Update_Border_Color(enum class EFortRarity CallFunc_GetRarity_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue_1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "Update Border Color");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_Update_Border_Color_Params Parms;

	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue_1 = CallFunc_GetRarity_ReturnValue_1;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.Update Scrollbox Layout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectionItemExtraDetailsHostPanel_C::Update_Scrollbox_Layout()
{
	static auto Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "Update Scrollbox Layout");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_Update_Scrollbox_Layout_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.Update Header Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HeaderWidth                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectionItemExtraDetailsHostPanel_C::Update_Header_Size(float HeaderWidth)
{
	static auto Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "Update Header Size");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_Update_Header_Size_Params Parms;

	Parms.HeaderWidth = HeaderWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectionItemExtraDetailsHostPanel_C::HandleDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "HandleDifferentItemToDetailSet");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_HandleDifferentItemToDetailSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C.ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectionItemExtraDetailsHostPanel_C::ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemInspectionItemExtraDetailsHostPanel_C", "ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel");

	Params::UItemInspectionItemExtraDetailsHostPanel_C_ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
