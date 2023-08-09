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

// 0x10 (0x248 - 0x238)
// WidgetBlueprintGeneratedClass SpeechBubbleWidget.SpeechBubbleWidget_C
class USpeechBubbleWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      BubbleText;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpeechBubbleWidget_C");
		return Clss;
	}

	void InitFromObject(class UObject* InitObject);
	void ExecuteUbergraph_SpeechBubbleWidget(int32 EntryPoint, class UObject* K2Node_Event_InitObject, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetCurrentSentenceSpeechText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
