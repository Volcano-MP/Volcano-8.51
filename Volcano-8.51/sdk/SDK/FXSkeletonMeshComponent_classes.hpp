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

// 0x0 (0xAB0 - 0xAB0)
// BlueprintGeneratedClass FXSkeletonMeshComponent.FXSkeletonMeshComponent_C
class UFXSkeletonMeshComponent_C : public UFortFXSkeletonMeshComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FXSkeletonMeshComponent_C");
		return Clss;
	}

	void ApplyAwakenEffect();
	void ApplyEffect(class UMaterialInterface* SourceMaterial, float FadeInTime, float Duration, float FadeOutTime, class UMaterialInstanceDynamic* Effect_MID, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ApplyBuildingHitEffect(class UMaterialInstanceDynamic* Effect_MID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
