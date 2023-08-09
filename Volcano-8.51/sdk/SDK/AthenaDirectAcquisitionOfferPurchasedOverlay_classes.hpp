#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x5A0 - 0x4B0)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C
class UAthenaDirectAcquisitionOfferPurchasedOverlay_C : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Purchased___Bundle_Item____FAST;                   // 0x4B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Successfully_Purchased___Bundle_Item_;             // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bundle_Blur__out_;                                 // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Bundle_Blur__loop_;                                // 0x4D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Purchased___Bundle_Item_;                          // 0x4D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Purchased_;                                        // 0x4E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               BorderItemNAme;                                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxMiniCards1;                                    // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxMiniCards2;                                    // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxMiniCards3;                                    // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxMiniCards4;                                    // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HBoxSuccessfullyPurchased;                         // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageRarityFlare;                                  // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayMainItem;                                   // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RarityGlow;                                        // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxMiniBundleItems;                            // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        QuantityPurchased;                                 // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Bundle_Item_Index;                                 // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPurchasedItemInfo>            Purchased_Bundle_Items;                            // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	int32                                        BundleMiniGrid___Column;                           // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BundleMiniGrid___Row;                              // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortReceivedItemLootInfo             Fort_Received_Loot_Info_Struct;                    // 0x568(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBundleItemMiniCardWidget_C*>   Bundle_Mini_Item_Cards;                            // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDirectAcquisitionOfferPurchasedOverlay_C");
		return Clss;
	}

	void Mini_Bundle_Item_Location(int32 Bundle_Item_Index, class UHorizontalBox** HBox_Row, int32 Bundle_Item_Index__local_, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHorizontalBox* K2Node_Select_Default, class UHorizontalBox* K2Node_Select_Default_1);
	void Bundle_Item_Anim_Speed(float* Speed, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1);
	void Get_Bundle_Info_from_Item_Def(class UFortAccountItemDefinition* Item_Definition, struct FBundledItemInfo* Bundled_Item_Info, bool* bFoundItem, class UFortAccountItemDefinition* Item_Definition__local_, const struct FBundledItemInfo& Bundled_Item_Info__local_, bool bFoundItem__local_, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<struct FBundledItemInfo>& CallFunc_GetDynamicBundleItems_Items, const struct FBundledItemInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void PopScreen(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleBack(bool* PassThrough);
	void UpdateFromOffer(class UFortAccountItemDefinition* Item_Definition, int32 Grant_Quantity__local_, class UFortAccountItemDefinition* Item_Definition__local_, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, const struct FBundledItemInfo& CallFunc_Get_Bundle_Info_from_Item_Def_Bundled_Item_Info, bool CallFunc_Get_Bundle_Info_from_Item_Def_bFoundItem, class FText CallFunc_GetDisplayName_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue_1, int32 CallFunc_GetGrantedItemQuantity_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void OnOfferSet();
	void OnActivated();
	void Construct();
	void WidgetAnimationEvt_Purchased__K2Node_WidgetAnimationEvent_0();
	void Remove_Widget_and_Return_to_Last_Menu();
	void Show_Next_Item();
	void BundleBlurOut();
	void WidgetAnimationEvt_Purchased___Bundle_Item__K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_Purchased___Bundle_Item____FAST_K2Node_WidgetAnimationEvent_1();
	void Init_Bundle_Layout();
	void Populate_Bundle_Mini_Cards();
	void Show_Bundle_Mini_Item_Card();
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay(int32 EntryPoint, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_1, int32 CallFunc_GetNumGrantedItems_ReturnValue, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_2, bool Temp_bool_Variable_1, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_4, class UHorizontalBox* CallFunc_Mini_Bundle_Item_Location_HBox_Row, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_5, bool Temp_bool_Variable_2, enum class ECatalogOfferType CallFunc_GetOfferType_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue_6, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortAccountItemDefinition* K2Node_DynamicCast_AsFort_Account_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortAccountItemDefinition* K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Bundle_Item_Anim_Speed_speed, float CallFunc_Bundle_Item_Anim_Speed_speed_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_Bundle_Item_Anim_Speed_speed_2, bool CallFunc_Greater_FloatFloat_ReturnValue, class UWidgetAnimation* K2Node_Select_Default_1, class UWidgetAnimation* K2Node_Select_Default_2, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UBundleItemMiniCardWidget_C* CallFunc_Create_ReturnValue, const struct FPurchasedItemInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue_1, class UFortAccountItemDefinition* K2Node_DynamicCast_AsFort_Account_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UBundleItemMiniCardWidget_C* CallFunc_Array_Get_Item_1, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
