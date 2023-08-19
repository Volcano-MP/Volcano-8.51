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
		auto& test = PC->CosmeticLoadoutPC;
		if (test.Pickaxe)
		{
			LOG_("valid picakxe!!!");
			LOG_("aa: {}", test.Pickaxe->GetName());
		}

		Inventory::AddItem(PC, test.Pickaxe ? test.Pickaxe->WeaponDefinition : YAYA->WeaponDefinition, 1);
		
		/*static auto PUMP = UObject::FindObject<UFortItemDefinition>("WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
		static auto AR = UObject::FindObject<UFortItemDefinition>("WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03");
		static auto Grap = UObject::FindObject<UFortItemDefinition>("WID_Hook_Gun_VR_Ore_T03.WID_Hook_Gun_VR_Ore_T03");

		static auto aaa = UObject::FindObject<UFortItemDefinition>("WID_Sniper_Heavy_Athena_VR_Ore_T03.WID_Sniper_Heavy_Athena_VR_Ore_T03");
		static auto bbbb = UObject::FindObject<UFortItemDefinition>("WID_Assault_AutoDrum_Athena_R_Ore_T03.WID_Assault_AutoDrum_Athena_R_Ore_T03");
		static auto bbbc = UObject::FindObject<UFortItemDefinition>("WID_Pistol_Flintlock_Athena_UC.WID_Pistol_Flintlock_Athena_UC");*/

		/*Inventory::AddItem(PC, bbbc, 1, 5);
		Inventory::AddItem(PC, aaa, 1, 30);
		Inventory::AddItem(PC, bbbb, 1, 5);
		Inventory::AddItem(PC, AR, 1, 30);
		Inventory::AddItem(PC, PUMP, 1, 5);
		Inventory::AddItem(PC, ((UFortWeaponItemDefinition*)aaa)->GetAmmoWorldItemDefinition_BP(), 9999);
		Inventory::AddItem(PC, ((UFortWeaponItemDefinition*)bbbb)->GetAmmoWorldItemDefinition_BP(), 9999);
		Inventory::AddItem(PC, ((UFortWeaponItemDefinition*)AR)->GetAmmoWorldItemDefinition_BP(), 9999);
		Inventory::AddItem(PC, ((UFortWeaponItemDefinition*)PUMP)->GetAmmoWorldItemDefinition_BP(), 9999);*/
		// Inventory::AddItem(PC, Grap, 1, 10);

		//// Inventory::AddItem(PC, shells, 30);
		//PC->bInfiniteAmmo = true;
		//PC->bBuildFree = true;
		//PC->bInfiniteMagazine = true; // TEST
		// TODO: GameplayModifiers implementatipons

		LOG_("TeamIndex: {}", PlayerState->TeamIndex); // pickteam nvm im high
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
		GetGameState()->GameMemberInfoArray.MarkArrayDirty();

		static bool bTest = false;
		if (!bTest)
		{
			// GetGameState()->TotalPlayers++;
			// AFortPlayerController::OnReadyToStartMatch: Marking player MCP:<Redacted> ready to start
			// ^ heres where this stuff stops, gamemode doesn't return true at ReadyToStartMatch, no idea why yet
		}
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

// Test: 0x16E2230
void (*GetPlayerViewPointOG)(AFortPlayerController* a1, FVector a2, FRotator a3);
void GetPlayerViewPointHook(AFortPlayerController* a1, FVector& a2, FRotator& a3)
{
	if (auto Pawn = a1->Pawn)
	{
		a2 = Pawn->K2_GetActorLocation();
		a3 = a1->GetControlRotation();
		return;
	}

	return GetPlayerViewPointOG(a1, a2, a3);
}

DWORD ThreadTEST(LPVOID)
{
	Sleep(5500);
	static void (*sub_7FF6B922C400)(__int64, char) = decltype(sub_7FF6B922C400)(GetOffsetBRUH(0xFBC400));
	sub_7FF6B922C400(__int64(GetGameMode()), 1); // if I look more into this I may be able to find 

	GetGameState()->SafeZonesStartTime = 0.01f;
	GetGameState()->bAircraftIsLocked = false;
	return 1;
}

