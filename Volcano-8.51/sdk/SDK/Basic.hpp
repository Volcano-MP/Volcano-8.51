#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{

void InitGObjects();

template<typename Fn>
inline Fn GetVFunction(const void* Instance, std::size_t Index)
{
	auto Vtable = *reinterpret_cast<const void***>(const_cast<void*>(Instance));
	return reinterpret_cast<Fn>(Vtable[Index]);
}

namespace FMemory
{
	static inline void (*Free)(void* Array) = decltype(Free)(__int64(GetModuleHandleW(0)) + 0x1BFA7D0);
	static inline void* (*Realloc)(void*, __int64, unsigned int) = decltype(Realloc)(__int64(GetModuleHandleW(0)) + 0x1C08880);
}

class TUObjectArray
{
public:

	enum
	{
		ElementsPerChunk = 0x10000,
	};

	struct FUObjectItem
	{
		class UObject* Object;
		uint8 Pad[0x10];
	};

	FUObjectItem** Objects;
	uint8 Pad_0[0x08];
	int32 MaxElements;
	int32 NumElements;
	int32 MaxChunks;
	int32 NumChunks;

	// Call InitGObjects() before using these functions

	inline int32 Num() const
	{
		return NumElements;
	}

	inline class UObject* GetByIndex(const int32 Index) const
	{
		if (Index < 0 || Index > NumElements)
			return nullptr;

		const int32 ChunkIndex = Index / ElementsPerChunk;
		const int32 InChunkIdx = Index % ElementsPerChunk;

		return Objects[ChunkIndex][InChunkIdx].Object;
	}
};

template<class T>
class TArray
{
public:
	T* Data;
	int32 NumElements;
	int32 MaxElements;

public:

	inline TArray()
	{
		Data = nullptr;
		NumElements = MaxElements = 0;
	}

	inline TArray(int32 Size)
		:NumElements(0), MaxElements(Size), Data(reinterpret_cast<T*>(malloc(sizeof(T) * Size)))
	{
	}

	inline T& operator[](uint32 Index)
	{
		return Data[Index];
	}
	inline const T& operator[](uint32 Index) const
	{
		return Data[Index];
	}

	inline int32 Num()
	{
		return NumElements;
	}

	inline int32 Max()
	{
		return MaxElements;
	}

	inline int32 GetSlack()
	{
		return MaxElements - NumElements;
	}

	inline bool IsValid()
	{
		return Data != nullptr;
	}

	inline bool IsValidIndex(int32 Index)
	{
		return Index >= 0 && Index < NumElements;
	}

	inline void ResetNum()
	{
		NumElements = 0;
	}

	inline void Reserve(const int Num)
	{
		Data = (T*)FMemory::Realloc(Data, (MaxElements = Num + NumElements) * sizeof(T), 0);
	}

	inline void Free()
	{
		if (Data)
			FMemory::Free(Data);

		MaxElements = 0;
		NumElements = 0;
	}

	inline T& Add(const T& InData)
	{
		Reserve(1);

		Data[NumElements] = InData;
		++NumElements;

		return Data[NumElements - 1];
	}

	inline bool Remove(int Index)
	{
		if (Index < NumElements)
		{
			if (Index != NumElements - 1)
			{
				Data[Index] = Data[NumElements - 1];
			}

			--NumElements;
			return true;
		}
		return false;
	}
};

class FString : public TArray<wchar_t>
{
public:
	inline FString() = default;

	using TArray::TArray;

	inline FString(const wchar_t* WChar)
	{
		MaxElements = NumElements = *WChar ? std::wcslen(WChar) + 1 : 0;

		if (NumElements)
		{
			Data = const_cast<wchar_t*>(WChar);
		}
	}

	inline FString operator=(const wchar_t*&& Other)
	{
		return FString(Other);
	}

	inline std::wstring ToWString()
	{
		if (IsValid())
		{
			return Data;
		}

		return L"";
	}

	inline std::string ToString()
	{
		if (IsValid())
		{
			std::wstring WData(Data);
			return std::string(WData.begin(), WData.end());
		}

		return "";
	}
};

class FName
{
public:
	int32 ComparisonIndex;
	int32 Number;

	
	inline std::string ToString() const
	{
		static FString TempString(1024);
		static auto AppendString = reinterpret_cast<void(*)(const FName*, FString&)>(uintptr_t(GetModuleHandle(0)) + Offsets::AppendString);

		AppendString(this, TempString);

		std::string OutputString = TempString.ToString();
		TempString.ResetNum();

		size_t pos = OutputString.rfind('/');

		if (pos == std::string::npos)
			return OutputString;

		return OutputString.substr(pos + 1);
	}

	inline bool operator==(const FName& Other)
	{
		return ComparisonIndex == Other.ComparisonIndex;
	}

	inline bool operator!=(const FName& Other)
	{
		return ComparisonIndex != Other.ComparisonIndex;
	}
};

template<typename ClassType>
class TSubclassOf
{
	class UClass* ClassPtr;

public:
	TSubclassOf() = default;

	inline TSubclassOf(UClass* Class)
		: ClassPtr(Class)
	{
	}

	inline UClass* Get()
	{
		return ClassPtr;
	}
	inline UClass* operator->()
	{
		return ClassPtr;
	}
	inline TSubclassOf& operator=(UClass* Class)
	{
		ClassPtr = Class;

		return *this;
	}

