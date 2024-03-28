#pragma once
#include "../../CoreMinimal.h"

class UObject
{
public:
	UObject* GetDefaultSubobjectByName(const FString& _name) const
	{
		return nullptr;
	}

public:
	void BeginDestroy();
	virtual void FinishDestroy();

public:
	template <typename T>
	TObjectPtr<T> CreateDefaultSubobject(const FString& _name)
	{
		T* _subObject = new T();
		return NewObject(this, _subObject);
	}
};

