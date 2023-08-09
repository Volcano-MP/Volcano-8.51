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


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetAbilityKit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*             AbilityKit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::SetAbilityKit(class UFortAbilityKit* AbilityKit)
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "SetAbilityKit");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit_Params Parms;

	Parms.AbilityKit = AbilityKit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.IsAbilityUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityKitUnlockedForHero_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UHeroLoadoutActiveAbilityDetailColumn_C::IsAbilityUnlocked(bool CallFunc_IsAbilityKitUnlockedForHero_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "IsAbilityUnlocked");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked_Params Parms;

	Parms.CallFunc_IsAbilityKitUnlockedForHero_ReturnValue = CallFunc_IsAbilityKitUnlockedForHero_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.GetAbilityKit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortAbilityKit* UHeroLoadoutActiveAbilityDetailColumn_C::GetAbilityKit()
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "GetAbilityKit");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                   Hero                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::SetHero(class UFortHero* Hero)
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "SetHero");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_SetHero_Params Parms;

	Parms.Hero = Hero;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityUnlocked_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAbilityUnlocked_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilityKit*             CallFunc_GetAbilityKit_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_NoResourceBrush_ReturnValue                             ()
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush                                ()
// struct FSlateBrush                 CallFunc_ResizeBrush_ResizedBrush_1                              ()
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::UpdateFromState(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsAbilityUnlocked_ReturnValue, bool CallFunc_IsAbilityUnlocked_ReturnValue_1, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "UpdateFromState");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsAbilityUnlocked_ReturnValue = CallFunc_IsAbilityUnlocked_ReturnValue;
	Parms.CallFunc_IsAbilityUnlocked_ReturnValue_1 = CallFunc_IsAbilityUnlocked_ReturnValue_1;
	Parms.CallFunc_GetAbilityKit_ReturnValue = CallFunc_GetAbilityKit_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NoResourceBrush_ReturnValue = CallFunc_NoResourceBrush_ReturnValue;
	Parms.CallFunc_ResizeBrush_ResizedBrush = CallFunc_ResizeBrush_ResizedBrush;
	Parms.CallFunc_ResizeBrush_ResizedBrush_1 = CallFunc_ResizeBrush_ResizedBrush_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetStandardBrushSize_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutActiveAbilityDetailColumn_C::UpdateFromStyle(const struct FVector2D& CallFunc_GetStandardBrushSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "UpdateFromStyle");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle_Params Parms;

	Parms.CallFunc_GetStandardBrushSize_ReturnValue = CallFunc_GetStandardBrushSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailColumn_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "PreConstruct");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHeroLoadoutActiveAbilityDetailColumn_C::Construct()
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "Construct");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutActiveAbilityDetailColumn_C::ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("HeroLoadoutActiveAbilityDetailColumn_C", "ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn");

	Params::UHeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
