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

// 0x8 (0x8 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.Setup Triangles
struct UAlterationWidgetButton_C_Setup_Triangles_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.Update Colors
struct UAlterationWidgetButton_C_Update_Colors_Params
{
public:
	class UFortAlterationInfo*                   CallFunc_GetAlterationInfo_ReturnValue;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAlterationItemDefinition*         CallFunc_GetAlterationDefintion_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EB1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRarityItemData                   CallFunc_BPGetRarityData_ReturnValue;              // 0x18(0x80)()
};

// 0x8 (0x8 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroStart
struct UAlterationWidgetButton_C_IntroStart_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroReset
struct UAlterationWidgetButton_C_IntroReset_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.TriggerModificationAnimation
struct UAlterationWidgetButton_C_TriggerModificationAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.OnSetup
struct UAlterationWidgetButton_C_OnSetup_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.Construct
struct UAlterationWidgetButton_C_Construct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton
struct UAlterationWidgetButton_C_ExecuteUbergraph_AlterationWidgetButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAlterationInfo*                   CallFunc_GetAlterationInfo_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
