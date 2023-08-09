#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
	//Initialize GObjects using InitGObjects()
	TUObjectArray* UObject::GObjects = nullptr;

	bool UObject::HasTypeFlag(EClassCastFlags TypeFlag) const
	{
		return TypeFlag != EClassCastFlags::None ? Class->CastFlags & TypeFlag : true;
	}

	std::string UObject::GetName() const
	{
		return this ? Name.ToString() : "None";
	}

	std::string UObject::GetFullName() const
	{
		if (Class)
		{
			std::string Temp;

			for (UObject* NextOuter = Outer; NextOuter; NextOuter = NextOuter->Outer)
			{
				Temp = NextOuter->GetName() + "." + Temp;
			}

			std::string Name = Class->GetName();
			Name += " ";
			Name += Temp;
			Name += GetName();

			return Name;
		}

		return "None";
	}

	bool UObject::IsA(class UClass* Clss) const
	{
		for (UStruct* Super = Class; Super; Super = Super->Super)
		{
			if (Super == Clss)
			{
				return true;
			}
		}

		return false;
	}

	class UFunction* UClass::GetFunction(const std::string& ClassName, const std::string& FuncName)
	{
		for(UStruct* Clss = this; Clss; Clss = Clss->Super)
		{
			if (Clss->GetName() == ClassName)
			{
				for (UField* Field = Clss->Children; Field; Field = Field->Next)
				{
					if(Field->HasTypeFlag(EClassCastFlags::UFunction) && Field->GetName() == FuncName)
					{
						return static_cast<class UFunction*>(Field);
					}	
				}
			}
		}
		return nullptr;
	}

//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CoreUObject.Object.ExecuteUbergraph
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UObject::ExecuteUbergraph(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Object", "ExecuteUbergraph");

	Params::UObject_ExecuteUbergraph_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
