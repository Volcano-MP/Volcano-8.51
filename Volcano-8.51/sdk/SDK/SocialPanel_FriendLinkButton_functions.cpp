#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_FriendLinkButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "BP_OnUnhovered");

	Params::USocialPanel_FriendLinkButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_FriendLinkButton_C::OnCopiedToClipboard()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "OnCopiedToClipboard");

	Params::USocialPanel_FriendLinkButton_C_OnCopiedToClipboard_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_FriendLinkButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "BP_OnHovered");

	Params::USocialPanel_FriendLinkButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USocialPanel_FriendLinkButton_C::Construct()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "Construct");

	Params::USocialPanel_FriendLinkButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFriendLinkShareButtonTypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_FriendLinkButton_C::OnShareButtonTypeSet(enum class EFriendLinkShareButtonType Type)
{
	static auto Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "OnShareButtonTypeSet");

	Params::USocialPanel_FriendLinkButton_C_OnShareButtonTypeSet_Params Parms;

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFriendLinkShareButtonTypeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFriendLinkShareButtonTypeK2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_FriendLinkButton_C::ExecuteUbergraph_SocialPanel_FriendLinkButton(int32 EntryPoint, enum class EFriendLinkShareButtonType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, enum class EFriendLinkShareButtonType K2Node_Event_Type, class UMaterialInterface* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("SocialPanel_FriendLinkButton_C", "ExecuteUbergraph_SocialPanel_FriendLinkButton");

	Params::USocialPanel_FriendLinkButton_C_ExecuteUbergraph_SocialPanel_FriendLinkButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
