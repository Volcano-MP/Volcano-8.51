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

// 0x28 (0x390 - 0x368)
// WidgetBlueprintGeneratedClass LoginResultWIdget.LoginResultWIdget_C
class ULoginResultWIdget_C : public UFortLoginResultWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                   RetryAction;                                       // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   Restart_Action;                                    // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoginResultWIdget_C");
		return Clss;
	}

	void SetForceQuitButtons(bool bForceQuit);
	void ExecuteUbergraph_LoginResultWIdget(int32 EntryPoint, bool K2Node_Event_bForceQuit, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
