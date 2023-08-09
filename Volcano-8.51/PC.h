#pragma once
#include "Abilites.h"

void ServerAcknowledgePossessionHook(AFortPlayerController* PC, APawn* P)
{
	PC->AcknowledgedPawn = P;
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
			// GrantAbilitySet(PlayerState);
			LOG_("aaaa ablitliese!");
		}
	}

	return ServerReadyToStartMatchOG(PC);
}

void InitHoksPC()
{
	VirtualHook(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x108, ServerAcknowledgePossessionHook);
	VirtualHook(AAthena_PlayerController_C::StaticClass()->DefaultObject, 0x25F, ServerReadyToStartMatchHook, (void**)&ServerReadyToStartMatchOG);
}