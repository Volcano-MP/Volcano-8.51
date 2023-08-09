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

// 0x28 (0x348 - 0x320)
// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
class UWebPurchase_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     Throbber;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               WebContent;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebPurchase_C");
		return Clss;
	}

	void HandleBack(bool* bPassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void BindDelegates();
	void Dismiss(class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_ExitWebPayment_ReturnValue);
	void Display(class UWidget* WebWidget, const class FString& AttemptedMTXOfferId, class UFortStoreContext* CallFunc_GetContext_ReturnValue, bool CallFunc_OpenWebPayment_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnActivated();
	void ExecuteUbergraph_WebPurchase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
