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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass DeimosTypeInfo.DeimosTypeInfo_C
class UDeimosTypeInfo_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DeimosTypeInfo_C");
		return Clss;
	}

	void GetEnemyColor(struct FLinearColor* Color);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
