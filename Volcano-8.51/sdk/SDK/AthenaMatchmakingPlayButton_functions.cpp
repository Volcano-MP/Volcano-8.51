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


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchmakingPlayButton_C::SetButtonText(class FText InText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "SetButtonText");

	Params::UAthenaMatchmakingPlayButton_C_SetButtonText_Params Parms;

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlayButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "PreConstruct");

	Params::UAthenaMatchmakingPlayButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlayButton_C::ExecuteUbergraph_AthenaMatchmakingPlayButton(int32 EntryPoint, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayButton_C", "ExecuteUbergraph_AthenaMatchmakingPlayButton");

	Params::UAthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
