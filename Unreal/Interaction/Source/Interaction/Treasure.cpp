// Fill out your copyright notice in the Description page of Project Settings.


#include "Treasure.h"
#include "PlayerDiablo.h"
#include "Piece.h"

ATreasure::ATreasure()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ATreasure::NotifyActorBeginOverlap(AActor* _actor)
{
	Super::NotifyActorBeginOverlap(_actor);
	APlayerDiablo* _player = Cast<APlayerDiablo>(_actor);
	if (!_player || !pieceRef)
		return;

	int _part = 360 / pieceToSpawn;
	for (size_t i = 0; i < 360; i += _part)
	{
		float _x = FMath::Cos(FMath::DegreesToRadians(i)) * 150,
			_y = FMath::Sin(FMath::DegreesToRadians(i)) * 150;

		FVector _loc = GetActorLocation() + FVector(_x, _y, 0);

		GetWorld()->SpawnActor<APiece>(pieceRef, _loc, FRotator::ZeroRotator);
	}

	SetLifeSpan(0.1);
}
