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

// 0x8 (0xC50 - 0xC48)
// BlueprintGeneratedClass Tiered_BluGlo_Parent.Tiered_BluGlo_Parent_C
class ATiered_BluGlo_Parent_C : public ABuildingContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Tiered_BluGlo_Parent_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tiered_BluGlo_Parent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
