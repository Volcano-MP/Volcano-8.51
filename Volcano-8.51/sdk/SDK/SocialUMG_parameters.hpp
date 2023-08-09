#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function SocialUMG.SocialChatContainer.SendCurrentMessage
struct USocialChatContainer_SendCurrentMessage_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
struct USocialChatContainer_OnChatOpenChanged_Params
{
public:
	bool                                         bShouldBeOpen;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
struct USocialChatContainer_HandleRightTabPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
struct USocialChatContainer_HandleLeftTabPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialUMG.SocialChatContainer.FocusEditableText
struct USocialChatContainer_FocusEditableText_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
struct USocialChatContainer_DynamicHandleMessageTextCommitted_Params
{
public:
	class FText                                  MessageText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CA8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
struct USocialChatMessageEntry_OnMessageSet_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialUMG.SocialChatMessageEntry.CanInteract
struct USocialChatMessageEntry_CanInteract_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
struct USocialGroupListEntry_HandleGetMenuContent_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SocialUMG.SocialInteractionButton.OnInteractionSet
struct USocialInteractionButton_OnInteractionSet_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
struct USocialInteractionButton_IsPlatformOnlyFriend_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SocialUMG.SocialInteractionButton.GetInteractionName
struct USocialInteractionButton_GetInteractionName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
struct USocialInteractionMenu_OnToggleConfirmation_Params
{
public:
	bool                                         bIsVisible;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function SocialUMG.SocialInteractionMenu.OnSocialContextSet
struct USocialInteractionMenu_OnSocialContextSet_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
struct USocialInteractionMenu_GetFirstEntryToCenter_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SocialUMG.SocialListEntry.HandleGetMenuContent
struct USocialListEntry_HandleGetMenuContent_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SocialUMG.SocialUserListEntry.OnUserPresenceChanged
struct USocialUserListEntry_OnUserPresenceChanged_Params
{
public:
	enum class EOnlineStatus                     OnlineStatus;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
