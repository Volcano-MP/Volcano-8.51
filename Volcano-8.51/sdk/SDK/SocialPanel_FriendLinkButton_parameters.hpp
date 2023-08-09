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
// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered
struct USocialPanel_FriendLinkButton_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard
struct USocialPanel_FriendLinkButton_C_OnCopiedToClipboard_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered
struct USocialPanel_FriendLinkButton_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct
struct USocialPanel_FriendLinkButton_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet
struct USocialPanel_FriendLinkButton_C_OnShareButtonTypeSet_Params
{
public:
	enum class EFriendLinkShareButtonType        Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton
struct USocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFriendLinkShareButtonType        Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_object_Variable_2;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFriendLinkShareButtonType        K2Node_Event_Type;                                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5432[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
