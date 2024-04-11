#pragma once
#include "TObjectPtr.h"
#include <functional>

template <typename T>
class TSoftObjectPtr : public TSmartPtr<T>
{
	function<void(T*)> destructor;

public:
	TSoftObjectPtr(T* _pointer, const function<void(T*)> _destructor) : TSmartPtr<T>(_pointer)
	{
		destructor = _destructor;
	}
	~TSoftObjectPtr()
	{
		destructor(TSmartPtr<T>::pointer);
	}
};