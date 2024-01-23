// Fill out your copyright notice in the Description page of Project Settings.

#include "Alien/Alien.h"
#include "Kismet/KismetSystemLibrary.h"
#include "PlayerCharacter.h"
#include "Alien/AlienAIController.h"

AAlien::AAlien()
{
	PrimaryActorTick.bCanEverTick = true;
	skeletal = CreateDefaultSubobject<USkeletalMeshComponent>("Skeletal");
	movement = CreateDefaultSubobject<UFloatingPawnMovement>("Movement");
	RootComponent = skeletal;
	AddOwnedComponent(movement);
}

void AAlien::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAlien::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DisplayDebug();
	SearchPlayer();
	onViewTarget.Broadcast(target ? true : false);
}

void AAlien::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAlien::SearchPlayer()
{
	TArray<AActor*> _actorsOverlapp;
	bool _overlapp = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetActorLocation(), range, playerLayer, nullptr, {}, _actorsOverlapp);
	if (_overlapp)
	{
		for (size_t i = 0; i < _actorsOverlapp.Num(); i++)
		{
			APlayerCharacter* _player = Cast<APlayerCharacter>(_actorsOverlapp[i]);
			if (_player)
			{
				target = _player;
				return;
			}
		}
	}
	target = nullptr;
}

void AAlien::DisplayDebug()
{
	DrawDebugSphere(GetWorld(), GetActorLocation(), range, 10, target ? FColor::Cyan : FColor::Green);
	if (target)
	{
		//DrawDebugSphere(GetWorld(), target->GetActorLocation(), 100, 10, FColor::Blue);
		DrawDebugLine(GetWorld(), GetActorLocation(), target->GetActorLocation(), FColor::Blue);
	}
}

