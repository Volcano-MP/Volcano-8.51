#pragma once
#include <Windows.h>
#include <cstdio>
#include <format>
#include <iostream>
#include <intrin.h>
#include "ue.h"

#include "minhook/MinHook.h"
#pragma comment(lib, "minhook/minhook.lib")

#include <fstream>

static std::ofstream AAAA("FortniteLogs.log");
#define LOG_(...) { std::cout << "GAMESERBIR : " << std::format(__VA_ARGS__) << std::endl; AAAA << std::format(__VA_ARGS__) << std::endl; }

namespace Globals
{
	// std::string PlaylistName = "Playlist_Playground.Playlist_Playground";
	std::string PlaylistName = "Playlist_DefaultSolo.Playlist_DefaultSolo";
	// std::string PlaylistName = "Playlist_Low_Solo.Playlist_Low_Solo";
	bool bLategame = true;
}

// 0xFAABC0
__int64 __fastcall PreLoginTest(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
	LOG_("PRELOIGN CALLED");
	return 1;
}

// hmmm
const wchar_t* (*DedicatedServer_GetPoolOG)(char a1);
const wchar_t* DedicatedServer_GetPool(char PlaylistModeIdk)
{
	auto OriginalRet = DedicatedServer_GetPoolOG(PlaylistModeIdk);
	LOG_("dddddd 0x{:x}", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

	return L"All";
}

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

template<typename T>
T* Cast(UObject* Object, bool bForceCheck = true)
{
	if (Object)
	{
		if (bForceCheck)
		{
			return Object->IsA(T::StaticClass()) ? (T*)Object : nullptr;
		}
		else
		{
			return (T*)Object;
		}
	}
	return nullptr;
}

static bool bMcp = true; 
void (*DispatchReqOG)(__int64 a1, __int64* a2, int a3);
void DispatchReqHook(__int64 a1, __int64* a2, int a3)
{
	LOG_("DispatchRequest: 0x{:x}", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)))
	return DispatchReqOG(a1, a2, bMcp ? 3 : a3);
}

char __fastcall CanActivateAbility(__int64 a1, unsigned int a2, DWORD* a3, __int64 a4, __int64 a5, __int64* a6)
{
	// LOG_("CanActivateAbility called")
	return 1;
}

// 0x2D39300
// frf rfr frf rf
void (*TickFlushOG)(UNetDriver*);
void TickFlushHook(UNetDriver* a1)
{
	if (!a1)
		return;

	if (a1->ClientConnections.Num() > 0 && a1->ReplicationDriver && !a1->ClientConnections[0]->InternalAck)
		ServerReplicateActors(a1->ReplicationDriver);

	return TickFlushOG(a1);
}

void CollectGarbage()
{
	LOG_("COLLECT GARBAGE CALLED");
	return;
}

float GetMaxTickRate()
{
	return 30.f; 
}

__int64 NoMcp()
{
	if(__int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)) != 0x16ddffc)
		LOG_("NoMcp retaddr: 0x{:x}", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));

	return 0;
}

char KickPlayer(__int64, __int64, __int64)
{
	return 1;
}

char ValFailure1(__int64, __int64)
{
	return 0;
}

__int64 __fastcall NoReserve(__int64 a1, __int64 a2, __int64 a3, char a4)
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

UGameplayStatics* GetStatics()
{
	return GetDefObj<UGameplayStatics>();
}

UKismetStringLibrary* GetString()
{
	return GetDefObj<UKismetStringLibrary>();
}

