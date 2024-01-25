// Fill out your copyright notice in the Description page of Project Settings.


#include "Alien/Alien_Corr.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Alien/AttackComponent.h"

AAlien_Corr::AAlien_Corr()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	skeletal = CreateDefaultSubobject<USkeletalMeshComponent>("Skeletal");
	detection = CreateDefaultSubobject<UDetectionComponent>("Detection");
	attack = CreateDefaultSubobject<UAttackComponent>("Attack");
	skeletal->SetupAttachment(RootComponent);
	AddOwnedComponent(detection);
	AddOwnedComponent(attack);
}

void AAlien_Corr::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

void AAlien_Corr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAlien_Corr::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AAlien_Corr::Init()
{
	if (!detection)
		return;
	AIcontroller = Cast<ACustomAIController>(GetController());
	if (!AIcontroller)
		return;
	detection.Get()->OnTargetFound().AddDynamic(AIcontroller, &ACustomAIController::ReceiveTarget);
	detection.Get()->OnTargetDetected().AddDynamic(AIcontroller, &ACustomAIController::ReceiveTargetDetected);
	if (!attack)
		return;
	attack.Get()->OnRangeUpdate().AddDynamic(AIcontroller, &ACustomAIController::ReceiveIsInRange);
	detection.Get()->OnTargetFound().AddDynamic(attack, &UAttackComponent::SetTarget);
}
