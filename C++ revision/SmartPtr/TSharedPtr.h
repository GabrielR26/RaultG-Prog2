#pragma once
#include <iostream>

using namespace std;

template <typename T>
class TSharedPtr
{
	shared_ptr<T> ptr;

public:
	TSharedPtr()
	{
		ptr = make_shared<T>();
	}
	TSharedPtr(T _value)
	{
		ptr = make_shared<T>(_value);
	}
	TSharedPtr(const shared_ptr<T>& _sharedPtr)
	{
		ptr = shared_ptr<T>(_sharedPtr);
	}
	TSharedPtr(T* _ptr)
	{
		ptr = shared_ptr<T>(_ptr, [](T* _p) { delete _p; });
	}
	TSharedPtr(nullptr_t _ptr)
	{
		ptr = _ptr;
	}
	~TSharedPtr()
	{
		ptr.reset();
	}

	inline long Count() const
	{
		return ptr.use_count();
	}
	inline T* Get() const
	{
		return ptr.get();
	}

	void Swap(TSharedPtr<T>& _other)
	{
		T _value = *_other.Get();
		*_other = *ptr.get();
		*ptr.get() = _value;
	}

	operator bool () const
	{
		return ptr != nullptr;
	}
	T* operator -> ()
	{
		return ptr.get();
	}
	T& operator * ()
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

