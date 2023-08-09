#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERejoinStatus : uint8
{
	NoMatchToRejoin                = 0,
	RejoinAvailable                = 1,
	UpdatingStatus                 = 2,
	NeedsRecheck                   = 3,
	NoMatchToRejoin_MatchEnded     = 4,
	ERejoinStatus_MAX              = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