UKismetMathLibrary* GetMath()
{
	return GetDefObj<UKismetMathLibrary>();
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

template<typename UEType>
UEType* StaticFindObject(const std::string& ObjectName, UClass* Class = UObject::StaticClass())
{
	auto OrigInName = std::wstring(ObjectName.begin(), ObjectName.end()).c_str();
	static void* (*StaticFindObjectOG)(UClass*, UObject * Package, const wchar_t* OrigInName, bool ExactClass) = decltype(StaticFindObjectOG)(__int64(GetModuleHandleW(0)) + 0x1E825F0);
	return (UEType*)StaticFindObjectOG(Class, nullptr, OrigInName, false);
}

template<typename T = UObject>
T* StaticLoadObject(const std::string& Name)
{
	T* Object = StaticFindObject<T>(Name);

	if (!Object)
	{
		static void* (*StaticLoadObjectOG)(UClass * Class, UObject * InOuter, const TCHAR * Name, const TCHAR * Filename, uint32_t LoadFlags, UObject * Sandbox, bool bAllowObjectReconciliation, void*) = decltype(StaticLoadObjectOG)(__int64(GetModuleHandleW(0)) + 0x1E82EE0);
		auto NameO = std::wstring(Name.begin(), Name.end()).c_str();
		Object = (T*)StaticLoadObjectOG(T::StaticClass(), nullptr, NameO, nullptr, 0, nullptr, false, nullptr);
	}

	return Object;
}

void sinCos(float* ScalarSin, float* ScalarCos, float Value)
{
	float quotient = (0.31830988618f * 0.5f) * Value;
	if (Value >= 0.0f)
	{
		quotient = (float)((int)(quotient + 0.5f));
	}
	else
	{
		quotient = (float)((int)(quotient - 0.5f));
	}
	float y = Value - (2.0f * 3.1415926535897932f) * quotient;
	float sign;
	if (y > 1.57079632679f)
	{
		y = 3.1415926535897932f - y;
		sign = -1.0f;
	}
	else if (y < -1.57079632679f)
	{
		y = -3.1415926535897932f - y;
		sign = -1.0f;
	}
	else
	{
		sign = +1.0f;
	}
	float y2 = y * y;
	*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;
	float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
	*ScalarCos = sign * p;
}

FQuat FRotToQuat(FRotator Rot)
{
	const float DEG_TO_RAD = 3.1415926535897932f / (180.f);
	const float DIVIDE_BY_2 = DEG_TO_RAD / 2.f;
	float SP, SY, SR;
	float CP, CY, CR;

	sinCos(&SP, &CP, Rot.Pitch * DIVIDE_BY_2);
	sinCos(&SY, &CY, Rot.Yaw * DIVIDE_BY_2);
	sinCos(&SR, &CR, Rot.Roll * DIVIDE_BY_2);

	FQuat RotationQuat;
	RotationQuat.X = CR * SP * SY - SR * CP * CY;
	RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
	RotationQuat.Z = CR * CP * SY - SR * SP * CY;
	RotationQuat.W = CR * CP * CY + SR * SP * SY;

	return RotationQuat;
}

template<typename T>
T* SpawnActor(UClass* Class = T::StaticClass(), FVector Loc = {}, FRotator Rot = {}, AActor* Owner = nullptr)
{
	FTransform Transform{};
	Transform.Scale3D = FVector(1, 1, 1);
	Transform.Translation = Loc;
	Transform.Rotation = FRotToQuat(Rot);

	return (T*)GetStatics()->FinishSpawningActor(GetStatics()->BeginDeferredActorSpawnFromClass(GetWorld(), Class, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner), Transform);
}

void Listen()
{
	GetWorld()->NetDriver = CreateNetDriver(GetEngine(), GetWorld(), FName(282));
	if (!GetWorld()->NetDriver)
	{
		return;
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

int GetPropOffset(UObject* Object, const std::string& PropertyName)
{
	for (auto Class = Object->Class; Class; Class = (UClass*)Class->Super)
	{
		auto Property = Class->Children;
		if (Property)
		{
			std::string PropName = Property->GetName();
			if (PropName == PropertyName)
			{
				return *(int*)(__int64(Property) + 0x44); // Offset_Internal
			}

			while (Property)
			{
				if (PropName == PropertyName)
				{
					return *(int*)(__int64(Property) + 0x44); // Offset_Internal
				}

				Property = Property->Next;
				PropName = Property ? Property->GetName() : "";
			}
		}
	}
	return 0;
}

AFortPickupAthena* SpawnPickup(FFortItemEntry& ItemEntry, FVector Loc, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source, int OverrideCount = -1)
{
	auto SpawnedPickup = SpawnActor<AFortPickupAthena>(AFortPickupAthena::StaticClass(), Loc);
	SpawnedPickup->bRandomRotation = true;

	SpawnedPickup->PrimaryPickupItemEntry = ItemEntry;
	SpawnedPickup->PrimaryPickupItemEntry.Count = OverrideCount != -1 ? OverrideCount : ItemEntry.Count;
	SpawnedPickup->OnRep_PrimaryPickupItemEntry();

	SpawnedPickup->TossPickup(Loc, nullptr, -1, true, SourceType, Source);

	SpawnedPickup->SetReplicateMovement(true);
	SpawnedPickup->MovementComponent = (UProjectileMovementComponent*)GetStatics()->SpawnObject(UProjectileMovementComponent::StaticClass(), SpawnedPickup);
	if (SourceType == EFortPickupSourceTypeFlag::Container)
	{
		SpawnedPickup->bTossedFromContainer = true;
		SpawnedPickup->OnRep_TossedFromContainer();
	}

	return SpawnedPickup;
}

AFortPickupAthena* SpawnPickup(UFortItemDefinition* ItemDef, int OverrideCount, int LoadedAmmo, FVector Loc, EFortPickupSourceTypeFlag SourceType, EFortPickupSpawnSource Source)
{
	auto SpawnedPickup = SpawnActor<AFortPickupAthena>(AFortPickupAthena::StaticClass(), Loc);
	SpawnedPickup->bRandomRotation = true;

	auto& PickupEntry = SpawnedPickup->PrimaryPickupItemEntry;
	PickupEntry.ItemDefinition = ItemDef;
	PickupEntry.Count = OverrideCount;
	PickupEntry.LoadedAmmo = LoadedAmmo;
	PickupEntry.ReplicationKey++;
	SpawnedPickup->OnRep_PrimaryPickupItemEntry();

	SpawnedPickup->TossPickup(Loc, nullptr, -1, true, SourceType, Source);

	SpawnedPickup->SetReplicateMovement(true);
	SpawnedPickup->MovementComponent = (UProjectileMovementComponent*)GetStatics()->SpawnObject(UProjectileMovementComponent::StaticClass(), SpawnedPickup);

	if (SourceType == EFortPickupSourceTypeFlag::Container)
	{
		SpawnedPickup->bTossedFromContainer = true;
		SpawnedPickup->OnRep_TossedFromContainer();
	}

	return SpawnedPickup;
}

static int WOW = 0;
void (*SetMegaStormStuffidkREALOG)(AFortGameModeAthena*, int);
void SetMegaStormStuffHOOK(AFortGameModeAthena* a1, int a2)
{
	LOG_("a2: {}", a2);
	if (!Globals::bLategame)
		return SetMegaStormStuffidkREALOG(a1, a2);

	SetMegaStormStuffidkREALOG(a1, a2);

	auto GameState = GetGameState();
	if (GameState)
	{
		LOG_("logggggg 1");

		if (WOW < 4)
		{
			GameState->SafeZoneIndicator->SafeZoneStartShrinkTime = GetStatics()->GetTimeSeconds(GetWorld()) + 0.f;
			GameState->SafeZoneIndicator->SafeZoneFinishShrinkTime = GameState->SafeZoneIndicator->SafeZoneStartShrinkTime + 0.f;
		}
		if (WOW == 3) // WOW
		{
			GameState->SafeZoneIndicator->SafeZoneStartShrinkTime = GetStatics()->GetTimeSeconds(GetWorld()) + 30.f;
		}
		WOW++;
	}

	return;
}