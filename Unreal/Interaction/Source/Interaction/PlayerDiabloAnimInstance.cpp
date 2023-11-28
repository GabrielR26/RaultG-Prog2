// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerDiabloAnimInstance.h"
#include "PlayerDiablo.h"
#include "MouseDeplacementComponent.h"

void UPlayerDiabloAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	APlayerDiablo* _player = Cast<APlayerDiablo>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (!_player)
		return;
	UE_LOG(LogTemp, Warning, TEXT("_player"));
	UMouseDeplacementComponent* _compo = _player->GetComponentByClass<UMouseDeplacementComponent>();
	if (!_compo)
		return;
	UE_LOG(LogTemp, Warning, TEXT("compo"));
	_compo->OnSpeed().AddDynamic(this, &UPlayerDiabloAnimInstance::SetSpeed);
}

void UPlayerDiabloAnimInstance::SetSpeed(float _value)
{
	speed = _value;
}