void (*EnterAircraft)(AFortPlayerController* a1, unsigned __int64 AircraftProbably);
void EnterAircraftHook(AFortPlayerControllerAthena* a1, unsigned __int64 a2)
{
	LOG_("__int64(a1): {}", __int64(a1));
	LOG_("a22: {}", a2);
	
	/*if (auto PC = Cast<AFortPlayerControllerAthena>(a1))
	{
		LOG_("testesetsetsetsets");
	}*/

	static bool aa1WOWRACIST = false;
	if (!aa1WOWRACIST && Globals::bLategame)
	{
		aa1WOWRACIST = true;
		auto Aircraft = GetGameState()->GetAircraft(0);
		LOG_("TESTESTESTE: num safe zones locations {}", GetGameMode()->SafeZoneLocations.Num());

		Aircraft->FlightInfo.FlightSpeed = 0.01f;
		FVector Loc = GetGameMode()->SafeZoneLocations[4];
		Loc.Z = 19000;
		Aircraft->FlightInfo.FlightStartLocation = (FVector_NetQuantize100)Loc;

		Aircraft->FlightInfo.TimeTillFlightEnd = 10;
		Aircraft->FlightInfo.TimeTillDropEnd = 10;
		Aircraft->FlightInfo.TimeTillDropStart = 5;
		Aircraft->DropStartTime = GetStatics()->GetTimeSeconds(GetWorld()) + 5;
		Aircraft->DropEndTime = GetStatics()->GetTimeSeconds(GetWorld()) + 7;
		GetGameState()->bAircraftIsLocked = true;

		CreateThread(0, 0, ThreadTEST, 0, 0, 0);
	}

	if (a1->WorldInventory)
	{
		std::vector<FGuid> ToDropGoodSir{};
		auto InstancesPtr = &a1->WorldInventory->Inventory.ItemInstances;
		for (int i = 0; i < InstancesPtr->Num(); i++)
		{
			if (InstancesPtr->operator[](i))
			{
				if (((UFortWorldItemDefinition*)InstancesPtr->operator[](i)->ItemEntry.ItemDefinition)->bCanBeDropped)
				{
					LOG_("REAL 1");
					ToDropGoodSir.push_back(InstancesPtr->operator[](i)->ItemEntry.ItemGuid);
				}
			}
		}

		for (auto& Guid : ToDropGoodSir)
		{
			Inventory::RemoveItem(a1, Guid);
		}

		Inventory::Update(a1);

		if (Globals::bLategame)
		{
			auto first = GetRandomItem(EFortItemType::WeaponRanged);
			auto second = GetRandomItem(EFortItemType::WeaponRanged);
			auto third = GetRandomItem(EFortItemType::WeaponRanged);
			auto fourth = GetRandomItem(EFortItemType::Consumable);
			auto fifth = GetRandomItem(EFortItemType::Consumable);

			static auto MatReal = UObject::FindObject<UFortItemDefinition>("WoodItemData.WoodItemData");
			static auto MatReal2 = UObject::FindObject<UFortItemDefinition>("MetalItemData.MetalItemData");
			static auto MatReal3 = UObject::FindObject<UFortItemDefinition>("StoneItemData.StoneItemData");

			int WoodCount = 0, MetalCount = 0, StoneCount = 0;
			GetRandomMaterialCount(&WoodCount, &StoneCount, &MetalCount);

			Inventory::AddItem(a1, first->ItemDefinition, first->DropCount, first->LoadedAmmo);
			Inventory::AddItem(a1, second->ItemDefinition, second->DropCount, second->LoadedAmmo);
			Inventory::AddItem(a1, third->ItemDefinition, third->DropCount, third->LoadedAmmo);
			Inventory::AddItem(a1, fourth->ItemDefinition, fourth->DropCount, fourth->LoadedAmmo);
			Inventory::AddItem(a1, fifth->ItemDefinition, fifth->DropCount, fifth->LoadedAmmo);

			Inventory::AddItem(a1, ((UFortWeaponItemDefinition*)first->ItemDefinition)->GetAmmoWorldItemDefinition_BP(), 200);
			Inventory::AddItem(a1, ((UFortWeaponItemDefinition*)second->ItemDefinition)->GetAmmoWorldItemDefinition_BP(), 200);
			Inventory::AddItem(a1, ((UFortWeaponItemDefinition*)third->ItemDefinition)->GetAmmoWorldItemDefinition_BP(), 200);

			Inventory::AddItem(a1, MatReal, WoodCount);
			Inventory::AddItem(a1, MatReal3, StoneCount);
			Inventory::AddItem(a1, MatReal2, MetalCount);

		}
	}

	return EnterAircraft(a1, a2);
}

