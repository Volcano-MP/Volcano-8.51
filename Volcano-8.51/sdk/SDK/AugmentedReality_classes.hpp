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
// Class AugmentedReality.ARBlueprintLibrary
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARBlueprintLibrary");
		return Clss;
	}

	void UnpinComponent(class USceneComponent* ComponentToUnpin);
	void StopARSession();
	void StartARSession(class UARSessionConfig* SessionConfig);
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform);
	void RemovePin(class UARPin* PinToRemove);
	class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, class FName DebugName);
	class UARPin* PinComponent(class USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, class FName DebugName);
	void PauseARSession();
	TArray<struct FARTraceResult> LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	TArray<struct FARTraceResult> LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	bool IsSessionTypeSupported(enum class EARSessionType SessionType);
	bool IsARSupported();
	enum class EARWorldMappingState GetWorldMappingStatus();
	enum class EARTrackingQualityReason GetTrackingQualityReason();
	enum class EARTrackingQuality GetTrackingQuality();
	TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType);
	class UARSessionConfig* GetSessionConfig();
	TArray<struct FVector> GetPointCloud();
	class UARLightEstimate* GetCurrentLightEstimate();
	class UARTextureCameraImage* GetCameraImage();
	class UARTextureCameraDepth* GetCameraDepth();
	struct FARSessionStatus GetARSessionStatus();
	TArray<class UARTrackedPoint*> GetAllTrackedPoints();
	TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
	TArray<class UARTrackedImage*> GetAllTrackedImages();
	TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
	TArray<class UARPin*> GetAllPins();
	TArray<class UARTrackedGeometry*> GetAllGeometries();
	void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
	void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
	class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth);
	bool AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultLibrary
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTraceResultLibrary");
		return Clss;
	}

	class UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult);
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult);
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult);
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult);
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult);
};

// 0x20 (0x50 - 0x30)
// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_2DDD[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARBaseAsyncTaskBlueprintProxy");
		return Clss;
	}

};

// 0x30 (0x80 - 0x50)
// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARSaveWorldAsyncTaskBlueprintProxy");
		return Clss;
	}

	class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
};

// 0x48 (0x98 - 0x50)
// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DDF[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return Clss;
	}

	class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARLightEstimate
class UARLightEstimate : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARLightEstimate");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class AugmentedReality.ARBasicLightEstimate
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                        AmbientIntensityLumens;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AmbientColorTemperatureKelvin;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          AmbientColor;                                      // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARBasicLightEstimate");
		return Clss;
	}

	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};

// 0xC8 (0xF0 - 0x28)
// Class AugmentedReality.ARPin
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       PinnedComponent;                                   // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DE0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EARTrackingState                  TrackingState;                                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DE1[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnARTrackingStateChanged;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastInlineDelegateProperty_            OnARTransformUpdated;                              // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DE2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARPin");
		return Clss;
	}

	enum class EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	class FName GetDebugName();
	void DebugDraw(class UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds);
};

