#pragma once
#include "TSharedPtr.h"
#include "TWeakPtr.h"
#include "../Garbage/GarbageCollector.h"

template <typename T>
class TObjectPtr
{
	T* pointer;

public:
	TObjectPtr() {}
	TObjectPtr(T* _pointer)
	{
		//pointer = GarbageCollector::GetInstance().Exist(_pointer, this) ? make_shared(_pointer) : TWeakPtr(_pointer);
	}
};

