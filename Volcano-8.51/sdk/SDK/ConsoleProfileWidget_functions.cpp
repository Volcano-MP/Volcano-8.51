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


// Function ConsoleProfileWidget.ConsoleProfileWidget_C.SetDisplayName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UConsoleProfileWidget_C::SetDisplayName(class FText DisplayName)
{
	static auto Func = Class->GetFunction("ConsoleProfileWidget_C", "SetDisplayName");

	Params::UConsoleProfileWidget_C_SetDisplayName_Params Parms;

	Parms.DisplayName = DisplayName;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
