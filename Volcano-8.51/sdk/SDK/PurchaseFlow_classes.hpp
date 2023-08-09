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

// 0x10 (0x38 - 0x28)
// Class PurchaseFlow.PurchaseFlowJSBridge
class UPurchaseFlowJSBridge : public UObject
{
public:
	uint8                                        Pad_2AC7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PurchaseFlowJSBridge");
		return Clss;
	}

	void RequestClose(const class FString& CloseInfo);
	void RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT);
	bool LaunchValidatedExternalBrowserUrl(const class FString& AllowedBrowserID, const class FString& URL);
	bool LaunchExternalBrowserUrl(const class FString& URL);
	class FString GetExternalBrowserPath(const class FString& BrowserId);
	class FString GetExternalBrowserName(const class FString& BrowserId);
	class FString GetDefaultExternalBrowserID(const class FString& URL);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
