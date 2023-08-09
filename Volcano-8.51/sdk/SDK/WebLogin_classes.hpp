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

// 0x28 (0x350 - 0x328)
// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
class UWebLogin_C : public UFortWebLoginWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     Throbber;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               WebContent;                                        // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebLogin_C");
		return Clss;
	}

	void DisplayWidget(class UWidget* WebWidget);
	void DismissWidget();
	void ExecuteUbergraph_WebLogin(int32 EntryPoint, class UWidget* K2Node_Event_WebWidget, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
