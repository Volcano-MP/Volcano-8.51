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


// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InPartyOwnerId                                                   (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerSetPartyOwner");

	Params::ALobbyBeaconClient_ServerSetPartyOwner_Params Parms;

	Parms.InUniqueId = InUniqueId;
	Parms.InPartyOwnerId = InPartyOwnerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ALobbyBeaconClient::ServerNotifyJoiningServer()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerNotifyJoiningServer");

	Params::ALobbyBeaconClient_ServerNotifyJoiningServer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                      InSessionId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UrlString                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerLoginPlayer");

	Params::ALobbyBeaconClient_ServerLoginPlayer_Params Parms;

	Parms.InSessionId = InSessionId;
	Parms.InUniqueId = InUniqueId;
	Parms.UrlString = UrlString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerKickPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl            PlayerToKick                                                     (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerKickPlayer");

	Params::ALobbyBeaconClient_ServerKickPlayer_Params Parms;

	Parms.PlayerToKick = PlayerToKick;
	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void ALobbyBeaconClient::ServerDisconnectFromLobby()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerDisconnectFromLobby");

	Params::ALobbyBeaconClient_ServerDisconnectFromLobby_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                      Msg                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ServerCheat(const class FString& Msg)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ServerCheat");

	Params::ALobbyBeaconClient_ServerCheat_Params Parms;

	Parms.Msg = Msg;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientWasKicked
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        KickReason                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientWasKicked(class FText& KickReason)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientWasKicked");

	Params::ALobbyBeaconClient_ClientWasKicked_Params Parms;

	Parms.KickReason = KickReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FJoinabilitySettings        Settings                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientSetInviteFlags(struct FJoinabilitySettings& Settings)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientSetInviteFlags");

	Params::ALobbyBeaconClient_ClientSetInviteFlags_Params Parms;

	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerLeft");

	Params::ALobbyBeaconClient_ClientPlayerLeft_Params Parms;

	Parms.InUniqueId = InUniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class FText                        NewPlayerName                                                    (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientPlayerJoined");

	Params::ALobbyBeaconClient_ClientPlayerJoined_Params Parms;

	Parms.NewPlayerName = NewPlayerName;
	Parms.InUniqueId = InUniqueId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientLoginComplete
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueId                                                       (ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasSuccessful                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobbyBeaconClient::ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful)
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientLoginComplete");

	Params::ALobbyBeaconClient_ClientLoginComplete_Params Parms;

	Parms.InUniqueId = InUniqueId;
	Parms.bWasSuccessful = bWasSuccessful;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientJoinGame
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:

void ALobbyBeaconClient::ClientJoinGame()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientJoinGame");

	Params::ALobbyBeaconClient_ClientJoinGame_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:

void ALobbyBeaconClient::ClientAckJoiningServer()
{
	static auto Func = Class->GetFunction("LobbyBeaconClient", "ClientAckJoiningServer");

	Params::ALobbyBeaconClient_ClientAckJoiningServer_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconPlayerState::OnRep_UniqueId()
{
	static auto Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_UniqueId");

	Params::ALobbyBeaconPlayerState_OnRep_UniqueId_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconPlayerState::OnRep_PartyOwner()
{
	static auto Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_PartyOwner");

	Params::ALobbyBeaconPlayerState_OnRep_PartyOwner_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconPlayerState::OnRep_InLobby()
{
	static auto Func = Class->GetFunction("LobbyBeaconPlayerState", "OnRep_InLobby");

	Params::ALobbyBeaconPlayerState_OnRep_InLobby_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconState::OnRep_WaitForPlayersTimeRemaining()
{
	static auto Func = Class->GetFunction("LobbyBeaconState", "OnRep_WaitForPlayersTimeRemaining");

	Params::ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
// (Final, Native, Protected)
// Parameters:

void ALobbyBeaconState::OnRep_LobbyStarted()
{
	static auto Func = Class->GetFunction("LobbyBeaconState", "OnRep_LobbyStarted");

	Params::ALobbyBeaconState_OnRep_LobbyStarted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
