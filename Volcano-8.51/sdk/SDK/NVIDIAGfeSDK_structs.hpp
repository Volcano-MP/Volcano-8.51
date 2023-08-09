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

enum class EGfeSDKHighlightSignificance : uint8
{
	ExtremelyBad                   = 1,
	VeryBad                        = 2,
	Bad                            = 4,
	Neutral                        = 8,
	Good                           = 16,
	VeryGood                       = 32,
	ExtremelyGood                  = 64,
	MAX                            = 128,
};

enum class EGfeSDKHighlightType : uint8
{
	Milestone                      = 1,
	Achievement                    = 2,
	Incident                       = 4,
	StateChange                    = 8,
	MAX                            = 16,
};

enum class EGfeSDKPermission : uint8
{
	Granted                        = 0,
	Denied                         = 1,
	MustAsk                        = 2,
	Unknown                        = 3,
	MAX                            = 4,
};

enum class EGfeSDKScope : uint8
{
	Highlights                     = 0,
	HighlightsRecordVideo          = 1,
	HighlightsRecordScreenshot     = 2,
	MAX                            = 3,
};

enum class EGfeSDKReturnCode : uint8
{
	Success                        = 0,
	SuccessIpcOldSdk               = 1,
	SuccessIpcOldGfe               = 2,
	Error                          = 3,
	ErrorGfeVersion                = 4,
	ErrorSdkVersion                = 5,
	ErrorModuleNotLoaded           = 6,
	EGfeSDKReturnCode_MAX          = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightGroupView
struct FGfeSDKHighlightGroupView
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGfeSDKHighlightType              TagsFilter;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGfeSDKHighlightSignificance      SignificanceFilter;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_365F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
struct FGfeSDKHighlightSummaryParams
{
public:
	TArray<struct FGfeSDKHighlightGroupView>     GroupViews;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
struct FGfeSDKHighlightVideoParams
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HighlightId;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartDelta;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndDelta;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
struct FGfeSDKHighlightScreenshotParams
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HighlightId;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
struct FGfeSDKHighlightCloseGroupParams
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DestroyHighlights;                                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3660[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
struct FGfeSDKHighlightOpenGroupParams
{
public:
	class FString                                GroupID;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           GroupDescriptionTranslationTable;                  // 0x10(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
struct FGfeSDKPermissionsChangedData
{
public:
	TMap<enum class EGfeSDKScope, enum class EGfeSDKPermission> ScopePermissions;                                  // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
struct FGfeSDKRequestPermissionsParams
{
public:
	TArray<enum class EGfeSDKScope>              Scopes;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightDefinition
struct FGfeSDKHighlightDefinition
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UserDefaultInterest;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGfeSDKHighlightType              HighlightTags;                                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGfeSDKHighlightSignificance      Significance;                                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3661[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           NameTranslationTable;                              // 0x18(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
struct FGfeSDKHighlightConfigParams
{
public:
	TArray<struct FGfeSDKHighlightDefinition>    HighlightDefinitions;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                DefaultLocale;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateResponse
struct FGfeSDKCreateResponse
{
public:
	uint16                                       VersionMajor;                                      // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       VersionMinor;                                      // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3662[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NVIDIAGfeVersion;                                  // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EGfeSDKScope, enum class EGfeSDKPermission> ScopePermissions;                                  // 0x18(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateInputParams
struct FGfeSDKCreateInputParams
{
public:
	class FString                                AppName;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EGfeSDKScope>              RequiredScopes;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         PollForCallbacks;                                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3663[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
