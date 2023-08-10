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
		
		static auto PUMP = UObject::FindObject<UFortItemDefinition>("WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
		static auto AR = UObject::FindObject<UFortItemDefinition>("WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03");
		static auto Grappler = UObject::FindObject<UFortItemDefinition>("WID_Hook_Gun_VR_Ore_T03.WID_Hook_Gun_VR_Ore_T03");
		static auto arzarar = UObject::FindObject<UFortItemDefinition>("AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
		static auto shells = UObject::FindObject<UFortItemDefinition>("AthenaAmmoDataShells.AthenaAmmoDataShells");

		Inventory::AddItem(PC, AR, 1, 30);
		Inventory::AddItem(PC, PUMP, 1, 5);
		Inventory::AddItem(PC, Grappler, 1, 10);
		Inventory::AddItem(PC, arzarar, 30);
		Inventory::AddItem(PC, shells, 30);

		static auto Mats = UObject::FindObject<UFortItemDefinition>("WoodItemData.WoodItemData");
		Inventory::AddItem(PC, Mats, 9999);
		PC->bInfiniteAmmo = true;
		PC->bBuildFree = true;
		// RemoveFromAlivePlayers seems auto too SOMEHOW idfk
		LOG_("TeamIndex: {}", PlayerState->TeamIndex); // pickteam seems automatic idk how BRUH i don't even hook right addr
		PlayerState->SquadId = PlayerState->TeamIndex - 2;
		PlayerState->OnRep_PlayerTeam();
		PlayerState->OnRep_PlayerTeamPrivate();
		PlayerState->OnRep_TeamIndex(0);
		PlayerState->OnRep_SquadId();

		FGameMemberInfo test{ -1,-1,-1 };
		test.TeamIndex = PlayerState->TeamIndex;
		test.SquadId = PlayerState->SquadId;
		test.MemberUniqueId = PlayerState->UniqueId;

		GetGameState()->GameMemberInfoArray.Members.Add(test);
		GetGameState()->GameMemberInfoArray.MarkItemDirty(test);
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

			if(!PC->bBuildFree)
				Inventory::RemoveItem(PC, GetFortKismet()->K2_GetResourceItemDefinition(NewBuilding->ResourceType), 10);
		}
	}
}

void ServerBeginEditingBuildingActorHook(AFortPlayerController* PC, ABuildingSMActor* BuildingActorToEdit)
{
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	if (Pawn && BuildingActorToEdit)
	{
		static auto EditToolDef = StaticFindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");
		if (Pawn->CurrentWeapon->WeaponData != EditToolDef)
		{
			if (auto EditToolEntry = Inventory::FindItemEntry(PC, EditToolDef))
				PC->ServerExecuteInventoryItem(EditToolEntry->ItemGuid);
		}

		auto EditTool = (AFortWeap_EditingTool*)Pawn->CurrentWeapon;
		EditTool->EditActor = BuildingActorToEdit;
		EditTool->OnRep_EditActor();
		BuildingActorToEdit->EditingPlayer = (AFortPlayerStateAthena*)PC->PlayerState;
		BuildingActorToEdit->OnRep_EditingPlayer();
	}
}

// Idk about this offset theres 2 refs again but I think its the right one
static ABuildingSMActor* (*ReplaceBuildingActorOG)(ABuildingSMActor*, char, UClass*, int, uint8, bool, AController*) = decltype(ReplaceBuildingActorOG)(GetOffsetBRUH(0x11252B0));
void ServerEditBuildingActorHook(AFortPlayerController* PC, ABuildingSMActor* BuildingActorToEdit, UClass* NewBuildingClass, uint8 RotationIterations, bool bMirrored)
{
	if (PC && BuildingActorToEdit && NewBuildingClass)
	{
		if (auto NewBuilding = ReplaceBuildingActorOG(BuildingActorToEdit, 1, NewBuildingClass, BuildingActorToEdit->CurrentBuildingLevel, RotationIterations, bMirrored, PC))
		{
			NewBuilding->bPlayerPlaced = true;

			BuildingActorToEdit->EditingPlayer = nullptr;
			BuildingActorToEdit->OnRep_EditingPlayer();
		}
	}
}

void ServerEndEditingBuildingActorHook(AFortPlayerController* PC, ABuildingSMActor* BuildingActorToStopEditing)
{
	if (PC && PC->Pawn && BuildingActorToStopEditing)
	{
		BuildingActorToStopEditing->EditingPlayer = nullptr;
		BuildingActorToStopEditing->OnRep_EditingPlayer();

		AFortWeap_EditingTool* EditTool = (AFortWeap_EditingTool*)((APlayerPawn_Athena_C*)PC->Pawn)->CurrentWeapon;
		if (EditTool)
		{
			EditTool->bEditConfirmed = true;
			EditTool->EditActor = nullptr;
			EditTool->OnRep_EditActor();
		}
	}
}

