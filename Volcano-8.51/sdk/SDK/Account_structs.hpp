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

enum class EExternalAccountType : uint8
{
	None                           = 0,
	Facebook                       = 1,
	Google                         = 2,
	Epic_PSN                       = 3,
	Epic_XBL                       = 4,
	Epic_Erebus                    = 5,
	Epic_Facebook                  = 6,
	Epic_Google                    = 7,
	Epic_Portal                    = 8,
	Epic_Portal_Kairos             = 9,
	EExternalAccountType_MAX       = 10,
};

enum class ECreateAccountResult : uint8
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_DuplicateAuthAssociation = 4,
	DuplicateAccount               = 5,
	GenericError                   = 6,
	ECreateAccountResult_MAX       = 7,
};

enum class ELoginResult : uint8
{
	NotStarted                     = 0,
	Pending                        = 1,
	Success                        = 2,
	Console_LoginFailed            = 3,
	Console_AuthFailed             = 4,
	Console_MissingAuthAssociation = 5,
	Console_DuplicateAuthAssociation = 6,
	Console_AddedAuthAssociation   = 7,
	Console_AuthAssociationFailure = 8,
	Console_NotEntitled            = 9,
	Console_EntitlementCheckFailed = 10,
	Console_PrivilegeCheck         = 11,
	Console_PatchOrUpdateRequired  = 12,
	AuthFailed                     = 13,
	AuthFailed_RefreshInvalid      = 14,
	AuthFailed_InvalidMFA          = 15,
	AuthFailed_RequiresMFA         = 16,
	AuthParentalLock               = 17,
	PlatformNotAllowed             = 18,
	NotEntitled                    = 19,
	Banned                         = 20,
	EULACheckFailed                = 21,
	WaitingRoomFailed              = 22,
	ServiceUnavailable             = 23,
	GenericError                   = 24,
	RejoinCheckFailure             = 25,
	ConnectionFailed               = 26,
	NetworkConnectionUnavailable   = 27,
	ExternalAuth_AddedAuthAssociation = 28,
	ExternalAuth_ConnectionTimeout = 29,
	ExternalAuth_AuthFailure       = 30,
	ExternalAuth_AssociationFailure = 31,
	ExternalAuth_MissingAuthAssociation = 32,
	FailedToCreateParty            = 33,
	ProfileQueryFailed             = 34,
	QueryKeychainFailed            = 35,
	ClientSettingsDownloadFailed   = 36,
	ELoginResult_MAX               = 37,
};

