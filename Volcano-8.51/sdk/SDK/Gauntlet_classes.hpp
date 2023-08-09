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

// 0x8 (0x30 - 0x28)
// Class Gauntlet.GauntletTestController
class UGauntletTestController : public UObject
{
public:
	uint8                                        Pad_296C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GauntletTestController");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class Gauntlet.GauntletTestControllerBootTest
class UGauntletTestControllerBootTest : public UGauntletTestController
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GauntletTestControllerBootTest");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class Gauntlet.GauntletTestControllerErrorTest
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
public:
	uint8                                        Pad_296D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GauntletTestControllerErrorTest");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
