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

// 0x0 (0x28 - 0x28)
// Class Overlay.Overlays
class UOverlays : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Overlays");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Overlay.BasicOverlays
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                  Overlays;                                          // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BasicOverlays");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class Overlay.LocalizedOverlays
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                        DefaultOverlays;                                   // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UBasicOverlays*>   LocaleToOverlaysMap;                               // 0x30(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalizedOverlays");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
