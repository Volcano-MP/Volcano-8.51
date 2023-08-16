// dllmain.cpp : Définit le point d'entrée de l'application DLL.
#include "gaymode.h"
#include "framework.h"
#include "PC.h"
#include "Farming.h"
#include "Teams.h"
#include "Pawn.h"
#include "Vehicles.h"
#include "backend.h"

DWORD Main(LPVOID)
{
    AllocConsole();
    FILE* streamPtr;
    freopen_s(&streamPtr, "CONOUT$", "w", stdout);
    // unlocked console!
    SetConsoleTitleA("FMOD ON TOP!!!");

    MH_Initialize();
    InitGObjects();

    Sleep(5000); // Reboot Launcher 

    LOG_("UwU time to open levle!!!");
    LOG_("skidada!da!ad!dad!ad!a");


    ((UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass()->DefaultObject)->ExecuteConsoleCommand(GetWorld(), L"open Athena_Terrain", nullptr);
    GetEngine()->GameInstance->LocalPlayers.Remove(0);

    void** VTAblAAAA = *(void***)GetDefObj<UAbilitySystemComponent>();
    LOG_("aaaa: 0x{:x}", __int64(VTAblAAAA) - __int64(GetModuleHandleW(0)));

    void** VFTYAYONG = *(void***)GetDefObj<AAthena_PlayerController_C>();
    LOG_("pc vft: 0x{:x}", __int64(VFTYAYONG) - __int64(GetModuleHandleW(0)));

    void** TESTSETESTEST = *(void***)GetDefObj<AFortGameSessionDedicatedAthena>();
    LOG_("gamesessionAthena vft: 0x{:x}", __int64(TESTSETESTEST) - __int64(GetModuleHandleW(0)));

    void** WWGang = *(void***)GetDefObj<APlayerPawn_Athena_C>();
    LOG_("PlayerPawn_Athena_C vft: 0x{:x}", __int64(WWGang) - __int64(GetModuleHandleW(0)));

    void** cccc = *(void***)GetDefObj<UFortGameplayAbility>();
    LOG_("UFortGameplayAbility vft: 0x{:x}", __int64(cccc) - __int64(GetModuleHandleW(0)));

    auto Addr = GetOffsetBRUH(0xFF343C);  // 0xFF343B // WARMUP CRASH
    DWORD oldProtection;
    VirtualProtect((LPVOID)Addr, 1, PAGE_EXECUTE_READWRITE, &oldProtection);

    *(uint8_t*)Addr = 0x85;
    DWORD tempProtection;
    VirtualProtect((LPVOID)Addr, 1, oldProtection, &tempProtection);

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x2D39300), TickFlushHook, (void**)&TickFlushOG);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x2D39300));

    // I don't really know why is this but it doesn't call SpawnDefaultPawnFor when im making a3 argument 3 imma check what happens
    MH_CreateHook((LPVOID)GetOffsetBRUH(0xCF2E80), DispatchReqHook, (void**)&DispatchReqOG); // 0xCF2E80
    MH_EnableHook((LPVOID)GetOffsetBRUH(0xCF2E80));

    // 0x2C03D20
    // 0x2C0 3D20
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x2C03D20), KickPlayer, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x2C03D20));

    // AActor::GetNetMode crashing fr on gang!
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x12E7410), ChangeGameSessionId, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x12E7410));

    // 0x15392D0 
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x15392D0), ValFailure1, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x15392D0));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0xBCFB60), NoReserve, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0xBCFB60));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x30100A0), UWorldGetNetMode, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x30100A0));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x29A40F0), AActorGetNetMode, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x29A40F0));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x13876D0), NoMcp, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x13876D0));

    InitHoksPC();
    InitAbilities();
    
    InitFarming();
    HOKSREAL();
    InitPawnHooks();
    InitVehicleHooks();

    Backend::Setup();

    VirtualHook(GetEngine(), 0x50, GetMaxTickRate);
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x1E054E0), CollectGarbage, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x1E054E0));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0xFA9B20), PickTeamHook, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0xFA9B20));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0xFB9830), SetMegaStormStuffHOOK, (void**)&SetMegaStormStuffidkREALOG);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0xFB9830));
    
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x18A7A60), sub_7FF6B9B17A60, (void**)&sub_7FF6B9B17A60_OG);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x18A7A60));

    /*MH_CreateHook((LPVOID)GetOffsetBRUH(0x15801C0), DedicatedServer_GetPool, (void**)&DedicatedServer_GetPoolOG);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x15801C0));*/

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x830630), CanActivateAbility, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x830630));

    /*MH_CreateHook((LPVOID)GetOffsetBRUH(0xFAABC0), PreLoginTest, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0xFAABC0));*/

    //0x10F9FC0
    /*MH_CreateHook((LPVOID)GetOffsetBRUH(0x10F9FC0), SpawnLootHook, (void**)&SpawnLootOG);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x10F9FC0));*/

    auto NotifyAcceptingConnectionSomethingIDK = GetOffsetBRUH(0x3012AEA);
    auto BYTE = (uint8_t*)NotifyAcceptingConnectionSomethingIDK;

    LOG_("Old : 0x{:x}", *BYTE);
    *BYTE = 0x74;
    LOG_("New: 0x{:x}", *BYTE);

    // VirtualHook(GetDefObj<UGA_Ranged_GenericDamage_C>(), )

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x8C1F70), K2_CommitExecuteHook, (void**)&K2_CommitExecute);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x8C1F70));

    //// 0x15292F0
    //MH_CreateHook((LPVOID)GetOffsetBRUH(0x15292F0), GetSquadIdForCurrentPlayerHook, nullptr);
    //MH_EnableHook((LPVOID)GetOffsetBRUH(0x15292F0));

    return 1;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        // Creates the main theread!
        CreateThread(0, 0, Main, 0, 0, 0);
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

