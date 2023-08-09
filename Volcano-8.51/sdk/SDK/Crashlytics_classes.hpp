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
// Class Crashlytics.CrashlyticsBlueprintLibrary
class UCrashlyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrashlyticsBlueprintLibrary");
		return Clss;
	}

	void SetUserName(const class FString& Name);
	void SetUserIdentifier(const class FString& ID);
	void SetUserEmail(const class FString& Email);
	void SetStringKey(const class FString& Key, const class FString& Value);
	void SetIntegerKey(const class FString& Key, int32 Value);
	void SetFloatKey(const class FString& Key, float Value);
	void SetBooleanKey(const class FString& Key, bool Value);
	void LogMessage(const class FString& MESSAGE);
	void LogException(const class FString& MESSAGE);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
