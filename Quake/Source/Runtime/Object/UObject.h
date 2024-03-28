#pragma once
#include "../../CoreMinimal.h"

class UObject
{
public:
	void BeginDestroy();
	void FinishDestroy();

	template <typename T>
	TObjectPtr<T> CreateDefaultSubobject(const FString& _name)
	{
		return NewObject(this, new T());
	}
};

