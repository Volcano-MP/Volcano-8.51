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
		if (!PC || !PC->WorldInventory || !ItemDef)
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

	void RemoveItem(AFortPlayerController* Player, FGuid& ItemGuid, int Count = -1)
	{
		for (int j = 0; j < Player->WorldInventory->Inventory.ReplicatedEntries.Num(); j++)
		{
			if (Player->WorldInventory->Inventory.ReplicatedEntries[j].ItemGuid == ItemGuid)
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
			if (Player->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == ItemGuid)
			{
				Player->WorldInventory->Inventory.ItemInstances.Remove(i);

				break;
			}
		}
		Update(Player);
	}

	EFortQuickBars GetQuickBars(UFortItemDefinition* ItemDefinition)
	{
		if (!ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortEditToolItemDefinition::StaticClass()) &&
			!ItemDefinition->IsA(UFortBuildingItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortTrapItemDefinition::StaticClass()))
			return EFortQuickBars::Primary;

		return EFortQuickBars::Secondary;
	}

	bool IsInventoryFull(AFortPlayerController* PC)
	{
		int aaaaaa = 0;
		auto InstancesPtr = &PC->WorldInventory->Inventory.ItemInstances;
		for (int i = 0; i < InstancesPtr->Num(); i++)
		{
			if (InstancesPtr->operator[](i))
			{
				if (GetQuickBars(InstancesPtr->operator[](i)->ItemEntry.ItemDefinition) == EFortQuickBars::Primary)
				{
					aaaaaa++;

					if (aaaaaa >= 5)
					{
						break;
					}
				}
			}
		}

		return aaaaaa >= 5;
	}

	FFortItemEntry* AddItem(AFortPlayerController* Player, UFortItemDefinition* ItemDef, int Count = 1, int LoadedAmmo = -1, bool bForceCreate = false)
	{
		if (!ItemDef || !Player || !Player->WorldInventory)
			return nullptr;

		if (!bForceCreate)
		{
			if (auto FoundEntry = Inventory::FindItemEntry(Player, ItemDef))
			{
				if (ItemDef->MaxStackSize <= 1)
				{
					return AddItem(Player, ItemDef, Count, LoadedAmmo, true);
				}

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

				Update(Player, FoundEntry);
				return FoundEntry;
			}
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

		return nullptr;
	}
}

// 0x18A7A60
void (*sub_7FF6B9B17A60_OG)(AFortWeapon* a1, unsigned int a2); // idk if calling the original back if it does some stuff I haven't checked the original too much
void sub_7FF6B9B17A60(AFortWeapon* a1, unsigned int a2)
{
	if (a1->WeaponData)
	{
		LOG_("foggot");
		if (auto Pawn = Cast<AFortPawn>(a1->GetOwner()))
		{
			if (auto PC = Cast<AFortPlayerController>(Pawn->Controller))
			{
				if (auto AmmoDef = a1->WeaponData->GetAmmoWorldItemDefinition_BP())
				{
					Inventory::RemoveItem(PC, AmmoDef, a2);
				}

				if (auto Entry = Inventory::FindItemEntry(PC, a1->WeaponData))
				{
					int New = Entry->LoadedAmmo - a2;
					int ToRemove = New < 0 ? Entry->LoadedAmmo : a2;
					
					Entry->LoadedAmmo -= ToRemove;
					Inventory::Update(PC, Entry);
				}
			}
		}
	}

	return sub_7FF6B9B17A60_OG(a1, a2);
}

// UFunction: /Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute
void (*K2_CommitExecute)(UFortGameplayAbility* a1);
void K2_CommitExecuteHook(UFortGameplayAbility* a1)
{
	if (a1->IsA(UGA_Ranged_GenericDamage_C::StaticClass()))
	{
		LOG_("works ");
		if (auto Pawn = a1->GetActivatingPawn())
		{
			if (auto PC = (AFortPlayerController*)Pawn->Controller) // Cast??
			{
				if (Pawn->CurrentWeapon)
				{
					if (auto Entry = Inventory::FindItemEntry(PC, Pawn->CurrentWeapon->ItemEntryGuid))
					{
						Entry->LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
						Inventory::Update(PC, Entry);
					}
				}
			}
		}
	}

	return K2_CommitExecute(a1); // Return OG ??
}