#pragma once
#include <iostream>
#include <functional>
#include <map>
#include <vector>

#include "Runtime/Core/Containers/FString.h"
#include "Runtime/Core/Containers/TArray.h"
#include "Editor/GarbageCollector/GarbageCollector.h"
#include "Editor/Pointers/TObjectPtr.h"

using namespace std;

// OBJECTS MACRO.H
#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

#define FORCEINLINE __forceinline

template <typename T>
TObjectPtr<T> NewObject(void* _owner, T* _pointer)
{
	GarbageCollector& _instance = GarbageCollector::GetInstance();

	if (_instance.Exist(_owner, _pointer))
	{
		return TObjectPtr<T>(TWeakPtr<T>(_pointer).Lock());
	}

	const TSharedPtr<T>& _sharedPtr = TSharedPtr<T>(_pointer);
	_instance.Register(_sharedPtr);
	return TObjectPtr<T>(_sharedPtr.Get());
}