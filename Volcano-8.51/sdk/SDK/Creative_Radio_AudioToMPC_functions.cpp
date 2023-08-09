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


// Function Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C.OnGatheredFFTData
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FChannelData>        FFTData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                              OutAmplitudeAverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Radio_AudioToMPC_C::OnGatheredFFTData(TArray<struct FChannelData>& FFTData, float& OutAmplitudeAverage)
{
	static auto Func = Class->GetFunction("Creative_Radio_AudioToMPC_C", "OnGatheredFFTData");

	Params::UCreative_Radio_AudioToMPC_C_OnGatheredFFTData_Params Parms;

	Parms.FFTData = FFTData;
	Parms.OutAmplitudeAverage = OutAmplitudeAverage;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
