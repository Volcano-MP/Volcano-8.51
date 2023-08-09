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


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void USpecialEventAthenaNewsTile_Spotlight_C::PlayIntroAnim()
{
	static auto Func = Class->GetFunction("SpecialEventAthenaNewsTile_Spotlight_C", "PlayIntroAnim");

	Params::USpecialEventAthenaNewsTile_Spotlight_C_PlayIntroAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void USpecialEventAthenaNewsTile_Spotlight_C::SetDefaultImage()
{
	static auto Func = Class->GetFunction("SpecialEventAthenaNewsTile_Spotlight_C", "SetDefaultImage");

	Params::USpecialEventAthenaNewsTile_Spotlight_C_SetDefaultImage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpecialEventAthenaNewsTile_Spotlight.SpecialEventAthenaNewsTile_Spotlight_C.ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpecialEventAthenaNewsTile_Spotlight_C::ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("SpecialEventAthenaNewsTile_Spotlight_C", "ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight");

	Params::USpecialEventAthenaNewsTile_Spotlight_C_ExecuteUbergraph_SpecialEventAthenaNewsTile_Spotlight_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
