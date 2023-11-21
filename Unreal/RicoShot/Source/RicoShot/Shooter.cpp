// Fill out your copyright notice in the Description page of Project Settings.

#include "Shooter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

#define LineTraceSingle(start, end, hitResult, objectType, actorToIgnore) UKismetSystemLibrary::LineTraceSingleForObjects(this, start, end, objectType, true, actorToIgnore, EDrawDebugTrace::ForOneFrame, hitResult, false);

AShooter::AShooter()
{
	PrimaryActorTick.bCanEverTick = true;
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>("root");
	RootComponent = mesh;
}

void AShooter::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(timer, this, &AShooter::Shoot, 4.5f, true, 3);
}

void AShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	offset = FVector(0, 0, ZOffset);
	RicoShotTrajectory();
}

void AShooter::Shoot()
{
	if (!projectilRef)
		return;
	FVector _spawnLocation = (GetActorLocation() + GetActorForwardVector() * 100) + offset;
	AProjectil* _arrow = GetWorld()->SpawnActor<AProjectil>(projectilRef, _spawnLocation, GetActorRotation());
	_arrow->InitProjectil(impactShots);
}

void AShooter::RicoShotTrajectory()
{
	impactShots.Empty();
	//First shot
	FHitResult _res;
	FVector _start = GetActorLocation() + offset;
	FVector _end = (_start + GetActorForwardVector() * range) + offset;
	bool _isHit = LineTrace(_start, _end, _res);

	if (!_isHit)
	{
		if (!impactShots.Contains(_res.TraceEnd))
			impactShots.Add(_res.TraceEnd);
		return;
	}

	//Ricochet
	for (size_t i = 0; i < ricochet + 1; i++)
	{
		if (_isHit)
		{
			if (!impactShots.Contains(_res.ImpactPoint))
				impactShots.Add(_res.ImpactPoint);
			_start = _res.ImpactPoint;
			_end = UKismetMathLibrary::GetReflectionVector(_res.TraceEnd, _res.ImpactNormal);
			//_end = Reflexion(_res.TraceEnd, _res.ImpactNormal);
			_isHit = LineTrace(_start, _end, _res);
		}
		else
			if (!impactShots.Contains(_res.TraceEnd))
				impactShots.Add(_res.TraceEnd);
	}
}

bool AShooter::LineTrace(FVector _start, FVector _end, FHitResult& _res)
{
	return LineTraceSingle(_start, _end, _res, objectLayers, TArray<AActor*>());
}

FVector AShooter::Reflexion(FVector _vector, FVector _normal)
{
	return _vector - 2.f * FVector::DotProduct(_vector, _normal) * _normal;
}

