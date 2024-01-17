// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/PathManager.h"
#include "Kismet/KismetSystemLibrary.h"

void UPathManager::AddPath(AGuardPath* _path)
{
	if (_path)
		paths.Add(_path);
}

AGuardPath* UPathManager::GetClosestPath(const FVector& _location)
{
	if (paths.IsEmpty())
		return nullptr;
	FVector _closest = paths[0]->GetClosestWaypoint(_location);
	int _index = 0;
	for (size_t i = 0; i < paths.Num(); i++)
	{
		float _a = (_location - paths[i]->GetClosestWaypoint(_location)).Length();
		float _b = (_location - _closest).Length();
		if (_a < _b)
		{
			_closest = paths[i]->GetClosestWaypoint(_location);
			_index = i;
		}
	}
	return paths[_index];
}
