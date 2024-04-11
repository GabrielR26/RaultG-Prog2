#pragma once
#include "../../CoreMinimal.h"
#include "../../ObjectMacro.h"

#define UP(name, var) RegisterProperty(#name, (UObject*)var);

class UObject
{
	//map<const string&, UObject*> properties = map<const string&, UObject*>();

public:
	virtual ~UObject() = default;

public:
	void BeginDestroy();
	void FinishDestroy();
	
public:
	//template <typename T>
	//TObjectPtr<T> CreateDefaultSubobject(const FString& _name)
	//{
	//	T* _subObject = new T(this);
	//	return NewObject<T>(this, _subObject);
	//}

private:
	void RegisterProperty(const string& _name, UObject* _var);

public:
	virtual void Serialize(ostream& _os, int _index = 1);
	virtual void DeSerialize(istream& _is);
	virtual void SerializeProperty(ostream& _os, const FString& _name, int _index);
	virtual void DeSerializeProperty(istream& _is, const FString& _name);
	virtual void OnDeSerialiseFinish() {}
	FString GetLine(istream& _is, const FString& _fieldName);

	virtual UObject* Clone()
	{
		return new UObject(*this);
	}
};
