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


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Cancel()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Cancel");

	Params::UAthenaLobbyPlayerPanel_C_Cancel_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_AreUniqueIDsIdentical_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanel_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo, bool CallFunc_AreUniqueIDsIdentical_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnTeamMemberStateChanged");

	Params::UAthenaLobbyPlayerPanel_C_OnTeamMemberStateChanged_Params Parms;

	Parms.TeamMemberInfo = TeamMemberInfo;
	Parms.CallFunc_AreUniqueIDsIdentical_ReturnValue = CallFunc_AreUniqueIDsIdentical_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*             CallFunc_GetLocalPlayerTeam_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanel_C::InitializeContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "InitializeContextEvents");

	Params::UAthenaLobbyPlayerPanel_C_InitializeContextEvents_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidActions_bHasValidActions                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyPlayerPanel_C::Focus(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_HasValidActions_bHasValidActions)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Focus");

	Params::UAthenaLobbyPlayerPanel_C_Focus_Params Parms;

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_HasValidActions_bHasValidActions = CallFunc_HasValidActions_bHasValidActions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Refresh()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Refresh");

	Params::UAthenaLobbyPlayerPanel_C_Refresh_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         TeamMemberInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAthenaLobbyPlayerPanel_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "SetTeamMemberInfo");

	Params::UAthenaLobbyPlayerPanel_C_SetTeamMemberInfo_Params Parms;

	Parms.TeamMemberInfo = TeamMemberInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Initialize()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Initialize");

	Params::UAthenaLobbyPlayerPanel_C_Initialize_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "Construct");

	Params::UAthenaLobbyPlayerPanel_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaLobbyPlayerPanel_C::ExecuteUbergraph_AthenaLobbyPlayerPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "ExecuteUbergraph_AthenaLobbyPlayerPanel");

	Params::UAthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::OnClosed__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnClosed__DelegateSignature");

	Params::UAthenaLobbyPlayerPanel_C_OnClosed__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyPlayerPanel_C::OnGadgetsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLobbyPlayerPanel_C", "OnGadgetsClicked__DelegateSignature");

	Params::UAthenaLobbyPlayerPanel_C_OnGadgetsClicked__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
