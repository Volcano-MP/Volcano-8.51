#pragma once
#include "framework.h"

// credits to android
void ServerUpdatePhysicsParamsHook(AFortPhysicsPawn* Vehicle, FReplicatedPhysicsPawnState& InState)
{
    LOG_("ServerUpdatePhysicsParamsHook");
    if (auto Mesh = (UPrimitiveComponent*)Vehicle->RootComponent)
    {
        InState.Rotation.X -= 2.5;
        InState.Rotation.Y /= 0.3;
        InState.Rotation.Z -= -2.0;
        InState.Rotation.W /= -1.2;

        FTransform Transform{};
        Transform.Translation = InState.Translation;
        Transform.Rotation = InState.Rotation;
        Transform.Scale3D = FVector{ 1, 1, 1 };

        Mesh->K2_SetWorldTransform(Transform, false, nullptr, true);
        Mesh->bComponentToWorldUpdated = true;
        Mesh->SetPhysicsLinearVelocity(InState.LinearVelocity, 0, FName());
        Mesh->SetPhysicsAngularVelocity(InState.AngularVelocity, 0, FName());
    }
}

// TODO: Vehicle Weapons

void InitVehicleHooks()
{
    /*MH_CreateHook((LPVOID)GetOffsetBRUH(0x1AC0EC0), ServerUpdatePhysicsParamsHook, nullptr);
    MH_EnableHook((LPVOID)GetOffsetBRUH(0x1AC0EC0)); */

    // VirtualHook(GetDefObj<AFortPhysicsPawn>(), 0xEA, ServerUpdatePhysicsParamsHook);
}