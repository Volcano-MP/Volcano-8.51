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

// 0x29 (0xBA9 - 0xB80)
// WidgetBlueprintGeneratedClass ShowdownTournamentTile.ShowdownTournamentTile_C
class UShowdownTournamentTile_C : public UFortShowdownTournamentTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SizeUp;                                            // 0xB88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ChangeFocus;                                       // 0xB90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_TileFade;                                    // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PosterSizeBox;                                     // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsFaded;                                           // 0xBA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowdownTournamentTile_C");
		return Clss;
	}

	void BP_OnSelected();
	void BP_OnDeselected();
	void EventFade(bool FadeOut);
	void ExecuteUbergraph_ShowdownTournamentTile(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_2, float Temp_float_Variable_3, bool K2Node_CustomEvent_fadeOut, float CallFunc_GetStartTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue_2, float K2Node_Select_Default, float CallFunc_GetStartTime_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_3, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_6, float K2Node_Select_Default_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_3, float K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, class UShowdownScreen_C* K2Node_DynamicCast_AsShowdown_Screen, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
