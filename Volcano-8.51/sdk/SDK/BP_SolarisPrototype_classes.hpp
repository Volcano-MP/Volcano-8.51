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
// BlueprintGeneratedClass BP_SolarisPrototype.BP_SolarisPrototype_C
class UBP_SolarisPrototype_C : public USolarisPrototype
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SolarisPrototype_C");
		return Clss;
	}

	struct FSolarisResponse CheckEndConditions(const struct FSolarisResponse& K2Node_MakeStruct_SolarisResponse);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
