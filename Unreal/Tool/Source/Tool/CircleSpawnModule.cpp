// Fill out your copyright notice in the Description page of Project Settings.

#include "CircleSpawnModule.h"
#include "SpawnerTool.h"
#include "Kismet/KismetMathLibrary.h"

void UCircleSpawnModule::DrawDebug(UWorld* _world, const FVector& _origin)
{
	DrawDebugCircle(_world, _origin, radius, 50, FColor::Cyan, false, -1, 0, 5.f, FVector(0, 1, 0), FVector(1, 0, 0), false);

	const float _angle = 360 / itemNumber;
	for (size_t i = 0; i < itemNumber; i++)
	{
		const float _x = UKismetMathLibrary::DegCos(_angle * i) * radius;
		const float _y = UKismetMathLibrary::DegSin(_angle * i) * radius;
		const FVector _itemPosition = _origin + FVector(_x, _y, 0);
		DrawDebugSphere(_world, _itemPosition, 50, 20, FColor::Cyan);
	}
}

TArray<AActor*> UCircleSpawnModule::Spawn(ASpawnerTool* _tool)
{
	TArray<AActor*> list = {};
	const float _angle = 360 / itemNumber;
	for (size_t i = 0; i < itemNumber; i++)
	{
		const float _x = UKismetMathLibrary::DegCos(_angle * i) * radius;
		const float _y = UKismetMathLibrary::DegSin(_angle * i) * radius;
		const FVector _itemPosition = _tool->GetActorLocation() + FVector(_x, _y, 0);
		AActor* _item = _tool->GetWorld()->SpawnActor<AActor>(_tool->PickItem(), _itemPosition, FRotator::ZeroRotator);
		list.Add(_item);
	}
	return list;
}
