#pragma once
#include "..\..\CoreMinimal.h"

template <typename T>
class TSharedPtr
{
	shared_ptr<T> ptr;
	TArray<TSharedPtr<void*>> allPointers;

public:
	inline long Count() const
	{
		return ptr.use_count();
	}
	inline T* Get() const
	{
		return ptr.get();
	}

public:
	TSharedPtr()
	{
		ptr = make_shared<T>();
	}
	TSharedPtr(T _value)
	{
		ptr = make_shared<T>(_value);
	}
	TSharedPtr(T* _pointer)
	{
		ptr = shared_ptr<T>(_pointer, [](T* _ptr) { delete _ptr; });
	}
	TSharedPtr(const shared_ptr<T>& _sharedPtr)
	{
		ptr = shared_ptr<T>(_sharedPtr);
	}
	~TSharedPtr()
	{
		ptr.reset();
	}

public:
	void Swap(TSharedPtr<T>& _sharedPtr)
	{
		T _value = *_sharedPtr.Get();
		*_sharedPtr = *ptr.get();
		*ptr.get() = _value;
	}
	bool Contains(void* _pointer)
	{
		const size_t& _pointersCount = allPointers.Num();
		for (size_t _index = 0; _index < _pointersCount; _index++)
		{
			if (_pointer == allPointers[_index].Get()) return true;
		}

		return false;
	}

public:
	// permet de tester la validité du pointeur
	operator bool () const
	{
		return ptr != nullptr;
	}
	T* operator -> () const
	{
		return ptr.get();
	}
	T& operator * () const
	{
		return *ptr;
	}
	TSharedPtr<T>& operator = (const TSharedPtr<T>& _other)
	{
		if (this != &_other)
		{
			ptr = _other.ptr;
		}

		return *this;
	}
};