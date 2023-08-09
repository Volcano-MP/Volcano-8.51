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
// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnalyticsBlueprintLibrary");
		return Clss;
	}

	bool StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr>& Attributes);
	bool StartSession();
	void SetUserId(const class FString& UserId);
	void SetSessionId(const class FString& SessionId);
	void SetLocation(const class FString& Location);
	void SetGender(const class FString& Gender);
	void SetBuildInfo(const class FString& BuildInfo);
	void SetAge(int32 Age);
	void RecordSimpleItemPurchaseWithAttributes(const class FString& ItemId, int32 ItemQuantity, TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordSimpleItemPurchase(const class FString& ItemId, int32 ItemQuantity);
	void RecordSimpleCurrencyPurchaseWithAttributes(const class FString& GameCurrencyType, int32 GameCurrencyAmount, TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordSimpleCurrencyPurchase(const class FString& GameCurrencyType, int32 GameCurrencyAmount);
	void RecordProgressWithFullHierarchyAndAttributes(const class FString& ProgressType, TArray<class FString>& ProgressNames, TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordProgressWithAttributes(const class FString& ProgressType, const class FString& ProgressName, TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordProgress(const class FString& ProgressType, const class FString& ProgressName);
	void RecordItemPurchase(const class FString& ItemId, const class FString& Currency, int32 PerItemCost, int32 ItemQuantity);
	void RecordEventWithAttributes(const class FString& EventName, TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordEventWithAttribute(const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue);
	void RecordEvent(const class FString& EventName);
	void RecordErrorWithAttributes(const class FString& Error, TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordError(const class FString& Error);
	void RecordCurrencyPurchase(const class FString& GameCurrencyType, int32 GameCurrencyAmount, const class FString& RealCurrencyType, float RealMoneyCost, const class FString& PaymentProvider);
	void RecordCurrencyGivenWithAttributes(const class FString& GameCurrencyType, int32 GameCurrencyAmount, TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordCurrencyGiven(const class FString& GameCurrencyType, int32 GameCurrencyAmount);
	struct FAnalyticsEventAttr MakeEventAttribute(const class FString& AttributeName, const class FString& AttributeValue);
	class FString GetUserId();
	class FString GetSessionId();
	void FlushEvents();
	void EndSession();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
