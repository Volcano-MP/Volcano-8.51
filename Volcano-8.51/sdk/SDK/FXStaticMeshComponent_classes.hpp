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

// 0x0 (0x4A0 - 0x4A0)
// BlueprintGeneratedClass FXStaticMeshComponent.FXStaticMeshComponent_C
class UFXStaticMeshComponent_C : public UFortFXStaticMeshComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FXStaticMeshComponent_C");
		return Clss;
	}

	void ApplyAwakenEffect();
	void ApplyEffect(class UMaterialInterface* Source_Material, float FadeInTime, float Duration, float FadeOutTimer, class UMaterialInstanceDynamic* EffectMID, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 Temp_int_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void ApplyBuildingHitEffect(class UMaterialInstanceDynamic* EffectMID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
