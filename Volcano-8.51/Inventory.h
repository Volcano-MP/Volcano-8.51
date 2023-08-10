#pragma once
#include "framework.h"

namespace Inventory
{

	void Update(AFortPlayerController* Player, FFortItemEntry* Entry = nullptr)
	{
		Player->WorldInventory->HandleInventoryLocalUpdate();

		if (Entry)
			Player->WorldInventory->Inventory.MarkItemDirty(*Entry);
		else
			Player->WorldInventory->Inventory.MarkArrayDirty();
	}

	void AddItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count)
	{
		// buddy nax didn't u know that CreateTemporaryItemInstanceBP sets the Count and the ItemDefinition
		auto WorldItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 0);
		WorldItem->SetOwningControllerForTemporaryItem(Player);
		Player->WorldInventory->Inventory.ReplicatedEntries.Add(WorldItem->ItemEntry);
		Player->WorldInventory->Inventory.ItemInstances.Add(WorldItem);
		Update(Player);
	}

	void RemoveItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef)
	{
		for (int i = 0; i < Player->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			if (Player->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemDefinition == ItemDef)
			{
				Player->WorldInventory->Inventory.ItemInstances.Remove(i);

				for (int j = 0; j < Player->WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
				{
					if (Player->WorldInventory->Inventory.ReplicatedEntries[j].ItemDefinition == ItemDef)
					{
						Player->WorldInventory->Inventory.ReplicatedEntries.Remove(j);
						break;
					}
				}
				break;
			}
		}
		Update(Player);
	}
}