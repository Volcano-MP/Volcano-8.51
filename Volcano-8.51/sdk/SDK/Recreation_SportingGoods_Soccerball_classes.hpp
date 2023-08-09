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

// 0x10 (0x808 - 0x7F8)
// BlueprintGeneratedClass Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C
class ARecreation_SportingGoods_Soccerball_C : public APhysicsBall_Master_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            Ball_Hit_Sound;                                    // 0x800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Recreation_SportingGoods_Soccerball_C");
		return Clss;
	}

	void Reset_Ball_Hit_Sound();
	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_Recreation_SportingGoods_Soccerball(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
