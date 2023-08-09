#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function B_Constructor_BASE.B_Constructor_BASE_C.UpdateAudioCrossfade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::UpdateAudioCrossfade(class USoundBase* Sound, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, class UAudioComponent* K2Node_Select_Default, class UAudioComponent* K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "UpdateAudioCrossfade");

	Params::AB_Constructor_BASE_C_UpdateAudioCrossfade_Params Parms;

	Parms.Sound = Sound;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetFeelTheBaseTraceLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  TraceLocation                                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::GetFeelTheBaseTraceLocation(struct FTransform* TraceLocation, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "GetFeelTheBaseTraceLocation");

	Params::AB_Constructor_BASE_C_GetFeelTheBaseTraceLocation_Params Parms;

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceLocation != nullptr)
		*TraceLocation = Parms.TraceLocation;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceWithAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItemDefinition*    ItemDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToSpawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       ResourceType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::SpawnResourceWithAmount(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, enum class EFortResourceType ResourceType, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SpawnResourceWithAmount");

	Params::AB_Constructor_BASE_C_SpawnResourceWithAmount_Params Parms;

	Parms.ItemDefinition = ItemDefinition;
	Parms.AmountToSpawn = AmountToSpawn;
	Parms.ResourceType = ResourceType;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetHealingMultiplier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       TC_Empty                                                         (Edit, BlueprintVisible)
// struct FGameplayTagContainer       TC_AbilityDamage                                                 (Edit, BlueprintVisible)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            ()
// bool                               CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               ()
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1             ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::SetHealingMultiplier(const struct FGameplayTagContainer& TC_Empty, const struct FGameplayTagContainer& TC_AbilityDamage, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetHealingMultiplier");

	Params::AB_Constructor_BASE_C_SetHealingMultiplier_Params Parms;

	Parms.TC_Empty = TC_Empty;
	Parms.TC_AbilityDamage = TC_AbilityDamage;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess = CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue = CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupTrapEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilityComponent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect                             (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_1                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::SetupTrapEffects(class UAbilitySystemComponent* AbilityComponent, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect, int32 CallFunc_Array_Add_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_1, int32 CallFunc_Array_Add_ReturnValue_1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetupTrapEffects");

	Params::AB_Constructor_BASE_C_SetupTrapEffects_Params Parms;

	Parms.AbilityComponent = AbilityComponent;
	Parms.K2Node_MakeStruct_BASEGameplayEffect = K2Node_MakeStruct_BASEGameplayEffect;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_1 = K2Node_MakeStruct_BASEGameplayEffect_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetTrapGEFromTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InTag                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                      OutGE                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             ()
// bool                               CallFunc_EqualEqual_GameplayTagContainer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::GetTrapGEFromTag(const struct FGameplayTagContainer& InTag, class UClass** OutGE, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTagContainer_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "GetTrapGEFromTag");

	Params::AB_Constructor_BASE_C_GetTrapGEFromTag_Params Parms;

	Parms.InTag = InTag;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTagContainer_ReturnValue = CallFunc_EqualEqual_GameplayTagContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutGE != nullptr)
		*OutGE = Parms.OutGE;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_InitialStaticMeshAnimationIsComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::OnRep_InitialStaticMeshAnimationIsComplete()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "OnRep_InitialStaticMeshAnimationIsComplete");

	Params::AB_Constructor_BASE_C_OnRep_InitialStaticMeshAnimationIsComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle   GE_Spec                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::BaseSelfApplyGameplaySpec(const struct FGameplayEffectSpecHandle& GE_Spec, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BaseSelfApplyGameplaySpec");

	Params::AB_Constructor_BASE_C_BaseSelfApplyGameplaySpec_Params Parms;

	Parms.GE_Spec = GE_Spec;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_7                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_8                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_9(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_9                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_10(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_10               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_11(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_11               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_12(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_12               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_13(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_13               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_14(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_14               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_15(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_15               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_16(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_16               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_17(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_17               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_18(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_18               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::SetBaseVisualGlow(class UAbilitySystemComponent* AbilitySystemComponent, int32 Temp_int_Variable, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_7, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_8, int32 CallFunc_Conv_BoolToInt_ReturnValue_8, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_9, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_9, int32 CallFunc_Conv_BoolToInt_ReturnValue_9, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_10, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_10, int32 CallFunc_Conv_BoolToInt_ReturnValue_10, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_11, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_11, int32 CallFunc_Conv_BoolToInt_ReturnValue_11, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_12, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_12, int32 CallFunc_Conv_BoolToInt_ReturnValue_12, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_13, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_13, int32 CallFunc_Conv_BoolToInt_ReturnValue_13, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_14, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_14, int32 CallFunc_Conv_BoolToInt_ReturnValue_14, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_15, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_15, int32 CallFunc_Conv_BoolToInt_ReturnValue_15, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_16, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_16, int32 CallFunc_Conv_BoolToInt_ReturnValue_16, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_17, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_17, int32 CallFunc_Conv_BoolToInt_ReturnValue_17, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_18, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_18, int32 CallFunc_Conv_BoolToInt_ReturnValue_18, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_16, int32 CallFunc_Add_IntInt_ReturnValue_17, int32 CallFunc_Add_IntInt_ReturnValue_18)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetBaseVisualGlow");

	Params::AB_Constructor_BASE_C_SetBaseVisualGlow_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_2 = CallFunc_Conv_BoolToInt_ReturnValue_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_3 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_3 = CallFunc_Conv_BoolToInt_ReturnValue_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_4 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_4;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_4 = CallFunc_Conv_BoolToInt_ReturnValue_4;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_5 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_5 = CallFunc_Conv_BoolToInt_ReturnValue_5;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_6 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_6 = CallFunc_Conv_BoolToInt_ReturnValue_6;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_7 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_7;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_7 = CallFunc_Conv_BoolToInt_ReturnValue_7;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_8 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_8;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_8 = CallFunc_Conv_BoolToInt_ReturnValue_8;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_9 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_9;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_9 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_9;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_9 = CallFunc_Conv_BoolToInt_ReturnValue_9;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_10 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_10;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_10 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_10;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_10 = CallFunc_Conv_BoolToInt_ReturnValue_10;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_11 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_11;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_11 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_11;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_11 = CallFunc_Conv_BoolToInt_ReturnValue_11;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_12 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_12;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_12 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_12;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_12 = CallFunc_Conv_BoolToInt_ReturnValue_12;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_13 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_13;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_13 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_13;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_13 = CallFunc_Conv_BoolToInt_ReturnValue_13;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_14 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_14;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_14 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_14;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_14 = CallFunc_Conv_BoolToInt_ReturnValue_14;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_15 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_15;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_15 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_15;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_15 = CallFunc_Conv_BoolToInt_ReturnValue_15;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_16 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_16;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_16 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_16;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_16 = CallFunc_Conv_BoolToInt_ReturnValue_16;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_17 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_17;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_17 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_17;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_17 = CallFunc_Conv_BoolToInt_ReturnValue_17;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_18 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_18;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_18 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_18;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_18 = CallFunc_Conv_BoolToInt_ReturnValue_18;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.CallFunc_Add_IntInt_ReturnValue_17 = CallFunc_Add_IntInt_ReturnValue_17;
	Parms.CallFunc_Add_IntInt_ReturnValue_18 = CallFunc_Add_IntInt_ReturnValue_18;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       TC_Empty                                                         (Edit, BlueprintVisible)
// struct FGameplayTagContainer       TC_AbilityDamage                                                 (Edit, BlueprintVisible)
// UInterfaceProperty_                CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            ()
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_1                          ()
// struct FGameplayEffectSpecHandle   CallFunc_AssignSetByCallerMagnitude_ReturnValue                  ()
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue_2                          ()
// struct FGameplayEffectSpecHandle   CallFunc_AssignSetByCallerMagnitude_ReturnValue_1                ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::SetDamageMultiplier(const struct FGameplayTagContainer& TC_Empty, const struct FGameplayTagContainer& TC_AbilityDamage, UInterfaceProperty_ CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess, float CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_2, const struct FGameplayEffectSpecHandle& CallFunc_AssignSetByCallerMagnitude_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetDamageMultiplier");

	Params::AB_Constructor_BASE_C_SetDamageMultiplier_Params Parms;

	Parms.TC_Empty = TC_Empty;
	Parms.TC_AbilityDamage = TC_AbilityDamage;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_1 = CallFunc_MakeOutgoingSpec_ReturnValue_1;
	Parms.CallFunc_AssignSetByCallerMagnitude_ReturnValue = CallFunc_AssignSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess = CallFunc_EvaluateAttributeValueWithTagsAndBase_bSuccess;
	Parms.CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue = CallFunc_EvaluateAttributeValueWithTagsAndBase_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue_2 = CallFunc_MakeOutgoingSpec_ReturnValue_2;
	Parms.CallFunc_AssignSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::OnRep_CollectResources(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "OnRep_CollectResources");

	Params::AB_Constructor_BASE_C_OnRep_CollectResources_Params Parms;

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      MetalText                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      StoneText                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      WoodText                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      InteractionString                                                (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

class FText AB_Constructor_BASE_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, const class FString& MetalText, const class FString& StoneText, const class FString& WoodText, const class FString& InteractionString, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BlueprintGetInteractionString");

	Params::AB_Constructor_BASE_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.MetalText = MetalText;
	Parms.StoneText = StoneText;
	Parms.WoodText = WoodText;
	Parms.InteractionString = InteractionString;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructRecyclingResource    RecyclingResource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorldItemDefinition*    Stored_Resource                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToSpawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructRecyclingResource    SetValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HopperResourceAmount                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructRecyclingResource    K2Node_MakeStruct_StructRecyclingResource                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::AddResourceToStack(const struct FStructRecyclingResource& RecyclingResource, class UFortWorldItemDefinition* Stored_Resource, int32 AmountToSpawn, struct FStructRecyclingResource* SetValue, int32 HopperResourceAmount, const struct FStructRecyclingResource& K2Node_MakeStruct_StructRecyclingResource, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "AddResourceToStack");

	Params::AB_Constructor_BASE_C_AddResourceToStack_Params Parms;

	Parms.RecyclingResource = RecyclingResource;
	Parms.Stored_Resource = Stored_Resource;
	Parms.AmountToSpawn = AmountToSpawn;
	Parms.HopperResourceAmount = HopperResourceAmount;
	Parms.K2Node_MakeStruct_StructRecyclingResource = K2Node_MakeStruct_StructRecyclingResource;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SetValue != nullptr)
		*SetValue = Parms.SetValue;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItemDefinition*    ItemDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToSpawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       ResourceType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStructRecyclingResource    CallFunc_AddResourceToStack_SetValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructRecyclingResource    CallFunc_AddResourceToStack_SetValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructRecyclingResource    CallFunc_AddResourceToStack_SetValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int32 AmountToSpawn, enum class EFortResourceType ResourceType, bool K2Node_SwitchEnum_CmpSuccess, const struct FStructRecyclingResource& CallFunc_AddResourceToStack_SetValue, const struct FStructRecyclingResource& CallFunc_AddResourceToStack_SetValue_1, const struct FStructRecyclingResource& CallFunc_AddResourceToStack_SetValue_2)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SpawnResourceForRecycling");

	Params::AB_Constructor_BASE_C_SpawnResourceForRecycling_Params Parms;

	Parms.ItemDefinition = ItemDefinition;
	Parms.AmountToSpawn = AmountToSpawn;
	Parms.ResourceType = ResourceType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddResourceToStack_SetValue = CallFunc_AddResourceToStack_SetValue;
	Parms.CallFunc_AddResourceToStack_SetValue_1 = CallFunc_AddResourceToStack_SetValue_1;
	Parms.CallFunc_AddResourceToStack_SetValue_2 = CallFunc_AddResourceToStack_SetValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AB_Constructor_BASE_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BlueprintCanInteract");

	Params::AB_Constructor_BASE_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::OnRep_BaseIsPlaced()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "OnRep_BaseIsPlaced");

	Params::AB_Constructor_BASE_C_OnRep_BaseIsPlaced_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetResourceAmountsBasedOnUpgradeTier_WoodResult         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceAmountsBasedOnUpgradeTier_StoneResult        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceAmountsBasedOnUpgradeTier_MetalResult        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::RecycleResources(int32 CallFunc_GetResourceAmountsBasedOnUpgradeTier_WoodResult, int32 CallFunc_GetResourceAmountsBasedOnUpgradeTier_StoneResult, int32 CallFunc_GetResourceAmountsBasedOnUpgradeTier_MetalResult)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "RecycleResources");

	Params::AB_Constructor_BASE_C_RecycleResources_Params Parms;

	Parms.CallFunc_GetResourceAmountsBasedOnUpgradeTier_WoodResult = CallFunc_GetResourceAmountsBasedOnUpgradeTier_WoodResult;
	Parms.CallFunc_GetResourceAmountsBasedOnUpgradeTier_StoneResult = CallFunc_GetResourceAmountsBasedOnUpgradeTier_StoneResult;
	Parms.CallFunc_GetResourceAmountsBasedOnUpgradeTier_MetalResult = CallFunc_GetResourceAmountsBasedOnUpgradeTier_MetalResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBASEGameplayEffect> HostileEffects                                                   (Parm, OutParm, ZeroConstructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect                             (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_1                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_2                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* HostileEffects, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect, int32 CallFunc_Array_Add_ReturnValue, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_1, int32 CallFunc_Array_Add_ReturnValue_1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_2, int32 CallFunc_Array_Add_ReturnValue_2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetupHostileEffects");

	Params::AB_Constructor_BASE_C_SetupHostileEffects_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.K2Node_MakeStruct_BASEGameplayEffect = K2Node_MakeStruct_BASEGameplayEffect;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_1 = K2Node_MakeStruct_BASEGameplayEffect_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_2 = K2Node_MakeStruct_BASEGameplayEffect_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (HostileEffects != nullptr)
		*HostileEffects = Parms.HostileEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBASEGameplayEffect> FriendlyEffects                                                  (Parm, OutParm, ZeroConstructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect                             (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_1                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_2                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_3                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_4                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_5                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_6                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_7                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* FriendlyEffects, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect, int32 CallFunc_Array_Add_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_1, int32 CallFunc_Array_Add_ReturnValue_1, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_2, int32 CallFunc_Array_Add_ReturnValue_2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_3, int32 CallFunc_Array_Add_ReturnValue_3, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_4, int32 CallFunc_Array_Add_ReturnValue_4, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_4, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_5, int32 CallFunc_Array_Add_ReturnValue_5, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_5, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_6, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_6, int32 CallFunc_Array_Add_ReturnValue_6, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_7)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetupFriendlyEffects");

	Params::AB_Constructor_BASE_C_SetupFriendlyEffects_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.K2Node_MakeStruct_BASEGameplayEffect = K2Node_MakeStruct_BASEGameplayEffect;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_1 = K2Node_MakeStruct_BASEGameplayEffect_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_2 = K2Node_MakeStruct_BASEGameplayEffect_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_2;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_3 = K2Node_MakeStruct_BASEGameplayEffect_3;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_4 = K2Node_MakeStruct_BASEGameplayEffect_4;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_3 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_4 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_4;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_5 = K2Node_MakeStruct_BASEGameplayEffect_5;
	Parms.CallFunc_Array_Add_ReturnValue_5 = CallFunc_Array_Add_ReturnValue_5;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_5 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_5;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_6 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_6;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_6 = K2Node_MakeStruct_BASEGameplayEffect_6;
	Parms.CallFunc_Array_Add_ReturnValue_6 = CallFunc_Array_Add_ReturnValue_6;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_7 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	if (FriendlyEffects != nullptr)
		*FriendlyEffects = Parms.FriendlyEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBASEGameplayEffect> BuildingEffects                                                  (Parm, OutParm, ZeroConstructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect                             (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_1                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_2                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_3                           (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBASEGameplayEffect         K2Node_MakeStruct_BASEGameplayEffect_4                           (NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<struct FBASEGameplayEffect>* BuildingEffects, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect, int32 CallFunc_Array_Add_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_1, int32 CallFunc_Array_Add_ReturnValue_1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_2, int32 CallFunc_Array_Add_ReturnValue_2, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_4, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_3, int32 CallFunc_Array_Add_ReturnValue_3, const struct FBASEGameplayEffect& K2Node_MakeStruct_BASEGameplayEffect_4, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_4)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetupBuildingEffects");

	Params::AB_Constructor_BASE_C_SetupBuildingEffects_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.K2Node_MakeStruct_BASEGameplayEffect = K2Node_MakeStruct_BASEGameplayEffect;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_1 = K2Node_MakeStruct_BASEGameplayEffect_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_3 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_3;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_2 = K2Node_MakeStruct_BASEGameplayEffect_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_4 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_4;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_3 = K2Node_MakeStruct_BASEGameplayEffect_3;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_MakeStruct_BASEGameplayEffect_4 = K2Node_MakeStruct_BASEGameplayEffect_4;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_5 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_5;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (BuildingEffects != nullptr)
		*BuildingEffects = Parms.BuildingEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     Instigator_Ability_System                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBASEGameplayEffect> BASEBuildingEffects                                              (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect> BASEFriendlyEffects                                              (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect> BASEHostileEffects                                               (Parm, OutParm, ZeroConstructor)
// TArray<struct FBASEGameplayEffect> CallFunc_SetupBuildingEffects_BuildingEffects                    (ZeroConstructor, ReferenceParm)
// TArray<struct FBASEGameplayEffect> CallFunc_SetupHostileEffects_HostileEffects                      (ZeroConstructor, ReferenceParm)
// TArray<struct FBASEGameplayEffect> CallFunc_SetupFriendlyEffects_FriendlyEffects                    (ZeroConstructor, ReferenceParm)

void AB_Constructor_BASE_C::Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<struct FBASEGameplayEffect>* BASEBuildingEffects, TArray<struct FBASEGameplayEffect>* BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>* BASEHostileEffects, TArray<struct FBASEGameplayEffect>& CallFunc_SetupBuildingEffects_BuildingEffects, TArray<struct FBASEGameplayEffect>& CallFunc_SetupHostileEffects_HostileEffects, TArray<struct FBASEGameplayEffect>& CallFunc_SetupFriendlyEffects_FriendlyEffects)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "Setup Base Effect Array");

	Params::AB_Constructor_BASE_C_Setup_Base_Effect_Array_Params Parms;

	Parms.Instigator_Ability_System = Instigator_Ability_System;
	Parms.CallFunc_SetupBuildingEffects_BuildingEffects = CallFunc_SetupBuildingEffects_BuildingEffects;
	Parms.CallFunc_SetupHostileEffects_HostileEffects = CallFunc_SetupHostileEffects_HostileEffects;
	Parms.CallFunc_SetupFriendlyEffects_FriendlyEffects = CallFunc_SetupFriendlyEffects_FriendlyEffects;

	UObject::ProcessEvent(Func, &Parms);

	if (BASEBuildingEffects != nullptr)
		*BASEBuildingEffects = Parms.BASEBuildingEffects;

	if (BASEFriendlyEffects != nullptr)
		*BASEFriendlyEffects = Parms.BASEFriendlyEffects;

	if (BASEHostileEffects != nullptr)
		*BASEHostileEffects = Parms.BASEHostileEffects;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     Ability_System_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NodesToAffect                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_7                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAllMatchingGameplayTags_ReturnValue_8                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int32* NodesToAffect, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_5, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_6, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_7, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_4)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SetupBaseDefaultValues");

	Params::AB_Constructor_BASE_C_SetupBaseDefaultValues_Params Parms;

	Parms.Ability_System_Component = Ability_System_Component;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue = CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_2 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_3 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_4 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_5 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_5;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_6 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_6;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_7 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_7;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4 = CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4;
	Parms.CallFunc_HasAllMatchingGameplayTags_ReturnValue_8 = CallFunc_HasAllMatchingGameplayTags_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (NodesToAffect != nullptr)
		*NodesToAffect = Parms.NodesToAffect;

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     InstigatorAbilitySystemComponent                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "OnPlaced");

	Params::AB_Constructor_BASE_C_OnPlaced_Params Parms;

	Parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::Recycling()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "Recycling");

	Params::AB_Constructor_BASE_C_Recycling_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature");

	Params::AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LegsUp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::AnimateLegs(bool LegsUp)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "AnimateLegs");

	Params::AB_Constructor_BASE_C_AnimateLegs_Params Parms;

	Parms.LegsUp = LegsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*            BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        EffectMeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "StartBuildingActorVisuals");

	Params::AB_Constructor_BASE_C_StartBuildingActorVisuals_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.EffectMeshComp = EffectMeshComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*            BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        EffectMeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "StopBuildingActorVisuals");

	Params::AB_Constructor_BASE_C_StopBuildingActorVisuals_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.EffectMeshComp = EffectMeshComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BlueprintOnInteract");

	Params::AB_Constructor_BASE_C_BlueprintOnInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::GetDamageAmp()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "GetDamageAmp");

	Params::AB_Constructor_BASE_C_GetDamageAmp_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::ResourcesCreated()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "ResourcesCreated");

	Params::AB_Constructor_BASE_C_ResourcesCreated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCollected
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::ResourcesCollected()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "ResourcesCollected");

	Params::AB_Constructor_BASE_C_ResourcesCollected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseIsReadyToAnimate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::BaseIsReadyToAnimate()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BaseIsReadyToAnimate");

	Params::AB_Constructor_BASE_C_BaseIsReadyToAnimate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ShowHiddenMeshes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::ShowHiddenMeshes()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "ShowHiddenMeshes");

	Params::AB_Constructor_BASE_C_ShowHiddenMeshes_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ApplyTrapEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::ApplyTrapEffects()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "ApplyTrapEffects");

	Params::AB_Constructor_BASE_C_ApplyTrapEffects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.SaveOwner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawn_Constructor_C*   ConstructorPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::SaveOwner(class APlayerPawn_Constructor_C* ConstructorPawn)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "SaveOwner");

	Params::AB_Constructor_BASE_C_SaveOwner_Params Parms;

	Parms.ConstructorPawn = ConstructorPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.FeelTheBaseGlow
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Stack1                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Stack2                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Stack3                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "FeelTheBaseGlow");

	Params::AB_Constructor_BASE_C_FeelTheBaseGlow_Params Parms;

	Parms.Stack1 = Stack1;
	Parms.Stack2 = Stack2;
	Parms.Stack3 = Stack3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ResetFeelTheBaseGlow
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Constructor_BASE_C::ResetFeelTheBaseGlow()
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "ResetFeelTheBaseGlow");

	Params::AB_Constructor_BASE_C_ResetFeelTheBaseGlow_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EmitterTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ParticleCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Constructor_BASE_C::BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(class FName EventName, float EmitterTime, int32 ParticleCount)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature");

	Params::AB_Constructor_BASE_C_BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature_Params Parms;

	Parms.EventName = EventName;
	Parms.EmitterTime = EmitterTime;
	Parms.ParticleCount = ParticleCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_LegsUp                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_Event_BuildingActor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_Event_EffectMeshComp_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            K2Node_Event_BuildingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_Event_EffectMeshComp                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor, ReferenceParm)
// class AFortPawn*                   K2Node_Event_InteractingPawn                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStructRecyclingResource    K2Node_MakeStruct_StructRecyclingResource                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStructRecyclingResource    K2Node_MakeStruct_StructRecyclingResource_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_2     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStructRecyclingResource    K2Node_MakeStruct_StructRecyclingResource_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_1                              (ZeroConstructor, ReferenceParm)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_2                              (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetAnimatingMID_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SetupBaseDefaultValues_NodesToAffect                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FBASEGameplayEffect> CallFunc_Setup_Base_Effect_Array_BASEBuildingEffects             (ZeroConstructor, ReferenceParm)
// TArray<struct FBASEGameplayEffect> CallFunc_Setup_Base_Effect_Array_BASEFriendlyEffects             (ZeroConstructor, ReferenceParm)
// TArray<struct FBASEGameplayEffect> CallFunc_Setup_Base_Effect_Array_BASEHostileEffects              (ZeroConstructor, ReferenceParm)
// class UAbilitySystemComponent*     K2Node_Event_InstigatorAbilitySystemComponent                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingSMActor*            CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetBuildingMeshComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPawn_Constructor_C*   K2Node_CustomEvent_ConstructorPawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Stack1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Stack2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Stack3                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_EventName                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_EmitterTime                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_ParticleCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Constructor_BASE_C::ExecuteUbergraph_B_Constructor_BASE(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_CustomEvent_LegsUp, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_1, class ABuildingSMActor* K2Node_Event_BuildingActor_1, class UStaticMeshComponent* K2Node_Event_EffectMeshComp_1, class ABuildingSMActor* K2Node_Event_BuildingActor, class UStaticMeshComponent* K2Node_Event_EffectMeshComp, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, const struct FStructRecyclingResource& K2Node_MakeStruct_StructRecyclingResource, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1, const struct FStructRecyclingResource& K2Node_MakeStruct_StructRecyclingResource_1, UInterfaceProperty_ CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_2, const struct FStructRecyclingResource& K2Node_MakeStruct_StructRecyclingResource_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_1, class UMaterialInterface* CallFunc_Array_Get_Item_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_3, int32 CallFunc_SetupBaseDefaultValues_NodesToAffect, TArray<struct FBASEGameplayEffect>& CallFunc_Setup_Base_Effect_Array_BASEBuildingEffects, TArray<struct FBASEGameplayEffect>& CallFunc_Setup_Base_Effect_Array_BASEFriendlyEffects, TArray<struct FBASEGameplayEffect>& CallFunc_Setup_Base_Effect_Array_BASEHostileEffects, class UAbilitySystemComponent* K2Node_Event_InstigatorAbilitySystemComponent, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_3, class ABuildingSMActor* CallFunc_Array_Get_Item_4, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable, class UMaterialInterface* CallFunc_Array_Get_Item_5, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_3, class APlayerPawn_Constructor_C* K2Node_CustomEvent_ConstructorPawn, bool K2Node_CustomEvent_Stack1, bool K2Node_CustomEvent_Stack2, bool K2Node_CustomEvent_Stack3, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Array_Index_Variable_3, class UMaterialInterface* CallFunc_Array_Get_Item_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FName K2Node_ComponentBoundEvent_EventName, float K2Node_ComponentBoundEvent_EmitterTime, int32 K2Node_ComponentBoundEvent_ParticleCount, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3)
{
	static auto Func = Class->GetFunction("B_Constructor_BASE_C", "ExecuteUbergraph_B_Constructor_BASE");

	Params::AB_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_CustomEvent_LegsUp = K2Node_CustomEvent_LegsUp;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue_1 = CallFunc_GetRealTimeSeconds_ReturnValue_1;
	Parms.K2Node_Event_BuildingActor_1 = K2Node_Event_BuildingActor_1;
	Parms.K2Node_Event_EffectMeshComp_1 = K2Node_Event_EffectMeshComp_1;
	Parms.K2Node_Event_BuildingActor = K2Node_Event_BuildingActor;
	Parms.K2Node_Event_EffectMeshComp = K2Node_Event_EffectMeshComp;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	Parms.K2Node_MakeStruct_StructRecyclingResource = K2Node_MakeStruct_StructRecyclingResource;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1 = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1;
	Parms.K2Node_MakeStruct_StructRecyclingResource_1 = K2Node_MakeStruct_StructRecyclingResource_1;
	Parms.CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_2 = CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_2;
	Parms.K2Node_MakeStruct_StructRecyclingResource_2 = K2Node_MakeStruct_StructRecyclingResource_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue_1 = CallFunc_GetMaterials_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetMaterials_ReturnValue_2 = CallFunc_GetMaterials_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue_2 = CallFunc_GetRealTimeSeconds_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_3 = CallFunc_RandomFloatInRange_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAnimatingMID_ReturnValue = CallFunc_GetAnimatingMID_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue_3 = CallFunc_GetRealTimeSeconds_ReturnValue_3;
	Parms.CallFunc_SetupBaseDefaultValues_NodesToAffect = CallFunc_SetupBaseDefaultValues_NodesToAffect;
	Parms.CallFunc_Setup_Base_Effect_Array_BASEBuildingEffects = CallFunc_Setup_Base_Effect_Array_BASEBuildingEffects;
	Parms.CallFunc_Setup_Base_Effect_Array_BASEFriendlyEffects = CallFunc_Setup_Base_Effect_Array_BASEFriendlyEffects;
	Parms.CallFunc_Setup_Base_Effect_Array_BASEHostileEffects = CallFunc_Setup_Base_Effect_Array_BASEHostileEffects;
	Parms.K2Node_Event_InstigatorAbilitySystemComponent = K2Node_Event_InstigatorAbilitySystemComponent;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetBuildingMeshComponent_ReturnValue = CallFunc_GetBuildingMeshComponent_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_ConstructorPawn = K2Node_CustomEvent_ConstructorPawn;
	Parms.K2Node_CustomEvent_Stack1 = K2Node_CustomEvent_Stack1;
	Parms.K2Node_CustomEvent_Stack2 = K2Node_CustomEvent_Stack2;
	Parms.K2Node_CustomEvent_Stack3 = K2Node_CustomEvent_Stack3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_EventName = K2Node_ComponentBoundEvent_EventName;
	Parms.K2Node_ComponentBoundEvent_EmitterTime = K2Node_ComponentBoundEvent_EmitterTime;
	Parms.K2Node_ComponentBoundEvent_ParticleCount = K2Node_ComponentBoundEvent_ParticleCount;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
