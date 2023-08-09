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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0xE8 - 0x0)
// ScriptStruct AssetRegistry.ARFilter
struct FARFilter
{
public:
	TArray<class FName>                          PackageNames;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                          PackagePaths;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                          ObjectPaths;                                       // 0x20(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                          ClassNames;                                        // 0x30(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_E98[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            RecursiveClassesExclusionSet;                      // 0x90(0x50)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bRecursivePaths;                                   // 0xE0(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursiveClasses;                                 // 0xE1(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0xE2(0x1)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E99[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AssetRegistry.AssetBundleEntry
struct FAssetBundleEntry
{
public:
	struct FPrimaryAssetId                       BundleScope;                                       // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BundleName;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               BundleAssets;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AssetRegistry.AssetBundleData
struct FAssetBundleData
{
public:
	TArray<struct FAssetBundleEntry>             Bundles;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AssetRegistry.AssetData
struct FAssetData
{
public:
	class FName                                  ObjectPath;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PackageName;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PackagePath;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssetName;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssetClass;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9A[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AssetRegistry.TagAndValue
struct FTagAndValue
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