// TEST
void (*ServerSetTeam)(void*, uint8);
void ServerSetTeamHook(AFortPlayerControllerAthena* PC, uint8 NewTeam)
{
	ServerSetTeam(PC, NewTeam); // the original does pretty much as setting TeamIndex and respawning player probably well I just gotta update the gamememberinfoarray
	LOG_("ServerSetTeam CALLED, {}", NewTeam);
	// idk maybe check for SquadId
	if (auto PlayerState = Cast<AFortPlayerStateAthena>(PC->PlayerState))
	{

		PlayerState->OnRep_TeamIndex(PlayerState->TeamIndex);
		PlayerState->SquadId = PlayerState->TeamIndex - 2;
		PlayerState->OnRep_PlayerTeam();
		PlayerState->OnRep_PlayerTeamPrivate();
		PlayerState->OnRep_SquadId();

		LOG_("new squadid: {}", PlayerState->SquadId);

		for (int i = 0; i < GetGameState()->GameMemberInfoArray.Members.Num(); i++)
		{
			auto CurrentUniqueId = GetGameState()->GameMemberInfoArray.Members[i].MemberUniqueId;
			if (PlayerState->AreUniqueIDsIdentical(CurrentUniqueId, PlayerState->UniqueId))
			{
				LOG_("FOUNDD ODUDUD DUODUODU UNIQUEID");
				GetGameState()->GameMemberInfoArray.Members.Remove(i); // idk why crash tho if I just change it and call MarkItemDirty so skunky bozo
				GetGameState()->GameMemberInfoArray.MarkArrayDirty();

				FGameMemberInfo test{ -1,-1,-1 };
				test.TeamIndex = PlayerState->TeamIndex;
				test.SquadId = PlayerState->SquadId;
				test.MemberUniqueId = PlayerState->UniqueId;

				GetGameState()->GameMemberInfoArray.Members.Add(test);
				GetGameState()->GameMemberInfoArray.MarkItemDirty(test);
			}
		}
	}
	
	return;
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
	DeadPlayerState->DeathInfo.bInitialized = true;
	DeadPlayerState->DeathInfo.bDBNO = DeadPawn->bIsDBNO;
	DeadPlayerState->DeathInfo.DeathCause = DeathCause;
	DeadPlayerState->DeathInfo.FinisherOrDowner = KillerPlayerState ? KillerPlayerState : DeadPlayerState;
	DeadPlayerState->DeathInfo.Distance = DeathCause == EDeathCause::FallDamage ? DeadPawn->LastFallDistance : DeadPawn->GetDistanceTo(KillerPawn);
	DeadPlayerState->DeathInfo.DeathLocation = DeadPawn ? DeadPawn->K2_GetActorLocation() : FVector{};

	DeadPlayerState->PawnDeathLocation = DeadPlayerState->DeathInfo.DeathLocation;
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
						SpawnPickup(DeadPlayer->WorldInventory->Inventory.ItemInstances[i]->ItemEntry, DeadPawn->K2_GetActorLocation(), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination);
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

			RemoveFromAlivePlayerOG(GetGameMode(), DeadPlayer, KillerPlayerState == DeadPlayerState ? nullptr : KillerPlayerState, KillerPawn, WeaponDef, DeadPlayerState->DeathInfo.DeathCause, 0);
		}
	}

	return ClientOnPawnDiedOG(DeadPlayer, DeathReport);
}

