#pragma once
#include "..\..\Runtime\Core\Containers\TArray.h"

template <typename T>
class TObjectPtr;

template <typename T>
class TSharedPtr;

class GarbageCollector
{
	TArray<TSharedPtr<void*>> allPointers;

public:
	static GarbageCollector& GetInstance()
	{
		static GarbageCollector _instance;
		return _instance;
	}

public:
	// constructeur

public:
	void Register(const TSharedPtr<void*>& _sharedPtr)
	{
		allPointers.Add(_sharedPtr);
	}

	bool Exists(void* _owner, void* _pointer)
	{
		const size_t& _pointersCount = allPointers.Num();
		for (size_t _index = 0; _index < _pointersCount; _index++)
		{
			if (_pointer == allPointers[_index].Get())
			{
				return allPointers[_index].Contains(_owner);
			}
		}

		return false;
	}
};