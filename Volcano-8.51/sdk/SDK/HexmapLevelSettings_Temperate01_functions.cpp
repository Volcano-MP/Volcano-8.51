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


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHexmapLevelSettings_Temperate01_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "UserConstructionScript");

	Params::AHexmapLevelSettings_Temperate01_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.CustomSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexmapLevelSettings_Temperate01_C::CustomSettings(bool Visibility)
{
	static auto Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "CustomSettings");

	Params::AHexmapLevelSettings_Temperate01_C_CustomSettings_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.ExecuteUbergraph_HexmapLevelSettings_Temperate01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visibility                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexmapLevelSettings_Temperate01_C::ExecuteUbergraph_HexmapLevelSettings_Temperate01(int32 EntryPoint, bool K2Node_CustomEvent_Visibility)
{
	static auto Func = Class->GetFunction("HexmapLevelSettings_Temperate01_C", "ExecuteUbergraph_HexmapLevelSettings_Temperate01");

	Params::AHexmapLevelSettings_Temperate01_C_ExecuteUbergraph_HexmapLevelSettings_Temperate01_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Visibility = K2Node_CustomEvent_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
