#pragma once
#include <array>

using namespace std;

template <typename T>
class TArray
{
	array<T*, 0> marray;
	size_t max;
	size_t num;

public:
	TArray()
	{
		marray = new array<T*, 0>;
		max = num = 0;
	}
	TArray(initializer_list<T> _list)
	{
		marray = _list;
		max = num = _list.size();
	}
	TArray(const TArray& _other)
	{
		marray = _other.marray;
		max = _other.max;
		num = _other.num;
	}
	TArray(const T* _ptr, size_t _count)
	{
		marray = new array<T*, _count>;
		marray.fill(_ptr);
	}
	~TArray()
	{
		delete marray;
		max = count = 0;
	}

	size_t Add(const T& _element)
	{
		array<T*, max + 1> _arrayTemp;
		for (size_t i = 0; i < max; i++)
			_arrayTemp[i] = marray[i];
		_arrayTemp[max] = *_element;
		marray = _arrayTemp;
		num++;
		return max++;
	}

	size_t Append(TArray<T> _array)
	{
		array<T*, max + 1> _arrayTemp;
		for (size_t i = 0; i < max; i++)
			_arrayTemp[i] = marray[i];
		for (size_t i = 0; i < _array.max; i++)
			_arrayTemp[max + i] = _array[i];
		marray = _arrayTemp;
		num += _array.num;
		return max += _array.max;
	}
	size_t Append(initializer_list<T> _array)
	{
		array<T*, max + 1> _arrayTemp;
		for (size_t i = 0; i < max; i++)
			_arrayTemp[i] = marray[i];
		size_t _size = _array.size();
		for (size_t i = 0; i < _size; i++)
			_arrayTemp[max + i] = _array[i];
		marray = _arrayTemp;
		num += _size;
		return max += _size;
	}
	size_t Append(const T* _element, const size_t& _count)
	{
		array<T*, max + 1> _arrayTemp;
		for (size_t i = 0; i < max; i++)
			_arrayTemp[i] = marray[i];
		for (size_t i = 0; i < _count; i++)
			_arrayTemp[max + i] = _element;
		marray = _arrayTemp;
		num += _count;
		return max += _count;
	}

	bool Contains(const T& _element)
	{
		for (size_t i = 0; i < max; i++)
			if (marray[i] == *_element)
				return true;
		return false;
	}
	void Empty(size_t)
	{
		for (size_t i = 0; i < max; i++)
			marray[i] = nullptr;
		count = 0;
	}

	size_t Find(const T& _element)
	{
		if (!Contains(_element))
			return -1;
		for (size_t i = 0; i < max; i++)
			if (marray[i] == *_element)
				return i;
		return -1;
	}
	bool Find(const T& _element, size_t _count)
	{
		return false;
		//??
	}
	size_t FindLast(const T& _element)
	{
		if (!Contains(_element))
			return -1;
		for (size_t i = max; i >= 0; i--)
			if (marray[i] == *_element)
				return i;
		return -1;
	}
	bool FindLast(const T&, const size_t& _size)
	{
		return false;
	}

	size_t Insert(const TArray<T>& _array, const size_t& _index)
	{
		array<T*, max + 1> _arrayTemp;
		for (size_t i = 0; i < _index; i++)
			_arrayTemp[i] = marray[i];
		size_t _arraySize = _array.max;
		for (size_t i = 0; i < _arraySize; i++)
			_arrayTemp[_index + i] = _array[i];
		for (size_t i = _index + 1; i < max; i++)
			_arrayTemp[_index + _arraySize + i] = marray[i];
		marray = _arrayTemp;
		num += _array.count;
		return max += _array.max;
	}
	size_t Insert(initializer_list<T> _list, const size_t& _index)
	{
		array<T*, max + 1> _arrayTemp;
		for (size_t i = 0; i < _index; i++)
			_arrayTemp[i] = marray[i];
		size_t _arraySize = _list.size(); 
		for (size_t i = 0; i < _arraySize; i++)
			_arrayTemp[_index + i] = _list[i];
		for (size_t i = _index + 1; i < max; i++)
			_arrayTemp[_index + _arraySize + i] = marray[i];
		marray = _arrayTemp;
		num += _arraySize.count;
		return max += _arraySize;
	}
	size_t Insert(const T* _element, const size_t& _size, const size_t& _index)
	{
		array<T*, _size> _arrayTemp;
		_arrayTemp.fill(_element);
		return Insert(_arrayTemp, _index);
	}

	bool IsEmpty() const
	{
		return marray.empty();
	}
	bool IsValidIndex(const size_t& _index) const
	{
		return _index >= 0 && _index < max;
	}
	const T& Last(const size_t& _index) const
	{
		return marray[max - 1];
	}
	size_t Max() const
	{
		return max;
	}
	size_t Num() const
	{
		return num;
	}

	size_t Remove(const T& _element)
	{
		size_t _count = 0;
		for (size_t i = 0; i < max; i++)
		{
			if (marray[i] == *_element)
			{
				marray[i] = nullptr;
				num--;
				_count++;
			}
		}
		return _count;
	}
	void RemoveAt(const size_t& _index)
	{
		if (IsValidIndex(_index))
			return;
		marray[_index] = nullptr;
		num--;
	}
};
