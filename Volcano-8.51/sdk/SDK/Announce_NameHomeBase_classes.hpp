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

// 0x8 (0x4A0 - 0x498)
// BlueprintGeneratedClass Announce_NameHomeBase.Announce_NameHomeBase_C
class AAnnounce_NameHomeBase_C : public AAnnounce_TutorialConversation_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x498(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_NameHomeBase_C");
		return Clss;
	}

	void InitAnnouncement();
	void HandleSentenceStart_UI(int32 SentenceIdx);
	void HandleSentenceStop_UI(int32 SentenceIdx);
	void ExecuteUbergraph_Announce_NameHomeBase(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Event_SentenceIdx_1, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_Event_SentenceIdx, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_SwitchInteger_CmpSuccess_1, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
