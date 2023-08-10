#pragma once
#include "Inventory.h"

void (*o_OnDamageServer)(ABuildingActor*, float, FGameplayTagContainer, FVector, FHitResult, AActor*, AActor*, FGameplayEffectContextHandle);
void h_OnDamageServer(ABuildingActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AActor* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle a8)
{
	auto BuildingActor = Cast<ABuildingSMActor>(Actor);
	if (!BuildingActor)
		return o_OnDamageServer(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, a8);

	if (auto PC = Cast<AFortPlayerControllerAthena>(InstigatedBy))
	{
		// the InstigatedBy is a playercontrollerAthena
		if (auto Pawn = (AFortPlayerPawn*)PC->Pawn)
		{
			if (!BuildingActor->bDestroyed && !BuildingActor->bPlayerPlaced)
			{
				if (auto Weapon = Cast<AFortWeapon>(DamageCauser))
				{
					if (Cast<UFortWeaponMeleeItemDefinition>(Weapon->WeaponData))
					{
						bool WeakSpot = Damage == 100.f;
						int ToGive = 0;

						auto Definition = GetFortKismet()->K2_GetResourceItemDefinition(BuildingActor->ResourceType);
						if (Definition)
						{
							// SKUNKY BOZO BUT IDGAF AS IT WORKS WELL
							ToGive = GetMath()->RandomIntegerInRange(6, 10);
							if (WeakSpot)
								ToGive += GetMath()->RandomIntegerInRange(2, 5);

							PC->ClientReportDamagedResourceBuilding(BuildingActor, BuildingActor->ResourceType, ToGive, false, WeakSpot);

							Inventory::AddItem(PC, Definition, ToGive);
						}
					}
				}
			}
		}
	}

	return o_OnDamageServer(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, a8);
}

void InitFarming()
{
	// TODO: 0x1AB37E0 if this one doesn't work cuz theres 2 refs
	MH_CreateHook((LPVOID)GetOffsetBRUH(0x18F0570), h_OnDamageServer, (void**)&o_OnDamageServer);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0x18F0570));
}