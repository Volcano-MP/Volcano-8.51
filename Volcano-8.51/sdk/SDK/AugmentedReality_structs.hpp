#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EARTrackingState : uint8
{
	Unknown                        = 0,
	Tracking                       = 1,
	NotTracking                    = 2,
	StoppedTracking                = 3,
	EARTrackingState_MAX           = 4,
};

enum class EARFaceTrackingUpdate : uint8
{
	CurvesAndGeo                   = 0,
	CurvesOnly                     = 1,
	EARFaceTrackingUpdate_MAX      = 2,
};

enum class EAREnvironmentCaptureProbeType : uint8
{
	None                           = 0,
	Manual                         = 1,
	Automatic                      = 2,
	EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class EARFrameSyncMode : uint8
{
	SyncTickWithCameraImage        = 0,
	SyncTickWithoutCameraImage     = 1,
	EARFrameSyncMode_MAX           = 2,
};

enum class EARLightEstimationMode : uint8
{
	None                           = 0,
	AmbientLightEstimate           = 1,
	DirectionalLightEstimate       = 2,
	EARLightEstimationMode_MAX     = 3,
};

enum class EARPlaneDetectionMode : uint8
{
	None                           = 0,
	HorizontalPlaneDetection       = 1,
	VerticalPlaneDetection         = 2,
	EARPlaneDetectionMode_MAX      = 3,
};

enum class EARSessionType : uint8
{
	None                           = 0,
	Orientation                    = 1,
	World                          = 2,
	Face                           = 3,
	Image                          = 4,
	ObjectScanning                 = 5,
	EARSessionType_MAX             = 6,
};

enum class EARWorldAlignment : uint8
{
	Gravity                        = 0,
	GravityAndHeading              = 1,
	Camera                         = 2,
	EARWorldAlignment_MAX          = 3,
};

enum class EARDepthAccuracy : uint8
{
	Unkown                         = 0,
	Approximate                    = 1,
	Accurate                       = 2,
	EARDepthAccuracy_MAX           = 3,
};

enum class EARDepthQuality : uint8
{
	Unkown                         = 0,
	Low                            = 1,
	High                           = 2,
	EARDepthQuality_MAX            = 3,
};

enum class EARTextureType : uint8
{
	CameraImage                    = 0,
	CameraDepth                    = 1,
	EnvironmentCapture             = 2,
	EARTextureType_MAX             = 3,
};

enum class EAREye : uint8
{
	LeftEye                        = 0,
	RightEye                       = 1,
	EAREye_MAX                     = 2,
};

enum class EARFaceBlendShape : uint8
{
	EyeBlinkLeft                   = 0,
	EyeLookDownLeft                = 1,
	EyeLookInLeft                  = 2,
	EyeLookOutLeft                 = 3,
	EyeLookUpLeft                  = 4,
	EyeSquintLeft                  = 5,
	EyeWideLeft                    = 6,
	EyeBlinkRight                  = 7,
	EyeLookDownRight               = 8,
	EyeLookInRight                 = 9,
	EyeLookOutRight                = 10,
	EyeLookUpRight                 = 11,
	EyeSquintRight                 = 12,
	EyeWideRight                   = 13,
	JawForward                     = 14,
	JawLeft                        = 15,
	JawRight                       = 16,
	JawOpen                        = 17,
	MouthClose                     = 18,
	MouthFunnel                    = 19,
	MouthPucker                    = 20,
	MouthLeft                      = 21,
	MouthRight                     = 22,
	MouthSmileLeft                 = 23,
	MouthSmileRight                = 24,
	MouthFrownLeft                 = 25,
	MouthFrownRight                = 26,
	MouthDimpleLeft                = 27,
	MouthDimpleRight               = 28,
	MouthStretchLeft               = 29,
	MouthStretchRight              = 30,
	MouthRollLower                 = 31,
	MouthRollUpper                 = 32,
	MouthShrugLower                = 33,
	MouthShrugUpper                = 34,
	MouthPressLeft                 = 35,
	MouthPressRight                = 36,
	MouthLowerDownLeft             = 37,
	MouthLowerDownRight            = 38,
	MouthUpperUpLeft               = 39,
	MouthUpperUpRight              = 40,
	BrowDownLeft                   = 41,
	BrowDownRight                  = 42,
	BrowInnerUp                    = 43,
	BrowOuterUpLeft                = 44,
	BrowOuterUpRight               = 45,
	CheekPuff                      = 46,
	CheekSquintLeft                = 47,
	CheekSquintRight               = 48,
	NoseSneerLeft                  = 49,
	NoseSneerRight                 = 50,
	TongueOut                      = 51,
	HeadYaw                        = 52,
	HeadPitch                      = 53,
	HeadRoll                       = 54,
	LeftEyeYaw                     = 55,
	LeftEyePitch                   = 56,
	LeftEyeRoll                    = 57,
	RightEyeYaw                    = 58,
	RightEyePitch                  = 59,
	RightEyeRoll                   = 60,
	MAX                            = 61,
};

enum class EARFaceTrackingDirection : uint8
{
	FaceRelative                   = 0,
	FaceMirrored                   = 1,
	EARFaceTrackingDirection_MAX   = 2,
};

enum class EARCandidateImageOrientation : uint8
{
	Landscape                      = 0,
	Portrait                       = 1,
	EARCandidateImageOrientation_MAX = 2,
};

enum class EARWorldMappingState : uint8
{
	NotAvailable                   = 0,
	StillMappingNotRelocalizable   = 1,
	StillMappingRelocalizable      = 2,
	Mapped                         = 3,
	EARWorldMappingState_MAX       = 4,
};

enum class EARSessionStatus : uint8
{
	NotStarted                     = 0,
	Running                        = 1,
	NotSupported                   = 2,
	FatalError                     = 3,
	PermissionNotGranted           = 4,
	UnsupportedConfiguration       = 5,
	Other                          = 6,
	EARSessionStatus_MAX           = 7,
};

enum class EARTrackingQualityReason : uint8
{
	None                           = 0,
	Initializing                   = 1,
	Relocalizing                   = 2,
	ExcessiveMotion                = 3,
	InsufficientFeatures           = 4,
	EARTrackingQualityReason_MAX   = 5,
};

enum class EARTrackingQuality : uint8
{
	NotTracking                    = 0,
	OrientationOnly                = 1,
	OrientationAndPosition         = 2,
	EARTrackingQuality_MAX         = 3,
};

enum class EARLineTraceChannels : uint8
{
	None                           = 0,
	FeaturePoint                   = 1,
	GroundPlane                    = 2,
	PlaneUsingExtent               = 4,
	PlaneUsingBoundaryPolygon      = 8,
	EARLineTraceChannels_MAX       = 9,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
struct FARSharedWorldReplicationState
{
public:
	int32                                        PreviewImageOffset;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ARWorldOffset;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AugmentedReality.ARTraceResult
struct FARTraceResult
{
public:
	float                                        DistanceFromCamera;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EARLineTraceChannels              TraceChannel;                                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DFD[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalToTrackingTransform;                          // 0x10(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DFE[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct AugmentedReality.ARVideoFormat
struct FARVideoFormat
{
public:
	int32                                        FPS;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AugmentedReality.ARSessionStatus
struct FARSessionStatus
{
public:
	class FString                                AdditionalInfo;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EARSessionStatus                  Status;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DFF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
