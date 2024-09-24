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
	AngleBetweenTwoPoint(GetActorLocation(), other->GetActorLocation());
	//UpdateSight();
}

void ATestAngle::UpdateSight()
{
	TArray<AActor*> _items;
	bool _hit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetActorLocation(), 200, trashLayers, nullptr,
		TArray<AActor*>{}, _items);

	if (_hit)
	{
		for (size_t i = 0; i < _items.Num(); i++)
		{
			DrawConeSight(_items[i]);
			const FVector& _direction = _items[i]->GetActorLocation() - GetActorLocation();
			const float& _angle = AngleBetweenTwoPoint(GetActorLocation(), _direction);
			if (_angle < angleSight / 2)
			{
				//Target = _actor;
				return;
			}
		}
	}
}

void ATestAngle::DrawConeSight(AActor* _actor)
{
	FVector _from = GetActorLocation(),
		_direction = other->GetActorLocation() - _from;
	float _angleCone = FMath::DegreesToRadians(angleSight);
	DrawDebugCone(GetWorld(), _from, _direction, 300, _angleCone, _angleCone, 10, FColor::Cyan);
}

int ATestAngle::AngleBetweenTwoPoint(const FVector& _a, const FVector& _b)
{
	// x = cos(angle) * radius;
	// x/radius = cos(angle)
	// Acos(x / radius) = angle (rad)

	// x = _a.x - _b.x
	// y...
	// radius = (_a-_b).Length
		

	const double& _x = _a.CosineAngle2D(_b);
	const double& _y = FMath::RadiansToDegrees(FMath::Acos(_x));
	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(_y), true, true, FLinearColor::Wh, 0.f);

	const double& _dot = FVector::DotProduct(_a, _b);
	const double& _norm = _a.Length() * _b.Length();
	const double& _angle = FMath::RadiansToDegrees(FMath::Acos(_dot / _norm));
	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(_angle), true, true, FLinearColor::Blue, 0.f);
	return _angle;
}
