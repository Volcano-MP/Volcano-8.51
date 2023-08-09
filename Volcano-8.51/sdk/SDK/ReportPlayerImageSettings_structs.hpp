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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// UserDefinedStruct ReportPlayerImageSettings.ReportPlayerImageSettings
struct FReportPlayerImageSettings
{
public:
	TSoftObjectPtr<class UTexture2D>             Image_2_176A4DD44E5F69679DDE39965E03704E;          // 0x0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FWidgetTransform                      Transform_6_0ABF984F410C372270350888D0E52882;      // 0x28(0x1C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                        Pad_4352[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      Animation_9_8C60965D44F774A4EB449AA4BA6640FB;      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
