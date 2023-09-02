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

int GetClipSize(UFortItemDefinition* ItemDef)
{
	if (auto RangedDef = Cast<UFortWeaponRangedItemDefinition>(ItemDef))
	{
		auto DataTable = RangedDef->WeaponStatHandle.DataTable;
		auto RowName = RangedDef->WeaponStatHandle.RowName;

		if (DataTable && RowName.ComparisonIndex)
		{
			auto& RowMap = *(UE::TMap<FName, FFortRangedWeaponStats*>*)(__int64(DataTable) + 0x30);
			for (int i = 0; i < RowMap.Pairs.Elements.Data.Num(); ++i)
			{
				auto& ElementData = RowMap.Pairs.Elements.Data[i].ElementData;
				if (ElementData.Value.Second)
				{
					if (ElementData.Value.First == RowName)
					{
						LOG_("CLIPSIZE YAYAYAYAY");
						return ElementData.Value.Second->ClipSize;
					}
				}
			}
		}
	}

	return 0;
}

bool YAYAYAY(UFortItemDefinition* a1)
{
	for (auto& Mapa : LootRows)
	{
		for (auto& LootRow : Mapa.second)
		{
			if (LootRow.ItemDefinition == a1)
				return true;
		}
	}
	return false;
}

void GetRandomMaterialCount(int* WoodOut, int* StoneOut, int* MetalOut)
{
	int random = rand() % 3;
	if (random == 1)
	{
		if (WoodOut && StoneOut && MetalOut)
		{
			*WoodOut = 450;
			*StoneOut = 350;
			*MetalOut = 400;
		}
	}
	if(random == 2)
	{
		if (WoodOut && StoneOut && MetalOut)
		{
			*WoodOut = 300;
			*StoneOut = 500;
			*MetalOut = 450;
		}
	}
	if (random == 3)
	{
		if (WoodOut && StoneOut && MetalOut)
		{
			*WoodOut = 350;
			*StoneOut = 450;
			*MetalOut = 250;
		}
	}
	if (random == 0)
	{
		if (WoodOut && StoneOut && MetalOut)
		{
			*WoodOut = 500;
			*StoneOut = 350;
			*MetalOut = 400;
		}
	}
}

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
		auto& RowMap = *(UE::TMap<FName, FFortLootPackageData*>*)(__int64(LootPackagesDataTable) + 0x30);
		for (int i = 0; i < RowMap.Pairs.Elements.Data.Num(); ++i)
		{
			auto& CurrentRow = RowMap.Pairs.Elements.Data[i];
			FName RowName = CurrentRow.ElementData.Value.First;
			if (RowName.ComparisonIndex)
			{
				std::string RowNameStr = GetString()->Conv_NameToString(RowName).ToString();
				auto PackageData = CurrentRow.ElementData.Value.Second;
				if (!RowNameStr.contains("WorldPKG"))
				{
					// this basically checks for the packages that have a LootPackageCall (SKUNKED)
					if (PackageData->Weight == 0)
						continue;

					LOG_("RowNameStr: {}", RowNameStr);
					LootRow Row = LootRow();
					std::string ItemDefStr = GetString()->Conv_NameToString(PackageData->ItemDefinition.GetAssetPathName()).ToString();
					if (auto ItemDefinition = StaticLoadObject<UFortItemDefinition>(ItemDefStr))
					{
						Row.ItemDefinition = ItemDefinition;
						Row.DropCount = PackageData->Count;
						EFortItemType Type;
						Type = ItemDefinition->GetItemType();

						if (Type == EFortItemType::WeaponRanged)
						{
							auto WorldItemDef = (UFortWorldItemDefinition*)ItemDefinition;
							if (WorldItemDef->GetAmmoWorldItemDefinition_BP() == ItemDefinition)
							{
								LOG_("WOW NOT A RANGED WEAPON");
								Type = EFortItemType::Consumable;
							}
							Row.LoadedAmmo = GetClipSize(ItemDefinition);
						}

						if (ItemDefStr.contains("ItemData"))
						{
							Type = EFortItemType::WorldResource;
							Row.DropCount = 30;
						}

						if(!YAYAYAY(ItemDefinition))
							LootRows[Type].push_back(Row);
					}
				}
			}
		}
	}

	// I gotta load the lootpackage datatable im too lazy to do it for now but ok real ong fr YAY
}

LootRow* GetRandomItem(EFortItemType ItemType = EFortItemType::WeaponRanged)
{
	auto Item = &LootRows[ItemType][rand() % LootRows[ItemType].size()];

	if (Item->ItemDefinition->Tier > EFortItemTier::III && rand() % 100 > 15)
		return GetRandomItem(ItemType);

	return Item;
}

std::vector<LootRow*> GetFloorLoot() // SKUNKED (when is proper wxeighrs:  NEVER)
{
	std::vector<LootRow*> gdgameserver;
	auto bConsumable = rand() % 100 > 70; // 30% chance of consumable

	if (bConsumable)
		gdgameserver.push_back(GetRandomItem(EFortItemType::Consumable));
	else
	{
		auto WeaponItem = GetRandomItem(EFortItemType::WeaponRanged);
		if (WeaponItem && WeaponItem->ItemDefinition)
		{
			auto ammoDef = ((UFortWorldItemDefinition*)WeaponItem->ItemDefinition)->GetAmmoWorldItemDefinition_BP();
			if (ammoDef && ammoDef != WeaponItem->ItemDefinition)
			{
				gdgameserver.push_back(new LootRow{ ammoDef, ammoDef->DropCount });
			}

			gdgameserver.push_back(WeaponItem);
		}
	}

	return gdgameserver;
}
