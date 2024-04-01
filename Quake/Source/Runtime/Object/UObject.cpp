#include "UObject.h"
#include <ranges>

void UObject::BeginDestroy()
{
	//Le GC le marque
}

void UObject::FinishDestroy()
{
	//Le GC le delete
}

void UObject::RegisterProperty(const string& _name, UObject* _var)
{
	properties.insert(pair<const string&, UObject*>(_name, _var));
}

void UObject::Serialize(ostream& _os, int _index)
{
	FString _className = FString(typeid(*this).name());
	_os << string("\"") + *_className + "\" : {\n";
	for (pair<const string&, UObject*> _pair : properties)
	{
		_os << string(_index, '\t');
		if (_pair.second == nullptr)
			continue;
		//if (_pair.second is class)
		//	_pair.second->Serialize(_os, _index);
		else
			_pair.second->SerializeProperty(_os, FString(_pair.first.c_str()), _index);
	}
	_os << "\n" + string(_index - 1, '\t') + "}";
}

void UObject::DeSerialize(istream& _is)
{
	for (pair<const string&, UObject*> _pair : properties)
	{
		if (_pair.second == nullptr)
			continue;
		//if (_pair.second is class)
		//	_pair.second->DeSerialize(_is);
		else
			_pair.second->DeSerializeProperty(_is, FString(_pair.first.c_str()));
	}
	OnDeSerialiseFinish();
}

void UObject::SerializeProperty(ostream& _os, const FString& _propertyName, int _index)
{
	// EXEMPLE
	//if (_propertyName.IsEmpty())
	//	_os << string("\"") << this->ToString().ToCstr() << "\"";
	//else
	//	_os << string("\"") << _propertyName.GetText().c_str() << "\" : \"" << this->ToString() << "\"";
}

void UObject::DeSerializeProperty(istream& _is, const FString& _propertyName)
{
	// EXEMPLE
	//FString _str = GetLine(_is, _propertyName);
	//_str = _str.Replace("\"", "").Replace("\t", "").Replace(",", "").Replace(":", "").Replace(_propertyName, "").Trim();
	//value = _str;
}

FString UObject::GetLine(istream& _is, const FString& _propertyName)
{
	string _line = "";
	while (getline(_is, _line))
	{
		if (!_propertyName.IsEmpty())
		{
			if (_line.find(string("\"") + _propertyName.GetText().c_str() + "\"") != string::npos)
			{
				return _line.c_str();
			}
		}
		else
		{
			return _line.c_str();
		}
	}
	return "null";
}
