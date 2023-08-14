#pragma once
#include "Inventory.h"

void ServerHandlePickupHook(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound)
{
	LOG_("InStartDirection: [{},{},{}]", InStartDirection.X, InStartDirection.Y, InStartDirection.Z);
	
	if (Pickup->bPickedUp)
		return;
	
	if (Pawn && Pawn->Controller)
	{
		Pickup->bPickedUp = true;
		Pickup->OnRep_bPickedUp();

		Pawn->IncomingPickups.Add(Pickup);
		auto& LocData = Pickup->PickupLocationData;
		LocData.StartDirection = (FVector_NetQuantizeNormal)InStartDirection;
		LocData.FlyTime = 0.40f;
		LocData.PickupTarget = Pawn;
		LocData.ItemOwner = Pawn;
		LocData.PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
		Pickup->OnRep_PickupLocationData();

		Inventory::AddItem((AFortPlayerController*)Pawn->Controller, Pickup->PrimaryPickupItemEntry.ItemDefinition, Pickup->PrimaryPickupItemEntry.Count, Pickup->PrimaryPickupItemEntry.LoadedAmmo, false);
	}
}

static double (*OnRep_ZiplineState)(void* FortPawn) = decltype(OnRep_ZiplineState)(GetOffsetBRUH(0x16A2800));
void ServerSendZiplineState(AFortPlayerPawn* Pawn, FZiplinePawnState& InState) // maybe call original too?
{
	if (Pawn && Pawn->Controller)
	{
		// IDK WHY CHECK FOR CONTROLLER BECAUSE IF I DONT IT WILL JUST CRASH

		Pawn->ZiplineState = InState;
		
		// PROPER iirc: theres a curve table for zipline jump strenghttththt but I cba to look at it 
		if (InState.bJumped)
		{
			LOG_("ZIPLINES JUMP LOLOOLOLO");
			Pawn->LaunchCharacter(FVector{ 0,0,1200 }, false, true);
		}
		OnRep_ZiplineState(Pawn);
	}
}

// 0x16A94D0: OnCapsuleBeginOverlap TEST idk
void (*OnCapsuleBeginOverlapOG)(AFortPawn* FortPawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
void OnCapsuleBeginOverlapHook(AFortPawn* FortPawn, UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	LOG_("CapsuleBeginOVerlapTEST: 0x{:x}", __int64(_ReturnAddress()) - __int64(GetModuleHandleW(0)));
	if (auto Pawn = Cast<AFortPlayerPawn>(FortPawn))
	{
		LOG_("PANW VLIAD!!!");
		if (auto Pickup = Cast<AFortPickup>(OtherActor))
		{
			LOG_("PICKUP VALID!!");

			if (!Pickup->bPickedUp)
			{
				if (!Pickup->PawnWhoDroppedPickup || Pickup->PawnWhoDroppedPickup != Pawn)
				{
					Pawn->ServerHandlePickup(Pickup, 0.40f, { 1,1,1 }, true);
				}
			}

		}
	}
	return OnCapsuleBeginOverlapOG(FortPawn, OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}


void InitPawnHooks()
{
	VirtualHook(GetDefObj<APlayerPawn_Athena_C>(), 0x1BA, ServerHandlePickupHook);
	// TODO ziplines
	VirtualHook(GetDefObj<APlayerPawn_Athena_C>(), 0x1C5, ServerSendZiplineState);

	MH_CreateHook((LPVOID)GetOffsetBRUH(0x16A94D0), OnCapsuleBeginOverlapHook, (void**)&OnCapsuleBeginOverlapOG);
	MH_EnableHook((LPVOID)GetOffsetBRUH(0x16A94D0));
}