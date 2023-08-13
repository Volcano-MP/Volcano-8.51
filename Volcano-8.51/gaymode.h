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
			GetGameState()->OnRep_CurrentPlaylistInfo();

			TeamIndex = playlist->DefaultFirstTeam;
			LOG_("FirstTeam: {}", TeamIndex);
			NumPlayerPerTeam = *(int*)(__int64(playlist) + 0x50);
			LOG_("MaxPlayerPerTeam: {}", NumPlayerPerTeam);
			// GetGameMode()->WarmupRequiredPlayerCount = 1; 


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
		Listen();
		a1->bWorldIsReady = true;

		float TimeSeconds = GetStatics()->GetTimeSeconds(GetWorld());
		GetGameState()->WarmupCountdownEndTime = TimeSeconds + 120.f;
		GetGameMode()->WarmupCountdownDuration = 120.f;
		GetGameState()->WarmupCountdownStartTime = TimeSeconds;
		GetGameMode()->WarmupEarlyCountdownDuration = 120.f;

	}

	bool Ret = false;
	Ret = ReadyToStartMatchOG(a1);
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