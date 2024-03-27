#pragma once

class UObject
{
public:
	//UObject* GetDefaultSubobjectByName(const FName& _name) const
	//{
	//	return nullptr;
	//}

public:
	void BeginDestroy();
	virtual void FinishDestroy();

	//UFunction* FindFunction(FName) const;
	//UFunction* FindFunctionChecked(FName)const;
	//static UObject* GetArchetypeFromRequiredInfo(const UClass*, const UObject*, FName, EObjectFlag);
	//void GetArchetypeInstances(TArray<UObject*>&);
	//virtual int32 GetFunctionCallspace(UFunction*, FFrame*);
	//virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>&)const;
	//virtual bool HasNonEditorOnlyReferences() const;
	//virtual bool IsFullNameStableForNetworking() const;
	//virtual bool IsReadyForFinishDestroy();
	//virtual bool IsDestructionThreadSafe() const;
	//virtual void PostInitProperties();
	//virtual void PreEditChange(FProperty);

public:
	//template <typename TReturnType>
	//TReturnType* CreateDefaultSubobject(const FName& _name)
	//{

	//}
};

