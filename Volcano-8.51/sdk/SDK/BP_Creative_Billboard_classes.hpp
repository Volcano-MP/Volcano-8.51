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

// 0x68 (0xB70 - 0xB08)
// BlueprintGeneratedClass BP_Creative_Billboard.BP_Creative_Billboard_C
class ABP_Creative_Billboard_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         ToolPickingBox;                                    // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Background;                                        // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                UserDefinedText;                                   // 0xB28(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	bool                                         bShowBorder;                                       // 0xB38(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6B10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackgroundColor;                                   // 0xB3C(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      HorizontalTextAlignment;                           // 0xB4C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextSize;                                          // 0xB50(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        ViewDistance;                                      // 0xB54(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bAlwaysFaceCamera;                                 // 0xB58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasInRangeLastCheck;                               // 0xB59(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B12[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BackgroundColorOverride;                           // 0xB5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColor;                                         // 0xB60(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Creative_Billboard_C");
		return Clss;
	}

	void SetViewDistance(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SetTextColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void UpdateProperties(bool CallFunc_IsDedicatedServer_ReturnValue);
	void SetTextAlignment(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void ShowBorder(enum class ECollisionEnabled CollisionSetting, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetTextSize(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetDisplayText(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetBackgroundColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget_1, bool K2Node_DynamicCast_bSuccess_1);
	void ReceiveBeginPlay();
	void PostUpdateProperties();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void PostFinishSpawning();
	void ExecuteUbergraph_BP_Creative_Billboard(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
