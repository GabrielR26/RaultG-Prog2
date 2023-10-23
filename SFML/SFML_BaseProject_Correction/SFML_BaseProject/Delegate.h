#pragma once
#include "EngineObject.h"

template <typename Res, typename... Params>
class Delegate
{
private:
	typedef Res(EngineObject::*Function)(Params...);
	Function* funct = nullptr;
	EngineObject* instance = nullptr;

public:
	Delegate(EngineObject* _instance, Res(EngineObject::* _ptr)(Params...));
	Delegate(EngineObject* _instance, Function* _funct);

	void SetDynamic(EngineObject* _instance, Res(EngineObject::* _ptr)(Params...));
	Res Invoke(Params... _params);
};

