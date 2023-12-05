// Fill out your copyright notice in the Description page of Project Settings.

#include "LineSpawnModule.h"
#include "SpawnerTool.h"

void ULineSpawnModule::DrawDebug(UWorld* _world, const FVector& _origin)
{
	for (size_t i = 0; i < itemNumber * gap; i += gap)
	{
		const FVector _position = FVector(i, 0, 0) + _origin;
		DrawDebugSphere(_world, _position, 50, 20, FColor::Red);
	}
	DrawDebugLine(_world, _origin, _origin + FVector::ForwardVector * (itemNumber - 1) * gap, FColor::Red);
}

TArray<AActor*> ULineSpawnModule::Spawn(ASpawnerTool* _tool)
{
	TArray<AActor*> _list = {};
	for (size_t i = 0; i < itemNumber * gap; i += gap)
	{
		const FVector _position = FVector(i, 0, 0) + _tool->GetActorLocation();
		AActor* _item = _tool->GetWorld()->SpawnActor<AActor>(_tool->PickItem(), _position, FRotator::ZeroRotator);
		_list.Add(_item);
	}
	return _list;
}
