#pragma once
#include "Abilites.h"
#include "Inventory.h"

static void* (*sub_7FF6B99CFE30)(void*, void*) = decltype(sub_7FF6B99CFE30)(GetOffsetBRUH(0x175FE30));
void ServerAcknowledgePossessionHook(AFortPlayerController* PC, APawn* P)
{
	PC->AcknowledgedPawn = P;

	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	auto FortPawn = PC->MyFortPawn;
	if (PlayerState && FortPawn)
	{
		auto& CosmeticLoadout = PC->CosmeticLoadoutPC;
		if (CosmeticLoadout.Character)
		{
			if (CosmeticLoadout.Character->HeroDefinition)
			{
				FortPawn->CosmeticLoadout = CosmeticLoadout;
				FortPawn->OnRep_CosmeticLoadout();

				PlayerState->HeroType = CosmeticLoadout.Character->HeroDefinition;
				PlayerState->OnRep_HeroType(); // yay

				sub_7FF6B99CFE30(PlayerState, FortPawn); // test idk
			}
		}
	}
}

// TODO: check the original
void (*ServerReadyToStartMatchOG)(AController*);
void ServerReadyToStartMatchHook(AFortPlayerController* PC)
{
	if (PC)
	{
		auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
		if (PlayerState)
		{
			GrantAbilitySet(PlayerState);
		}

		// Inventory::Setup(PC); // YOU FKN STUPID NAX!

		for (int i = 0; i < GetGameMode()->StartingItems.Num(); i++)
		{
			Inventory::AddItem(PC, GetGameMode()->StartingItems[i].Item, GetGameMode()->StartingItems[i].Count);
		}

		static auto YAYA = UObject::FindObject<UAthenaPickaxeItemDefinition>("DefaultPickaxe.DefaultPickaxe");
		Inventory::AddItem(PC, PC->CosmeticLoadoutPC.Pickaxe ? PC->CosmeticLoadoutPC.Pickaxe->WeaponDefinition : YAYA->WeaponDefinition, 1);
	}

	return ServerReadyToStartMatchOG(PC);
}

void ServerExecuteInventoryItem(AFortPlayerController* PC, FGuid& ItemGuid)
{
	if (auto Pawn = (AFortPlayerPawn*)PC->Pawn)
	{
		if (auto ItemEntry = Inventory::FindItemEntry(PC, ItemGuid))
		{
			Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemEntry->ItemDefinition, ItemEntry->ItemGuid);
		}
	}
}

static bool (*CantBuild)(UWorld*, UObject*, FVector, FRotator, char, void*, char*) = decltype(CantBuild)(GetOffsetBRUH(0x1330D70)); // 0x1330D70
void ServerCreateBuildingActorHook(AFortPlayerControllerAthena* PC, FCreateBuildingActorData& CreateBuildingData)
{
	// auto Class = PC->BroadcastRemoteClientInfo->RemoteBuildableClass.Get(); // 0x28D8
	auto Class = (*(AFortBroadcastRemoteClientInfo**)(__int64(PC) + 0x28D8))->RemoteBuildableClass.Get();
	TArray<AActor*> BuildingActorsToDestroy;
	char Result;
	if (!CantBuild(GetWorld(), Class, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &BuildingActorsToDestroy, &Result))
	{
		for (int i = 0; i < BuildingActorsToDestroy.Num(); i++)
		{
			BuildingActorsToDestroy[i]->K2_DestroyActor();
		}
		BuildingActorsToDestroy.Free();

		if (auto NewBuilding = SpawnActor<ABuildingSMActor>(Class, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot))
		{
			NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, PC, true);
			NewBuilding->bPlayerPlaced = true;
			// *(uint8*)(__int64(NewBuilding) + 0x403) = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex;
			NewBuilding->Team = EFortTeam(((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex);
			NewBuilding->TeamIndex = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex;
			NewBuilding->OnRep_Team();

			Inventory::RemoveItem(PC, GetFortKismet()->K2_GetResourceItemDefinition(NewBuilding->ResourceType), 10);
		}
	}
}

void InitHoksPC()
{
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x108, ServerAcknowledgePossessionHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x1FD, ServerExecuteInventoryItem);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x223, ServerCreateBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x25F, ServerReadyToStartMatchHook, (void**)&ServerReadyToStartMatchOG);
}