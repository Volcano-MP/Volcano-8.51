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

// 0x24 (0x264 - 0x240)
// WidgetBlueprintGeneratedClass CreativeLobbyAdSpace.CreativeLobbyAdSpace_C
class UCreativeLobbyAdSpace_C : public UFortCreativeAdsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreativeLobbyAd_C*                    Ad1;                                               // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeLobbyAd_C*                    Ad2;                                               // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CreativeAdContent;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        NumCreativeAds;                                    // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeLobbyAdSpace_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_CreativeLobbyAdSpace(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
