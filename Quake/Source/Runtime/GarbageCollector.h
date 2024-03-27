#pragma once

class GarbageCollector
{
	static GarbageCollector& GetInstance()
	{
		static GarbageCollector _instance;
		return _instance;
	}
};
