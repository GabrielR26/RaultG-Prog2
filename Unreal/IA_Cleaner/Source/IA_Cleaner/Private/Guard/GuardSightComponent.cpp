// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/GuardSightComponent.h"

//const float _degToRadSight = FMath::DegreesToRadians(angleSight / 2);
//DrawDebugCone(GetWorld(), SightOffsetLocation(), GetOwner()->GetActorForwardVector(), rangeSight * 1.4f,
//	_degToRadSight, _degToRadSight, 10, targetSight ? FColor::Green : FColor::Red);
//DrawDebugSphere(GetWorld(), SightOffsetLocation(), rangeSight, 50, FColor::White);
//
//TArray<AActor*> _items = {};
//bool _hit = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), SightOffsetLocation(), rangeSight, trashLayers,
//	nullptr, TArray<AActor*>(), _items);
//for (size_t i = 0; i < _items.Num(); i++)
//{
//	if (_items[i])
//	{
//		const FVector _direction = (_items[i]->GetActorLocation() - SightOffsetLocation()).GetSafeNormal();
//		const float _angle = GetVectorAngle(GetOwner()->GetActorForwardVector(), _direction);
//		if (_angle < angleSight / 2)
//		{
//			targetSight = _items[i];
//			return;
//		}
//	}
//}
//targetSight = nullptr;

void UGuardSightComponent::SightBehaviour()
{

}
