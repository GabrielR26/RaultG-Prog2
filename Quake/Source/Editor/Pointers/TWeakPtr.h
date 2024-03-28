#pragma once
#include <memory>

using namespace std;

template <typename T>
class TSharedPtr;

template <typename T>
class TWeakPtr
{
	weak_ptr<T> ptr;

public:
	TWeakPtr()
	{
		ptr = weak_ptr<T>();
	}
	TWeakPtr(const T& _value)
	{
		ptr = weak_ptr<T>(_value);
	}
	TWeakPtr(const TWeakPtr<T>& _TWeakPtr)
	{
		ptr = _TWeakPtr.ptr;
	}
	TWeakPtr(const TSharedPtr<T>& _TSharedPtr)
	{
		ptr = _TSharedPtr.ptr;
	}

	inline bool HasExpired() const
	{
		return ptr.expired();
	}

	TSharedPtr<T> Lock() const
	{
		if (HasExpired())
			return TSharedPtr<T>();
		return TSharedPtr<T>(ptr.lock());
	}
};

