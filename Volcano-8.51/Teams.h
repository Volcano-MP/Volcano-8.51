#pragma once
#include "framework.h"

static int TeamIndex = 0;
static int NumPlayerPerTeam = 0;
static int CurrentTeamMembers = 0;

// I would use EFortTeam enum but I think Its broken but idk If that would matter
uint8 PickTeamHook(AFortGameModeAthena* GameMode, uint8 PreferredTeam, AFortPlayerControllerAthena* NewPlayer)
{
	if (auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState)
	{/*
		auto TeamTEST = GetGameState()->Teams[TeamIndex == 3 ? TeamIndex : TeamIndex - 1];
		LOG_("LAST TEAM MEMBERSTUFF: {}", TeamTEST->TeamMembers.Num());*/

		int RetValue = TeamIndex;
		CurrentTeamMembers++;
		if (CurrentTeamMembers == NumPlayerPerTeam)
		{
			LOG_("aaa test ong fr !!");
			CurrentTeamMembers = 0;
			TeamIndex++;
		}

		return RetValue;
	}
}

uint8 GetSquadIdForCurrentPlayerHook(AFortGameSessionDedicatedAthena* GameSession, FUniqueNetIdRepl& InUniqueId)
{
	LOG_("GetSquadIdForCurrentPlayer called!");
	return 1;
}