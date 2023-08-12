#pragma once
#include "framework.h"
#include <map>
#include <vector>

struct LootRow
{
	UFortItemDefinition* ItemDefinition = nullptr;
	int DropCount = 1;
	int LoadedAmmo = 0;
};

std::map<EFortItemType, std::vector<LootRow>> LootRows;

void InitLooting()
{
	UDataTable* LootPackagesDataTable = nullptr;
	UDataTable* LootTierGroupDataTable = nullptr; // this is gonna be for proper looting with proper weights means later

	auto Playlist = GetGameState()->CurrentPlaylistInfo.BasePlaylist;
	if (Playlist->LootPackages.ObjectID.AssetPathName.ComparisonIndex)
	{
		LootPackagesDataTable = StaticLoadObject<UDataTable>(GetString()->Conv_NameToString(Playlist->LootPackages.ObjectID.AssetPathName).ToString());
	}

	if (!LootPackagesDataTable)
	{
		// Solos, Duos, Squads, Trios playlist doesn't have lootpackage and loottiergroup datatables maybe some others but I didn't check all
		LootPackagesDataTable = StaticLoadObject<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
	}

	if (LootPackagesDataTable)
	{
		
	}

	// I gotta load the lootpackage datatable im too lazy to do it for now but ok real ong fr YAY
}

char __fastcall SpawnLootHook(ABuildingContainer* Container, AFortPlayerPawn* Pawn)
{
	LOG_("TestaADZA DIZAD ZAIDZA  DZAI DZIDN ZAI NDIZA\n Spawnloot called");

	Container->bAlreadySearched = true;
	Container->OnRep_bAlreadySearched();
	Container->SearchBounceData.SearchAnimationCount++;
	Container->BounceContainer();

	return 1;
}