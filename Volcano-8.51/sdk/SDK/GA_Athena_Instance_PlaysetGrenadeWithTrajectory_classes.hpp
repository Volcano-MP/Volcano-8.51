#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16 (0xC90 - 0xC7A)
// BlueprintGeneratedClass GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C
class UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C : public UGA_Athena_PlaysetGrenadeWithTrajectory_C
{
public:
	uint8                                        Pad_6BA9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlaysetItemDefinition*            PlaysetData;                                       // 0xC88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C");
		return Clss;
	}

	void GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData);
	void SetPlaysetData(class AFortProjectileBase* Projectile_Reference);
	void SetActivePlaysetOnPlayer();
	void ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory(int32 EntryPoint, class AFortProjectileBase* K2Node_Event_Projectile_Reference, class AB_Prj_Athena_PlaysetGrenade_C* K2Node_DynamicCast_AsB_Prj_Athena_Playset_Grenade, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
