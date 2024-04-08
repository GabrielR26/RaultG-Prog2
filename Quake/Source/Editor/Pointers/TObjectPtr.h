#pragma once

class TObjectPtr
{
public:
	virtual ~TObjectPtr() {};
};

template <typename T>
class TSmartPtr : public TObjectPtr
{
protected:
	T* pointer;

public:
	TSmartPtr(T* _pointer)
	{
		pointer = _pointer;
	}

	T* Get() const
	{
		return pointer;
	}

	void operator()(std::nullptr_t)
	{
		pointer = nullptr;
	}
	bool operator!() const
	{
		return pointer == nullptr;
	}
	T& operator*() const
	{
		return *pointer;
	}
	T* operator->() const
	{
		return pointer;
	}
};