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

enum class ECatalogRequirementType : uint8
{
	RequireFulfillment             = 0,
	DenyOnFulfillment              = 1,
	RequireItemOwnership           = 2,
	DenyOnItemOwnership            = 3,
	ECatalogRequirementType_MAX    = 4,
};

enum class ECatalogOfferType : uint8
{
	StaticPrice                    = 0,
	DynamicBundle                  = 1,
	ECatalogOfferType_MAX          = 2,
};

enum class ECatalogSaleType : uint8
{
	NotOnSale                      = 0,
	UndecoratedNewPrice            = 1,
	AmountOff                      = 2,
	PercentOff                     = 3,
	PercentOn                      = 4,
	Strikethrough                  = 5,
	MAX                            = 6,
};

enum class EAppStore : uint8
{
	DebugStore                     = 0,
	EpicPurchasingService          = 1,
	IOSAppStore                    = 2,
	WeGameStore                    = 3,
	GooglePlayAppStore             = 4,
	KindleStore                    = 5,
	PlayStationStore               = 6,
	XboxLiveStore                  = 7,
	NintendoEShop                  = 8,
	SamsungGalaxyAppStore          = 9,
	MAX                            = 10,
};

enum class EStoreCurrencyType : uint8
{
	RealMoney                      = 0,
	MtxCurrency                    = 1,
	GameItem                       = 2,
	Other                          = 3,
	MAX                            = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
struct FCatalogPurchaseNotification
{
public:
	struct FMcpLootResult                        LootResult;                                        // 0x0(0x20)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.CatalogKeyValue
struct FCatalogKeyValue
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameSubCatalog.CatalogOfferRequirement
struct FCatalogOfferRequirement
{
public:
	enum class ECatalogRequirementType           RequirementType;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinQuantity;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequiredId;                                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameSubCatalog.CatalogItemPrice
struct FCatalogItemPrice
{
public:
	enum class EStoreCurrencyType                CurrencyType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencySubType;                                   // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RegularPrice;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FinalPrice;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PriceTextOverride;                                 // 0x20(0x18)(NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  SaleType;                                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             SaleExpiration;                                    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameSubCatalog.CatalogGiftInfo
struct FCatalogGiftInfo
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ForcedGiftBoxTemplateId;                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOfferRequirement>      PurchaseRequirements;                              // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameSubCatalog.ItemQuantity
struct FItemQuantity
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FJsonObjectWrapper                    Attributes;                                        // 0x18(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
struct FCatalogDynamicBundleItem
{
public:
	struct FItemQuantity                         Item;                                              // 0x0(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bCanOwnMultiple;                                   // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RegularPrice;                                      // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DiscountedPrice;                                   // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AlreadyOwnedPriceReduction;                        // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x48(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x60(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameSubCatalog.CatalogDynamicBundle
struct FCatalogDynamicBundle
{
public:
	int32                                        BasePrice;                                         // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStoreCurrencyType                CurrencyType;                                      // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencySubType;                                   // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  DisplayType;                                       // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCatalogDynamicBundleItem>     BundleItems;                                       // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
struct FCatalogMetaAssetInfo
{
public:
	class FString                                StructName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Payload;                                           // 0x10(0x20)(NativeAccessSpecifierPublic)
};

// 0x238 (0x238 - 0x0)
// ScriptStruct GameSubCatalog.CatalogOffer
struct FCatalogOffer
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DevName;                                           // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogKeyValue>              MetaInfo;                                          // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ECatalogOfferType                 OfferType;                                         // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCatalogItemPrice>             Prices;                                            // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCatalogDynamicBundle                 DynamicBundleInfo;                                 // 0x48(0x30)(Edit, NativeAccessSpecifierPublic)
	int32                                        DailyLimit;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WeeklyLimit;                                       // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MonthlyLimit;                                      // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Categories;                                        // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CatalogGroup;                                      // 0x98(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CatalogGroupPriority;                              // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortPriority;                                      // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0xB0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ShortDescription;                                  // 0xC8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0xE0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                AppStoreId[0xA];                                   // 0xF8(0xA0)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCatalogMetaAssetInfo                 MetaAssetInfo;                                     // 0x198(0x30)(NativeAccessSpecifierPublic)
	class FString                                DisplayAssetPath;                                  // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemQuantity>                 ItemGrants;                                        // 0x1D8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOfferRequirement>      Requirements;                                      // 0x1E8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCatalogGiftInfo                      GiftInfo;                                          // 0x1F8(0x28)(NativeAccessSpecifierPublic)
	bool                                         Refundable;                                        // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        DenyItemTemplateIds;                               // 0x228(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.Storefront
struct FStorefront
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOffer>                 CatalogEntries;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameSubCatalog.CatalogDownload
struct FCatalogDownload
{
public:
	int32                                        RefreshIntervalHrs;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DailyPurchaseHrs;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Expiration;                                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStorefront>                   Storefronts;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameSubCatalog.CatalogItemSalePrice
struct FCatalogItemSalePrice
{
public:
	int32                                        SalePrice;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  SaleType;                                          // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             StartTime;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             EndTime;                                           // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GameSubCatalog.CatalogPurchaseInfoGift
struct FCatalogPurchaseInfoGift
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStoreCurrencyType                Currency;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencySubType;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedTotalPrice;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GameContext;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReceiverAccountIds;                                // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                GiftWrapTemplateId;                                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PersonalMessage;                                   // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
struct FCatalogPurchaseInfo
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchaseQuantity;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStoreCurrencyType                Currency;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencySubType;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpectedTotalPrice;                                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GameContext;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameSubCatalog.CatalogReceiptInfo
struct FCatalogReceiptInfo
{
public:
	enum class EAppStore                         AppStore;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AppStoreId;                                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptId;                                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptInfo;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PurchaseCorrelationId;                             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameSubCatalog.KeychainDownload
struct FKeychainDownload
{
public:
	uint8                                        Pad_36BF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