void ServerPlayEmoteItemHook(AFortPlayerControllerAthena* PC, UFortItemDefinition* EmoteAsset)
{
	if (PC->IsInAircraft())
		return; // tbh checking for PC->Pawn should do the same idk

	if (auto Pawn = (APlayerPawn_Athena_C*)PC->Pawn)
	{
		if (auto DanceItemDefinition = Cast<UAthenaDanceItemDefinition>(EmoteAsset))
		{
			LOG_("EMOTING !!!");
			auto Granted = GrantAbility((AFortPlayerStateAthena*)PC->PlayerState, UGAB_Emote_Generic_C::StaticClass(), DanceItemDefinition, true);

			Pawn->bMovingEmote = DanceItemDefinition->bMovingEmote;
			Pawn->bMovingEmoteForwardOnly = DanceItemDefinition->bMoveForwardOnly;
			Pawn->EmoteWalkSpeed = DanceItemDefinition->WalkForwardSpeed;

			((AFortPlayerStateAthena*)PC->PlayerState)->AbilitySystemComponent->ServerTryActivateAbility(Granted->Handle, Granted->InputPressed, Granted->ActivationInfo.PredictionKeyWhenActivated);
		}
	}
}

void ServerAttemptInventoryDropHook(AFortPlayerController* PC, FGuid& ItemGuid, int32 Count)
{
	if (auto Pawn = PC->Pawn)
	{
		if (auto ItemEntry = Inventory::FindItemEntry(PC, ItemGuid))
		{
			if (Count > ItemEntry->Count)
				return;

			auto Spawned = SpawnPickup(*ItemEntry, Pawn->K2_GetActorLocation(), EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset);
			Spawned->PawnWhoDroppedPickup = (AFortPawn*)PC->Pawn;
			Inventory::RemoveItem(PC, ItemEntry->ItemDefinition, Count);
		}
	}
}

void (*ServerAttemptInteractOG)(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, __int64);
void ServerAttemptInteractHook(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, __int64 ssss)
{
	auto PC = Cast<AFortPlayerController>(Comp->GetOwner());
	if (PC)
	{
		if (auto Container = Cast<ABuildingContainer>(ReceivingActor))
		{
			auto ClassName = Container->Class->GetName();

			Container->bAlreadySearched = true;
			Container->OnRep_bAlreadySearched();
			Container->SearchBounceData.SearchAnimationCount++;
			Container->BounceContainer();
			/*FVector aa;
			FVector bbb;
			Container->StartBounceAnimation(0, 0, aa, bbb, EFortBounceType::Interact, false);*/

			FVector Loc = Container->K2_GetActorLocation() + (Container->GetActorRightVector() * 44);
			Loc.Z += 24;

			std::vector<LootRow*> LOOT;
			if (ClassName.contains("Chest"))
			{
				auto Weapon = GetRandomItem(EFortItemType::WeaponRanged);

				LootRow* AmmoRow = new LootRow();
				auto Ammo = ((UFortWeaponItemDefinition*)Weapon->ItemDefinition)->GetAmmoWorldItemDefinition_BP();
				AmmoRow->ItemDefinition = Ammo;
				AmmoRow->DropCount = Ammo->DropCount;

				auto Consumable = GetRandomItem(EFortItemType::Consumable);
				auto WorldResource = GetRandomItem(EFortItemType::WorldResource);

				LOOT.push_back(Weapon);
				LOOT.push_back(AmmoRow);
				LOOT.push_back(Consumable);
				LOOT.push_back(WorldResource);
			}
			if (ClassName.contains("Ammo"))
			{
				if(rand() % 20 > 15)
					LOOT.push_back(GetRandomItem(EFortItemType::Ammo));
				LOOT.push_back(GetRandomItem(EFortItemType::Ammo));
			}

			for (auto& LootItem : LOOT)
			{
				SpawnPickup(LootItem->ItemDefinition, LootItem->DropCount, LootItem->LoadedAmmo, Loc, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::Unset);
			}
		}
	}

	return ServerAttemptInteractOG(Comp, ReceivingActor, InteractComponent, InteractType, ssss); // theres more stuff in the params but I cba cuz unreflected elements
}

