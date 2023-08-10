#pragma once
#include <Windows.h>
#include <cstdio>
#include <format>
#include <iostream>

#include "sdk/SDK.hpp"
using namespace SDK;

#include "minhook/MinHook.h"
#pragma comment(lib, "minhook/minhook.lib")

#define LOG_(...) std::cout << "GAMESERBIR : " << std::format(__VA_ARGS__) << std::endl;

uintptr_t GetOffsetBRUH(uintptr_t Offset)
{
	return __int64(GetModuleHandleW(0)) + Offset;
}

static UNetDriver* (*CreateNetDriver)(UEngine*, UWorld*, FName) = decltype(CreateNetDriver)(GetOffsetBRUH(0x2FBED30));
static void (*SetWorld)(UNetDriver*, UWorld*) = decltype(SetWorld)(GetOffsetBRUH(0x2D38590));
static bool (*InitListenOG)(void*, void*, FURL&, bool, FString&) = decltype(InitListenOG)(GetOffsetBRUH(0x634C10));
static void (*ServerReplicateActors)(void*);

BYTE* __fastcall ChangeGameSessionId()
{
	return nullptr;
}

bool bMcp = true; // or it will just crash ur game cuz of pickaxe invalid and MISTER. Nacks is stinky 
__int64 (__fastcall *DispatchReqOG)(__int64 a1, __int64* a2, int a3);
__int64 __fastcall DispatchReqHook(__int64 a1, __int64* a2, int a3)
{
	if (bMcp)
	{
		a3 = 3;
	}
	return DispatchReqOG(a1, a2, a3);
}

// 0x2D39300
// frf rfr frf rf
void (*TickFlushOG)(UNetDriver*, float);
void TickFlushHook(UNetDriver* a1, float a2)
{
	if (a1->ClientConnections.Num() > 0)
	{
		if (a1->ReplicationDriver)
			ServerReplicateActors(a1->ReplicationDriver);
	}
	return TickFlushOG(a1, a2);
}

char KickPlayer(__int64, __int64, __int64)
{
	return 1;
}

char ValFailure1(__int64, __int64)
{
	return 0;
}

__int64 UWorldGetNetMode(UWorld* a1)
{
	return 1;
}

__int64 AActorGetNetMode(AActor* a1)
{
	return 1;
}

template<typename T>
T* GetDefObj()
{
	return (T*)T::StaticClass()->DefaultObject;
}

UFortEngine* GetEngine()
{
	static auto clapped = UObject::FindObject<UFortEngine>("FortEngine_");
	return clapped;
}

UWorld* GetWorld()
{
	return GetEngine()->GameViewport->World;
}

AFortGameStateAthena* GetGameState()
{
	return (AFortGameStateAthena*)GetWorld()->GameState;
}

AFortGameModeAthena* GetGameMode()
{
	return (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
}

UFortKismetLibrary* GetFortKismet()
{
	return GetDefObj<UFortKismetLibrary>();
}

void VirtualHook(void* Objce, int Index, void* Detour, void** OG = nullptr)
{
	auto vft = *(void***)Objce;
	if (!vft || !vft[Index])
	{
		return;
	}

	if (OG)
		*OG = vft[Index];

	DWORD dwOld; 
	VirtualProtect(&vft[Index], 8, PAGE_EXECUTE_READWRITE, &dwOld); // sizeof(void*)

	vft[Index] = Detour;

	DWORD dwTemp;
	VirtualProtect(&vft[Index], 8, dwOld, &dwTemp); // sizeof(void*)
}

void Listen()
{
	GetWorld()->NetDriver = CreateNetDriver(GetEngine(), GetWorld(), FName(282));
	if (!GetWorld()->NetDriver)
	{
		LOG_("good luck fixing the next crash!");
	}
	GetWorld()->NetDriver->NetDriverName = FName(282);
	GetWorld()->NetDriver->World = GetWorld(); // useless idk tbh but it crashes when I don't set this var

	FString err;
	FURL url = FURL();
	url.Port = 7777; // I would make this port something gay cuz yall mfs but I forgor I will get spammed for why not join
	InitListenOG(GetWorld()->NetDriver, GetWorld(), url, false, err);
	SetWorld(GetWorld()->NetDriver, GetWorld());

	GetWorld()->LevelCollections[0].NetDriver = GetWorld()->NetDriver;
	GetWorld()->LevelCollections[1].NetDriver = GetWorld()->NetDriver;


	void** repDriverVTable = *(void***)GetWorld()->NetDriver->ReplicationDriver;
	LOG_("aaaa : {}", __int64(repDriverVTable) - __int64(GetModuleHandleW(0)));
	ServerReplicateActors = decltype(ServerReplicateActors)(repDriverVTable[0x56]); // fr
}