enum class EConsoleAuthLinkState : uint8
{
	NotOnConsole                   = 0,
	ConsoleNotLoggedIn             = 1,
	EpicNotLoggedIn                = 2,
	ThisEpicAccountLinked          = 3,
	OtherEpicAccountLinked         = 4,
	NoEpicAccountLinked            = 5,
	PrimaryIdNotLinked             = 6,
	SecondaryIdNotLinked           = 7,
	EConsoleAuthLinkState_MAX      = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct Account.ExternalAccountServiceConfig
struct FExternalAccountServiceConfig
{
public:
	enum class EExternalAccountType              Type;                                              // 0x0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ExternalServiceName;                               // 0x4(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Account.WebEnvUrl
struct FWebEnvUrl
{
public:
	class FString                                URL;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RedirectUrl;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Environment;                                       // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Account.GiftMessage
struct FGiftMessage
{
public:
	class FString                                GiftCode;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SenderName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D86[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Account.ExchangeAccessParams
struct FExchangeAccessParams
{
public:
	class FString                                EntitlementId;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VendorReceipt;                                     // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppStore;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct Account.OnlineAccountTexts_FailedLoginConsole
struct FOnlineAccountTexts_FailedLoginConsole
{
public:
	class FText                                  AgeRestriction;                                    // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Generic;                                           // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  MissingAuthAssociation;                            // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NeedPremiumAccount;                                // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  OnlinePlayRestriction;                             // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PatchAvailable;                                    // 0x78(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PleaseSignIn;                                      // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SystemUpdateAvailable;                             // 0xA8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UI;                                                // 0xC0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToComplete;                                  // 0xD8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToSignIn;                                    // 0xF0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToStartPrivCheck;                            // 0x108(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnexpectedError;                                   // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x990 (0x990 - 0x0)
// ScriptStruct Account.OnlineAccountTexts
struct FOnlineAccountTexts
{
public:
	class FText                                  AllGiftCodesUsed;                                  // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  AssociateConsoleAuth;                              // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  AutoLoginFailed;                                   // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  AutoLoginFailedMobile;                             // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  BannedFromGame;                                    // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CheckEntitledToPlay;                               // 0x78(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CheckingRejoin;                                    // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CheckServiceAvailability;                          // 0xA8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ConsolePrivileges;                                 // 0xC0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CreateAccountCompleted;                            // 0xD8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CreateAccountFailure;                              // 0xF0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CreateHeadless;                                    // 0x108(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DoQosPingTests;                                    // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DowntimeMinutesWarningText;                        // 0x138(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DowntimeSecondsWarningText;                        // 0x150(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DuplicateAuthAssociaton;                           // 0x168(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  EulaCheck;                                         // 0x180(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExchangeConsoleGiftsForAccess;                     // 0x198(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExchangeConsolePurchaseForAccess;                  // 0x1B0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedAccountCreate;                               // 0x1C8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedEulaCheck_EulaAcceptanceFailed;              // 0x1E0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedEulaCheck_MustAcceptEula;                    // 0x1F8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginCredentialsMsg;                         // 0x210(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginParentalLock;                           // 0x228(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginNoRealId;                               // 0x240(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginLockoutMsg;                             // 0x258(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginRequiresMFA;                            // 0x270(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginRequiresAuthAppMFA;                     // 0x288(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedInvalidMFA;                                  // 0x2A0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginMsg;                                    // 0x2B8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginMsg_InvalidRefreshToken;                // 0x2D0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginTencent_UnableToSignIn;                 // 0x2E8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginTencent_NotSignedInToWeGame;            // 0x300(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginTencent_FailedToInitializeWeGame;       // 0x318(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedLoginTencent_WeGameSystemOffline;            // 0x330(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FailedStartLogin;                                  // 0x348(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FounderChatExitedText;                             // 0x360(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  FounderChatJoinedText;                             // 0x378(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GameDisplayName;                                   // 0x390(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GeneralLoginFailure;                               // 0x3A8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GlobalChatExitedText;                              // 0x3C0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  GlobalChatJoinedText;                              // 0x3D8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  HeadlessAccountFailed;                             // 0x3F0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  InMatchShutdownTimeWarningText;                    // 0x408(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  InvalidUser;                                       // 0x420(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggedOutofMCP;                                    // 0x438(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  DisconnectedFromMCP;                               // 0x450(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggedOutReturnedToTitle;                          // 0x468(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggedOutSwitchedProfile;                          // 0x480(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggingIn;                                         // 0x498(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggingInConsoleAuth;                              // 0x4B0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggingOut;                                        // 0x4C8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoginConsole;                                      // 0x4E0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoginFailure;                                      // 0x4F8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Logout_Unlink;                                     // 0x510(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LogoutCompleted;                                   // 0x528(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LostConnection;                                    // 0x540(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  MCPTimeout;                                        // 0x558(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LightswitchCheckNetworkFailureMsg;                 // 0x570(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NetworkConnectionUnavailable;                      // 0x588(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NoPlayEntitlement;                                 // 0x5A0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NoServerAccess;                                    // 0x5B8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PlayAccessRevoked;                                 // 0x5D0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_Default;                        // 0x5E8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_PS4;                            // 0x600(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_Switch;                         // 0x618(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  PremiumAccountName_XboxOne;                        // 0x630(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  RedeemOfflinePurchases;                            // 0x648(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ServiceDowntime;                                   // 0x660(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SignInCompleting;                                  // 0x678(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  SignIntoConsoleServices;                           // 0x690(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  TokenExpired;                                      // 0x6A8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToConnect;                                   // 0x6C0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToJoinWaitingRoomLoginQueue;                 // 0x6D8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnexpectedConsoleAuthFailure;                      // 0x6F0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnlinkConsoleFailed;                               // 0x708(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UserLoginFailed;                                   // 0x720(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoom;                                       // 0x738(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoomError;                                  // 0x750(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoomFailure;                                // 0x768(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  WaitingRoomWaiting;                                // 0x780(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FOnlineAccountTexts_FailedLoginConsole FailedLoginConsole;                                // 0x798(0x138)(Edit, NativeAccessSpecifierPublic)
	class FText                                  LoggingInExternalAuth;                             // 0x8D0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CreateDeviceAuth;                                  // 0x8E8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExtAuthCanceled;                                   // 0x900(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExtAuthFailure;                                    // 0x918(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExtAuthAssociationFailure;                         // 0x930(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExtAuthTimeout;                                    // 0x948(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ExtAuthMissingAuthAssociation;                     // 0x960(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  UnableToQueryReceipts;                             // 0x978(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
