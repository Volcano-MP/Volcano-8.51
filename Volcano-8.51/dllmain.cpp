// dllmain.cpp : Définit le point d'entrée de l'application DLL.
#include "gaymode.h"
#include "framework.h"
#include "PC.h"
#include "Farming.h"
#include "Teams.h"

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

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x2D39300), TickFlushHook, (void**)&TickFlushOG);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x2D39300));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0xCF2E80), DispatchReqHook, (void**)&DispatchReqOG); // 0xCF2E80
    MH_EnableHook((LPVOID)GetOffsetBRUH(0xCF2E80));

    // 0x2C03D20

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x2C03D20), KickPlayer, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x2C03D20));

    // AActor::GetNetMode crashing fr on gang!
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x12E7410), ChangeGameSessionId, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x12E7410));

    // 0x15392D0

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x2C03D20), ValFailure1, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x2C03D20));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x30100A0), UWorldGetNetMode, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x30100A0));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x29A40F0), AActorGetNetMode, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x29A40F0));

    MH_CreateHook((LPVOID)GetOffsetBRUH(0x13876D0), NoMcp, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x13876D0));

    InitHoksPC();
    InitAbilities();

    ((UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass()->DefaultObject)->ExecuteConsoleCommand(GetWorld(), L"open Athena_Terrain", nullptr);
    GetEngine()->GameInstance->LocalPlayers.Remove(0);

    void** VTAblAAAA = *(void***)GetDefObj<UAbilitySystemComponent>();
    LOG_("aaaa: 0x{:x}", __int64(VTAblAAAA) - __int64(GetModuleHandleW(0)));

    auto Addr = GetOffsetBRUH(0xFF343C);  // 0xFF343B // WARMUP CRASH
    DWORD oldProtection;
    VirtualProtect((LPVOID)Addr, 1, PAGE_EXECUTE_READWRITE, &oldProtection);

    *(uint8_t*)Addr = 0x85;

    DWORD tempProtection;
    VirtualProtect((LPVOID)Addr, 1, oldProtection, &tempProtection);

    InitFarming();
    HOKSREAL();

    VirtualHook(GetEngine(), 0x50, GetMaxTickRate);
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x1E054E0), CollectGarbage, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x1E054E0));

    // 0x12DC660
    MH_CreateHook((LPVOID)GetOffsetBRUH(0x12DC660), PickTeamHook, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x12DC660));
    
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

