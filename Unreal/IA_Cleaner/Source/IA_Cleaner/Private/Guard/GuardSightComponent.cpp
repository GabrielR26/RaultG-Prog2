// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/GuardSightComponent.h"
#include "Kismet/KismetSystemLibrary.h"

void UGuardSightComponent::SightBehaviour()
{
	const float _angleRad = FMath::DegreesToRadians(angleSight / 2);
	DrawDebugCone(GetWorld(), SightOffsetLocation(), GetOwner()->GetActorForwardVector(), rangeSight, _angleRad,
		_angleRad, 10, targetSight ? FColor::Blue : FColor::Red);
	//DrawDebugSphere(GetWorld(), SightOffsetLocation(), rangeSight, 25, FColor::White);

	TArray<AActor*> _items = {};
	bool _overlap = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), SightOffsetLocation(), rangeSight, targetLayers,
		nullptr, TArray<AActor*>(), _items);
	for (size_t i = 0; i < _items.Num(); i++)
	{
		if (!_items[i])
			continue;
		const FVector _direction = (_items[i]->GetActorLocation() - SightOffsetLocation()).GetSafeNormal();
		const float _angle = GetVectorAngle(GetOwner()->GetActorForwardVector(), _direction);
		if (_angle < angleSight / 2)
		{
			FHitResult _res;
			const FVector _end = _items[i]->GetActorLocation();
			bool _hit = UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), SightOffsetLocation(),
				_end, 50, blockLayers, true, {}, EDrawDebugTrace::ForOneFrame, _res, true);
			if (!_hit)
			{
				UKismetSystemLibrary::PrintString(this, "HIT", true, false, FColor::Red, GetWorld()->DeltaTimeSeconds);
				targetSight = _items[i];
				onPlayerInSight.Broadcast(true);
				return;
			}
		}
	}
	targetSight = nullptr;
	onPlayerInSight.Broadcast(false);
}

float UGuardSightComponent::GetVectorAngle(const FVector& _u, const FVector& _v)
{
	const float _dot = FVector::DotProduct(_u, _v) / (_u.Length() * _v.Length());
	return FMath::RadiansToDegrees(FMath::Acos(_dot));
}
