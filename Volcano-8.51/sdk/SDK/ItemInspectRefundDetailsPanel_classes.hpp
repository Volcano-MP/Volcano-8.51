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

// 0x10 (0x248 - 0x238)
// WidgetBlueprintGeneratedClass ItemInspectRefundDetailsPanel.ItemInspectRefundDetailsPanel_C
class UItemInspectRefundDetailsPanel_C : public UCommonUserWidget
{
public:
	class UItemInspectRefundItemQuantityList_C*  ResourceList;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInspectRefundDetailsPanel_C");
		return Clss;
	}

	void SetScrollWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SetItemToRefund(class UFortAccountItem* ItemToRefund, TArray<struct FFortItemQuantityPair>& CallFunc_GetRefundResults_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
