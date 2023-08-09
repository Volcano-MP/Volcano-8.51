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

// 0x118 (0x140 - 0x28)
// Class SignificanceManager.SignificanceManager
class USignificanceManager : public UObject
{
public:
	uint8                                        Pad_D1F[0xD8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        SignificanceManagerClassName;                      // 0x100(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D20[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SignificanceManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
