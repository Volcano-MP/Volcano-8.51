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

enum class ETouchIndex : uint8
{
	Touch1                         = 0,
	Touch2                         = 1,
	Touch3                         = 2,
	Touch4                         = 3,
	Touch5                         = 4,
	Touch6                         = 5,
	Touch7                         = 6,
	Touch8                         = 7,
	Touch9                         = 8,
	Touch10                        = 9,
	CursorPointerIndex             = 10,
	MAX_TOUCHES                    = 11,
	ETouchIndex_MAX                = 12,
};

enum class EControllerHand : uint8
{
	Left                           = 0,
	Right                          = 1,
	AnyHand                        = 2,
	Pad                            = 3,
	ExternalCamera                 = 4,
	Gun                            = 5,
	Special_1                      = 6,
	Special_2                      = 7,
	Special_3                      = 8,
	Special_4                      = 9,
	Special_5                      = 10,
	Special_6                      = 11,
	Special_7                      = 12,
	Special_8                      = 13,
	Special_9                      = 14,
	Special_10                     = 15,
	Special_11                     = 16,
	ControllerHand_Count           = 17,
	EControllerHand_MAX            = 18,
};

enum class ETouchType : uint8
{
	Began                          = 0,
	Moved                          = 1,
	Stationary                     = 2,
	ForceChanged                   = 3,
	FirstMove                      = 4,
	Ended                          = 5,
	NumTypes                       = 6,
	ETouchType_MAX                 = 7,
};

enum class EConsoleForGamepadLabels : uint8
{
	None                           = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	EConsoleForGamepadLabels_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct InputCore.Key
struct FKey
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DA8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
