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


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_TopBarExtension_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "BP_OnHovered");

	Params::USocialPanel_TopBarExtension_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialPanel_TopBarExtension_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "BP_OnUnhovered");

	Params::USocialPanel_TopBarExtension_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_TopBarExtension_C::ExecuteUbergraph_SocialPanel_TopBarExtension(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("SocialPanel_TopBarExtension_C", "ExecuteUbergraph_SocialPanel_TopBarExtension");

	Params::USocialPanel_TopBarExtension_C_ExecuteUbergraph_SocialPanel_TopBarExtension_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
