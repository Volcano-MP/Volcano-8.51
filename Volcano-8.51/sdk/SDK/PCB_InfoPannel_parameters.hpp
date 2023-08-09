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

// 0x0 (0x0 - 0x0)
// Function PCB_InfoPannel.PCB_InfoPannel_C.CmsDataRead
struct UPCB_InfoPannel_C_CmsDataRead_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function PCB_InfoPannel.PCB_InfoPannel_C.ExecuteUbergraph_PCB_InfoPannel
struct UPCB_InfoPannel_C_ExecuteUbergraph_PCB_InfoPannel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4059[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPCBHeader_ReturnValue;                 // 0x8(0x18)()
	class FText                                  CallFunc_GetPCBDescription_ReturnValue;            // 0x20(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
