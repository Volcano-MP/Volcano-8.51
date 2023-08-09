#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
struct ALobbyBeaconClient_ServerSetPartyOwner_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x28)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      InPartyOwnerId;                                    // 0x28(0x28)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
struct ALobbyBeaconClient_ServerNotifyJoiningServer_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerLoginPlayer
struct ALobbyBeaconClient_ServerLoginPlayer_Params
{
public:
	class FString                                InSessionId;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x10(0x28)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UrlString;                                         // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerKickPlayer
struct ALobbyBeaconClient_ServerKickPlayer_Params
{
public:
	struct FUniqueNetIdRepl                      PlayerToKick;                                      // 0x0(0x28)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Reason;                                            // 0x28(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
struct ALobbyBeaconClient_ServerDisconnectFromLobby_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Lobby.LobbyBeaconClient.ServerCheat
struct ALobbyBeaconClient_ServerCheat_Params
{
public:
	class FString                                Msg;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientWasKicked
struct ALobbyBeaconClient_ClientWasKicked_Params
{
public:
	class FText                                  KickReason;                                        // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
struct ALobbyBeaconClient_ClientSetInviteFlags_Params
{
public:
	struct FJoinabilitySettings                  Settings;                                          // 0x0(0x14)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientPlayerLeft
struct ALobbyBeaconClient_ClientPlayerLeft_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x28)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientPlayerJoined
struct ALobbyBeaconClient_ClientPlayerJoined_Params
{
public:
	class FText                                  NewPlayerName;                                     // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x18(0x28)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientLoginComplete
struct ALobbyBeaconClient_ClientLoginComplete_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueId;                                        // 0x0(0x28)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasSuccessful;                                    // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientJoinGame
struct ALobbyBeaconClient_ClientJoinGame_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
struct ALobbyBeaconClient_ClientAckJoiningServer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
struct ALobbyBeaconPlayerState_OnRep_UniqueId_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
struct ALobbyBeaconPlayerState_OnRep_PartyOwner_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
struct ALobbyBeaconPlayerState_OnRep_InLobby_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
struct ALobbyBeaconState_OnRep_WaitForPlayersTimeRemaining_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
struct ALobbyBeaconState_OnRep_LobbyStarted_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