	inline bool operator==(const TSubclassOf& Other) const
	{
		return ClassPtr == Other.ClassPtr;
	}
	inline bool operator!=(const TSubclassOf& Other) const
	{
		return ClassPtr != Other.ClassPtr;
	}
	inline bool operator==(UClass* Other) const
	{
		return ClassPtr == Other;
	}
	inline bool operator!=(UClass* Other) const
	{
		return ClassPtr != Other;
	}
};

template<typename ValueType, typename KeyType>
class TPair
{
public:
	ValueType First;
	KeyType Second;
};

class FText
{
public:
	FString TextData;
	uint8 IdkTheRest[0x8];
};

template<typename ElementType>
class TSet
{
	uint8 WaitTillIImplementIt[0x50];
};

template<typename KeyType, typename ValueType>
class TMap
{
	uint8 WaitTillIImplementIt[0x50];
};

class FWeakObjectPtr
{
protected:
	int32		ObjectIndex;
	int32		ObjectSerialNumber;

public:
	class UObject* Get() const;

	class UObject* operator->() const;

	bool operator==(const FWeakObjectPtr& Other) const;
	bool operator!=(const FWeakObjectPtr& Other) const;

	bool operator==(const class UObject* Other) const;
	bool operator!=(const class UObject* Other) const;
};

template<typename UEType>
class TWeakObjectPtr : FWeakObjectPtr
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(FWeakObjectPtr::Get());
	}
};


struct FUniqueObjectGuid
{
	uint32 A;
	uint32 B;
	uint32 C;
	uint32 D;
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32 TagAtLastTest;
	TObjectID ObjectID;

	class UObject* Get() const
	{
		return WeakPtr.Get();
	}
	class UObject* operator->() const
	{
		return WeakPtr.Get();
	}
};

template<typename UEType>
class TLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid>
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};

class alignas(8) FSoftObjectPath_
{
public:
	FName AssetPathName;
	FString SubPathString;
};

class alignas(8) FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath_>
{
public:

	FName GetAssetPathName();
	FString GetSubPathString();

	std::string GetAssetPathNameStr();
	std::string GetSubPathStringStr();
};

template<typename UEType>
class TSoftObjectPtr : public FSoftObjectPtr
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};

template<typename UEType>
class TSoftClassPtr : public FSoftObjectPtr
{
public:

	UEType* Get() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}

	UEType* operator->() const
	{
		return static_cast<UEType*>(TPersistentObjectPtr::Get());
	}
};


enum class EClassCastFlags : uint64_t
{
	None = 0x0000000000000000,

	UField							= 0x0000000000000001,
	UInt8Property					= 0x0000000000000002,
	UEnum							= 0x0000000000000004,
	UStruct							= 0x0000000000000008,
	UScriptStruct					= 0x0000000000000010,
	UClass							= 0x0000000000000020,
	UByteProperty					= 0x0000000000000040,
	UIntProperty					= 0x0000000000000080,
	UFloatProperty					= 0x0000000000000100,
	UUInt64Property					= 0x0000000000000200,
	UClassProperty					= 0x0000000000000400,
	UUInt32Property					= 0x0000000000000800,
	UInterfaceProperty				= 0x0000000000001000,
	UNameProperty					= 0x0000000000002000,
	UStrProperty					= 0x0000000000004000,
	UProperty						= 0x0000000000008000,
	UObjectProperty					= 0x0000000000010000,
	UBoolProperty					= 0x0000000000020000,
	UUInt16Property					= 0x0000000000040000,
	UFunction						= 0x0000000000080000,
	UStructProperty					= 0x0000000000100000,
	UArrayProperty					= 0x0000000000200000,
	UInt64Property					= 0x0000000000400000,
	UDelegateProperty				= 0x0000000000800000,
	UNumericProperty				= 0x0000000001000000,
	UMulticastDelegateProperty		= 0x0000000002000000,
	UObjectPropertyBase				= 0x0000000004000000,
	UWeakObjectProperty				= 0x0000000008000000,
	ULazyObjectProperty				= 0x0000000010000000,
	USoftObjectProperty				= 0x0000000020000000,
	UTextProperty					= 0x0000000040000000,
	UInt16Property					= 0x0000000080000000,
	UDoubleProperty					= 0x0000000100000000,
	USoftClassProperty				= 0x0000000200000000,
	UPackage						= 0x0000000400000000,
	ULevel							= 0x0000000800000000,
	AActor							= 0x0000001000000000,
	APlayerController				= 0x0000002000000000,
	APawn							= 0x0000004000000000,
	USceneComponent					= 0x0000008000000000,
	UPrimitiveComponent				= 0x0000010000000000,
	USkinnedMeshComponent			= 0x0000020000000000,
	USkeletalMeshComponent			= 0x0000040000000000,
	UBlueprint						= 0x0000080000000000,
	UDelegateFunction				= 0x0000100000000000,
	UStaticMeshComponent			= 0x0000200000000000,
	UMapProperty					= 0x0000400000000000,
	USetProperty					= 0x0000800000000000,
	UEnumProperty					= 0x0001000000000000,
};

inline constexpr EClassCastFlags operator|(EClassCastFlags Left, EClassCastFlags Right)
{																																										
	return (EClassCastFlags)((std::underlying_type<EClassCastFlags>::type)(Left) | (std::underlying_type<EClassCastFlags>::type)(Right));
}																																										

inline bool operator&(EClassCastFlags Left, EClassCastFlags Right)
{																																										
	return (((std::underlying_type<EClassCastFlags>::type)(Left) & (std::underlying_type<EClassCastFlags>::type)(Right)) == (std::underlying_type<EClassCastFlags>::type)(Right));
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
