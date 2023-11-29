// Fill out your copyright notice in the Description page of Project Settings.


#include "MouseDeplacementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "PlayerDiablo.h"

UMouseDeplacementComponent::UMouseDeplacementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UMouseDeplacementComponent::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

void UMouseDeplacementComponent::Init()
{
	APlayerDiablo* _player = Cast<APlayerDiablo>(GetOwner());
	if (!_player)
		return;
	_player->OnMouseClick().AddDynamic(this, &UMouseDeplacementComponent::SetTarget);
	targetLocation = GetOwnerLocation();
}

void UMouseDeplacementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	LocateMouseToWorld();
	MoveToTarget();
	DrawDebug();
}

void UMouseDeplacementComponent::DrawDebug()
{
	DrawDebugDirectionalArrow(GetWorld(), mouseToWorldLocation + offset, mouseToWorldLocation, 50, FColor::Red, false, -1, 0, 5);
	DrawDebugLine(GetWorld(), GetOwnerLocation(), targetLocation, FColor::Blue);
}

void UMouseDeplacementComponent::LocateMouseToWorld()
{
	//var
	FHitResult _hitResult;
	FVector _worldLocation, _worldDirection, _end;
	GetWorld()->GetFirstPlayerController()->DeprojectMousePositionToWorld(_worldLocation, _worldDirection);
	_end = _worldLocation + _worldDirection * depth;

	//linetrace
	bool _hit = UKismetSystemLibrary::LineTraceSingleForObjects(this, _worldLocation, _end,
		layers, true, TArray<AActor*>(), EDrawDebugTrace::None, _hitResult, true);

	mouseToWorldLocation = _hit ? _hitResult.ImpactPoint : FVector::Zero();
}

void UMouseDeplacementComponent::MoveToTarget()
{
	//lerp move
	FVector _move = FMath::VInterpConstantTo(GetOwnerLocation(), targetLocation, GetWorld()->DeltaTimeSeconds, speed);
	GetOwner()->SetActorLocation(_move);
	//speed to animation
	int _speed = FMath::Abs(targetLocation.Size() - _move.Size());
	OnSpeed().Broadcast(_speed);
}

void UMouseDeplacementComponent::LookToTarget()
{
	FRotator _lookAt = UKismetMathLibrary::FindLookAtRotation(GetOwnerLocation(), targetLocation);
	FRotator _rotation = FRotator(0, _lookAt.Yaw, 0);
	GetOwner()->SetActorRotation(_rotation);
}

void UMouseDeplacementComponent::SetTarget()
{
	FVector _newTarget = mouseToWorldLocation + offset;
	if (CheckTargetLocation(_newTarget))
	{
		targetLocation = _newTarget;
		LookToTarget();
	}
}

bool UMouseDeplacementComponent::CheckTargetLocation(FVector _target)
{
	if (_target == offset)
		return false;
	FHitResult _hitResult;
	FVector _start = GetOwnerLocation(),
		_end = _target;
	return !UKismetSystemLibrary::LineTraceSingleForObjects(this, _start, _end,
		obstacles, true, TArray<AActor*>(), EDrawDebugTrace::ForOneFrame, _hitResult, true);
}
