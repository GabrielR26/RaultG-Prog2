// Fill out your copyright notice in the Description page of Project Settings.


#include "Guard/CustomPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetMathLibrary.h"

ACustomPlayer::ACustomPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	noiseComponent = CreateDefaultSubobject<UNoiseComponent>("Noise");
	AddOwnedComponent(noiseComponent);
}

void ACustomPlayer::BeginPlay()
{
	Super::BeginPlay();
	InitInput();
	GetWorld()->GetTimerManager().SetTimer(noiseTimer, this, &ACustomPlayer::Noising, noiseTime, true, -1);
}

void ACustomPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugLine(GetWorld(), GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100, FColor::Red);
}

void ACustomPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* _inputs = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	_inputs->BindAction(vertical, ETriggerEvent::Triggered, this, &ACustomPlayer::MoveVerticaly);
	_inputs->BindAction(vertical, ETriggerEvent::Completed, this, &ACustomPlayer::MoveVerticaly);
	_inputs->BindAction(horizontal, ETriggerEvent::Triggered, this, &ACustomPlayer::MoveHorizontaly);
	_inputs->BindAction(horizontal, ETriggerEvent::Completed, this, &ACustomPlayer::MoveHorizontaly);
	_inputs->BindAction(rotation, ETriggerEvent::Triggered, this, &ACustomPlayer::Rotate);
}

void ACustomPlayer::InitInput()
{
	UEnhancedInputLocalPlayerSubsystem* _subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetWorld()->GetFirstPlayerController()->GetLocalPlayer());
	_subSystem->ClearAllMappings();
	_subSystem->AddMappingContext(context.LoadSynchronous(), 0);
}

void ACustomPlayer::MoveVerticaly(const FInputActionValue& _value)
{
	const float _axis = _value.Get<float>();
	onMoveVertical.Broadcast(_axis);
	AddActorWorldOffset(GetActorForwardVector() * _axis * speed);
}

void ACustomPlayer::MoveHorizontaly(const FInputActionValue& _value)
{
	const float _axis = _value.Get<float>();
	onMoveHorizontal.Broadcast(_axis);
	AddActorWorldOffset(GetActorRightVector() * _axis * speed);
}

void ACustomPlayer::Rotate(const FInputActionValue& _value)
{
	UE_LOG(LogTemp, Warning, TEXT("Rotation"));
	const float _yaw = _value.Get<float>();
	AddActorWorldRotation(FRotator(0, _yaw, 0));
}

void ACustomPlayer::Noising()
{
	if (noiseComponent)
		noiseComponent->MakeNoise(GetActorLocation() * FVector(1, 1, 0));
}