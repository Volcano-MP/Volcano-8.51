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

// 0x8 (0x248 - 0x240)
// Class ImagePlate.ImagePlate
class AImagePlate : public AActor
{
public:
	class UImagePlateComponent*                  ImagePlate;                                        // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlate");
		return Clss;
	}

};

// 0xD0 (0x4C0 - 0x3F0)
// Class ImagePlate.ImagePlateComponent
class UImagePlateComponent : public UPrimitiveComponent
{
public:
	struct FImagePlateParameters                 Plate;                                             // 0x3F0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C5B[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateComponent");
		return Clss;
	}

	void SetImagePlate(const struct FImagePlateParameters& Plate);
	void OnRenderTextureChanged();
	struct FImagePlateParameters GetPlate();
};

// 0x10 (0x38 - 0x28)
// Class ImagePlate.ImagePlateSettings
class UImagePlateSettings : public UObject
{
public:
	class FString                                ProxyName;                                         // 0x28(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateSettings");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class ImagePlate.ImagePlateFileSequence
class UImagePlateFileSequence : public UObject
{
public:
	struct FDirectoryPath                        SequencePath;                                      // 0x28(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                FileWildcard;                                      // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateFileSequence");
		return Clss;
	}

};

// 0x0 (0x3F0 - 0x3F0)
// Class ImagePlate.ImagePlateFrustumComponent
class UImagePlateFrustumComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImagePlateFrustumComponent");
		return Clss;
	}

};

// 0x10 (0xF0 - 0xE0)
// Class ImagePlate.MovieSceneImagePlateSection
class UMovieSceneImagePlateSection : public UMovieSceneSection
{
public:
	class UImagePlateFileSequence*               FileSequence;                                      // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReuseExistingTexture;                             // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneImagePlateSection");
		return Clss;
	}

};

// 0x0 (0x88 - 0x88)
// Class ImagePlate.MovieSceneImagePlateTrack
class UMovieSceneImagePlateTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneImagePlateTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
