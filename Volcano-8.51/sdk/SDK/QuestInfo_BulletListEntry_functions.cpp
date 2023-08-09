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


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.ShowBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestInfo_BulletListEntry_C::ShowBorder()
{
	static auto Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "ShowBorder");

	Params::UQuestInfo_BulletListEntry_C_ShowBorder_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.CalcBrushSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InImageSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Min                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FVector2D UQuestInfo_BulletListEntry_C::CalcBrushSize(const struct FVector2D& InImageSize, float Min, float Scale, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "CalcBrushSize");

	Params::UQuestInfo_BulletListEntry_C_CalcBrushSize_Params Parms;

	Parms.InImageSize = InImageSize;
	Parms.Min = Min;
	Parms.Scale = Scale;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EntryText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 EntryIconBrush                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector2D                   CallFunc_CalcBrushSize_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestInfo_BulletListEntry_C::InitBrush(class FText EntryText, const struct FSlateBrush& EntryIconBrush, const struct FVector2D& CallFunc_CalcBrushSize_ReturnValue)
{
	static auto Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "InitBrush");

	Params::UQuestInfo_BulletListEntry_C_InitBrush_Params Parms;

	Parms.EntryText = EntryText;
	Parms.EntryIconBrush = EntryIconBrush;
	Parms.CallFunc_CalcBrushSize_ReturnValue = CallFunc_CalcBrushSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C.InitBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EntryText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestInfo_BulletListEntry_C::InitBullet(class FText EntryText)
{
	static auto Func = Class->GetFunction("QuestInfo_BulletListEntry_C", "InitBullet");

	Params::UQuestInfo_BulletListEntry_C_InitBullet_Params Parms;

	Parms.EntryText = EntryText;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
