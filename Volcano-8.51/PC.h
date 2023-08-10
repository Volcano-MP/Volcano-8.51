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

		Inventory::AddItem(PC, PC->CosmeticLoadoutPC.Pickaxe->WeaponDefinition, 1);
	}

	return ServerReadyToStartMatchOG(PC);
}

void InitHoksPC()
{
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x108, ServerAcknowledgePossessionHook);
	VirtualHook(GetDefObj<AAthena_PlayerController_C>(), 0x25F, ServerReadyToStartMatchHook, (void**)&ServerReadyToStartMatchOG);
}