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

// 0x38 (0x38 - 0x0)
// Function ImagePlate.ImagePlateComponent.SetImagePlate
struct UImagePlateComponent_SetImagePlate_Params
{
public:
	struct FImagePlateParameters                 Plate;                                             // 0x0(0x38)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged
struct UImagePlateComponent_OnRenderTextureChanged_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function ImagePlate.ImagePlateComponent.GetPlate
struct UImagePlateComponent_GetPlate_Params
{
public:
	struct FImagePlateParameters                 ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
