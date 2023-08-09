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

// 0x10 (0x10 - 0x0)
// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
struct UEpicCMSImage_SetMediaURL_Params
{
public:
	class FString                                MediaUrl;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
struct UEpicCMSTileBase_Launch_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
struct UEpicCMSTileCarousel_SetCurrentPageByIndex_Params
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
struct UEpicCMSTileCarousel_PreviousPage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
struct UEpicCMSTileCarousel_NextPage_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
struct UEpicCMSTileCarousel_NavigationVisibilityChanged_Params
{
public:
	bool                                         bShowNavigation;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
struct UEpicCMSTileCarousel_HandleTilePageAdded_Params
{
public:
	class UWidget*                               TileWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
struct UEpicCMSTileCarousel_GetCurrentPageIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
struct UEpicCMSTileCarousel_BeginAutoScrolling_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
struct UEpicCMSTileCarousel_AddTilePage_Params
{
public:
	class UWidget*                               TilePageWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
