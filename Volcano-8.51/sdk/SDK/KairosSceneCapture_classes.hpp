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
// Class KairosSceneCapture.KairosCaptureStatics
class UKairosCaptureStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KairosCaptureStatics");
		return Clss;
	}

	void ToggleAutoRotate(bool bIsAutoRotateAllowed);
	void PauseOrResumeSnippet(const struct FKairosSnippetParams& Params, const struct FWebJSResponse& Response);
	class AKairosSceneManagerActor* GetSceneManager(class UObject* WorldContextObject);
};

// 0x140 (0x170 - 0x30)
// Class KairosSceneCapture.KairosConfig
class UKairosConfig : public UDataAsset
{
public:
	float                                        DefaultHeroScale;                                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ARSpawnStartingScale;                              // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AKairosHeroBase>           AvatarCaptureBlueprint;                            // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AFortPlayerPawnAthena>     DefaultKairosPawn;                                 // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARSessionConfig*                      FaceARConfig;                                      // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 ARMap;                                             // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UWorld>                 CaptureMap;                                        // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          KairosMenuIdle_Male;                               // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          KairosMenuIdle_Female;                             // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AvatarRenderCameraLocation_CloseUp;                // 0xB0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            AvatarRenderCameraLocation_Bust;                   // 0xE0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            AvatarRenderCameraLocation_Torso;                  // 0x110(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            AvatarRenderCameraLocation_FullBody;               // 0x140(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KairosConfig");
		return Clss;
	}

};

// 0x8 (0x2E8 - 0x2E0)
// Class KairosSceneCapture.KairosGameModeBase
class AKairosGameModeBase : public AGameModeBase
{
public:
	class UKairosConfig*                         DefaultConfig;                                     // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KairosGameModeBase");
		return Clss;
	}

	class UKairosConfig* GetDefaultConfig();
};

// 0x30 (0x270 - 0x240)
// Class KairosSceneCapture.KairosHeroBase
class AKairosHeroBase : public AActor
{
public:
	class FString                                PlayerID;                                          // 0x240(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBeingCaptured;                                  // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKairosHeroAnimationState         CurrentAnimationState;                             // 0x260(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKairosHeroSkeletonType           SkeletonType;                                      // 0x261(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C02[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CapturePawn;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KairosHeroBase");
		return Clss;
	}

	bool EndCapture();
	bool BeginCapture(const struct FKairosAnimationFramingInfo& FramingInfo, const struct FKairosCaptureParams& CaptureParams);
};

// 0x0 (0x2A0 - 0x2A0)
// Class KairosSceneCapture.KairosPawn
class AKairosPawn : public APawn
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KairosPawn");
		return Clss;
	}

};

// 0x0 (0x590 - 0x590)
// Class KairosSceneCapture.KairosPlayerController
class AKairosPlayerController : public APlayerController
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KairosPlayerController");
		return Clss;
	}

};

// 0x180 (0x3C0 - 0x240)
// Class KairosSceneCapture.KairosSceneManagerActor
class AKairosSceneManagerActor : public AActor
{
public:
	TMap<class FString, struct FKairosAvatarDisplayInfo> DisplayAvatars;                                    // 0x240(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            SpawnedPawnHeadCaptureTransform;                   // 0x290(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAudioComponent*                       SnippetAudioComponent;                             // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ActiveGroupWidget;                                 // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSnippetPaused;                                  // 0x2D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C04[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKairosSceneInfo                      ActiveSceneInfo;                                   // 0x2F0(0x20)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C05[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KairosSceneManagerActor");
		return Clss;
	}

	void StopAR();
	void PauseOrResumeSnippet(const class FString& PlayerID, bool bShouldPase);
	void OLD_OnSceneSetupComplete(const struct FKairosSceneInfo& CompleteSceneInfoCopy);
	void LoadWorldARMode();
	struct FKairosSceneInfo GetSceneInfo();
	void BeginEmotePlaybackForPlayer(const class FString& PlayerID, const class FString& EmoteID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
