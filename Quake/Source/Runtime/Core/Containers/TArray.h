#pragma once
#include <iostream>

using namespace std;

template <typename Type, typename SizeType = size_t>
class TArray
{
	Type* tarray;
    SizeType count;

public:
#pragma region Constructor
	TArray()
	{
		tarray = nullptr;
		count = 0;
	}
	TArray(const TArray<Type, SizeType>& _other)
	{
		tarray = _other.tarray;
		count = _other.count;
	}
	TArray(TArray<Type, SizeType>&& _other)
	{
		tarray = _other.tarray;
		count = _other.count;

		_other.tarray = nullptr;
		_other.count = 0;
	}
	TArray(const initializer_list<Type>& _list)
	{
		count = _list.size();
		if (IsEmpty())
			return;
		tarray = new Type[count];

		int _index = 0;
		for (const initializer_list<Type>::value_type& _element : _list)
		{
			tarray[_index] = _element;
			_index++;
		}
	}
	TArray(const Type* _other, const SizeType& _count)
	{
		count = _count;
		tarray = new Type[count];
		for (size_t i = 0; i < count; i++)
		{
			tarray[i] = _other[i];
		}
	}
	~TArray()
	{
		delete[] tarray;
		count = 0;
	}
#pragma endregion

#pragma region Ascessor
	inline bool IsEmpty() const
	{
		return count == 0;
	}
	inline bool IsValidIndex(const size_t& _index) const
	{
		return _index >= 0 && _index < count;
	}
	inline size_t Num() const
	{
		return count;
	}
	inline Type Last() const
	{
		if (IsEmpty())
			return Type();
		return tarray[count - 1];
	}
	inline Type Top() const
	{
		if (IsEmpty())
			return Type();
		return tarray[0];
	}
	inline Type* begin() const
	{
		return tarray;
	}
	inline Type* end() const
	{
		return tarray + count;
	}
#pragma endregion

#pragma region Method
	SizeType Add(const Type& _element)
	{
		count++;
		Type* _arrayTemp = new Type[count];
		for (size_t i = 0; i < count - 1; i++)
			_arrayTemp[i] = tarray[i];
		_arrayTemp[count - 1] = _element;
		delete[] tarray;
		tarray = _arrayTemp;
		return count;
	}
	SizeType Append(const TArray<Type>& _array)
	{
		const size_t& _elementsCount = _array.count;
		for (size_t i = 0; i < _elementsCount; i++)
			Add(_array[i]);
		return count;
	}
	SizeType Append(const initializer_list<Type>& _list)
	{
		for (const auto& _element : _list)
			Add(_element);
		return count;
	}
	SizeType Append(const Type* _element, const SizeType& _count)
	{
		for (size_t i = 0; i < _count; i++)
			Add(_element);
		return count;
	}

	bool Contains(const Type& _element)
	{
		for (size_t i = 0; i < count; i++)
			if (tarray[i] == _element)
				return true;
		return false;
	}
	SizeType Find(const Type& _element)
	{
		if (!Contains(_element))
			return -1;
		for (size_t i = 0; i < count; i++)
			if (tarray[i] == _element)
				return i;
		return -1;
	}
	SizeType FindLast(const Type& _element)
	{
		if (!Contains(_element))
			return -1;
		for (size_t i = count - 1; i >= 0; i--)
			if (tarray[i] == _element)
				return i;
		return -1;
	}
	TArray<SizeType> FindAll(const Type& _element)
	{
		TArray<SizeType> _array = TArray<SizeType>();
		for (size_t i = 0; i < count; i++)
			if (tarray[i] == _element)
				_array.Add(i);
		return _array;
	}
	void Empty()
	{
		delete tarray;
		tarray = nullptr;
		count = 0;
	}

	SizeType Insert(const TArray<Type>& _array, const SizeType& _index)
	{
		size_t _arraySize = _array.count;
		Type* _arrayTemp = new Type[count + _arraySize];
		for (size_t i = 0; i < _index; i++)
			_arrayTemp[i] = tarray[i];

		for (size_t i = 0; i < _arraySize; i++)
			_arrayTemp[_index + i] = _array[i];

		for (size_t i = _index; i < count; i++)
			_arrayTemp[_arraySize + i] = tarray[i];
		delete[] tarray;
		tarray = _arrayTemp;
		return count += _arraySize;
	}
	SizeType Insert(Type&& _element, const SizeType& _index)
	{
		Type* _arrayTemp = new Type[count + 1];
		for (size_t i = 0; i < _index; i++)
			_arrayTemp[i] = tarray[i];

		_arrayTemp[_index] = _element;

		for (size_t i = _index; i < count; i++)
			_arrayTemp[i + 1] = tarray[i];
		delete[] tarray;
		tarray = _arrayTemp;
		_element = Type();
		return count++;
	}
	SizeType Insert(const initializer_list<Type>& _list, const SizeType& _index)
	{
		size_t _arraySize = _list.size();
		Type* _arrayTemp = new Type[count + _arraySize];
		for (size_t i = 0; i < _index; i++)
			_arrayTemp[i] = tarray[i];

		int _listIndex = 0;
		for (const auto& _element : _list)
		{
			_arrayTemp[_index + _listIndex] = _element;
			_listIndex++;
		}

		for (size_t i = _index + 1; i < count; i++)
			_arrayTemp[_arraySize + i] = tarray[i];
		delete[] tarray;
		tarray = _arrayTemp;
		return count += _arraySize;
	}
	SizeType Insert(const Type* _element, const SizeType& _size, const SizeType& _index)
	{
		Type* _arrayTemp = new Type[_size];
		for (size_t i = 0; i < _size; i++)
			_arrayTemp[i] = *_element;
		return Insert(_arrayTemp, _index);
	}

	SizeType RemoveBack()
	{
		if (IsEmpty())
			return 0;
		count--;
		Type* _newArray = new Type[count];
		for (size_t i = 0; i < count; i++)
			_newArray[i] = tarray[i];
		delete[] tarray;
		tarray = _newArray;
		return count;
	}
	void Remove(const Type& _element)
	{
		const SizeType& _index = Find(_element);
		return RemoveAt(_index);
	}
	SizeType RemoveAll(const Type& _element)
	{
		const TArray<SizeType>& _indexes = FindAll(_element);
		if (_indexes.IsEmpty())
			return count;

		const SizeType& _size = _indexes.Num();
		for (size_t i = 0; i < _size; i++)
			RemoveAt(_indexes[i] - i);
		return _size;
	}
	void RemoveAt(const size_t& _index)
	{
		if (!IsValidIndex(_index))
			return;

		Type* _newArray = new Type[count - 1];
		bool _hasRemoved = false;
		for (size_t i = 0; i < count; i++)
		{
			if (i == _index)
			{
				_hasRemoved = true;
				continue;
			}
			_newArray[i - _hasRemoved] = tarray[i];
		}
		delete[] tarray;
		tarray = _newArray;
		count--;
	}

	void Display() const
	{
		for (size_t i = 0; i < count; i++)
			cout << tarray[i] << " ";
		cout << endl;
	}
#pragma endregion

#pragma region Operator
	Type operator[](const SizeType& _index) const
	{
		return tarray[_index];
	}
#pragma endregion
};