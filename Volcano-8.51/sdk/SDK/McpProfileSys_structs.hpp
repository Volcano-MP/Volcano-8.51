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

// 0x58 (0x58 - 0x0)
// ScriptStruct McpProfileSys.McpLootEntry
struct FMcpLootEntry
{
public:
	class FString                                ItemType;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemGuid;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FJsonObjectWrapper                    Attributes;                                        // 0x28(0x20)(Edit, NativeAccessSpecifierPublic)
	class FString                                ItemProfile;                                       // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct McpProfileSys.BaseUrlContext
struct FBaseUrlContext
{
public:
	uint8                                        Pad_2C24[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x80 - 0x80)
// ScriptStruct McpProfileSys.ClientUrlContext
struct FClientUrlContext : public FBaseUrlContext
{
public:
};

// 0x0 (0x80 - 0x80)
// ScriptStruct McpProfileSys.DedicatedServerUrlContext
struct FDedicatedServerUrlContext : public FBaseUrlContext
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct McpProfileSys.McpAddItemRequest
struct FMcpAddItemRequest
{
public:
	class FString                                ItemId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TemplateId;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FJsonObjectWrapper                    Attributes;                                        // 0x28(0x20)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct McpProfileSys.McpRemoveItemRequest
struct FMcpRemoveItemRequest
{
public:
	class FString                                ItemId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct McpProfileSys.McpChangeQuantityRequest
struct FMcpChangeQuantityRequest
{
public:
	class FString                                ItemId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeltaQuantity;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C26[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct McpProfileSys.McpChangeAttributesRequest
struct FMcpChangeAttributesRequest
{
public:
	class FString                                ItemId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Attributes;                                        // 0x10(0x20)(NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct McpProfileSys.McpProfileChangeRequest
struct FMcpProfileChangeRequest
{
public:
	int32                                        BaseCommandRevision;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMcpAddItemRequest>            AddRequests;                                       // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpRemoveItemRequest>         RemoveRequests;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeQuantityRequest>     ChangeQuantityRequests;                            // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeAttributesRequest>   ChangeAttributesRequests;                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            ChangeStatRequests;                                // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct McpProfileSys.PublicUrlContext
struct FPublicUrlContext : public FBaseUrlContext
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct McpProfileSys.ProfileEntry
struct FProfileEntry
{
public:
	class FString                                ProfileId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMcpProfile*                           ProfileObject;                                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitingForRefreshAllProfilesResponse;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C28[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct McpProfileSys.ProfileGroupEntry
struct FProfileGroupEntry
{
public:
	uint8                                        Pad_2C29[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMcpProfileGroup*                      ProfileGroup;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct McpProfileSys.ProfileUpdateNotification
struct FProfileUpdateNotification
{
public:
	TArray<struct FJsonObjectWrapper>            Changes;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             LockExpiration;                                    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CommandRevision;                                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Revision;                                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct McpProfileSys.ProfileUpdateSingle
struct FProfileUpdateSingle
{
public:
	int64                                        ProfileRevision;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfileId;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ProfileChangesBaseRevision;                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            ProfileChanges;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             LockExpiration;                                    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            Notifications;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ProfileCommandRevision;                            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x70 - 0x50)
// ScriptStruct McpProfileSys.ProfileUpdate
struct FProfileUpdate : public FProfileUpdateSingle
{
public:
	int32                                        ResponseVersion;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             ServerTime;                                        // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProfileUpdateSingle>          MultiUpdate;                                       // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct McpProfileSys.AccountIdAndProfileResponse
struct FAccountIdAndProfileResponse
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProfileUpdate                        Response;                                          // 0x10(0x70)(NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct McpProfileSys.GiftBoxInfo
struct FGiftBoxInfo
{
public:
	struct FDateTime                             GiftedOn;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromAccountId;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                 LootList;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Params;                                            // 0x28(0x20)(NativeAccessSpecifierPublic)
};

// 0x0 (0x58 - 0x58)
// ScriptStruct McpProfileSys.McpItemIdAndQuantity
struct FMcpItemIdAndQuantity : public FMcpLootEntry
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct McpProfileSys.McpLootResult
struct FMcpLootResult
{
public:
	class FString                                TierGroupName;                                     // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                 Items;                                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