// 0x68 (0x98 - 0x30)
// Class AugmentedReality.ARSessionConfig
class UARSessionConfig : public UDataAsset
{
public:
	enum class EARWorldAlignment                 WorldAlignment;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARSessionType                    SessionType;                                       // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARPlaneDetectionMode             PlaneDetectionMode;                                // 0x32(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHorizontalPlaneDetection;                         // 0x33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bVerticalPlaneDetection;                           // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAutoFocus;                                  // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARLightEstimationMode            LightEstimationMode;                               // 0x36(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARFrameSyncMode                  FrameSyncMode;                                     // 0x37(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAutomaticCameraOverlay;                     // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAutomaticCameraTracking;                    // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetCameraTracking;                              // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetTrackedObjects;                              // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DE3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UARCandidateImage*>             CandidateImages;                                   // 0x40(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        MaxNumSimultaneousImagesTracked;                   // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAREnvironmentCaptureProbeType    EnvironmentCaptureProbeType;                       // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                WorldMapData;                                      // 0x58(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UARCandidateObject*>            CandidateObjects;                                  // 0x68(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FARVideoFormat                        DesiredVideoFormat;                                // 0x78(0xC)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EARFaceTrackingDirection          FaceTrackingDirection;                             // 0x84(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARFaceTrackingUpdate             FaceTrackingUpdate;                                // 0x85(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DE5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                SerializedARCandidateImageDatabase;                // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARSessionConfig");
		return Clss;
	}

	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(const TArray<uint8>& WorldMapData);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*>& InCandidateObjects);
	TArray<uint8> GetWorldMapData();
	enum class EARWorldAlignment GetWorldAlignment();
	enum class EARSessionType GetSessionType();
	enum class EARPlaneDetectionMode GetPlaneDetectionMode();
	int32 GetMaxNumSimultaneousImagesTracked();
	enum class EARLightEstimationMode GetLightEstimationMode();
	enum class EARFrameSyncMode GetFrameSyncMode();
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate();
	enum class EARFaceTrackingDirection GetFaceTrackingDirection();
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

// 0x68 (0x390 - 0x328)
// Class AugmentedReality.ARSharedWorldGameMode
class AARSharedWorldGameMode : public AGameMode
{
public:
	int32                                        BufferSizePerChunk;                                // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE6[0x64];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARSharedWorldGameMode");
		return Clss;
	}

	void SetPreviewImageData(const TArray<uint8>& ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(const TArray<uint8>& ARWorldData);
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};

// 0x38 (0x2D8 - 0x2A0)
// Class AugmentedReality.ARSharedWorldGameState
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<uint8>                                PreviewImageData;                                  // 0x2A0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ARWorldData;                                       // 0x2B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PreviewImageBytesTotal;                            // 0x2C0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ARWorldBytesTotal;                                 // 0x2C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviewImageBytesDelivered;                        // 0x2C8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ARWorldBytesDelivered;                             // 0x2CC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DE7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARSharedWorldGameState");
		return Clss;
	}

	void K2_OnARWorldMapIsReady();
};

// 0x8 (0x598 - 0x590)
// Class AugmentedReality.ARSharedWorldPlayerController
class AARSharedWorldPlayerController : public APlayerController
{
public:
	uint8                                        Pad_2DEA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARSharedWorldPlayerController");
		return Clss;
	}

	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int32 Offset, TArray<uint8>& Buffer);
	void ClientUpdateARWorldData(int32 Offset, TArray<uint8>& Buffer);
	void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
};

// 0x10 (0x260 - 0x250)
// Class AugmentedReality.ARSkyLight
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*            CaptureProbe;                                      // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DEB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARSkyLight");
		return Clss;
	}

	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};

// 0x20 (0xF8 - 0xD8)
// Class AugmentedReality.ARTexture
class UARTexture : public UTexture
{
public:
	enum class EARTextureType                    TextureType;                                       // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timestamp;                                         // 0xDC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExternalTextureGuid;                               // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTexture");
		return Clss;
	}

};

// 0x0 (0xF8 - 0xF8)
// Class AugmentedReality.ARTextureCameraImage
class UARTextureCameraImage : public UARTexture
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTextureCameraImage");
		return Clss;
	}

};

// 0x8 (0x100 - 0xF8)
// Class AugmentedReality.ARTextureCameraDepth
class UARTextureCameraDepth : public UARTexture
{
public:
	enum class EARDepthQuality                   DepthQuality;                                      // 0xF8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EARDepthAccuracy                  DepthAccuracy;                                     // 0xF9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemporallySmoothed;                             // 0xFA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DED[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTextureCameraDepth");
		return Clss;
	}

};

// 0x20 (0x150 - 0x130)
// Class AugmentedReality.AREnvironmentCaptureProbeTexture
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x130(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timestamp;                                         // 0x134(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExternalTextureGuid;                               // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x148(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AREnvironmentCaptureProbeTexture");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultDummy
class UARTraceResultDummy : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTraceResultDummy");
		return Clss;
	}

};

