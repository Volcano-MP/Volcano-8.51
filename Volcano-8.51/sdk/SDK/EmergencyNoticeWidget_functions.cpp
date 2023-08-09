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


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.Show Notice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmergencyNoticeWidget_C::Show_Notice(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidget_C", "Show Notice");

	Params::UEmergencyNoticeWidget_C_Show_Notice_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ShowNotice
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEmergencyNoticeWidget_C::ShowNotice(class FText& Title, class FText& Body)
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidget_C", "ShowNotice");

	Params::UEmergencyNoticeWidget_C_ShowNotice_Params Parms;

	Parms.Title = Title;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.HideNotice
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEmergencyNoticeWidget_C::HideNotice()
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidget_C", "HideNotice");

	Params::UEmergencyNoticeWidget_C_HideNotice_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ExecuteUbergraph_EmergencyNoticeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UEmergencyNoticeWidget_C::ExecuteUbergraph_EmergencyNoticeWidget(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("EmergencyNoticeWidget_C", "ExecuteUbergraph_EmergencyNoticeWidget");

	Params::UEmergencyNoticeWidget_C_ExecuteUbergraph_EmergencyNoticeWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
