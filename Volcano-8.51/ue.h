#pragma once
#include "sdk/SDK.hpp"
using namespace SDK;

namespace UE
{
	template <int32_t NumElements>
	struct TInlineAllocator
	{
		template <int32_t Size, int32_t Alignment>
		struct alignas(Alignment) TAlligendBytes
		{
			uint8_t Pad[Size];
		};

		template <typename ElementType>
		struct TTypeCompatibleBytes : public TAlligendBytes<sizeof(ElementType), alignof(ElementType)>
		{
		};

		template <typename ElementType>
		class ForElementType
		{
			friend class TBitArray;

		private:
			TTypeCompatibleBytes<ElementType> InlineData[NumElements];
			ElementType* SecondaryData;
		};
	};;

	class TBitArray
	{
	private:
		TInlineAllocator<4>::ForElementType<uint32_t> Data;
		int32_t NumBits;
		int32_t MaxBits;
	};

	template <typename ElementType>
	union TSparseArrayElementOrListLink
	{
		TSparseArrayElementOrListLink(ElementType& InElement)
			: ElementData(InElement)
		{
		}
		TSparseArrayElementOrListLink(ElementType&& InElement)
			: ElementData(InElement)
		{
		}

		TSparseArrayElementOrListLink(int32_t InPrevFree, int32_t InNextFree)
			: PrevFreeIndex(InPrevFree)
			, NextFreeIndex(InNextFree)
		{
		}

		TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
		{
			return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
		}

		ElementType ElementData;
		int32_t PrevFreeIndex;
		int32_t NextFreeIndex;
	};

	template<typename InElementType>
	class TSparseArray
	{
	public:
		typedef TSparseArrayElementOrListLink<InElementType> FSparseArrayElement;

		TArray<FSparseArrayElement> Data;
		TBitArray AllocationFlags;
		int32_t FirstFreeIndex;
		int32_t NumFreeIndices;
	};

	class FSetElementId 
	{
		int32_t Index; 
	};

	template<typename InElementType>
	class TSetElementBase
	{
	public:
		typedef InElementType ElementType;
		ElementType Value;
		FSetElementId HashNextId;
		int32_t HashIndex;
	};

	template <typename InElementType>
	class TSetElement : public TSetElementBase<InElementType>
	{

	};

	template<typename InElementType>
	class TSet
	{
	public:
		typedef TSetElement<InElementType> SetElementType;
		typedef TSparseArray<SetElementType>     ElementArrayType;
		ElementArrayType Elements;
		int32_t Hash;
		mutable int32_t	 HashSize;
	};

	template<typename KeyType, typename ValueType>
	struct TMap
	{
		typedef TPair<KeyType, ValueType> ElementType;
		TSet<ElementType> Pairs;
	};
}