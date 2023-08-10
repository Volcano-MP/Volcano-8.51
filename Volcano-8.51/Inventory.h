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

	FFortItemEntry* FindItemEntry(AFortPlayerController* PC, FGuid& OtherGuid)
	{
		if (!PC || !PC->WorldInventory)
			return nullptr;
		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); ++i)
		{
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == OtherGuid)
			{
				return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return nullptr;
	}

	FFortItemEntry* FindItemEntry(AFortPlayerController* PC, UFortItemDefinition* ItemDef)
	{
		if (!PC || !PC->WorldInventory)
			return nullptr;
		for (int i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); ++i)
		{
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition == ItemDef)
			{
				return &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			}
		}
		return nullptr;
	}

	UFortWorldItem* CreateItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = 1)
	{
		auto WorldItem = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 0);
		WorldItem->SetOwningControllerForTemporaryItem(Player);
		return WorldItem;
	}

	FFortItemEntry* AddItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = 1, int LoadedAmmo = -1, bool bIncrementLoadedAmmo = false)
	{
		if (!ItemDef || !Player || !Player->WorldInventory)
			return nullptr;

		if (auto FoundEntry = Inventory::FindItemEntry(Player, ItemDef))
		{
			// MISter Player already has the iTME!!!
			// so increment count ig !!

			int NewCount = FoundEntry->Count + Count;
			if (NewCount > ItemDef->MaxStackSize)
			{
				// stinky bozo L
				FoundEntry->Count = ItemDef->MaxStackSize;
				Player->ServerAttemptInventoryDrop(FoundEntry->ItemGuid, NewCount - ItemDef->MaxStackSize); // im bad at math so kys
			}
			else
			{
				FoundEntry->Count = NewCount;
			}

			if (LoadedAmmo != -1 && bIncrementLoadedAmmo)
				FoundEntry->LoadedAmmo += LoadedAmmo;

			Update(Player, FoundEntry);
			return FoundEntry;
		}

		if (auto NewItem = CreateItem(Player, ItemDef, Count))
		{
			if (LoadedAmmo != -1)
				NewItem->ItemEntry.LoadedAmmo = LoadedAmmo;

			if (ItemDef->MaxStackSize < Count)
			{
				NewItem->ItemEntry.Count = ItemDef->MaxStackSize;
				Player->ServerAttemptInventoryDrop(NewItem->ItemEntry.ItemGuid, Count - ItemDef->MaxStackSize);
			}

			Player->WorldInventory->Inventory.ItemInstances.Add(NewItem);
			Player->WorldInventory->Inventory.ReplicatedEntries.Add(NewItem->ItemEntry);

			Update(Player); // tbh this is just to call HandleInventoryLocalUpdate, I could call it after adding all the items I want but nvm idc

			return &NewItem->ItemEntry;
		}
	}

	void RemoveItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = -1)
	{
		for (int j = 0; j < Player->WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
		{
			if (Player->WorldInventory->Inventory.ReplicatedEntries[j].ItemDefinition == ItemDef)
			{
				if (Count == -1 || Count >= Player->WorldInventory->Inventory.ReplicatedEntries[j].Count)
				{
					Player->WorldInventory->Inventory.ReplicatedEntries.Remove(j);
					break;
				}
				
				Player->WorldInventory->Inventory.ReplicatedEntries[j].Count -= Count;
				Update(Player, &Player->WorldInventory->Inventory.ReplicatedEntries[j]); // MarkItemDirty
				return;
			}
		}

		for (int i = 0; i < Player->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			if (Player->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemDefinition == ItemDef)
			{
				Player->WorldInventory->Inventory.ItemInstances.Remove(i);

				
				break;
			}
		}
		Update(Player);
	}
}