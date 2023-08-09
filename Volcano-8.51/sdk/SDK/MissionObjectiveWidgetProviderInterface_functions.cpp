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


// Function MissionObjectiveWidgetProviderInterface.MissionObjectiveWidgetProviderInterface_C.GetObjectiveBulletIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 BulletIcon                                                       (Parm, OutParm)

void UMissionObjectiveWidgetProviderInterface_C::GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon)
{
	static auto Func = Class->GetFunction("MissionObjectiveWidgetProviderInterface_C", "GetObjectiveBulletIcon");

	Params::UMissionObjectiveWidgetProviderInterface_C_GetObjectiveBulletIcon_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (BulletIcon != nullptr)
		*BulletIcon = Parms.BulletIcon;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
