#pragma once
#include "framework.h"

namespace Inventory
{

	AFortInventory* GetInventory(AFortPlayerController* Player) 
	{ 
		auto fire = Player->WorldInventory;		
		return fire;
	}

	void Update(AFortPlayerController* Player)
	{
		auto itslit = GetInventory(Player);
		itslit->HandleInventoryLocalUpdate();
	}

	void AddItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count)
	{
		auto itslit = GetInventory(Player);
		auto ItemBP = ItemDef->CreateTemporaryItemInstanceBP(1, 0);
		auto WorldItem = reinterpret_cast<UFortWorldItem*>(ItemBP);

		WorldItem->ItemEntry.Count = Count;
		WorldItem->ItemEntry.ItemDefinition = ItemDef;
		itslit->Inventory.ReplicatedEntries.Add(WorldItem->ItemEntry);
		itslit->Inventory.ItemInstances.Add(WorldItem);
		Update(Player);
	}

	void RemoveItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef)
	{
		auto& itslit = GetInventory(Player)->Inventory;	
		for (int i = 0; i < itslit.ItemInstances.Num(); i++)
		{
			auto Instance = itslit.ItemInstances[i];
			if (Instance->ItemEntry.ItemDefinition == ItemDef)
			{
				itslit.ItemInstances.Remove(i);

				for (int j = 0; j < itslit.ReplicatedEntries.Num(); j++)
				{
					auto RepEntry = itslit.ReplicatedEntries[j];
					if (RepEntry.ItemDefinition == ItemDef)
					{
						itslit.ReplicatedEntries.Remove(j);
						break;
					}
				}
				break;
			}
		}
		itslit.MarkArrayDirty();
		Update(Player);
	}

	void Setup(AFortPlayerController* Player)
	{
		auto StartingItems = GetGameMode()->StartingItems;

		for (int i = 0; i < StartingItems.Num(); i++)
		{
			auto Item = StartingItems[i];
			AddItem(Player, Item.Item, Item.Count);
		}

		// AddItem(Player, Pickaxe, 1); // get the pickaxe w mcp

		LOG_("Inventory!!!! (Hopefully)");
	}
}