// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerDiablo.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/KismetSystemLibrary.h"

APlayerDiablo::APlayerDiablo()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerDiablo::BeginPlay()
{
	Super::BeginPlay();
	//GetWorldTimerManager().SetTimer(timer, this, &APlayerDiablo::ClickOnMouse, 2, true, 1);
}

void APlayerDiablo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerDiablo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InitInputSystem();
	UEnhancedInputComponent* _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_input->BindAction(mouseClickInput, ETriggerEvent::Completed, this, &APlayerDiablo::ClickOnMouse);
}

void APlayerDiablo::InitInputSystem()
{
	APlayerController* _player = GetWorld()->GetFirstPlayerController();
	UEnhancedInputLocalPlayerSubsystem* _inputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(_player->GetLocalPlayer());
	_inputSystem->ClearAllMappings();
	_inputSystem->AddMappingContext(inputMapping.LoadSynchronous(), 0);
}

void APlayerDiablo::ClickOnMouse()
{
	//UKismetSystemLibrary::PrintString(this, FString("Click"));
	OnMouseClick().Broadcast();
}
