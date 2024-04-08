#pragma once
#include <iostream>
#include <functional>
#include <map>
#include <vector>

#include "Runtime/Core/Containers/FString.h"
#include "Runtime/Core/Containers/TArray.h"
#include "Editor/Pointers/TObjectPtr.h"
#include "Editor/GarbageCollector/GarbageCollector.h"

#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
//#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// OBJECTS MACRO.H
#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

#define FORCEINLINE __forceinline

using namespace std;
using namespace glm;

//template <typename T>
//TObjectPtr<T> NewObject(void* _owner, T* _pointer)
//{
//	GarbageCollector& _instance = GarbageCollector::GetInstance();
//
//	if (_instance.Exists(_owner, _pointer))
//	{
//		return TObjectPtr<T>(TWeakPtr<T>(_pointer));
//	}
//
//	const TSharedPtr<T>& _sharedPtr = TSharedPtr<T>(_pointer);
//	_instance.Register<T>(_sharedPtr);
//	return TObjectPtr<T>(_sharedPtr);
//}
