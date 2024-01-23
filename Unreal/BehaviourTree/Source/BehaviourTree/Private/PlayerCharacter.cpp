// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	InitInput();
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_input->BindAction(vertical, ETriggerEvent::Triggered, this, &APlayerCharacter::MoveVertical);
	_input->BindAction(horizontal, ETriggerEvent::Triggered, this, &APlayerCharacter::MoveHorizontal);
}

void APlayerCharacter::InitInput()
{
	UEnhancedInputLocalPlayerSubsystem* _subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstLocalPlayerFromController());
	_subSystem->ClearAllMappings();
	_subSystem->AddMappingContext(map.LoadSynchronous(), 0);
}

void APlayerCharacter::MoveVertical(const FInputActionValue& _value)
{
	const float _res = _value.Get<float>();
	AddActorWorldOffset(GetActorForwardVector() * _res * speed);
}

void APlayerCharacter::MoveHorizontal(const FInputActionValue& _value)
{
	const float _res = _value.Get<float>();
	AddActorWorldOffset(GetActorRightVector() * _res * speed);
}
