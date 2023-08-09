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

enum class ETimeSynthEventQuantization : uint8
{
	None                           = 0,
	Bars8                          = 1,
	Bars4                          = 2,
	Bars2                          = 3,
	Bar                            = 4,
	HalfNote                       = 5,
	HalfNoteTriplet                = 6,
	QuarterNote                    = 7,
	QuarterNoteTriplet             = 8,
	EighthNote                     = 9,
	EighthNoteTriplet              = 10,
	SixteenthNote                  = 11,
	SixteenthNoteTriplet           = 12,
	ThirtySecondNote               = 13,
	Count                          = 14,
	ETimeSynthEventQuantization_MAX = 15,
};

enum class ETimeSynthEnvelopeFollowerPeakMode : uint8
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ETimeSynthEnvelopeFollowerPeakMode_MAX = 4,
};

enum class ETimeSynthFilterType : uint8
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ETimeSynthFilterType_MAX       = 5,
};

enum class ETimeSynthFilter : uint8
{
	FilterA                        = 0,
	FilterB                        = 1,
	Count                          = 2,
	ETimeSynthFilter_MAX           = 3,
};

enum class ETimeSynthEventClipQuantization : uint8
{
	Global                         = 0,
	None                           = 1,
	Bars8                          = 2,
	Bars4                          = 3,
	Bars2                          = 4,
	Bar                            = 5,
	HalfNote                       = 6,
	HalfNoteTriplet                = 7,
	QuarterNote                    = 8,
	QuarterNoteTriplet             = 9,
	EighthNote                     = 10,
	EighthNoteTriplet              = 11,
	SixteenthNote                  = 12,
	SixteenthNoteTriplet           = 13,
	ThirtySecondNote               = 14,
	Count                          = 15,
	ETimeSynthEventClipQuantization_MAX = 16,
};

enum class ETimeSynthFFTSize : uint8
{
	Min_64                         = 0,
	Small_256                      = 1,
	Medium_512                     = 2,
	Large_1024                     = 3,
	ETimeSynthFFTSize_MAX          = 4,
};

enum class ETimeSynthBeatDivision : uint8
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	Sixteen                        = 4,
	Count                          = 5,
	ETimeSynthBeatDivision_MAX     = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct TimeSynth.TimeSynthEnvelopeFollowerSettings
struct FTimeSynthEnvelopeFollowerSettings
{
public:
	float                                        AttackTime;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReleaseTime;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeSynthEnvelopeFollowerPeakMode PeakMode;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAnalogMode;                                     // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB7[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct TimeSynth.TimeSynthFilterSettings
struct FTimeSynthFilterSettings
{
public:
	enum class ETimeSynthFilterType              FilterType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CutoffFrequency;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterQ;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct TimeSynth.TimeSynthClipSound
struct FTimeSynthClipSound
{
public:
	class USoundWave*                            SoundWave;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomWeight;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DistanceRange;                                     // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct TimeSynth.TimeSynthClipHandle
struct FTimeSynthClipHandle
{
public:
	class FName                                  ClipName;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClipId;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TimeSynth.TimeSynthTimeDef
struct FTimeSynthTimeDef
{
public:
	int32                                        NumBars;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBeats;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct TimeSynth.TimeSynthQuantizationSettings
struct FTimeSynthQuantizationSettings
{
public:
	float                                        BeatsPerMinute;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BeatsPerBar;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeSynthBeatDivision            BeatDivision;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EventDelaySeconds;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventQuantization       GlobalQuantization;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BBB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TimeSynth.TimeSynthSpectralData
struct FTimeSynthSpectralData
{
public:
	float                                        FrequencyHz;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
