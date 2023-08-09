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

// 0xA0 (0xBE8 - 0xB48)
// WidgetBlueprintGeneratedClass ShowdownEventTile.ShowdownEventTile_C
class UShowdownEventTile_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Focus_Violator;                                    // 0xB50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0xB58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0xB60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      TransitionSize;                                    // 0xB68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0xB70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_InputContainer;                       // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Ended;                                       // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Focus;                                       // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Hover;                                       // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Tail;                                        // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTile_RoundBreak_C*       ShowdownEventTile_RoundBreak;                      // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTileInfo_C*              ShowdownEventTileInfo;                             // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownEventTileViolator_C*          Violator;                                          // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                EventId;                                           // 0xBC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsEnded;                                           // 0xBD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLive;                                            // 0xBD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E75[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnWindowSelected;                                  // 0xBD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowdownEventTile_C");
		return Clss;
	}

	void SetData(const class FString& TournamentInfo, const class FString& EventInfo);
	void Construct();
	void BP_OnClicked();
	void EventIntro(int32 Index);
	void EventResize(bool Out);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void EventSetState(enum class EFortShowdownEventState EventState);
	void EventColorize(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void EventColorizeDispatch(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void EventMultiRoundStyle();
	void ExecuteUbergraph_ShowdownEventTile(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable_3, bool Temp_bool_Variable_3, int32 K2Node_CustomEvent_Index, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_Out, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_5, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_2, float CallFunc_GetStartTime_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, float CallFunc_PauseAnimation_ReturnValue_6, float CallFunc_GetStartTime_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_GetEndTime_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_7, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_PauseAnimation_ReturnValue_8, float CallFunc_GetStartTime_ReturnValue_4, float CallFunc_PauseAnimation_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_GetEndTime_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_8, float CallFunc_Subtract_FloatFloat_ReturnValue_4, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class EFortShowdownEventState K2Node_CustomEvent_EventState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float CallFunc_PauseAnimation_ReturnValue_10, float CallFunc_GetStartTime_ReturnValue_5, float CallFunc_PauseAnimation_ReturnValue_11, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_9, float CallFunc_GetEndTime_ReturnValue_6, bool Temp_bool_Variable_4, float CallFunc_Subtract_FloatFloat_ReturnValue_5, float K2Node_Select_Default_2, float K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_float_Variable_6, float CallFunc_PauseAnimation_ReturnValue_12, float CallFunc_GetStartTime_ReturnValue_6, float CallFunc_PauseAnimation_ReturnValue_13, bool CallFunc_LessEqual_FloatFloat_ReturnValue_6, float CallFunc_Add_FloatFloat_ReturnValue_6, float CallFunc_GetEndTime_ReturnValue_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_11, float CallFunc_Subtract_FloatFloat_ReturnValue_6, float CallFunc_PauseAnimation_ReturnValue_14, float CallFunc_GetStartTime_ReturnValue_7, float CallFunc_PauseAnimation_ReturnValue_15, bool CallFunc_LessEqual_FloatFloat_ReturnValue_7, float CallFunc_Add_FloatFloat_ReturnValue_7, float CallFunc_GetEndTime_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_12, float CallFunc_Subtract_FloatFloat_ReturnValue_7, bool Temp_bool_Variable_5, float K2Node_Select_Default_4, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_13, float Temp_float_Variable_7, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_Variable_6, float Temp_float_Variable_8, float K2Node_Select_Default_5, bool Temp_bool_Variable_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_14, float Temp_float_Variable_9, float K2Node_Select_Default_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_15, bool Temp_bool_Variable_8, float K2Node_Select_Default_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_16, float CallFunc_PauseAnimation_ReturnValue_16, float CallFunc_GetStartTime_ReturnValue_8, float CallFunc_PauseAnimation_ReturnValue_17, bool CallFunc_LessEqual_FloatFloat_ReturnValue_8, float CallFunc_Add_FloatFloat_ReturnValue_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_17, float CallFunc_GetEndTime_ReturnValue_9, float Temp_float_Variable_10, float CallFunc_Subtract_FloatFloat_ReturnValue_8, float K2Node_Select_Default_8, bool Temp_bool_Variable_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_18, float K2Node_Select_Default_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_19);
	void OnWindowSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
