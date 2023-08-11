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
	// I gotta load the lootpackage datatable im too lazy to do it for now but ok real ong fr YAY
}

char __fastcall SpawnLootHook(ABuildingContainer* BuildingContainer)
{
	LOG_("TestaADZA DIZAD ZAIDZA  DZAI DZIDN ZAI NDIZA\n Spawnloot called");
	LOG_("UwU : 0x{:x}", __int64(BuildingContainer));
}