void ServerClientIsReadyToRespawn(AFortPlayerControllerAthena* PC)
{
	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	auto& RespawnData = PlayerState->RespawnData;
	if (RespawnData.bRespawnDataAvailable && RespawnData.bServerIsReady)
	{
		RespawnData.bClientIsReady = true;

		FTransform Transform{};
		Transform.Translation = RespawnData.RespawnLocation;
		Transform.Scale3D = FVector{ 1,1,1 };
		auto Pawn = (AFortPlayerPawnAthena*)GetGameMode()->SpawnDefaultPawnAtTransform(PC, Transform);
		PC->Possess(Pawn);
		Pawn->SetMaxHealth(100);
		Pawn->SetHealth(100);
		Pawn->SetMaxShield(100);
		Pawn->SetShield(100);
		PC->RespawnPlayerAfterDeath(true);
	}
}

static void (*RemoveFromAlivePlayerOG)(void*, void*, void*, void*, void*, EDeathCause, char) = decltype(RemoveFromAlivePlayerOG)(GetOffsetBRUH(0xFAE8C0));
void (*ClientOnPawnDiedOG)(AFortPlayerControllerZone* a1, FFortPlayerDeathReport a2);
void ClientOnPawnDiedHook(AFortPlayerControllerZone* DeadPlayer, FFortPlayerDeathReport& DeathReport)
{
	auto DeadPawn = (AFortPlayerPawnAthena*)DeadPlayer->Pawn;
	auto DeadPlayerState = (AFortPlayerStateAthena*)DeadPlayer->PlayerState;
	auto KillerPlayerState = (AFortPlayerStateAthena*)DeathReport.KillerPlayerState;
	auto KillerPawn = (AFortPlayerPawnAthena*)DeathReport.KillerPawn;

	if (!DeadPawn || !DeadPlayerState)
		return ClientOnPawnDiedOG(DeadPlayer, DeathReport);

	EDeathCause DeathCause = DeadPlayerState->ToDeathCause(DeathReport.Tags, DeadPawn->bIsDBNO);
	FDeathInfo& DeathInfo = DeadPlayerState->DeathInfo; // tbh I think settings DeathInfo stuff manually is IMPROPER
	DeathInfo.bInitialized = true;
	DeathInfo.bDBNO = DeadPawn->bIsDBNO;
	DeathInfo.DeathCause = DeathCause;
	DeathInfo.FinisherOrDowner = KillerPlayerState ? KillerPlayerState : DeadPlayerState;
	DeathInfo.Distance = DeathCause == EDeathCause::FallDamage ? DeadPawn->LastFallDistance : DeadPawn->GetDistanceTo(KillerPawn);
	DeathInfo.DeathLocation = DeadPawn ? DeadPawn->K2_GetActorLocation() : FVector{};

	DeadPlayerState->PawnDeathLocation = DeathInfo.DeathLocation;
	DeadPlayerState->OnRep_DeathInfo();

	if (KillerPlayerState && KillerPlayerState != DeadPlayerState)
	{
		KillerPlayerState->KillScore++;
		KillerPlayerState->TeamKillScore++;
		KillerPlayerState->ClientReportKill(DeadPlayerState);
		KillerPlayerState->OnRep_Kills();
		KillerPlayerState->OnRep_TeamScore();

		KillerPlayerState->Score++;
		KillerPlayerState->TeamScore++;
		KillerPlayerState->OnRep_Score();
	}

	if (!GetGameState()->IsRespawningAllowed(DeadPlayerState))
	{
		if (!DeadPawn->IsDBNO())
		{
			if (DeadPlayer->WorldInventory)
			{
				for (int i = 0; i < DeadPlayer->WorldInventory->Inventory.ItemInstances.Num(); i++)
				{
					if (DeadPlayer->WorldInventory->Inventory.ItemInstances[i]->CanBeDropped())
					{
						SpawnPickup(&DeadPlayer->WorldInventory->Inventory.ItemInstances[i]->ItemEntry, DeadPawn->K2_GetActorLocation(), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination);
					}
				}
			}

			UFortItemDefinition* WeaponDef = nullptr;
			auto DamageCauser = DeathReport.DamageCauser;
			if (DamageCauser)
			{
				if (auto WEAPON = Cast<AFortWeapon>(DamageCauser))
				{
					WeaponDef = WEAPON->WeaponData;
				}
			}

			RemoveFromAlivePlayerOG(GetGameMode(), DeadPlayer, KillerPlayerState == DeadPlayerState ? nullptr : KillerPlayerState, KillerPawn, WeaponDef, DeathInfo.DeathCause, 0);
		}
	}

	return ClientOnPawnDiedOG(DeadPlayer, DeathReport);
}

void InitHoksPC()
{
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x108, ServerAcknowledgePossessionHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x1FD, ServerExecuteInventoryItem);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x223, ServerCreateBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x22A, ServerBeginEditingBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x225, ServerEditBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x228, ServerEndEditingBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x25F, ServerReadyToStartMatchHook, (void**)&ServerReadyToStartMatchOG);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x458, ServerClientIsReadyToRespawn);

	MH_CreateHook((LPVOID)GetOffsetBRUH(0x1AEC9A0), ClientOnPawnDiedHook, (void**)&ClientOnPawnDiedOG);
}