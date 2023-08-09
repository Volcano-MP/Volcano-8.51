#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELobbyBeaconJoinState : uint8
{
	None                           = 0,
	SentJoinRequest                = 1,
	JoinRequestAcknowledged        = 2,
	ELobbyBeaconJoinState_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x18 - 0xC)
// ScriptStruct Lobby.LobbyPlayerStateActorInfo
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_E86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ALobbyBeaconPlayerState*               LobbyPlayerState;                                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct Lobby.LobbyPlayerStateInfoArray
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
public:
	TArray<struct FLobbyPlayerStateActorInfo>    Players;                                           // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class ALobbyBeaconState*                     ParentState;                                       // 0x118(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