//void (*ServerAttemptAircraftJumpOG)(void*, FRotator);
//void ServerAttemptAircraftJump(AFortPlayerControllerAthena* PC, FRotator& a2)
//{
//	if (Globals::bLategame)
//	{
//		LOG_("LATEGAME JUMP");
//		FVector Loc = GetGameMode()->SafeZoneLocations[4];
//		Loc.Z = 14567;
//
//		FTransform SpawnTransform{};
//		SpawnTransform.Translation = Loc;
//		SpawnTransform.Scale3D = FVector{ 1,1,1 };
//		// no need to set Rotation + this is so bad I want it so I can start safeZones phase before players jump
//
//		auto NewPawn = GetGameMode()->SpawnDefaultPawnAtTransform(PC, SpawnTransform);
//		PC->Possess(NewPawn);
//
//		return; 
//	}
//
//	return ServerAttemptAircraftJumpOG(PC, a2);
//}

// aaTest: 0x1003280
void (*ExitAircraft)(AFortPlayerControllerAthena* a1);
void ExitAircraftHook(AFortPlayerControllerAthena* a1)
{
	if (a1)
	{
		ExitAircraft(a1);

		if (Globals::bLategame)
		{
			LOG_("LATEAGAMGAMGMAEGMAEMGAMEG");
			FVector Loc = GetGameMode()->SafeZoneLocations[4];
			Loc.Z = 19000;
			FRotator Rot = a1->GetControlRotation();
			if (a1->Pawn)
			{
				LOG_("VALID PANW OALOZADZAODLOZADOZADL");
				a1->Pawn->K2_TeleportTo(Loc, Rot);
				((AFortPawn*)a1->Pawn)->SetShield(100);
			}
		}

		return;
	}

	return ExitAircraft(a1);
}

void InitHoksPC()
{
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x108, ServerAcknowledgePossessionHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x1FD, ServerExecuteInventoryItem);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x223, ServerCreateBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x22A, ServerBeginEditingBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x225, ServerEditBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x228, ServerEndEditingBuildingActorHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x1BC, ServerPlayEmoteItemHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x25F, ServerReadyToStartMatchHook, (void**)&ServerReadyToStartMatchOG);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x458, ServerClientIsReadyToRespawn);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x210, ServerAttemptInventoryDropHook);
	VirtualHook(GetDefObj<UFortControllerComponent_Interaction>(), 0x80, ServerAttemptInteractHook, (void**)&ServerAttemptInteractOG);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x420, ServerSetTeamHook, (void**)&ServerSetTeam);
	// VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x433, ServerAttemptAircraftJump, (void**)&ServerAttemptAircraftJumpOG);

	MH_CreateHook((LPVOID)GetOffsetBRUH(0x1003280), ExitAircraftHook, (void**)&ExitAircraft);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0x1003280));

	MH_CreateHook((LPVOID)GetOffsetBRUH(0x10020E0), EnterAircraftHook, (void**)&EnterAircraft);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0x10020E0));

	MH_CreateHook((LPVOID)GetOffsetBRUH(0x16E2230), GetPlayerViewPointHook, (void**)&GetPlayerViewPointOG);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0x16E2230));

	MH_CreateHook((LPVOID)GetOffsetBRUH(0x1AEC9A0), ClientOnPawnDiedHook, (void**)&ClientOnPawnDiedOG);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0x1AEC9A0));
}