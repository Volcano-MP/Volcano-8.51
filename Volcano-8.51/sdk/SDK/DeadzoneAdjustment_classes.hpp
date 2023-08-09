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

// 0x35 (0x265 - 0x230)
// WidgetBlueprintGeneratedClass DeadzoneAdjustment.DeadzoneAdjustment_C
class UDeadzoneAdjustment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Deadzone_Adjustment;                               // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSetting_C*                 Deadzone_Adjustment_Slider;                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Deadzone_Max;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ResetButton;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        ScaleValue;                                        // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxValue;                                          // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinValue;                                          // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESettingType                      SettingType;                                       // 0x264(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeadzoneAdjustment_C");
		return Clss;
	}

	class UWidget* DoCustomNavigation_0(enum class EUINavigation Navigation, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void OnValueChanged_Bind(float Value);
	void ExecuteUbergraph_DeadzoneAdjustment(int32 EntryPoint, float CallFunc_GetValue_ReturnValue, float K2Node_CustomEvent_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_ConvertSliderValueToSettingsValue_SettingsValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
