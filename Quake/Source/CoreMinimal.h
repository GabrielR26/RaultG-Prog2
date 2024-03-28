#pragma once
#include <iostream>
#include <functional>

#include "Runtime/Core/Containers/FString.h"
#include "Runtime/Core/Containers/TArray.h"
#include "Editor/Garbage/GarbageCollector.h"
#include "Editor/Pointers/TObjectPtr.h"

using namespace std;

// MACRO OBJECT

#define FORCEINLINE __forceinline;

template <typename T>
TObjectPtr<T> NewObject(void* _owner, T* _pointer)
{
	GarbageCollector& _instance = GarbageCollector::GetInstance();

	if (_instance.Exist(_owner, _pointer)) 
		return TObjectPtr<T>(TWeakPtr<T>(_pointer));

	const TSharedPtr<T>& _sharedPtr = TSharedPtr<T>(_pointer);
	_instance.Register(_sharedPtr);
	return TObjectPtr<T>(_sharedPtr);
}