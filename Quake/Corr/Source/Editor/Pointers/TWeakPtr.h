#pragma once
#include <memory>
//#include "TSharedPtr.h"

using namespace std;

template <typename T>
class TSharedPtr;

template <typename T>
class TWeakPtr
{
	weak_ptr<T> ptr;

public:
	inline bool HasExpired() const
	{
		return ptr.expired();
	}

public:
	TWeakPtr()
	{
		ptr = weak_ptr<T>();
	}
	TWeakPtr(const T& _value)
	{
		ptr = weak_ptr<T>(_value);
	}
	TWeakPtr(const TWeakPtr<T>& _pointer)
	{
		ptr = _pointer.ptr;
	}
	TWeakPtr(const TSharedPtr<T>& _pointer)
	{
		ptr = _pointer.ptr;
	}

public:
	TSharedPtr<T> Lock() const
	{
		if (HasExpired())
		{
			return TSharedPtr<T>();
		}

		return TSharedPtr<T>(ptr.lock());
	}
};