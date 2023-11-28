// Fill out your copyright notice in the Description page of Project Settings.


#include "Piece.h"
#include "PlayerDiablo.h"
#include "Kismet/KismetSystemLibrary.h"

void APiece::NotifyActorBeginOverlap(AActor* _actor)
{
	Super::NotifyActorBeginOverlap(_actor);
	APlayerDiablo* _player = Cast<APlayerDiablo>(_actor);
	if (!_player)
		return;
	UKismetSystemLibrary::PrintString(this, FString("Add Piece"));
	SetLifeSpan(0.1);
}
