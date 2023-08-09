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


// Function AthenaNews.AthenaNews_C.BeginIntroSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaNews_C::BeginIntroSequence()
{
	static auto Func = Class->GetFunction("AthenaNews_C", "BeginIntroSequence");

	Params::UAthenaNews_C_BeginIntroSequence_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.SingleItemConfiguration
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::SingleItemConfiguration()
{
	static auto Func = Class->GetFunction("AthenaNews_C", "SingleItemConfiguration");

	Params::UAthenaNews_C_SingleItemConfiguration_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.ResetViewConfiguration
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::ResetViewConfiguration()
{
	static auto Func = Class->GetFunction("AthenaNews_C", "ResetViewConfiguration");

	Params::UAthenaNews_C_ResetViewConfiguration_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.HandleNewsStyle
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EAthenaNewsStyle        NewsStyle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::HandleNewsStyle(enum class EAthenaNewsStyle NewsStyle)
{
	static auto Func = Class->GetFunction("AthenaNews_C", "HandleNewsStyle");

	Params::UAthenaNews_C_HandleNewsStyle_Params Parms;

	Parms.NewsStyle = NewsStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaNewsStyle        K2Node_Event_NewsStyle                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, enum class EAthenaNewsStyle K2Node_Event_NewsStyle, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaNews_C", "ExecuteUbergraph_AthenaNews");

	Params::UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Event_NewsStyle = K2Node_Event_NewsStyle;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaNewsStyle        NewStyle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::UpdateStyle__DelegateSignature(enum class EAthenaNewsStyle NewStyle)
{
	static auto Func = Class->GetFunction("AthenaNews_C", "UpdateStyle__DelegateSignature");

	Params::UAthenaNews_C_UpdateStyle__DelegateSignature_Params Parms;

	Parms.NewStyle = NewStyle;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
