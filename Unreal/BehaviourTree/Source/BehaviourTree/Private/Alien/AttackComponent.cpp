// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien/AttackComponent.h"
#include "Kismet/KismetSystemLibrary.h"

UAttackComponent::UAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UAttackComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!canAttack)
		currentTime = UpdateTime(currentTime, maxTime);
	isInRange = CheckIsInRange(attackRange);
}

void UAttackComponent::SetTarget(AActor* _target)
{
	target = _target;
}

void UAttackComponent::Attack()
{
	if (!isInRange || !canAttack || !target)
		return;
	canAttack = false;
	FHitResult _res;
	const FVector _start = GetOwner()->GetActorLocation();
	const FVector _dir = _start + GetOwner()->GetActorForwardVector() * boxOffset;
	const bool _hit = UKismetSystemLibrary::BoxTraceSingleForObjects(GetWorld(), _start, _dir, FVector::OneVector * attackBoxSize,
		GetOwner()->GetActorRotation(), layerTarget, true, {}, EDrawDebugTrace::ForOneFrame, _res, true);
	if (!_hit)
		return;
	target = _res.GetActor();
	UE_LOG(LogTemp, Warning, TEXT("ATTACK"));
}

float UAttackComponent::UpdateTime(float& _current, const float& _max)
{
	_current += GetWorld()->DeltaTimeSeconds * attackSpeed;
	if (_current >= _max)
	{
		canAttack = true;
		_current = 0;
	}
	return _current;
}

bool UAttackComponent::CheckIsInRange(const float& _range)
{
	if (!target)
		return false;
	float _distance = FVector::Dist(GetOwner()->GetActorLocation(), target->GetActorLocation());
	const bool _value = _distance <= _range;
	onRangeUpdate.Broadcast(_value);
	return _value;
}
