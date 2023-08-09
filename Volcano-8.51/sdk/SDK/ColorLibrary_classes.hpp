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
// BlueprintGeneratedClass ColorLibrary.ColorLibrary_C
class UColorLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ColorLibrary_C");
		return Clss;
	}

	void Get_HarvestWeakPoint_Color(const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut);
	void Get_Base___Buff_Colors(enum class EFortStatValueDisplayType Display_Type, enum class EFortBuffState Buff_State, const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff, const struct FLinearColor& Temp_struct_Variable, enum class EFortStatValueDisplayType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, enum class EFortBuffState Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1);
	void Get_Bolt_Elemental_Color(const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Ice_Elemental_Color(const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Fire_Elemental_Color(const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Unique_Color(const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Debuff_Color(const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color);
	void Get_Buff_Color(const struct FColorStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
