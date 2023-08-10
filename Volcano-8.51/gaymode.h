#pragma once
#include "Teams.h"

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
			GetGameState()->CurrentPlaylistInfo.BasePlaylist = playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
			GetGameState()->OnRep_CurrentPlaylistInfo();

			// GetGameMode()->WarmupRequiredPlayerCount = 1; 
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
		Listen();
		a1->bWorldIsReady = true;


		float TimeSeconds = GetStatics()->GetTimeSeconds(GetWorld());
		GetGameState()->WarmupCountdownEndTime = TimeSeconds + 60.f;
		GetGameMode()->WarmupCountdownDuration = 60.f;
		GetGameState()->WarmupCountdownStartTime = TimeSeconds;
		GetGameMode()->WarmupEarlyCountdownDuration = 60.f;

		auto Playlist = GetGameState()->CurrentPlaylistInfo.BasePlaylist;

		TeamIndex = Playlist->DefaultFirstTeam;
		LOG_("FirstTeam: {}", TeamIndex);
		NumPlayerPerTeam = Playlist->MaxSquadSize;
		LOG_("MaxPlayerPerTeam: {}", NumPlayerPerTeam);
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