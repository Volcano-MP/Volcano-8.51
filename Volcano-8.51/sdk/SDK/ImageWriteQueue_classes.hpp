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
// Class ImageWriteQueue.ImageWriteBlueprintLibrary
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImageWriteBlueprintLibrary");
		return Clss;
	}

	void ExportToDisk(class UTexture* Texture, const class FString& Filename, struct FImageWriteOptions& Options);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
