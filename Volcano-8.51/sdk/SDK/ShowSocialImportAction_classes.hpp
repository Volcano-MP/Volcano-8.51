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

// 0x12 (0x2B2 - 0x2A0)
// BlueprintGeneratedClass ShowSocialImportAction.ShowSocialImportAction_C
class AShowSocialImportAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bLastStateWasLoginScreen;                          // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESubGame                          NewVar_0;                                          // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowSocialImportAction_C");
		return Clss;
	}

	void ShouldShowSocialImport(bool* NewParam, class UFortUIManagerWidget_NUI* UIManager, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_ShouldShowSocialImport_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsPendingLogout_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void HandleSocialImportClosed(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ShowSocialImport(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UFortSocialImportPanel* CallFunc_ShowSocialImport_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Execute(struct FFortScriptedActionParams& Params);
	void ExecuteUbergraph_ShowSocialImportAction(int32 EntryPoint, bool CallFunc_ShouldShowSocialImport_NewParam, const struct FFortScriptedActionParams& K2Node_Event_Params);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
