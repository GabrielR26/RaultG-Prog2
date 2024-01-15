// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/TestAngle.h"
#include "Kismet/KismetSystemLibrary.h"

ATestAngle::ATestAngle()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ATestAngle::BeginPlay()
{
	Super::BeginPlay();

}

void ATestAngle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugLine(GetWorld(), GetActorLocation(), other->GetActorLocation(), FColor::Blue);
	AngleBetweenFromAndDirection(GetActorLocation(), other->GetActorLocation() - GetActorLocation());
	//UpdateSight();
}

void ATestAngle::UpdateSight()
{
	TArray<AActor*> _items;
	bool _hit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetActorLocation(), 200, trashLayers, nullptr,
		TArray<AActor*>{}, _items);

	DrawConeSight();

	for (size_t i = 0; i < _items.Num(); i++)
	{
		FVector _direction = _items[i]->GetActorLocation() - GetActorLocation();
		float _angle = AngleBetweenFromAndDirection(GetActorLocation(), _direction);
		if (_angle < angleSight / 2)
		{
			//Target = _actor;
			return;
		}
	}
}

void ATestAngle::DrawConeSight()
{
	if (!other)
		return;
	FVector _from = GetActorLocation(),
		_direction = other->GetActorLocation() - _from;
	float _angleCone = FMath::DegreesToRadians(angleSight);
	DrawDebugCone(GetWorld(), _from, _direction, 300, _angleCone, _angleCone, 10, FColor::Cyan);
}

int ATestAngle::AngleBetweenFromAndDirection(FVector _from, FVector _direction)
{
	double _dot = FVector::DotProduct(_from.GetSafeNormal(), _direction.GetSafeNormal());
	int _angle = FMath::RadiansToDegrees(FMath::Acos(_dot));
	UKismetSystemLibrary::PrintString(this, FString::FromInt(_angle));
	return _angle;
}
