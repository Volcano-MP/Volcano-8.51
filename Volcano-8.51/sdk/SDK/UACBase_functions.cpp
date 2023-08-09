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


// Function UACBase.UACNetworkComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToServer(uint8 Type, TArray<uint8>& Packet)
{
	static auto Func = Class->GetFunction("UACNetworkComponent", "SendPacketToServer");

	Params::UUACNetworkComponent_SendPacketToServer_Params Parms;

	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UACBase.UACNetworkComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// uint8                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToClient(uint8 Type, TArray<uint8>& Packet)
{
	static auto Func = Class->GetFunction("UACNetworkComponent", "SendPacketToClient");

	Params::UUACNetworkComponent_SendPacketToClient_Params Parms;

	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UACBase.UACNetworkComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32                             SessionKey                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendClientHello(uint32 SessionKey)
{
	static auto Func = Class->GetFunction("UACNetworkComponent", "SendClientHello");

	Params::UUACNetworkComponent_SendClientHello_Params Parms;

	Parms.SessionKey = SessionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
