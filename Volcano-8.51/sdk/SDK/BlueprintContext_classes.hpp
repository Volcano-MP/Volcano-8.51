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

// 0x0 (0x30 - 0x30)
// Class BlueprintContext.BlueprintContextBase
class UBlueprintContextBase : public USubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlueprintContextBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class BlueprintContext.BlueprintContextLibrary
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlueprintContextLibrary");
		return Clss;
	}

	class USubsystem* GetContext(class UObject* ContextObject, TSubclassOf<class USubsystem> Class);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
