#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0xB9 - 0x0)
// Function FeaturedCreativeContent.FeaturedCreativeContent_C.SetFeaturedContentDetails
struct UFeaturedCreativeContent_C_SetFeaturedContentDetails_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCreativeAdData                       CurrentAd;                                         // 0x8(0x68)(Edit, BlueprintVisible)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x88(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xA0(0x18)()
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function FeaturedCreativeContent.FeaturedCreativeContent_C.OnSetupAds
struct UFeaturedCreativeContent_C_OnSetupAds_Params
{
public:
	TArray<class FString>                        MediaURLs;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCreativeAdData>               AdMetadata;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function FeaturedCreativeContent.FeaturedCreativeContent_C.BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature
struct UFeaturedCreativeContent_C_BndEvt__CMSImageSlideShow_K2Node_ComponentBoundEvent_0_CarouselIndexChanged__DelegateSignature_Params
{
public:
	int32                                        CurrentPageIndex;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function FeaturedCreativeContent.FeaturedCreativeContent_C.ExecuteUbergraph_FeaturedCreativeContent
struct UFeaturedCreativeContent_C_ExecuteUbergraph_FeaturedCreativeContent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_Event_MediaURLs;                            // 0x8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCreativeAdData>               K2Node_Event_AdMetadata;                           // 0x18(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                        K2Node_ComponentBoundEvent_CurrentPageIndex;       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
