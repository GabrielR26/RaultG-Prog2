#pragma once

using namespace std;

template <typename T>
class TArray
{
	size_t max;
	size_t count;

public:
	Tarray();
	TArray(initializer_list<T> _list);
	TArray(const TArray& _other);
	TArray(const ElementType*, SizeType);
	~TArray();

	SizeType Add(const ElementType&);
	SizeType Add(ElementType&&);
	SizeType Append(TArray<ElementType>);
	SizeType Append(std::initializer_list<InElementType>);
	SizeType Append(const ElementType*, SizeType);
	bool Contains(const ComparisonType&);
	SizeType Emplace(ArgsType&&);
	void EmplaceAt(SizeType, ArgsType&&);
	void Empty(SizeType);
	SizeType Find(const ElementType&);
	SizeType Find(const ElementType&, SizeType&);
	SizeType FindLast(const ElementType&);
	SizeType FindLast(const ElementType&, SizeType&);
	SizeType Insert(const TArray<ElementType>, const SizeType);
	SizeType Insert(TArray<ElementType>, const SizeType);
	SizeType Insert(ElementType&&, SizeType);
	SizeType Insert(const ElementType&&, SizeType);
	SizeType Insert(std::initializer_list<InElementType>, const SizeType);
	SizeType Insert(const ElementType*, SizeType, SizeType);
	bool IsEmpty();
	bool IsValidIndex(SizeType);
	ElementType Last(SizeType);
	const ElementType Last(SizeType);
	SizeType Max();
	SizeType Num();
	SizeType Remove(const ElementType&);
	void RemoveAt(SizeType);
	const ElementType Top();
};

