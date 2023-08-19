#pragma once
#include "Teams.h"
#include "Looting.h"

bool (*ReadyToStartMatchOG)(void*);
bool ReadyToStartMatchHook(AFortGameModeAthena* a1)
{
	static bool bPLAYLIST = false;
	if (!bPLAYLIST)
	{
		bPLAYLIST = true;

		auto playlist = UObject::FindObject<UFortPlaylistAthena>(Globals::PlaylistName);
		if (playlist)
		{
			/*playlist->bRespawnInAir = true;
			playlist->RespawnType = EAthenaRespawnType::InfiniteRespawn;
			a1->MinRespawnDelay = 5.f;*/

			GetGameState()->CurrentPlaylistInfo.BasePlaylist = playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();

			GetGameState()->CurrentPlaylistId = playlist->PlaylistId;
			a1->CurrentPlaylistId = playlist->PlaylistId;
			a1->CurrentPlaylistName = playlist->PlaylistName;
			GetGameState()->CachedSafeZoneStartUp = playlist->SafeZoneStartUp;
			GetGameState()->OnRep_CurrentPlaylistId(); // this shit calls some mcp stuff too 
			GetGameState()->OnRep_CurrentPlaylistInfo();

			TeamIndex = playlist->DefaultFirstTeam;
			LOG_("FirstTeam: {}", TeamIndex);
			NumPlayerPerTeam = *(int*)(__int64(playlist) + 0x50);
			LOG_("MaxPlayerPerTeam: {}", NumPlayerPerTeam);
			LOG_("GetGameMode()->WarmupRequiredPlayerCount {}", GetGameMode()->WarmupRequiredPlayerCount);
			GetGameMode()->WarmupRequiredPlayerCount = 1;
			LOG_("GetGameMode()->WarmupRequiredPlayerCount NEW {}", GetGameMode()->WarmupRequiredPlayerCount);

			LOG_("playlist->MaxPlayers: {}", playlist->MaxPlayers);
			a1->GameSession->MaxPlayers = playlist->MaxPlayers;
			a1->FortGameSession->MaxPlayers = playlist->MaxPlayers;

			/*autoTestSession = SpawnActor<AFortGameSessionDedicatedAthena>();
			TestSession->MaxPlayers = playlist->MaxPlayers;
			a1->GameSession = TestSession;
			a1->FortGameSession = TestSession;*/
		}
	}

	// this is just gonna return falkse until mapinfo is there MEANING the server will fully load
	if (!GetGameState()->MapInfo)
		return false;

	static bool bListneing = false;
	if (!bListneing)
	{
		bListneing = true;
		GetGameState()->OnRep_CurrentPlaylistInfo();
		InitLooting();

		auto BR_FloorLoot_Class = StaticLoadObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");
		TArray<AActor*> BR_FloorLootActors;
		GetStatics()->GetAllActorsOfClass(GetWorld(), BR_FloorLoot_Class, &BR_FloorLootActors);
		int SpawnedLoot = 0;
		for (int i = 0; i < BR_FloorLootActors.Num(); i++)
		{
			auto CurrentActor = BR_FloorLootActors[i];
			if (CurrentActor)
			{
				FVector Loc = CurrentActor->K2_GetActorLocation();
				Loc.Z += 30;
				SpawnedLoot++;
				auto loot = GetFloorLoot();
				for (auto& LootItem : loot)
				{
					SpawnPickup(LootItem->ItemDefinition, LootItem->DropCount, LootItem->LoadedAmmo, Loc, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::Unset);
				}

				CurrentActor->K2_DestroyActor(); // bruh
			}
		}
		BR_FloorLootActors.Free();

		auto Warmup_FloorLoot_Class = StaticLoadObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C");
		TArray<AActor*> Warmup_FloorlootActors;
		GetStatics()->GetAllActorsOfClass(GetWorld(), Warmup_FloorLoot_Class, &Warmup_FloorlootActors);
		for (int i = 0; i < Warmup_FloorlootActors.Num(); i++)
		{
			auto CurrentActor = Warmup_FloorlootActors[i];
			if (CurrentActor)
			{
				FVector Loc = CurrentActor->K2_GetActorLocation();
				Loc.Z += 30;
				SpawnedLoot++;
				auto loot = GetFloorLoot();
				for (auto& LootItem : loot)
				{
					SpawnPickup(LootItem->ItemDefinition, LootItem->DropCount, LootItem->LoadedAmmo, Loc, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::Unset);
				}
				CurrentActor->K2_DestroyActor(); // this should call uhh SpawnLoot
			}
		}
		Warmup_FloorlootActors.Free();

		LOG_("Spawned Loot: {}", SpawnedLoot);

		Listen();
		a1->bWorldIsReady = true;

		float TimeSeconds = GetStatics()->GetTimeSeconds(GetWorld());
		GetGameState()->WarmupCountdownEndTime = TimeSeconds + 120.f;
		GetGameMode()->WarmupCountdownDuration = 120.f;
		GetGameState()->WarmupCountdownStartTime = TimeSeconds;
		GetGameMode()->WarmupEarlyCountdownDuration = 120.f;

		static __int64 (*DedicatedServerStuff)(__int64) = decltype(DedicatedServerStuff)(GetOffsetBRUH(0x1525A10));
		// DedicatedServerStuff(__int64(a1->FortGameSession)); 

	}

	bool Ret = false;
	Ret = ReadyToStartMatchOG(a1);
	if (Ret == true)
	{
		LOG_("returned true somehow??");
	}
	/*if (bMcp && GetGameState()->TotalPlayers > 0)
	{
		LOG_("should of return true ");
		return true;
	}*/
	// Ret = true; // idk why the OG doesn't set it smh
	return Ret;
}

APawn* SpawnDefaultPawnForHook(AGameModeBase* a1, AController* NewPlayer, AActor* StartSpot)
{
	if (NewPlayer && StartSpot)
	{
		auto aa = StartSpot->GetTransform();

		return a1->SpawnDefaultPawnAtTransform(NewPlayer, aa);
	}
	return 0;
}

void HOKSREAL()
{
	MH_CreateHook((LPVOID)GetOffsetBRUH(0x307C130), ReadyToStartMatchHook, (void**)&ReadyToStartMatchOG);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0x307C130));

	MH_CreateHook((LPVOID)GetOffsetBRUH(0xFB4A00), SpawnDefaultPawnForHook, nullptr);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0xFB4A00));
}