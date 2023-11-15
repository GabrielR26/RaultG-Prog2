// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

template <typename T>
class Singleton
{
private:
	static T* instance = nullptr;

public:
	Singleton<T>();

	T* GetInstance()
	{
		if (instance == nullptr)
			instance = new T();
		return instance;
	}
};

template<typename T>
inline Singleton<T>::Singleton()
{
	instance = new T();
}