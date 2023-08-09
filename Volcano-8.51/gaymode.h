#pragma once
#include "framework.h"

bool (*ReadyToStartMatchOG)(void*);
bool ReadyToStartMatchHook(AFortGameModeAthena* a1)
{
	static bool bPLAYLIST = false;
	if (!bPLAYLIST)
	{
		bPLAYLIST = true;

		auto playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_DefaultSolo.Playlist_DefaultSolo");
		if (playlist)
		{
			auto& stuff = GetGameState()->CurrentPlaylistInfo;

			stuff.BasePlaylist = playlist;
			stuff.OverridePlaylist = playlist;
			stuff.PlaylistReplicationKey++;
			stuff.MarkArrayDirty();

			GetGameState()->OnRep_CurrentPlaylistInfo();
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
		a1->bWorldIsReady = true;
		Listen();
	}

	bool testAAAA = ReadyToStartMatchOG(a1);
	LOG_("testAAAA: {}", testAAAA);
	return true;
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