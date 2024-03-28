#pragma once
#include "TSharedPtr.h"
#include "TWeakPtr.h"
#include "../GarbageCollector/GarbageCollector.h"

template <typename T>
class TObjectPtr
{
	T* pointer;

public:
	TObjectPtr(T* _pointer)
	{
		pointer = _pointer;
	}
};