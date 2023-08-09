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

// 0x8 (0x238 - 0x230)
// WidgetBlueprintGeneratedClass CMSImage.CMSImage_C
class UCMSImage_C : public UUserWidget
{
public:
	class UEpicCMSImage*                         Image;                                             // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CMSImage_C");
		return Clss;
	}

	void SetMediaURL(const class FString& MediaUrl);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
