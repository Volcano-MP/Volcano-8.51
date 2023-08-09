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

enum class EEpicLeaderboardUpdateFunction : uint8
{
	Min                            = 0,
	Max                            = 1,
	Sum                            = 2,
	MostRecent                     = 3,
};

enum class EEpicLeaderboardTimeWindow : uint8
{
	Daily                          = 0,
	Weekly                         = 1,
	Monthly                        = 2,
	AllTime                        = 3,
	EEpicLeaderboardTimeWindow_MAX = 4,
};

enum class EEpicLeaderboardDataType : uint8
{
	Integer                        = 0,
	Double                         = 1,
	EEpicLeaderboardDataType_MAX   = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x60 - 0x8)
// ScriptStruct EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
struct FGameplayStatMetadataTableRow : public FTableRowBase
{
public:
	class FString                                BackendName;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<enum class EEpicLeaderboardTimeWindow> Windows;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EEpicLeaderboardUpdateFunction    Metric;                                            // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEpicLeaderboardDataType          DataType;                                          // 0x41(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublish;                                          // 0x42(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeeklyRefreshInterval;                             // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportToBackEnd;                                  // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowInFrontEnd;                                   // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagReferenceHelper           ReferenceHelper;                                   // 0x50(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct EpicGameplayStatsRuntime.GameplayStatTag
struct FGameplayStatTag : public FGameplayTag
{
public:
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
struct FManagedGameplayTagDataTableItem
{
public:
	struct FGameplayTag                          RootTag;                                           // 0x0(0x8)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DataTable;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct EpicGameplayStatsRuntime.TagTableManagerHelper
struct FTagTableManagerHelper
{
public:
	uint8                                        Pad_2BF3[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
