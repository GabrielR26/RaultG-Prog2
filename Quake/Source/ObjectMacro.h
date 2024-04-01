#pragma once

class UObject;

#define REGISTER_TYPE(type) const size_t Type##type = TypeOfData::Register(#type, new type());

struct TypeOfData
{
    static inline map<string, UObject*> Types = map<string, UObject*>();

    static size_t Register(string typeName, UObject* type)
    {
        if (Types.contains(typeName))
            return Types.size();
        Types.insert(pair(typeName, type));
        return Types.size();
    }
};

template<typename T>
struct TypeOf
{
    static T* GetType()
    {
        return nullptr;
    }
};

#define ExposeTypeOf(type)\
    template<> \
    struct TypeOf<type>\
    {\
        static type* GetType()\
        {\
            return new type();\
        }\
    };
