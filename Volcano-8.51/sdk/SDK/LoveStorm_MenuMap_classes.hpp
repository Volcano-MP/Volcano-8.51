#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x268 - 0x258)
// BlueprintGeneratedClass LoveStorm_MenuMap.LoveStorm_MenuMap_C
class ALoveStorm_MenuMap_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ASoldierMannequin_Male_C*              Hr0010DarkCupid_ExecuteUbergraph_LoveStorm_MenuMap_RefProperty; // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoveStorm_MenuMap_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_LoveStorm_MenuMap(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
