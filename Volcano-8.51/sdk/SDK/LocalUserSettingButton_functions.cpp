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


// Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULocalUserSettingButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("LocalUserSettingButton_C", "BP_OnHovered");

	Params::ULocalUserSettingButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULocalUserSettingButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("LocalUserSettingButton_C", "BP_OnUnhovered");

	Params::ULocalUserSettingButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULocalUserSettingButton_C::ExecuteUbergraph_LocalUserSettingButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("LocalUserSettingButton_C", "ExecuteUbergraph_LocalUserSettingButton");

	Params::ULocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