// 0xA0 (0xC8 - 0x28)
// Class AugmentedReality.ARTrackedGeometry
class UARTrackedGeometry : public UObject
{
public:
	uint8                                        Pad_2DEF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalToTrackingTransform;                          // 0x30(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0x60(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EARTrackingState                  TrackingState;                                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2DF0[0x37];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTrackedGeometry");
		return Clss;
	}

	bool IsTracked();
	enum class EARTrackingState GetTrackingState();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int32 GetLastUpdateFrameNumber();
	class FName GetDebugName();
};

// 0x38 (0x100 - 0xC8)
// Class AugmentedReality.ARPlaneGeometry
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	struct FVector                               Center;                                            // 0xC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               Extent;                                            // 0xD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DF1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UARPlaneGeometry*                      SubsumedBy;                                        // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DF2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARPlaneGeometry");
		return Clss;
	}

	class UARPlaneGeometry* GetSubsumedBy();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// 0x8 (0xD0 - 0xC8)
// Class AugmentedReality.ARTrackedPoint
class UARTrackedPoint : public UARTrackedGeometry
{
public:
	uint8                                        Pad_2DF3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTrackedPoint");
		return Clss;
	}

};

// 0x18 (0xE0 - 0xC8)
// Class AugmentedReality.ARTrackedImage
class UARTrackedImage : public UARTrackedGeometry
{
public:
	bool                                         bIsTracked;                                        // 0xC8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UARCandidateImage*                     DetectedImage;                                     // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             EstimatedSize;                                     // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTrackedImage");
		return Clss;
	}

	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};

// 0xF8 (0x1C0 - 0xC8)
// Class AugmentedReality.ARFaceGeometry
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct FVector                               LookAtTarget;                                      // 0xC8(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTracked;                                        // 0xD4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EARFaceBlendShape, float>    BlendShapes;                                       // 0xD8(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DF9[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARFaceGeometry");
		return Clss;
	}

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye);
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape);
	TMap<enum class EARFaceBlendShape, float> GetBlendShapes();
};

// 0x18 (0xE0 - 0xC8)
// Class AugmentedReality.AREnvironmentCaptureProbe
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	uint8                                        Pad_2DFA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAREnvironmentCaptureProbeTexture*     EnvironmentCaptureTexture;                         // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AREnvironmentCaptureProbe");
		return Clss;
	}

	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// 0x8 (0xD0 - 0xC8)
// Class AugmentedReality.ARTrackedObject
class UARTrackedObject : public UARTrackedGeometry
{
public:
	class UARCandidateObject*                    DetectedObject;                                    // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTrackedObject");
		return Clss;
	}

	class UARCandidateObject* GetDetectedObject();
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTypesDummyClass
class UARTypesDummyClass : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARTypesDummyClass");
		return Clss;
	}

};

// 0x28 (0x58 - 0x30)
// Class AugmentedReality.ARCandidateImage
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                            CandidateTexture;                                  // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                FriendlyName;                                      // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Width;                                             // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Height;                                            // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EARCandidateImageOrientation      Orientation;                                       // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DFB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARCandidateImage");
		return Clss;
	}

	float GetPhysicalWidth();
	float GetPhysicalHeight();
	enum class EARCandidateImageOrientation GetOrientation();
	class FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};

// 0x40 (0x70 - 0x30)
// Class AugmentedReality.ARCandidateObject
class UARCandidateObject : public UDataAsset
{
public:
	TArray<uint8>                                CandidateObjectData;                               // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                FriendlyName;                                      // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBox                                  BoundingBox;                                       // 0x50(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DFC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ARCandidateObject");
		return Clss;
	}

	void SetCandidateObjectData(TArray<uint8>& InCandidateObject);
	void SetBoundingBox(struct FBox& InBoundingBox);
	class FString GetFriendlyName();
	TArray<uint8> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
