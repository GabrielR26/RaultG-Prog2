// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnInput.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"

APawnInput::APawnInput()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
}

void APawnInput::BeginPlay()
{
	Super::BeginPlay();
	InitInputSystem();
}

void APawnInput::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APawnInput::InitInputSystem()
{
	APlayerController* _player = GetWorld()->GetFirstPlayerController(); //Get player controller
	UEnhancedInputLocalPlayerSubsystem* _inputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(_player->GetLocalPlayer());
	_inputSystem->ClearAllMappings(); //Pour changement dynamique
	_inputSystem->AddMappingContext(inputMapping.LoadSynchronous(), 0);
}

void APawnInput::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_input->BindAction(forwardInput, ETriggerEvent::Triggered, this, &APawnInput::MoveForward);
}

void APawnInput::MoveForward(const FInputActionValue& _value)
{
	const float _axis = _value.Get<float>();
	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(_axis));
}
