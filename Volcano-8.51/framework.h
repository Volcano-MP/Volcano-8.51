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

bool bMcp = false; // or it will just crash ur game cuz of pickaxe invalid and MISTER. Nacks is stinky 
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
	LOG_("COLLECT GARBAGE GUYS!!");
	return;
}

float GetMaxTickRate()
{
	return 30.f; 
}

__int64 NoMcp()
{
	return !bMcp;
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

UGameplayStatics* GetStatics()
{
	return GetDefObj<UGameplayStatics>();
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