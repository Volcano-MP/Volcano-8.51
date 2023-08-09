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


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.On_ClickCapture_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply USocialPanel_FriendSearchButton_C::On_ClickCapture_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "On_ClickCapture_MouseButtonDown_0");

	Params::USocialPanel_FriendSearchButton_C_On_ClickCapture_MouseButtonDown_0_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_FriendSearchButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "BP_OnHovered");

	Params::USocialPanel_FriendSearchButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_FriendSearchButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "BP_OnUnhovered");

	Params::USocialPanel_FriendSearchButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.ExecuteUbergraph_SocialPanel_FriendSearchButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_FriendSearchButton_C::ExecuteUbergraph_SocialPanel_FriendSearchButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "ExecuteUbergraph_SocialPanel_FriendSearchButton");

	Params::USocialPanel_FriendSearchButton_C_ExecuteUbergraph_SocialPanel_FriendSearchButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
