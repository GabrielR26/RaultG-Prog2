#pragma once
#include "../Pointers/TSharedPtr.h"
#include "../../Runtime/Core/Containers/TArray.h"

class GarbageCollector
{
	TArray<TSharedPtr<void*>> allPointers;

public:
	static GarbageCollector& GetInstance()
	{
		static GarbageCollector _instance;
		return _instance;
	}

	void Register(const TSharedPtr<void*>& _shared)
	{
		allPointers.Add(_shared);
	}

	const bool Exist(void* _owner, void* _pointer)
	{
		const size_t& _count = allPointers.Num();
		for (size_t i = 0; i < _count; i++)
		{
			if (allPointers[i].Get() == _pointer)
			{
				return allPointers[i].Contains(_owner);
			}
		}
		return false;
	}

public:
	//GarbageCollector();

};
